/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class BSUIAnimationFactory, _UIViewControllerTransitionContext, NSString;

@interface NCAnimationCoordinator : NSObject <UIViewControllerAnimatedTransitioning> {

	BSUIAnimationFactory* _factory;
	_UIViewControllerTransitionContext* _transitionContext;
	BOOL _durationInherited;
	unsigned long long _animationOptions;
	/*^block*/id _animations;
	/*^block*/id _completion;

}

@property (assign,nonatomic) unsigned long long animationOptions;                                                   //@synthesize animationOptions=_animationOptions - In the implementation block
@property (assign,getter=isDurationInherited,nonatomic) BOOL durationInherited;                                     //@synthesize durationInherited=_durationInherited - In the implementation block
@property (nonatomic,__weak,readonly) id<UIViewControllerTransitionCoordinator> transitionCoordinator; 
@property (nonatomic,copy) id animations;                                                                           //@synthesize animations=_animations - In the implementation block
@property (nonatomic,copy) id completion;                                                                           //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)animationCoordinatorWithDuration:(double)arg1 ;
-(id)animations;
-(void)setAnimations:(id)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(id<UIViewControllerTransitionCoordinator>)transitionCoordinator;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(BOOL)arg1 ;
-(unsigned long long)animationOptions;
-(void)setAnimationOptions:(unsigned long long)arg1 ;
-(void)animate:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDurationInherited:(BOOL)arg1 ;
-(void)viewOfChildContainer:(id)arg1 willChangeToSize:(CGSize)arg2 ;
-(id)initWithAnimationFactory:(id)arg1 ;
-(BOOL)isDurationInherited;
@end

