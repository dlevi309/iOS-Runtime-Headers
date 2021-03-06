/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/PKPaymentWebServiceTargetDeviceProtocol.h>

@class PKPassLibrary, PKPaymentService, PKAssertion, PKPassUpgradeController, NSString;

@interface PKPaymentWebServiceTargetDevice : NSObject <PKPaymentWebServiceTargetDeviceProtocol> {

	PKPassLibrary* _passLibrary;
	PKPaymentService* _paymentService;
	PKAssertion* _provisioningAssertion;
	BOOL _provisioningAssertionActive;
	PKAssertion* _verificationAssertion;
	BOOL _verificationAssertionActive;
	PKAssertion* _requiringUpgradedPasscodeAssertion;
	BOOL _requiringUpgradedPasscodeAssertionActive;
	PKAssertion* _activePasscodeUpgradeFlowAssertion;
	BOOL _activePasscodeUpgradeFlowAssertionActive;
	PKPassUpgradeController* _passUpgradeController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)localTargetDevice;
-(id)deviceVersion;
-(id)appleAccountInformation;
-(BOOL)willPassWithUniqueIdentifierAutomaticallyBecomeDefault:(id)arg1 ;
-(id)deviceName;
-(id)bridgedClientInfo;
-(void)noteProvisioningUserInterfaceDidDisappear;
-(void)_requestBackgroundRegistrationForCredentialWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)paymentWebService:(id)arg1 removeSharingInvitation:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)paymentWebService:(id)arg1 registrationDataWithAuthToken:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)paymentWebService:(id)arg1 validateTransferPreconditionsWithCompletion:(/*^block*/id)arg2 ;
-(void)_storePassOwnershipToken:(id)arg1 withIdentifier:(id)arg2 ;
-(id)init;
-(void)paymentWebService:(id)arg1 configurationDataWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)paymentWebService:(id)arg1 provisioningDataIncludingDeviceMetadata:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)paymentWebService:(id)arg1 supportedRegionFeatureOfType:(long long)arg2 ;
-(void)downloadAllPaymentPassesForPaymentWebService:(id)arg1 ;
-(void)paymentWebService:(id)arg1 addPaymentPass:(id)arg2 withCompletionHandlerV2:(/*^block*/id)arg3 ;
-(void)_declineRelatedSharingInvitationsIfNecessary:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_updateMetadataOnPassWithIdentifier:(id)arg1 credential:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)paymentWebService:(id)arg1 setAccountAttestationAnonymizationSalt:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)consistencyCheck;
-(void)_addPass:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)maximumPaymentCards;
-(BOOL)felicaSecureElementIsAvailable;
-(void)paymentWebService:(id)arg1 updateMetadataOnPass:(id)arg2 withCredential:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)paymentWebService:(id)arg1 storePassOwnershipToken:(id)arg2 withIdentifier:(id)arg3 ;
-(void)_sanitizeExpressPasses;
-(id)paymentWebService:(id)arg1 passesOfType:(unsigned long long)arg2 ;
-(void)featureApplicationsForProvisioningWithCompletion:(/*^block*/id)arg1 ;
-(void)_matchingInvitationOnDevice:(id)arg1 withTimeout:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)endRequiringUpgradedPasscodeIfNecessary;
-(void)paymentWebService:(id)arg1 removePass:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(int)paymentSupportedInCurrentRegionForWebService:(id)arg1 ;
-(id)deviceClass;
-(id)osVersion;
-(void)paymentWebService:(id)arg1 addPaymentPass:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(BOOL)paymentWebServiceSupportsPeerPaymentRegistration:(id)arg1 ;
-(void)paymentWebService:(id)arg1 signData:(id)arg2 signatureEntanglementMode:(unsigned long long)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)_accountAttestationAnonymizationSaltWithCompletion:(/*^block*/id)arg1 ;
-(id)_upgradeRequestForPass:(id)arg1 ;
-(id)deviceDescriptionForPaymentWebService:(id)arg1 ;
-(void)_addSubcredential:(id)arg1 fromSharingInvitation:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)claimSecureElementForCurrentUserWithCompletion:(/*^block*/id)arg1 ;
-(void)removeExpressPassWithUniqueIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_initializeSecureElementIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(id)cellularNetworkRegion;
-(void)paymentWebService:(id)arg1 requestPassUpgrade:(id)arg2 pass:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_canAcceptInvitation:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)requestBackgroundRegistrationForCredential:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_removePassWithUniqueID:(id)arg1 diagnosticReason:(id)arg2 ;
-(void)paymentWebService:(id)arg1 queueConnectionToTrustedServiceManagerForPushTopic:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)enforceUpgradedPasscodePolicyWithCompletion:(/*^block*/id)arg1 ;
-(void)_removeSharingInvitationReceiptWithIdentifiers:(id)arg1 onCredential:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)noteProvisioningDidEnd;
-(void)_startBackgroundVerificationObserverForPass:(id)arg1 verificationMethod:(id)arg2 ;
-(id)deviceRegion;
-(void)paymentWebService:(id)arg1 deviceMetadataWithFields:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)secureElementOwnershipStateForCurrentUser;
-(BOOL)supportsAutomaticPassPresentation;
-(void)_performDeviceCheckInWithCompletion:(/*^block*/id)arg1 ;
-(void)_productsWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_willPassWithUniqueIdentifierAutomaticallyBecomeDefault:(id)arg1 ;
-(void)_featureApplicationsForProvisioningWithCompletion:(/*^block*/id)arg1 ;
-(void)updatedAccountsForProvisioningWithCompletion:(/*^block*/id)arg1 ;
-(void)paymentWebService:(id)arg1 passOwnershipTokenWithIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(int)registrationSupportedInCurrentRegionForWebService:(id)arg1 ;
-(void)paymentWebService:(id)arg1 canAcceptInvitation:(id)arg2 withCompletionV2:(/*^block*/id)arg3 ;
-(void)startRequiringUpgradedPasscodeWithPasscodeMeetsPolicy:(BOOL)arg1 ;
-(void)paymentWebService:(id)arg1 didRegisterWithRegionMap:(id)arg2 primaryRegionTopic:(id)arg3 ;
-(void)_addSharingInvitationReceipts:(id)arg1 onCredentialWithIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)paymentWebService:(id)arg1 accountAttestationAnonymizationSaltWithCompletion:(/*^block*/id)arg2 ;
-(void)paymentWebService:(id)arg1 setNewAuthRandom:(/*^block*/id)arg2 ;
-(id)trustedDeviceEnrollmentInfoForWebService:(id)arg1 ;
-(id)paymentWebService:(id)arg1 filterVerificationChannels:(id)arg2 ;
-(void)paymentWebService:(id)arg1 addSharingInvitationReceipts:(id)arg2 onCredential:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)familyMembersWithCompletion:(/*^block*/id)arg1 ;
-(void)paymentWebService:(id)arg1 declineRelatedSharingInvitationsIfNecessary:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setMaximumPaymentCards:(unsigned long long)arg1 ;
-(void)_validateCommonPreconditionsWithCompletion:(/*^block*/id)arg1 ;
-(void)_credentialWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)createApplePayTrustKeyWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)paymentWebService:(id)arg1 validateAddPreconditionsWithCompletion:(/*^block*/id)arg2 ;
-(BOOL)secureElementIsAvailable;
-(void)startBackgroundVerificationObserverForPass:(id)arg1 verificationMethod:(id)arg2 ;
-(void)_passOwnershipTokenWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_removeSharingInvitation:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)signatureForAuthToken:(id)arg1 webService:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_conflictingExpressPassIdentifiersForPassInformation:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)paymentWebService:(id)arg1 setNewAuthRandomIfNecessaryReturningPairingState:(/*^block*/id)arg2 ;
-(void)_subcredentialInvitationsWithCompletion:(/*^block*/id)arg1 ;
-(id)supportedFeatureIdentifiersForAccountProvisioningWithPaymentWebService:(id)arg1 ;
-(void)paymentWebService:(id)arg1 canAcceptInvitation:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)applePayTrustKeyForIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)claimSecureElementForCurrentUser;
-(void)paymentWebService:(id)arg1 validateAcceptInvitationPreconditionsWithCompletion:(/*^block*/id)arg2 ;
-(void)paymentWebServiceDidUpdateConfiguration:(id)arg1 ;
-(void)paymentWebService:(id)arg1 deleteApplicationWithAID:(id)arg2 ;
-(void)deleteApplePayTrustKeyWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_downloadAllPaymentPasses;
-(void)noteForegroundVerificationObserverActive:(BOOL)arg1 ;
-(void)_setExpressWithPassInformation:(id)arg1 credential:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)paymentWebService:(id)arg1 revokeSharedCredentialGroup:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)notePasscodeUpgradeFlowWillBeginWithCompletion:(/*^block*/id)arg1 ;
-(void)performDeviceCheckInWithCompletion:(/*^block*/id)arg1 ;
-(void)performProductActionRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_paymentWebService:(id)arg1 pass:(id)arg2 withExpressInfo:(id)arg3 hasDisqualifyingConflicts:(/*^block*/id)arg4 ;
-(void)_removeExpressPassWithUniqueIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)noteProvisioningDidBegin;
-(void)paymentWebService:(id)arg1 subcredentialInvitationsWithCompletion:(/*^block*/id)arg2 ;
-(void)paymentWebService:(id)arg1 isPassExpressWithUniqueIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_conflictingExpressPassIdentifiersForPassInformation:(id)arg1 withReferenceExpressState:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)paymentWebService:(id)arg1 addSubcredential:(id)arg2 fromSharingInvitation:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(id)deviceIDSIdentifier;
-(void)paymentWebService:(id)arg1 updateAccountWithIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)paymentWebService:(id)arg1 handlePotentialExpressPass:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_enforceUpgradedPasscodePolicyWithCompletion:(/*^block*/id)arg1 ;
-(id)supportedFeatureIdentifiersWithPaymentWebService:(id)arg1 ;
-(void)_initializeSecureElement:(/*^block*/id)arg1 ;
-(void)paymentWebService:(id)arg1 setDefaultPaymentPassUniqueIdentifier:(id)arg2 ;
-(void)renewAppleAccountWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)paymentWebService:(id)arg1 hasPassesOfType:(unsigned long long)arg2 ;
-(void)_setAccountAttestationAnonymizationSalt:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)paymentWebService:(id)arg1 matchingInvitationOnDevice:(id)arg2 withTimeout:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)_setDefaultPaymentPassUniqueIdentifier:(id)arg1 ;
-(BOOL)supportsExpressForAutomaticSelectionTechnologyType:(long long)arg1 ;
-(void)_performProductActionRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)paymentWebService:(id)arg1 registrationDataWithCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)supportsCredentialType:(long long)arg1 ;
-(BOOL)paymentWebServiceSupportsAccounts:(id)arg1 ;
-(void)_consistencyCheck;
-(void)paymentWebService:(id)arg1 credentialWithIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)noteProvisioningUserInterfaceDidAppear;
-(id)secureElementIdentifiers;
-(void)dealloc;
-(void)availableProductsWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)paymentWebService:(id)arg1 canProvisionPaymentPassWithPrimaryAccountIdentifier:(id)arg2 ;
-(void)paymentWebService:(id)arg1 removeSharingInvitationReceipts:(id)arg2 onCredential:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)notePasscodeUpgradeFlowDidEnd;
@end

