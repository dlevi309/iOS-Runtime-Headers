/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@protocol PKPaymentWebServiceTargetDeviceProtocol <NSObject>
@optional
-(BOOL)willPassWithUniqueIdentifierAutomaticallyBecomeDefault:(id)arg1;
-(void)paymentWebService:(id)arg1 removeSharingInvitation:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)paymentWebService:(id)arg1 registrationDataWithAuthToken:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(id)paymentWebService:(id)arg1 supportedRegionFeatureOfType:(long long)arg2;
-(void)paymentWebService:(id)arg1 addPaymentPass:(id)arg2 withCompletionHandlerV2:(/*^block*/id)arg3;
-(void)paymentWebService:(id)arg1 setAccountAttestationAnonymizationSalt:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)consistencyCheck;
-(unsigned long long)maximumPaymentCards;
-(BOOL)felicaSecureElementIsAvailable;
-(void)paymentWebService:(id)arg1 updateMetadataOnPass:(id)arg2 withCredential:(id)arg3 completion:(/*^block*/id)arg4;
-(void)paymentWebService:(id)arg1 storePassOwnershipToken:(id)arg2 withIdentifier:(id)arg3;
-(id)paymentWebService:(id)arg1 passesOfType:(unsigned long long)arg2;
-(void)featureApplicationsForProvisioningWithCompletion:(/*^block*/id)arg1;
-(void)endRequiringUpgradedPasscodeIfNecessary;
-(void)paymentWebService:(id)arg1 removePass:(id)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(BOOL)paymentWebServiceSupportsPeerPaymentRegistration:(id)arg1;
-(void)removeExpressPassWithUniqueIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(id)cellularNetworkRegion;
-(void)requestBackgroundRegistrationForCredential:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)enforceUpgradedPasscodePolicyWithCompletion:(/*^block*/id)arg1;
-(void)paymentWebService:(id)arg1 deviceMetadataWithFields:(unsigned long long)arg2 completion:(/*^block*/id)arg3;
-(void)updatedAccountsForProvisioningWithCompletion:(/*^block*/id)arg1;
-(void)paymentWebService:(id)arg1 passOwnershipTokenWithIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)paymentWebService:(id)arg1 canAcceptInvitation:(id)arg2 withCompletionV2:(/*^block*/id)arg3;
-(void)startRequiringUpgradedPasscodeWithPasscodeMeetsPolicy:(BOOL)arg1;
-(void)paymentWebService:(id)arg1 accountAttestationAnonymizationSaltWithCompletion:(/*^block*/id)arg2;
-(id)trustedDeviceEnrollmentInfoForWebService:(id)arg1;
-(void)paymentWebService:(id)arg1 addSharingInvitationReceipts:(id)arg2 onCredential:(id)arg3 withCompletion:(/*^block*/id)arg4;
-(void)familyMembersWithCompletion:(/*^block*/id)arg1;
-(void)paymentWebService:(id)arg1 declineRelatedSharingInvitationsIfNecessary:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)setMaximumPaymentCards:(unsigned long long)arg1;
-(void)createApplePayTrustKeyWithRequest:(id)arg1 completion:(/*^block*/id)arg2;
-(BOOL)secureElementIsAvailable;
-(void)startBackgroundVerificationObserverForPass:(id)arg1 verificationMethod:(id)arg2;
-(void)signatureForAuthToken:(id)arg1 webService:(id)arg2 completion:(/*^block*/id)arg3;
-(id)supportedFeatureIdentifiersForAccountProvisioningWithPaymentWebService:(id)arg1;
-(void)paymentWebService:(id)arg1 canAcceptInvitation:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)applePayTrustKeyForIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)paymentWebService:(id)arg1 validateAcceptInvitationPreconditionsWithCompletion:(/*^block*/id)arg2;
-(void)deleteApplePayTrustKeyWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)noteForegroundVerificationObserverActive:(BOOL)arg1;
-(BOOL)supportsExpressMode:(id)arg1;
-(void)paymentWebService:(id)arg1 revokeSharedCredentialGroup:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(BOOL)isGymKitEnabled;
-(void)notePasscodeUpgradeFlowWillBeginWithCompletion:(/*^block*/id)arg1;
-(void)performDeviceCheckInWithCompletion:(/*^block*/id)arg1;
-(void)paymentWebService:(id)arg1 canHandlePotentialExpressPass:(id)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(void)requestPasscodeUpgradeForPasscodeUpgradeFlowController:(id)arg1 withVisibleViewController:(id)arg2 completion:(/*^block*/id)arg3;
-(BOOL)supportsExpressModeForExpressPassType:(long long)arg1;
-(void)exitPasscodeUpgradeForPasscodeUpgradeFlowController:(id)arg1 withShouldContinue:(BOOL)arg2 error:(id)arg3;
-(void)performProductActionRequest:(id)arg1 completion:(/*^block*/id)arg2;
-(void)paymentWebService:(id)arg1 requestSubcredentialInvitation:(id)arg2 completion:(/*^block*/id)arg3;
-(void)paymentWebService:(id)arg1 acceptSubcredentialInvitationWithIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)paymentWebService:(id)arg1 acceptSubcredentialInvitationWithIdentifier:(id)arg2 metadata:(id)arg3 completion:(/*^block*/id)arg4;
-(void)paymentWebService:(id)arg1 subcredentialInvitationsWithCompletion:(/*^block*/id)arg2;
-(void)paymentWebService:(id)arg1 isPassExpressWithUniqueIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)paymentWebService:(id)arg1 addSubcredential:(id)arg2 fromSharingInvitation:(id)arg3 withCompletion:(/*^block*/id)arg4;
-(id)deviceIDSIdentifier;
-(void)paymentWebService:(id)arg1 updateAccountWithIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)paymentWebService:(id)arg1 handlePotentialExpressPass:(id)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(id)supportedFeatureIdentifiersWithPaymentWebService:(id)arg1;
-(void)paymentWebService:(id)arg1 setDefaultPaymentPassUniqueIdentifier:(id)arg2;
-(void)paymentWebService:(id)arg1 matchingInvitationOnDevice:(id)arg2 withTimeout:(unsigned long long)arg3 completion:(/*^block*/id)arg4;
-(BOOL)supportsExpressForAutomaticSelectionTechnologyType:(long long)arg1;
-(BOOL)supportsCredentialType:(long long)arg1;
-(BOOL)paymentWebServiceSupportsAccounts:(id)arg1;
-(void)paymentWebService:(id)arg1 credentialWithIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)availableProductsWithCompletion:(/*^block*/id)arg1;
-(void)paymentWebService:(id)arg1 removeSharingInvitationReceipts:(id)arg2 onCredential:(id)arg3 withCompletion:(/*^block*/id)arg4;
-(void)notePasscodeUpgradeFlowDidEnd;

