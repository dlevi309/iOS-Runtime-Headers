/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol PKPaymentWebServiceProxyObjectExportedInterface <NSObject>
@required
-(void)noteProvisioningUserInterfaceDidDisappear;
-(void)featureApplicationsForProvisioningWithCompletion:(/*^block*/id)arg1;
-(void)endRequiringUpgradedPasscodeIfNecessary;
-(void)downloadAllPaymentPasses;
-(void)claimSecureElementForCurrentUserWithCompletion:(/*^block*/id)arg1;
-(void)enforceUpgradedPasscodePolicyWithCompletion:(/*^block*/id)arg1;
-(void)noteProvisioningDidEnd;
-(void)passOwnershipTokenWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)setDefaultPaymentPassUniqueIdentifier:(id)arg1;
-(void)updatedAccountsForProvisioningWithCompletion:(/*^block*/id)arg1;
-(void)startRequiringUpgradedPasscodeWithPasscodeMeetsPolicy:(BOOL)arg1;
-(void)queueConnectionToTrustedServiceManagerForPushTopic:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)familyMembersWithCompletion:(/*^block*/id)arg1;
-(void)createApplePayTrustKeyWithRequest:(id)arg1 completion:(/*^block*/id)arg2;
-(void)applePayTrustKeyForIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)deleteApplePayTrustKeyWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)getContextWithCompletion:(/*^block*/id)arg1;
-(void)getConfigurationDataWithCompletion:(/*^block*/id)arg1;
-(void)getRegistrationDataWithCompletion:(/*^block*/id)arg1;
-(void)getTrustedDeviceEnrollmentInfoWithCompletion:(/*^block*/id)arg1;
-(void)signData:(id)arg1 signatureEntanglementMode:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3;
-(void)getProvisioningDataIncludingDeviceMetadata:(BOOL)arg1 withCompletion:(/*^block*/id)arg2;
-(void)didRegisterWithRegionMap:(id)arg1 primaryRegionTopic:(id)arg2;
-(void)paymentSupportedInCurrentRegion:(/*^block*/id)arg1;
-(void)registrationSupportedInCurrentRegionWithCompletion:(/*^block*/id)arg1;
-(void)setNewAuthRandom:(/*^block*/id)arg1;
-(void)notePasscodeUpgradeFlowWillBeginWithCompletion:(/*^block*/id)arg1;
-(void)setNewAuthRandomIfNecessaryReturningPairingState:(/*^block*/id)arg1;
-(void)hasPassesOfType:(unsigned long long)arg1 completion:(/*^block*/id)arg2;
-(void)passesOfType:(unsigned long long)arg1 completion:(/*^block*/id)arg2;
-(void)canProvisionPaymentPassWithPrimaryAccountIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)validateAddPreconditionsWithCompletion:(/*^block*/id)arg1;
-(void)performDeviceCheckInWithCompletion:(/*^block*/id)arg1;
-(void)secureElementOwnershipStateForCurrentUserWithCompletion:(/*^block*/id)arg1;
-(void)validateTransferPreconditionsWithCompletion:(/*^block*/id)arg1;
-(void)handlePotentialExpressPass:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)addPassData:(id)arg1 completion:(/*^block*/id)arg2;
-(void)removePass:(id)arg1 completion:(/*^block*/id)arg2;
-(void)supportsPeerPaymentRegistrationWithCompletion:(/*^block*/id)arg1;
-(void)appleAccountInformationWithCompletion:(/*^block*/id)arg1;
-(void)willPassWithUniqueIdentifierAutomaticallyBecomeDefault:(id)arg1 completion:(/*^block*/id)arg2;
-(void)updateAccountWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)supportsAccountsWithCompletion:(/*^block*/id)arg1;
-(void)supportedFeatureIdentifiersWithCompletion:(/*^block*/id)arg1;
-(void)deviceMetadataWithFields:(unsigned long long)arg1 completion:(/*^block*/id)arg2;
-(void)supportedFeatureIdentifiersForAccountProvisioningWithCompletion:(/*^block*/id)arg1;
-(void)invalidateRemoteProxyTargetDevice;
-(void)noteProvisioningDidBegin;
-(void)archiveContext:(id)arg1;
-(void)renewAppleAccountWithCompletionHandler:(/*^block*/id)arg1;
-(void)deleteApplicationWithAID:(id)arg1;
-(void)storePassOwnershipToken:(id)arg1 withIdentifier:(id)arg2;
-(void)archiveBackgroundContext:(id)arg1;
-(void)noteProvisioningUserInterfaceDidAppear;
-(void)notePasscodeUpgradeFlowDidEnd;

@end

