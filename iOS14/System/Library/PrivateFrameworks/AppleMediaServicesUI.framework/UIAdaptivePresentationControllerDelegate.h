/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/


@protocol UIAdaptivePresentationControllerDelegate <NSObject>
@optional
-(BOOL)presentationControllerShouldDismiss:(id)arg1;
-(id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
-(void)presentationController:(id)arg1 willPresentWithAdaptiveStyle:(long long)arg2 transitionCoordinator:(id)arg3;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1;
-(void)presentationControllerWillDismiss:(id)arg1;
-(void)presentationControllerDidAttemptToDismiss:(id)arg1;
-(void)presentationControllerDidDismiss:(id)arg1;

@end

