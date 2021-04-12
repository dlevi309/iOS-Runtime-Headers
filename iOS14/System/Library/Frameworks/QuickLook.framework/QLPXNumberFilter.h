/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic) double time;                                   //@synthesize time=_time - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)time;
-(void)setTime:(double)arg1 ;
-(id)init;
-(double)input;
-(void)_setLastTime:(double)arg1 ;
-(double)output;
-(void)didPerformChanges;
-(void)setInput:(double)arg1 ;
-(void)_updateIfNeeded;
-(void)invalidateOutput;
-(void)_invalidateOutput;
-(void)_updateOutputIfNeeded;
-(double)currentTime;
-(BOOL)_needsUpdate;
-(id)mutableChangeObject;
-(double)lastTime;
-(void)_setOutput:(double)arg1 ;
-(void)_setNeedsUpdate;
-(void)performChanges:(/*^block*/id)arg1 ;
-(id)initWithInput:(double)arg1 ;
-(double)initialOutputForInput:(double)arg1 ;
-(double)updatedOutput;
@end

