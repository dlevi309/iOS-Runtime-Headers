/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/


@interface TeaUI.Bootstrapper : NSObject {

	 mainViewControllerFactory;
	 onboardingViewControllerFactory;
	 onboardingViewDismissalAnimator;
	 deferringGroup;
	 shouldCollapseSidebar;
	 defaultWidthConstraint;
	 defaultHeightConstraint;

}
-(id)init;
-(void)startBootstrappingWithWindow:(id)arg1 shouldOnboard:(BOOL)arg2 ;
-(void)afterBootstrapOnQueue:(id)arg1 runBootstrapCallbackBlock:(/*^block*/id)arg2 ;
-(void)startBootstrappingWithWindow:(id)arg1 shouldOnboard:(BOOL)arg2 shouldCollapseSidebar:(BOOL)arg3 ;
@end

