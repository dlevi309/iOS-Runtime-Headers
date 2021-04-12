/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIAdaptivePresentationControllerDelegate <NSObject>
@optional
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
-(id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2;
-(void)presentationController:(id)arg1 willPresentWithAdaptiveStyle:(long long)arg2 transitionCoordinator:(id)arg3;
-(BOOL)presentationControllerShouldDismiss:(id)arg1;
-(void)presentationControllerWillDismiss:(id)arg1;
-(void)presentationControllerDidDismiss:(id)arg1;
-(void)presentationControllerDidAttemptToDismiss:(id)arg1;

@end

