/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)deviceVersion;
-(id)appleAccountInformation;
-(BOOL)willPassWithUniqueIdentifierAutomaticallyBecomeDefault:(id)arg1 ;
-(id)deviceName;
-(id)bridgedClientInfo;
-(void)noteProvisioningUserInterfaceDidDisappear;
-(id)initWithConnection:(id)arg1 ;
-(void)paymentWebService:(id)arg1 validateTransferPreconditionsWithCompletion:(/*^block*/id)arg2 ;
-(void)paymentWebService:(id)arg1 configurationDataWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)paymentWebService:(id)arg1 provisioningDataIncludingDeviceMetadata:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)downloadAllPaymentPassesForPaymentWebService:(id)arg1 ;
-(void)paymentWebService:(id)arg1 addPaymentPass:(id)arg2 withCompletionHandlerV2:(/*^block*/id)arg3 ;
-(void)paymentWebService:(id)arg1 storePassOwnershipToken:(id)arg2 withIdentifier:(id)arg3 ;
-(id)paymentWebService:(id)arg1 passesOfType:(unsigned long long)arg2 ;
-(void)featureApplicationsForProvisioningWithCompletion:(/*^block*/id)arg1 ;
-(void)endRequiringUpgradedPasscodeIfNecessary;
-(void)paymentWebService:(id)arg1 removePass:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(int)paymentSupportedInCurrentRegionForWebService:(id)arg1 ;
-(id)deviceClass;
-(id)osVersion;
-(void)paymentWebService:(id)arg1 addPaymentPass:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(BOOL)paymentWebServiceSupportsPeerPaymentRegistration:(id)arg1 ;
-(void)paymentWebService:(id)arg1 signData:(id)arg2 signatureEntanglementMode:(unsigned long long)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(id)deviceDescriptionForPaymentWebService:(id)arg1 ;
-(id)context;
-(void)claimSecureElementForCurrentUserWithCompletion:(/*^block*/id)arg1 ;
-(void)paymentWebService:(id)arg1 requestPassUpgrade:(id)arg2 pass:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)paymentWebService:(id)arg1 queueConnectionToTrustedServiceManagerForPushTopic:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)enforceUpgradedPasscodePolicyWithCompletion:(/*^block*/id)arg1 ;
-(void)noteProvisioningDidEnd;
-(id)deviceRegion;
-(void)paymentWebService:(id)arg1 deviceMetadataWithFields:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)secureElementOwnershipStateForCurrentUser;
-(BOOL)supportsAutomaticPassPresentation;
-(void)updatedAccountsForProvisioningWithCompletion:(/*^block*/id)arg1 ;
-(void)paymentWebService:(id)arg1 passOwnershipTokenWithIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(int)registrationSupportedInCurrentRegionForWebService:(id)arg1 ;
-(void)startRequiringUpgradedPasscodeWithPasscodeMeetsPolicy:(BOOL)arg1 ;
-(void)paymentWebService:(id)arg1 didRegisterWithRegionMap:(id)arg2 primaryRegionTopic:(id)arg3 ;
-(NSXPCConnection *)connection;
-(void)paymentWebService:(id)arg1 setNewAuthRandom:(/*^block*/id)arg2 ;
-(id)paymentWebService:(id)arg1 filterVerificationChannels:(id)arg2 ;
-(void)familyMembersWithCompletion:(/*^block*/id)arg1 ;
-(void)createApplePayTrustKeyWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)paymentWebService:(id)arg1 validateAddPreconditionsWithCompletion:(/*^block*/id)arg2 ;
-(void)paymentWebService:(id)arg1 setNewAuthRandomIfNecessaryReturningPairingState:(/*^block*/id)arg2 ;
-(id)supportedFeatureIdentifiersForAccountProvisioningWithPaymentWebService:(id)arg1 ;
-(void)applePayTrustKeyForIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)claimSecureElementForCurrentUser;
-(void)paymentWebServiceDidUpdateConfiguration:(id)arg1 ;
-(void)paymentWebService:(id)arg1 deleteApplicationWithAID:(id)arg2 ;
-(void)_invalidateConnection;
-(void)deleteApplePayTrustKeyWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_proxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)notePasscodeUpgradeFlowWillBeginWithCompletion:(/*^block*/id)arg1 ;
-(void)performDeviceCheckInWithCompletion:(/*^block*/id)arg1 ;
-(void)contextWithCompletion:(/*^block*/id)arg1 ;
-(id)_synchronousProxy;
-(void)noteProvisioningDidBegin;
-(void)archiveContext:(id)arg1 ;
-(id)_proxy;
-(void)paymentWebService:(id)arg1 updateAccountWithIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)paymentWebService:(id)arg1 handlePotentialExpressPass:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)supportedFeatureIdentifiersWithPaymentWebService:(id)arg1 ;
-(void)paymentWebService:(id)arg1 setDefaultPaymentPassUniqueIdentifier:(id)arg2 ;
-(void)renewAppleAccountWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)paymentWebService:(id)arg1 hasPassesOfType:(unsigned long long)arg2 ;
-(id)_synchronousProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)paymentWebService:(id)arg1 registrationDataWithCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)paymentWebServiceSupportsAccounts:(id)arg1 ;
-(void)archiveBackgroundContext:(id)arg1 ;
-(void)noteProvisioningUserInterfaceDidAppear;
-(id)secureElementIdentifiers;
-(void)dealloc;
-(BOOL)paymentWebService:(id)arg1 canProvisionPaymentPassWithPrimaryAccountIdentifier:(id)arg2 ;
-(void)notePasscodeUpgradeFlowDidEnd;
@end

