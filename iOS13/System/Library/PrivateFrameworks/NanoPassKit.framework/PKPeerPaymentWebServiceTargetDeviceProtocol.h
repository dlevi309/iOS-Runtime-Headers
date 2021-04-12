/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@protocol PKPeerPaymentWebServiceTargetDeviceProtocol <NSObject>
@optional
-(id)deviceRegion;
-(void)initalizeCloudStoreIfNecessaryWithHandler:(/*^block*/id)arg1;
-(void)checkTLKsMissingWithCompletion:(/*^block*/id)arg1;
-(void)resetApplePayManateeViewWithCompletion:(/*^block*/id)arg1;
-(void)initalizeCloudStoreIfNecessaryWithCompletion:(/*^block*/id)arg1;
-(void)renewAppleAccountWithCompletionHandler:(/*^block*/id)arg1;
-(id)appleAccountInformation;
-(void)peerPaymentReRegisterWithURL:(id)arg1 pushToken:(id)arg2 peerPaymentWebService:(id)arg3 completion:(/*^block*/id)arg4;
-(void)peerPaymentReRegisterWithURL:(id)arg1 pushToken:(id)arg2 completion:(/*^block*/id)arg3;

@required
-(id)account;
-(void)updateAccountWithCompletion:(/*^block*/id)arg1;
-(void)downloadPassIfNecessaryWithCompletion:(/*^block*/id)arg1;
-(void)cloudStoreStatusWithCompletion:(/*^block*/id)arg1;
-(id)secureElementIdentifiers;
-(id)bridgedClientInfo;
-(BOOL)userHasDisabledPeerPayment;
-(void)setUserHasDisabledPeerPayment:(BOOL)arg1;
-(void)provisionPeerPaymentPassWithProvisioningController:(id)arg1 credential:(id)arg2 completion:(/*^block*/id)arg3;

@end

