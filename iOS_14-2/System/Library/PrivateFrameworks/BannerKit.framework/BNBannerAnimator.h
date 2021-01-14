/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class BSAnimationSettings, NSString;

@interface BNBannerAnimator : NSObject <UIViewControllerAnimatedTransitioning> {

	BSAnimationSettings* _animationSettings;

}

@property (getter=isRetargetable,nonatomic,readonly) BOOL retargetable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultResizeAnimationSettings;
+(void)animateInteractive:(BOOL)arg1 animations:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
+(void)_animateInteractive:(BOOL)arg1 settings:(id)arg2 animations:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
+(void)animateWithSettings:(id)arg1 animations:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)animateTransition:(id)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(id)init;
-(id)initWithAnimationSettings:(id)arg1 ;
-(BOOL)isRetargetable;
-(void)animateByRetargetingAnimations:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)actionsForTransition:(id)arg1 ;
@end

