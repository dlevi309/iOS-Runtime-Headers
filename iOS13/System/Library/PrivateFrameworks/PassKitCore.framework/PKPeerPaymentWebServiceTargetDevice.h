/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/PKPeerPaymentWebServiceTargetDeviceProtocol.h>

@protocol PKPeerPaymentRegistrationDelegate;
@class PKPeerPaymentService, NSString;

@interface PKPeerPaymentWebServiceTargetDevice : NSObject <PKPeerPaymentWebServiceTargetDeviceProtocol> {

	PKPeerPaymentService* _peerPaymentService;
	id<PKPeerPaymentRegistrationDelegate> _registrationDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)account;
-(id)deviceRegion;
-(void)updateAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)downloadPassIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(void)cloudStoreStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)initalizeCloudStoreIfNecessaryWithHandler:(/*^block*/id)arg1 ;
-(void)checkTLKsMissingWithCompletion:(/*^block*/id)arg1 ;
-(void)resetApplePayManateeViewWithCompletion:(/*^block*/id)arg1 ;
-(void)initalizeCloudStoreIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(void)renewAppleAccountWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)secureElementIdentifiers;
-(id)appleAccountInformation;
-(id)bridgedClientInfo;
-(void)_handleAccountChangedNotification:(id)arg1 ;
-(BOOL)userHasDisabledPeerPayment;
-(void)setUserHasDisabledPeerPayment:(BOOL)arg1 ;
-(void)provisionPeerPaymentPassWithProvisioningController:(id)arg1 credential:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)peerPaymentReRegisterWithURL:(id)arg1 pushToken:(id)arg2 peerPaymentWebService:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithRegistrationDelegate:(id)arg1 ;
@end