@required
-(id)deviceVersion;
-(id)appleAccountInformation;
-(id)deviceName;
-(id)bridgedClientInfo;
-(void)noteProvisioningUserInterfaceDidDisappear;
-(void)paymentWebService:(id)arg1 validateTransferPreconditionsWithCompletion:(/*^block*/id)arg2;
-(void)paymentWebService:(id)arg1 configurationDataWithCompletionHandler:(/*^block*/id)arg2;
-(void)paymentWebService:(id)arg1 provisioningDataIncludingDeviceMetadata:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(void)downloadAllPaymentPassesForPaymentWebService:(id)arg1;
-(int)paymentSupportedInCurrentRegionForWebService:(id)arg1;
-(id)deviceClass;
-(id)osVersion;
-(void)paymentWebService:(id)arg1 addPaymentPass:(id)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(void)paymentWebService:(id)arg1 signData:(id)arg2 signatureEntanglementMode:(unsigned long long)arg3 withCompletionHandler:(/*^block*/id)arg4;
-(id)deviceDescriptionForPaymentWebService:(id)arg1;
-(void)claimSecureElementForCurrentUserWithCompletion:(/*^block*/id)arg1;
-(void)paymentWebService:(id)arg1 requestPassUpgrade:(id)arg2 pass:(id)arg3 completion:(/*^block*/id)arg4;
-(void)paymentWebService:(id)arg1 queueConnectionToTrustedServiceManagerForPushTopic:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)noteProvisioningDidEnd;
-(id)deviceRegion;
-(unsigned long long)secureElementOwnershipStateForCurrentUser;
-(BOOL)supportsAutomaticPassPresentation;
-(int)registrationSupportedInCurrentRegionForWebService:(id)arg1;
-(void)paymentWebService:(id)arg1 didRegisterWithRegionMap:(id)arg2 primaryRegionTopic:(id)arg3;
-(void)paymentWebService:(id)arg1 setNewAuthRandom:(/*^block*/id)arg2;
-(id)paymentWebService:(id)arg1 filterVerificationChannels:(id)arg2;
-(void)paymentWebService:(id)arg1 validateAddPreconditionsWithCompletion:(/*^block*/id)arg2;
-(void)paymentWebService:(id)arg1 setNewAuthRandomIfNecessaryReturningPairingState:(/*^block*/id)arg2;
-(BOOL)claimSecureElementForCurrentUser;
-(void)paymentWebServiceDidUpdateConfiguration:(id)arg1;
-(void)paymentWebService:(id)arg1 deleteApplicationWithAID:(id)arg2;
-(void)noteProvisioningDidBegin;
-(void)renewAppleAccountWithCompletionHandler:(/*^block*/id)arg1;
-(BOOL)paymentWebService:(id)arg1 hasPassesOfType:(unsigned long long)arg2;
-(void)paymentWebService:(id)arg1 registrationDataWithCompletionHandler:(/*^block*/id)arg2;
-(void)noteProvisioningUserInterfaceDidAppear;
-(id)secureElementIdentifiers;
-(BOOL)paymentWebService:(id)arg1 canProvisionPaymentPassWithPrimaryAccountIdentifier:(id)arg2;

@end

