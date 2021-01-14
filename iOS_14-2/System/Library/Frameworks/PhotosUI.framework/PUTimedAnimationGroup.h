/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUAnimationGroup.h>

@interface PUTimedAnimationGroup : PUAnimationGroup {

	BOOL _areAnimationsPaused;
	double _pausedElapsedTime;
	double _beginTime;

}

@property (assign,nonatomic) double beginTime;                  //@synthesize beginTime=_beginTime - In the implementation block
@property (nonatomic,readonly) double currentTime; 
-(void)setElapsedTime:(double)arg1 ;
-(double)beginTime;
-(id)init;
-(void)setBeginTime:(double)arg1 ;
-(double)elapsedTime;
-(double)currentTime;
-(void)updateAnimations;
-(void)_update;
-(void)pauseAnimations;
-(void)resumeAnimations;
@end

