/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/PKPaymentWebServiceTargetDeviceProtocol.h>
#import <libobjc.A.dylib/PKPaymentWebServiceArchiver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, NSString;

@interface PKPaymentWebServiceLocalProxyTargetDevice : NSObject <PKPaymentWebServiceTargetDeviceProtocol, PKPaymentWebServiceArchiver> {

	NSObject*<OS_dispatch_queue> _handlerQueue;
	NSXPCConnection* _connection;

}

@property (nonatomic,readonly) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)context;
-(id)_proxy;
-(NSXPCConnection *)connection;
-(id)initWithConnection:(id)arg1 ;
-(id)deviceName;
-(id)deviceClass;
-(void)_invalidateConnection;
-(id)deviceRegion;
-(id)osVersion;
-(id)deviceVersion;
-(void)noteProvisioningUserInterfaceDidAppear;
-(void)noteProvisioningUserInterfaceDidDisappear;
-(void)noteProvisioningDidBegin;
-(void)noteProvisioningDidEnd;
-(void)claimSecureElementForCurrentUserWithCompletion:(/*^block*/id)arg1 ;
-(void)renewAppleAccountWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)notePasscodeUpgradeFlowWillBeginWithCompletion:(/*^block*/id)arg1 ;
-(void)notePasscodeUpgradeFlowDidEnd;
-(void)enforceUpgradedPasscodePolicyWithCompletion:(/*^block*/id)arg1 ;
-(void)startRequiringUpgradedPasscodeWithPasscodeMeetsPolicy:(BOOL)arg1 ;
-(void)endRequiringUpgradedPasscodeIfNecessary;
-(void)updatedAccountsForProvisioningWithCompletion:(/*^block*/id)arg1 ;
-(void)featureApplicationsForProvisioningWithCompletion:(/*^block*/id)arg1 ;
-(void)applePayTrustKeyForIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)createApplePayTrustKeyWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteApplePayTrustKeyWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performDeviceCheckInWithCompletion:(/*^block*/id)arg1 ;
-(void)archiveContext:(id)arg1 ;
-(void)archiveBackgroundContext:(id)arg1 ;
-(id)_proxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_synchronousProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)contextWithCompletion:(/*^block*/id)arg1 ;
-(id)_synchronousProxy;
-(id)secureElementIdentifiers;
-(void)paymentWebServiceDidUpdateConfiguration:(id)arg1 ;
-(void)paymentWebService:(id)arg1 queueConnectionToTrustedServiceManagerForPushTopic:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)paymentWebService:(id)arg1 configurationDataWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)paymentWebService:(id)arg1 registrationDataWithCompletionHandler:(/*^block*/id)arg2 ;
-(id)appleAccountInformation;
-(void)paymentWebService:(id)arg1 signData:(id)arg2 signatureEntanglementMode:(unsigned long long)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)paymentWebService:(id)arg1 provisioningDataWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)paymentWebService:(id)arg1 deleteApplicationWithAID:(id)arg2 ;
-(void)paymentWebService:(id)arg1 didRegisterWithRegionMap:(id)arg2 primaryRegionTopic:(id)arg3 ;
-(id)paymentWebService:(id)arg1 filterVerificationChannels:(id)arg2 ;
-(int)paymentSupportedInCurrentRegionForWebService:(id)arg1 ;
-(int)registrationSupportedInCurrentRegionForWebService:(id)arg1 ;
-(id)deviceDescriptionForPaymentWebService:(id)arg1 ;
-(id)bridgedClientInfo;
-(BOOL)supportsAutomaticPassPresentation;
-(void)paymentWebService:(id)arg1 setNewAuthRandomIfNecessaryReturningPairingState:(/*^block*/id)arg2 ;
-(void)paymentWebService:(id)arg1 setNewAuthRandom:(/*^block*/id)arg2 ;
-(BOOL)paymentWebService:(id)arg1 hasPassesOfType:(unsigned long long)arg2 ;
-(BOOL)paymentWebService:(id)arg1 canProvisionPaymentPassWithPrimaryAccountIdentifier:(id)arg2 ;
-(void)paymentWebService:(id)arg1 validateAddPreconditionsWithCompletion:(/*^block*/id)arg2 ;
-(void)paymentWebService:(id)arg1 addPaymentPass:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)downloadAllPaymentPassesForPaymentWebService:(id)arg1 ;
-(void)paymentWebService:(id)arg1 validateTransferPreconditionsWithCompletion:(/*^block*/id)arg2 ;
-(void)paymentWebService:(id)arg1 requestPassUpgrade:(id)arg2 pass:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)claimSecureElementForCurrentUser;
-(unsigned long long)secureElementOwnershipStateForCurrentUser;
-(id)paymentWebService:(id)arg1 passesOfType:(unsigned long long)arg2 ;
-(void)paymentWebService:(id)arg1 handlePotentialExpressPass:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)paymentWebService:(id)arg1 addPaymentPass:(id)arg2 withCompletionHandlerV2:(/*^block*/id)arg3 ;
-(void)paymentWebService:(id)arg1 removePass:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(BOOL)paymentWebServiceSupportsPeerPaymentRegistration:(id)arg1 ;
-(BOOL)paymentWebServiceSupportsAccounts:(id)arg1 ;
-(id)supportedFeatureIdentifiersWithPaymentWebService:(id)arg1 ;
-(id)supportedFeatureIdentifiersForAccountProvisioningWithPaymentWebService:(id)arg1 ;
-(void)paymentWebService:(id)arg1 deviceMetadataWithFields:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)paymentWebService:(id)arg1 updateAccountWithIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)paymentWebService:(id)arg1 setDefaultPaymentPassUniqueIdentifier:(id)arg2 ;
-(void)paymentWebService:(id)arg1 storePassOwnershipToken:(id)arg2 withIdentifier:(id)arg3 ;
-(void)paymentWebService:(id)arg1 passOwnershipTokenWithIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)willPassWithUniqueIdentifierAutomaticallyBecomeDefault:(id)arg1 ;
@end

