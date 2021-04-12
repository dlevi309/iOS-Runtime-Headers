/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QuickLook-Structs.h>
#import <QuickLook/QLPXObservable.h>
#import <libobjc.A.dylib/QLPXMutableNumberFilter.h>

@class NSString;

@interface QLPXNumberFilter : QLPXObservable <QLPXMutableNumberFilter> {

	struct {
		BOOL output;
	}  _needsUpdateFlags;
	double _input;
	double _time;
	double _output;
	double _lastTime;

}

@property (assign,setter=_setOutput:,nonatomic) double output;              //@synthesize output=_output - In the implementation block
@property (nonatomic,readonly) double currentTime; 
@property (nonatomic,readonly) double lastTime;                             //@synthesize lastTime=_lastTime - In the implementation block
@property (nonatomic,readonly) double input;                                //@synthesize input=_input - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double time;                                   //@synthesize time=_time - In the implementation block
-(id)init;
-(double)input;
-(double)time;
-(void)setTime:(double)arg1 ;
-(void)setInput:(double)arg1 ;
-(double)currentTime;
-(double)lastTime;
-(BOOL)_needsUpdate;
-(double)output;
-(id)initWithInput:(double)arg1 ;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)_setNeedsUpdate;
-(id)mutableChangeObject;
-(void)didPerformChanges;
-(double)updatedOutput;
-(double)initialOutputForInput:(double)arg1 ;
-(void)_updateIfNeeded;
-(void)_invalidateOutput;
-(void)_updateOutputIfNeeded;
-(void)_setOutput:(double)arg1 ;
-(void)_setLastTime:(double)arg1 ;
-(void)invalidateOutput;
@end

