/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/


@protocol SKCloudServiceSetupRemoteViewControllerDelegate <NSObject>
@required
-(void)overrideCreditCardPresentationWithCompletion:(/*^block*/id)arg1;
-(void)overrideRedeemCameraPerformAction:(long long)arg1 withObject:(id)arg2;
-(void)cloudServiceSetupRemoteViewController:(id)arg1 didFinishLoadingWithSuccess:(BOOL)arg2 error:(id)arg3;
-(void)cloudServiceSetupRemoteViewController:(id)arg1 requestsDismissalWithAnimation:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)cloudServiceSetupRemoteViewController:(id)arg1 requestsDismissingSafariViewControllerAnimated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)cloudServiceSetupRemoteViewController:(id)arg1 requestsPresentingSafariViewControllerWithURL:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4;

@end

