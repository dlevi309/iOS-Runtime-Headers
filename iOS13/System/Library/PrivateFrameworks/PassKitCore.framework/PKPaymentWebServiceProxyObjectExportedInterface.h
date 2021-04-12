/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol PKPaymentWebServiceProxyObjectExportedInterface <NSObject>
@required
-(void)getContextWithCompletion:(/*^block*/id)arg1;
-(void)queueConnectionToTrustedServiceManagerForPushTopic:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)getConfigurationDataWithCompletion:(/*^block*/id)arg1;
-(void)getRegistrationDataWithCompletion:(/*^block*/id)arg1;
-(void)getTrustedDeviceEnrollmentInfoWithCompletion:(/*^block*/id)arg1;
-(void)signData:(id)arg1 signatureEntanglementMode:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3;
-(void)getProvisioningDataWithCompletion:(/*^block*/id)arg1;
-(void)deleteApplicationWithAID:(id)arg1;
-(void)didRegisterWithRegionMap:(id)arg1 primaryRegionTopic:(id)arg2;
-(void)paymentSupportedInCurrentRegion:(/*^block*/id)arg1;
-(void)registrationSupportedInCurrentRegionWithCompletion:(/*^block*/id)arg1;
-(void)noteProvisioningUserInterfaceDidAppear;
-(void)noteProvisioningUserInterfaceDidDisappear;
-(void)noteProvisioningDidBegin;
-(void)noteProvisioningDidEnd;
-(void)setNewAuthRandomIfNecessaryReturningPairingState:(/*^block*/id)arg1;
-(void)setNewAuthRandom:(/*^block*/id)arg1;
-(void)hasPassesOfType:(unsigned long long)arg1 completion:(/*^block*/id)arg2;
-(void)passesOfType:(unsigned long long)arg1 completion:(/*^block*/id)arg2;
-(void)canProvisionPaymentPassWithPrimaryAccountIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)validateAddPreconditionsWithCompletion:(/*^block*/id)arg1;
-(void)downloadAllPaymentPasses;
-(void)claimSecureElementForCurrentUserWithCompletion:(/*^block*/id)arg1;
-(void)secureElementOwnershipStateForCurrentUserWithCompletion:(/*^block*/id)arg1;
-(void)validateTransferPreconditionsWithCompletion:(/*^block*/id)arg1;
-(void)handlePotentialExpressPass:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)addPassData:(id)arg1 completion:(/*^block*/id)arg2;
-(void)removePass:(id)arg1 completion:(/*^block*/id)arg2;
-(void)supportsPeerPaymentRegistrationWithCompletion:(/*^block*/id)arg1;
-(void)renewAppleAccountWithCompletionHandler:(/*^block*/id)arg1;
-(void)appleAccountInformationWithCompletion:(/*^block*/id)arg1;
-(void)willPassWithUniqueIdentifierAutomaticallyBecomeDefault:(id)arg1 completion:(/*^block*/id)arg2;
-(void)setDefaultPaymentPassUniqueIdentifier:(id)arg1;
-(void)notePasscodeUpgradeFlowWillBeginWithCompletion:(/*^block*/id)arg1;
-(void)notePasscodeUpgradeFlowDidEnd;
-(void)enforceUpgradedPasscodePolicyWithCompletion:(/*^block*/id)arg1;
-(void)startRequiringUpgradedPasscodeWithPasscodeMeetsPolicy:(BOOL)arg1;
-(void)endRequiringUpgradedPasscodeIfNecessary;
-(void)updateAccountWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)supportsAccountsWithCompletion:(/*^block*/id)arg1;
-(void)supportedFeatureIdentifiersWithCompletion:(/*^block*/id)arg1;
-(void)supportedFeatureIdentifiersForAccountProvisioningWithCompletion:(/*^block*/id)arg1;
-(void)updatedAccountsForProvisioningWithCompletion:(/*^block*/id)arg1;
-(void)featureApplicationsForProvisioningWithCompletion:(/*^block*/id)arg1;
-(void)deviceMetadataWithFields:(unsigned long long)arg1 completion:(/*^block*/id)arg2;
-(void)applePayTrustKeyForIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)createApplePayTrustKeyWithRequest:(id)arg1 completion:(/*^block*/id)arg2;
-(void)deleteApplePayTrustKeyWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)performDeviceCheckInWithCompletion:(/*^block*/id)arg1;
-(void)storePassOwnershipToken:(id)arg1 withIdentifier:(id)arg2;
-(void)passOwnershipTokenWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)archiveContext:(id)arg1;
-(void)archiveBackgroundContext:(id)arg1;
-(void)invalidateRemoteProxyTargetDevice;

@end

