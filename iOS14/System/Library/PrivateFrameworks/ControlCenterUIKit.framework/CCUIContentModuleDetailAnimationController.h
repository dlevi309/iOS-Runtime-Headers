/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(BOOL)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(UIViewPropertyAnimator *)propertyAnimator;
-(BOOL)isPresenting;
-(void)performTransition:(id)arg1 ;
-(id)_newPropertyAnimator;
-(id)_contentModuleContainingViewController;
-(id)initForPresenting:(BOOL)arg1 anchoringViewController:(id)arg2 ;
@end

