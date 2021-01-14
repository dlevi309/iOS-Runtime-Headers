/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, NSDate, SBFloatingDockController;

@interface SBFloatingDockBehaviorAssertion : NSObject <BSDescriptionProviding> {

	BOOL _animated;
	BOOL _gesturePossible;
	unsigned long long _level;
	double _progress;
	NSString* _reason;
	NSDate* _timestamp;
	SBFloatingDockController* _floatingDockController;

}

@property (nonatomic,__weak,readonly) SBFloatingDockController * floatingDockController;              //@synthesize floatingDockController=_floatingDockController - In the implementation block
@property (nonatomic,readonly) unsigned long long level;                                              //@synthesize level=_level - In the implementation block
@property (getter=isAnimated,nonatomic,readonly) BOOL animated;                                       //@synthesize animated=_animated - In the implementation block
@property (getter=isPinned,nonatomic,readonly) BOOL pinned; 
@property (nonatomic,readonly) BOOL gesturePossible;                                                  //@synthesize gesturePossible=_gesturePossible - In the implementation block
@property (nonatomic,readonly) double progress;                                                       //@synthesize progress=_progress - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                                                //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy,readonly) NSDate * timestamp;                                               //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isAnimated;
-(id)succinctDescription;
-(BOOL)isPinned;
-(double)progress;
-(id)init;
-(NSDate *)timestamp;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)level;
-(NSString *)reason;
-(void)invalidate;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)invalidateWithCompletion:(/*^block*/id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)dealloc;
-(SBFloatingDockController *)floatingDockController;
-(id)initWithPinned:(BOOL)arg1 gesturePossible:(BOOL)arg2 atLevel:(unsigned long long)arg3 reason:(id)arg4 withCompletion:(/*^block*/id)arg5 ;
-(id)initWithFloatingDockController:(id)arg1 visibleProgress:(double)arg2 animated:(BOOL)arg3 gesturePossible:(BOOL)arg4 atLevel:(unsigned long long)arg5 reason:(id)arg6 withCompletion:(/*^block*/id)arg7 ;
-(void)modifyProgress:(double)arg1 interactive:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)gesturePossible;
-(id)initWithVisibleProgress:(double)arg1 gesturePossible:(BOOL)arg2 atLevel:(unsigned long long)arg3 reason:(id)arg4 withCompletion:(/*^block*/id)arg5 ;
@end

