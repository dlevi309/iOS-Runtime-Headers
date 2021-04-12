/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QLPUAnimationGroup.h>

@interface QLPUTimedAnimationGroup : QLPUAnimationGroup {

	BOOL _areAnimationsPaused;
	double _pausedElapsedTime;
	double _beginTime;

}

@property (assign,nonatomic) double beginTime;                  //@synthesize beginTime=_beginTime - In the implementation block
@property (nonatomic,readonly) double currentTime; 
-(id)init;
-(void)_update;
-(double)beginTime;
-(void)setBeginTime:(double)arg1 ;
-(double)elapsedTime;
-(double)currentTime;
-(void)setElapsedTime:(double)arg1 ;
-(void)updateAnimations;
-(void)pauseAnimations;
-(void)resumeAnimations;
@end

