/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)animateTransition:(id)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(void)_animateTransition:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(double)transitionDuration:(id)arg1 ;
-(void)setPresentation:(BOOL)arg1 ;
-(BOOL)isPresentation;
-(UIViewController *)viewController;
-(id)_presentedViewControllerForContext:(id)arg1 ;
@end

