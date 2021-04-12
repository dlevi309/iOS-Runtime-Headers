/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <libobjc.A.dylib/PKPeerPaymentWebServiceTargetDeviceProtocol.h>

@class PKPeerPaymentWebService, NSString;

@interface NPKPeerPaymentWebServiceCompanionTargetDevice : NSObject <PKPeerPaymentWebServiceTargetDeviceProtocol> {

	PKPeerPaymentWebService* _peerPaymentWebService;

}

@property (assign,nonatomic,__weak) PKPeerPaymentWebService * peerPaymentWebService;              //@synthesize peerPaymentWebService=_peerPaymentWebService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)attemptToDownloadPeerPaymentPassAtURL:(id)arg1 withWebService:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)appleAccountInformation;
-(id)account;
-(id)bridgedClientInfo;
-(BOOL)userHasDisabledPeerPayment;
-(id)init;
-(id)preferences;
-(void)peerPaymentReRegisterWithURL:(id)arg1 pushToken:(id)arg2 peerPaymentWebService:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)cloudStoreStatusWithCompletion:(/*^block*/id)arg1 ;
-(id)deviceClass;
-(void)resetApplePayManateeViewWithCompletion:(/*^block*/id)arg1 ;
-(void)_handleAccountChanged:(id)arg1 ;
-(id)deviceRegion;
-(void)downloadPassIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(PKPeerPaymentWebService *)peerPaymentWebService;
-(void)initalizeCloudStoreIfNecessaryWithHandler:(/*^block*/id)arg1 ;
-(void)setPreferences:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)peerPaymentReRegisterWithURL:(id)arg1 pushToken:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)checkTLKsMissingWithCompletion:(/*^block*/id)arg1 ;
-(void)provisionPeerPaymentPassWithProvisioningController:(id)arg1 credential:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setUserHasDisabledPeerPayment:(BOOL)arg1 ;
-(id)secureElementIdentifiers;
-(void)dealloc;
-(void)initalizeCloudStoreIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(void)setPeerPaymentWebService:(PKPeerPaymentWebService *)arg1 ;
@end

