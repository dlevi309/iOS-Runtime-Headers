/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/PKPaymentServiceDelegate.h>
#import <libobjc.A.dylib/PKPeerPaymentAccountResolutionControllerDelegate.h>
#import <libobjc.A.dylib/PKPaymentDataProviderDelegate.h>
#import <libobjc.A.dylib/PKSwitchSpinnerTableCellDelegate.h>
#import <libobjc.A.dylib/PKSubcredentialProvisioningFlowControllerDelegate.h>
#import <libobjc.A.dylib/PKPaymentVerificationControllerDelegate.h>
#import <libobjc.A.dylib/PKPaymentPassTableCellDelegate.h>

@protocol PKPassbookSettingsDataSource, PKPassLibraryDataProvider, PKPaymentDataProvider, PKPaymentOptionsProtocol, PKPassbookPeerPaymentSettingsDelegate, PKPassbookSettingsDelegate;
@class PKPaymentPreferencesViewController, PKPaymentPreference, PKPaymentPreferenceCard, PKPaymentVerificationController, PKPaymentWebService, NSString, NSArray, PSSpecifier, PKPeerPaymentWebService, PKPeerPaymentAccountResolutionController, PKPeerPaymentAccount, PKExpressPassController, PKAccountService, NSMutableDictionary, LAContext, PKContactFormatValidator;

@interface PKPassbookSettingsController : NSObject <PKPaymentServiceDelegate, PKPeerPaymentAccountResolutionControllerDelegate, PKPaymentDataProviderDelegate, PKSwitchSpinnerTableCellDelegate, PKSubcredentialProvisioningFlowControllerDelegate, PKPaymentVerificationControllerDelegate, PKPaymentPassTableCellDelegate> {

	id<PKPassbookSettingsDataSource> _dataSource;
	id<PKPassLibraryDataProvider> _passLibraryDataProvider;
	id<PKPaymentDataProvider> _paymentDataProvider;
	id<PKPaymentOptionsProtocol> _optionsDelegate;
	long long _context;
	PKPaymentPreferencesViewController* _defaultCardsController;
	PKPaymentPreference* _availableCards;
	PKPaymentPreferenceCard* _unavailableCards;
	PKPaymentVerificationController* _verificationController;
	PKPaymentWebService* _webService;
	NSString* _defaultCardIdentifier;
	NSString* _provisioningPassIdentifier;
	NSArray* _paymentPasses;
	NSArray* _otherPasses;
	NSArray* _paymentPassSpecifiers;
	NSArray* _otherPassSpecifiers;
	NSArray* _companionPasses;
	NSArray* _hiddenCompanionPasses;
	NSArray* _companionPassSpecifiers;
	NSArray* _lockscreenSwitchSpecifiers;
	NSArray* _handoffSwitchSpecifiers;
	PSSpecifier* _addCardButtonSpecifier;
	PSSpecifier* _paymentCardsGroupSpecifier;
	PSSpecifier* _otherCardsGroupSpecifier;
	PSSpecifier* _companionCardsGroupSpecifier;
	PSSpecifier* _defaultPaymentSpecifier;
	PSSpecifier* _defaultShippingAddressSpecifier;
	PSSpecifier* _defaultContactEmailSpecifier;
	PSSpecifier* _defaultContactPhoneSpecifier;
	id<PKPassbookPeerPaymentSettingsDelegate> _peerPaymentDelegate;
	PKPeerPaymentWebService* _peerPaymentWebService;
	PSSpecifier* _peerPaymentSwitchSpecifier;
	PSSpecifier* _peerPaymentTinkerSetupButton;
	PKPeerPaymentAccountResolutionController* _peerPaymentAccountResolutionController;
	PKPeerPaymentAccount* _peerPaymentAccount;
	BOOL _registeringForPeerPayment;
	PKExpressPassController* _expressPassController;
	PKAccountService* _accountService;
	NSMutableDictionary* _pairedDeviceSupportsFeatureByAccountID;
	LAContext* _LAContext;
	BOOL _hasExpressCapablePass;
	NSString* _expressTransitSubtitleText;
	NSString* _expressTransitSectionFooterText;
	PSSpecifier* _defaultExpressTransitSpecifier;
	NSMutableDictionary* _latestTransitBalanceModel;
	id<PKPaymentDataProvider> _companionPaymentDataProvider;
	int _notifyToken;
	PKContactFormatValidator* _contactFormatValidator;
	BOOL _ownerCredentialSharingAllowed;
	BOOL _canAcceptCredentialInvitations;
	id<PKPassbookSettingsDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKPassbookSettingsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)specifiers;
