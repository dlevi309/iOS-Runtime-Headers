/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)animateTransition:(id)arg1 ;
-(id)animations;
-(void)setCompletion:(id)arg1 ;
-(void)animationEnded:(BOOL)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animate:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)completion;
-(unsigned long long)animationOptions;
-(void)setAnimationOptions:(unsigned long long)arg1 ;
-(void)setAnimations:(id)arg1 ;
-(id<UIViewControllerTransitionCoordinator>)transitionCoordinator;
-(void)setDurationInherited:(BOOL)arg1 ;
-(void)viewOfChildContainer:(id)arg1 willChangeToSize:(CGSize)arg2 ;
-(id)initWithAnimationFactory:(id)arg1 ;
-(BOOL)isDurationInherited;
@end

