/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <libobjc.A.dylib/PKPeerPaymentWebServiceTargetDeviceProtocol.h>

@class NPSDomainAccessor, NPSManager, NSString;

@interface NPKPeerPaymentWebServiceCompanionTargetDevice : NSObject <PKPeerPaymentWebServiceTargetDeviceProtocol> {

	NPSDomainAccessor* _globalDomainAccessor;
	NPSManager* _preferencesSyncManager;

}

@property (nonatomic,retain) NPSDomainAccessor * globalDomainAccessor;              //@synthesize globalDomainAccessor=_globalDomainAccessor - In the implementation block
@property (nonatomic,retain) NPSManager * preferencesSyncManager;                   //@synthesize preferencesSyncManager=_preferencesSyncManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)attemptToDownloadPeerPaymentPassAtURL:(id)arg1 withWebService:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)init;
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
-(id)secureElementIdentifiers;
-(id)appleAccountInformation;
-(id)bridgedClientInfo;
-(BOOL)userHasDisabledPeerPayment;
-(void)setUserHasDisabledPeerPayment:(BOOL)arg1 ;
-(void)provisionPeerPaymentPassWithProvisioningController:(id)arg1 credential:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)peerPaymentReRegisterWithURL:(id)arg1 pushToken:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleAccountChanged:(id)arg1 ;
-(NPSDomainAccessor *)globalDomainAccessor;
-(void)setGlobalDomainAccessor:(NPSDomainAccessor *)arg1 ;
-(NPSManager *)preferencesSyncManager;
-(void)setPreferencesSyncManager:(NPSManager *)arg1 ;
@end

