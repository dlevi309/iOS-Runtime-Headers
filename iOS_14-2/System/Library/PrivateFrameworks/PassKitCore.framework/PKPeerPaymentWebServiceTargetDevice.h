/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/PKPeerPaymentWebServiceTargetDeviceProtocol.h>

@protocol PKPeerPaymentTargetDeviceDelegate;
@class PKPeerPaymentService, NSString;

@interface PKPeerPaymentWebServiceTargetDevice : NSObject <PKPeerPaymentWebServiceTargetDeviceProtocol> {

	PKPeerPaymentService* _peerPaymentService;
	id<PKPeerPaymentTargetDeviceDelegate> _targetDeviceDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)appleAccountInformation;
-(id)account;
-(id)bridgedClientInfo;
-(BOOL)userHasDisabledPeerPayment;
-(void)provisionPeerPaymentPassWithProvisioningController:(id)arg1 peerPaymentWebService:(id)arg2 credential:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)preferences;
-(void)peerPaymentReRegisterWithURL:(id)arg1 pushToken:(id)arg2 peerPaymentWebService:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)cloudStoreStatusWithCompletion:(/*^block*/id)arg1 ;
-(id)deviceClass;
-(void)resetApplePayManateeViewWithCompletion:(/*^block*/id)arg1 ;
-(id)deviceRegion;
-(void)downloadPassIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithTargetDeviceDelegate:(id)arg1 ;
-(void)setPreferences:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handlePreferencesChangedNotification:(id)arg1 ;
-(void)_handleAccountChangedNotification:(id)arg1 ;
-(void)updateAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)renewAppleAccountWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)checkTLKsMissingWithCompletion:(/*^block*/id)arg1 ;
-(void)provisionPeerPaymentPassWithProvisioningController:(id)arg1 credential:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setUserHasDisabledPeerPayment:(BOOL)arg1 ;
-(id)secureElementIdentifiers;
-(void)dealloc;
@end

