/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIWindowAnimationController.h>

@interface _UIWindowRotationAnimationController : _UIWindowAnimationController {

	BOOL _skipCallbacks;
	BOOL _updateStatusBarIfNecessary;
	/*^block*/id _animations;
	double _duration;

}

@property (nonatomic,copy) id animations;                                  //@synthesize animations=_animations - In the implementation block
@property (assign,nonatomic) double duration;                              //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL skipCallbacks;                           //@synthesize skipCallbacks=_skipCallbacks - In the implementation block
@property (assign,nonatomic) BOOL updateStatusBarIfNecessary;              //@synthesize updateStatusBarIfNecessary=_updateStatusBarIfNecessary - In the implementation block
-(void)dealloc;
-(double)duration;
-(id)animations;
-(void)setAnimations:(id)arg1 ;
-(void)setDuration:(double)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(BOOL)skipCallbacks;
-(BOOL)updateStatusBarIfNecessary;
-(void)setSkipCallbacks:(BOOL)arg1 ;
-(void)setUpdateStatusBarIfNecessary:(BOOL)arg1 ;
@end

