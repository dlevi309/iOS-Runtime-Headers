/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)animateTransition:(id)arg1 ;
-(id)animations;
-(void)setDuration:(double)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(BOOL)skipCallbacks;
-(void)setAnimations:(id)arg1 ;
-(void)setSkipCallbacks:(BOOL)arg1 ;
-(BOOL)updateStatusBarIfNecessary;
-(double)duration;
-(void)setUpdateStatusBarIfNecessary:(BOOL)arg1 ;
-(void)dealloc;
@end