-(void)_updateBalancesWithServerBalances:(id)arg1 transitPassProperties:(id)arg2 forPassWithUniqueIdentifier:(id)arg3 ;
-(id<PKPassbookSettingsDelegate>)delegate;
-(void)_reloadPassData;
-(void)_peerPaymentAccountDidChangeNotification:(id)arg1 ;
-(void)_peerPaymentWebServiceDidChangeNotification:(id)arg1 ;
-(void)_accountServiceAccountDidChangeNotification:(id)arg1 ;
-(void)_updateCardsGroupSpecifier;
-(void)_updateCompanionGroupSpecifier;
-(void)_updateAddButtonSpecifier;
-(void)_regionConfigurationDidChangeNotification;
-(void)_expressPassDidChange;
-(void)refreshExpressTransitCard;
-(id)_companionPassSpecifiers;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2 ;
-(void)setDelegate:(id<PKPassbookSettingsDelegate>)arg1 ;
-(void)_checkPairedDeviceSupportOfHiddenPassesAndRefreshUIIfNecessary;
-(void)addCardTapped;
-(id)_peerPaymentTinkerGroupSpecifiers;
-(id)_peerPaymentGroupSpecifiers;
-(id)_paymentPassSpecifiers;
-(id)_otherPassSpecifiers;
-(id)_transitDefaultsGroupSpecifiers;
-(id)_defaultsGroupSpecifiers;
-(id)_handoffSwitchGroupSpecifiers;
-(id)_lockscreenSwitchGroupSpecifiers;
-(id)_restrictedModeSpecifier;
-(void)_refreshPasses;
-(id)_bridgeSpecifiers;
-(id)_settingsSpecifiers;
-(id)watchPassReaderIdentifiers;
-(BOOL)canShareCompanionPass:(id)arg1 ;
-(void)_updateTransitExpressPassIdentifiersWithReload:(BOOL)arg1 ;
-(void)_updateCompanionPassesAddButton;
-(void)_updateDefaultCardsPreferences;
-(id)_defaultPaymentSpecifier;
-(BOOL)_useAlternateExpressTitle;
-(id)passWithUniqueIdentifier:(id)arg1 ;
-(id)_fallbackExpressTransitFooterText;
-(id)_peerPaymentSwitchSpecifier;
-(BOOL)_isPeerPaymentRegistered;
-(id)_specifierForPassUniqueID:(id)arg1 ;
-(long long)_paymentSetupContextForSettingsContext:(long long)arg1 ;
-(void)openPaymentSetupWithMode:(long long)arg1 referrerIdentifier:(id)arg2 allowedFeatureIdentifiers:(id)arg3 ;
-(void)addCardTappedForPaymentPassWithUniqueID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_performPhoneToWatchProvisioningForPaymentPass:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_presentPeerPaymentSetupFlowWithAmount:(id)arg1 flowState:(unsigned long long)arg2 senderAddress:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_passSpecifiersForPasses:(id)arg1 peerPaymentPassUniqueID:(id)arg2 showPeerPaymentSetup:(BOOL)arg3 ;
-(void)_showCardDetails:(id)arg1 ;
-(void)_fetchBalancesAndTransitPassPropertiesForPass:(id)arg1 withDataProvider:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_presentFeatureNotEnabledForDemoForSpecifier:(id)arg1 ;
-(void)_presentPeerPaymentSetupFlowForSpecifier:(id)arg1 ;
-(void)_presentPeerPaymentReOpenCardFlowForSpecifier:(id)arg1 ;
-(void)_updateCardSpecifier:(id)arg1 withAccountStateForPaymentPass:(id)arg2 ;
-(id)_passSpecifiersForPasses:(id)arg1 ;
-(void)_setHandoffSwitchSetting:(id)arg1 forSpecifier:(id)arg2 ;
-(void)subcredentialProvisioningFlowController:(id)arg1 didFinishWithPass:(id)arg2 error:(id)arg3 ;
-(void)userCanceledPairingWithSubcredentialProvisioningFlowController:(id)arg1 ;
-(id)_handoffSwitchSettingForSpecifier:(id)arg1 ;
-(void)_setDoubleClickSwitchSetting:(id)arg1 forSpecifier:(id)arg2 ;
-(id)_doubleClickSwitchSettingForSpecifier:(id)arg1 ;
-(id)_defaultShippingAddressSpecifier;
-(id)_defaultContactEmailSpecifier;
-(id)_defaultContactPhoneSpecifier;
-(void)_handleDefaultPaymentPassChangedTo:(id)arg1 withSender:(id)arg2 optionsController:(id)arg3 canPrompt:(BOOL)arg4 ;
-(long long)_paymentPreferencesStyle;
-(id)_getDefaultPaymentCard;
-(void)_showDefaultPaymentOptions:(id)arg1 ;
-(id)_getDefaultShippingAddress;
-(void)_showDefaultShippingAddressOptions:(id)arg1 ;
-(id)_getDefaultContactEmail;
-(void)_showDefaultContactEmailOptions:(id)arg1 ;
-(id)_getDefaultContactPhone;
-(void)_showDefaultContactPhoneOptions:(id)arg1 ;
-(id)_displayableStringForLabeledValue:(id)arg1 ;
-(void)refreshPeerPaymentStatus;
-(void)_presentPeerPaymentSetupFlowForSpecifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_requestDelegatePresentViewController:(id)arg1 ;
-(void)_registerForPeerPaymentWithSpecifier:(id)arg1 ;
-(void)setupPeerPaymentTinkerButtonTapped;
-(void)_unregisterForPeerPaymentWithSpecifier:(id)arg1 ;
-(id)_defaultExpressTransitSpecifier;
-(id)_defaultExpressTransitPassDescription;
-(void)_openExpressTransitSettings:(id)arg1 ;
-(void)openExpressTransitSettings:(id)arg1 withPassUniqueIdentifier:(id)arg2 ;
-(void)_handleProvisioningError:(id)arg1 viewController:(id)arg2 ;
-(void)_setCardAddProvisioningButtonEnabled:(BOOL)arg1 forPaymentPass:(id)arg2 ;
-(id)_matchingInvitationForPass:(id)arg1 withInvitations:(id)arg2 ;
-(void)refreshPasses;
-(void)_credentialPairingContextForPass:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_presentCredentialSetupViewControllerForPaymentPass:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_presentPaymentSetupViewController:(id)arg1 paymentPass:(id)arg2 ;
-(void)_transitPropertiesForPaymentPass:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)switchSpinnerCell:(id)arg1 hasToggledSwitch:(BOOL)arg2 ;
-(void)refreshDefaultCard;
-(void)addButtonPressedForPaymentPass:(id)arg1 ;
-(void)verifyButtonPressedForPaymentPass:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 dataSource:(id)arg2 context:(long long)arg3 ;
-(void)_refreshCompanionGroupSpecififiers;
-(id)rendererStateForPaymentPass:(id)arg1 ;
-(void)removeFooterForSpecifier:(id)arg1 ;
-(void)addCardTappedForPaymentPassWithUniqueID:(id)arg1 ;
-(void)openPeerPaymentSetupWithCurrenyAmount:(id)arg1 state:(unsigned long long)arg2 senderAddress:(id)arg3 ;
-(id)_currentDefaultPaymentPass;
-(void)_openPrivacyLink;
-(void)presentVerificationViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)peerPaymentAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)peerPaymentAccountResolutionController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(BOOL)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2 ;
-(void)didUpdateDefaultPaymentPassWithUniqueIdentifier:(id)arg1 ;
-(void)dealloc;
@end

