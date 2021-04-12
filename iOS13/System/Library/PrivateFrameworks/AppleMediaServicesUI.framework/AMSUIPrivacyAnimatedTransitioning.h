/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class UIViewController, NSString;

@interface AMSUIPrivacyAnimatedTransitioning : NSObject <UIViewControllerAnimatedTransitioning> {

	BOOL _presentation;
	UIViewController* _viewController;

}

@property (getter=isPresentation) BOOL presentation;                         //@synthesize presentation=_presentation - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setViewController:(UIViewController *)arg1 ;
-(BOOL)isPresentation;
-(double)transitionDuration:(id)arg1 ;
-(void)_animateTransition:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)animateTransition:(id)arg1 ;
-(void)setPresentation:(BOOL)arg1 ;
-(UIViewController *)viewController;
-(id)_presentedViewControllerForContext:(id)arg1 ;
@end

