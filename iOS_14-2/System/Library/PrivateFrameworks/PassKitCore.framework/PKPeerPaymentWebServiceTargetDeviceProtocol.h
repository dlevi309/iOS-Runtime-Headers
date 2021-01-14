/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol PKPeerPaymentWebServiceTargetDeviceProtocol <NSObject>
@optional
-(id)appleAccountInformation;
-(void)provisionPeerPaymentPassWithProvisioningController:(id)arg1 peerPaymentWebService:(id)arg2 credential:(id)arg3 completion:(/*^block*/id)arg4;
-(id)preferences;
-(void)peerPaymentReRegisterWithURL:(id)arg1 pushToken:(id)arg2 peerPaymentWebService:(id)arg3 completion:(/*^block*/id)arg4;
-(id)deviceClass;
-(void)resetApplePayManateeViewWithCompletion:(/*^block*/id)arg1;
-(id)deviceRegion;
-(void)setPreferences:(id)arg1 completion:(/*^block*/id)arg2;
-(void)peerPaymentReRegisterWithURL:(id)arg1 pushToken:(id)arg2 completion:(/*^block*/id)arg3;
-(void)renewAppleAccountWithCompletionHandler:(/*^block*/id)arg1;
-(void)checkTLKsMissingWithCompletion:(/*^block*/id)arg1;

@required
-(id)account;
-(id)bridgedClientInfo;
-(BOOL)userHasDisabledPeerPayment;
-(void)cloudStoreStatusWithCompletion:(/*^block*/id)arg1;
-(void)downloadPassIfNecessaryWithCompletion:(/*^block*/id)arg1;
-(void)updateAccountWithCompletion:(/*^block*/id)arg1;
-(void)provisionPeerPaymentPassWithProvisioningController:(id)arg1 credential:(id)arg2 completion:(/*^block*/id)arg3;
-(void)setUserHasDisabledPeerPayment:(BOOL)arg1;
-(id)secureElementIdentifiers;

@end

