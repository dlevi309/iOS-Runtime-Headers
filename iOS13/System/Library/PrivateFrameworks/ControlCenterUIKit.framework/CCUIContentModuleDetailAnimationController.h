/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class UIViewController, UIViewPropertyAnimator, NSString;

@interface CCUIContentModuleDetailAnimationController : NSObject <UIViewControllerAnimatedTransitioning> {

	UIViewController* _anchoringViewController;
	BOOL _presenting;
	UIViewPropertyAnimator* _propertyAnimator;

}

@property (getter=isPresenting,nonatomic,readonly) BOOL presenting;                    //@synthesize presenting=_presenting - In the implementation block
@property (nonatomic,readonly) UIViewPropertyAnimator * propertyAnimator;              //@synthesize propertyAnimator=_propertyAnimator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(BOOL)arg1 ;
-(UIViewPropertyAnimator *)propertyAnimator;
-(BOOL)isPresenting;
-(void)performTransition:(id)arg1 ;
-(id)_newPropertyAnimator;
-(id)_contentModuleContainingViewController;
-(id)initForPresenting:(BOOL)arg1 anchoringViewController:(id)arg2 ;
@end

