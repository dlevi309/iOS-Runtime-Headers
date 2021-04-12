/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/PKPass.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSSet, PKPaymentApplication, NSURL, PKPassAuxiliaryRegistrationRequirements, NSArray, PKCurrencyAmount, PKTransitPassProperties;

@interface PKSecureElementPass : PKPass <NSCopying, NSSecureCoding> {

	BOOL _supportsDPANNotifications;
	BOOL _supportsFPANNotifications;
	BOOL _supportsDefaultCardSelection;
	BOOL _hasAssociatedPeerPaymentAccount;
	BOOL _supportsPeerPayment;
	BOOL _supportsSerialNumberBasedProvisioning;
	BOOL _paymentOptionSelectable;
	BOOL _cobranded;
	BOOL _requiresTransferSerialNumberBasedProvisioning;
	NSString* _primaryAccountIdentifier;
	NSString* _primaryAccountNumberSuffix;
	long long _cardType;
	NSSet* _associatedApplicationIdentifiers;
	NSSet* _associatedWebDomains;
	NSString* _sanitizedPrimaryAccountNumber;
	NSString* _sanitizedPrimaryAccountName;
	NSString* _associatedAccountServiceAccountIdentifier;
	NSString* _issuerCountryCode;
	NSString* _topLeftBackgroundTitle;
	NSString* _topRightBackgroundTitle;
	NSSet* _paymentApplications;
	NSSet* _devicePaymentApplications;
	PKPaymentApplication* _devicePrimaryPaymentApplication;
	PKPaymentApplication* _devicePrimaryContactlessPaymentApplication;
	PKPaymentApplication* _devicePrimaryInAppPaymentApplication;
	PKPaymentApplication* _devicePrimaryBarcodePaymentApplication;
	NSSet* _deviceInAppPaymentApplications;
	NSString* _transactionSourceIdentifier;
	NSString* _cobrandName;
	NSURL* _transactionServiceURL;
	NSURL* _transactionServiceRegistrationURL;
	NSString* _transactionPushTopic;
	NSURL* _messageServiceURL;
	NSURL* _messageServiceRegistrationURL;
	NSString* _messagePushTopic;
	NSString* _appURLScheme;
	NSString* _customerServiceIdentifier;
	NSString* _localizedSuspendedReason;
	PKPassAuxiliaryRegistrationRequirements* _auxiliaryRegistrationRequirements;
	NSArray* _availableActions;

}

@property (nonatomic,retain) PKCurrencyAmount * peerPaymentBalance; 
@property (assign,nonatomic) long long cardType;                                                                     //@synthesize cardType=_cardType - In the implementation block
@property (nonatomic,copy) NSSet * associatedApplicationIdentifiers;                                                 //@synthesize associatedApplicationIdentifiers=_associatedApplicationIdentifiers - In the implementation block
@property (nonatomic,copy) NSSet * associatedWebDomains;                                                             //@synthesize associatedWebDomains=_associatedWebDomains - In the implementation block
@property (nonatomic,copy) NSString * primaryAccountIdentifier;                                                      //@synthesize primaryAccountIdentifier=_primaryAccountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * primaryAccountNumberSuffix;                                                    //@synthesize primaryAccountNumberSuffix=_primaryAccountNumberSuffix - In the implementation block
@property (nonatomic,copy) NSString * sanitizedPrimaryAccountNumber;                                                 //@synthesize sanitizedPrimaryAccountNumber=_sanitizedPrimaryAccountNumber - In the implementation block
@property (nonatomic,copy) NSString * sanitizedPrimaryAccountName;                                                   //@synthesize sanitizedPrimaryAccountName=_sanitizedPrimaryAccountName - In the implementation block
@property (assign,nonatomic) BOOL supportsDPANNotifications;                                                         //@synthesize supportsDPANNotifications=_supportsDPANNotifications - In the implementation block
@property (assign,nonatomic) BOOL supportsFPANNotifications;                                                         //@synthesize supportsFPANNotifications=_supportsFPANNotifications - In the implementation block
@property (assign,nonatomic) BOOL supportsDefaultCardSelection;                                                      //@synthesize supportsDefaultCardSelection=_supportsDefaultCardSelection - In the implementation block
@property (assign,nonatomic) BOOL hasAssociatedPeerPaymentAccount;                                                   //@synthesize hasAssociatedPeerPaymentAccount=_hasAssociatedPeerPaymentAccount - In the implementation block
@property (nonatomic,copy) NSString * associatedAccountServiceAccountIdentifier;                                     //@synthesize associatedAccountServiceAccountIdentifier=_associatedAccountServiceAccountIdentifier - In the implementation block
@property (assign,nonatomic) BOOL supportsPeerPayment;                                                               //@synthesize supportsPeerPayment=_supportsPeerPayment - In the implementation block
@property (nonatomic,copy) NSString * issuerCountryCode;                                                             //@synthesize issuerCountryCode=_issuerCountryCode - In the implementation block
@property (assign,nonatomic) BOOL supportsSerialNumberBasedProvisioning;                                             //@synthesize supportsSerialNumberBasedProvisioning=_supportsSerialNumberBasedProvisioning - In the implementation block
@property (assign,getter=isPaymentOptionSelectable,nonatomic) BOOL paymentOptionSelectable;                          //@synthesize paymentOptionSelectable=_paymentOptionSelectable - In the implementation block
@property (nonatomic,copy) NSString * topLeftBackgroundTitle;                                                        //@synthesize topLeftBackgroundTitle=_topLeftBackgroundTitle - In the implementation block
@property (nonatomic,copy) NSString * topRightBackgroundTitle;                                                       //@synthesize topRightBackgroundTitle=_topRightBackgroundTitle - In the implementation block
@property (nonatomic,copy) NSSet * paymentApplications;                                                              //@synthesize paymentApplications=_paymentApplications - In the implementation block
@property (nonatomic,copy) NSSet * devicePaymentApplications;                                                        //@synthesize devicePaymentApplications=_devicePaymentApplications - In the implementation block
@property (nonatomic,retain) PKPaymentApplication * devicePrimaryPaymentApplication;                                 //@synthesize devicePrimaryPaymentApplication=_devicePrimaryPaymentApplication - In the implementation block
@property (nonatomic,retain) PKPaymentApplication * devicePrimaryContactlessPaymentApplication;                      //@synthesize devicePrimaryContactlessPaymentApplication=_devicePrimaryContactlessPaymentApplication - In the implementation block
@property (nonatomic,retain) PKPaymentApplication * devicePrimaryInAppPaymentApplication;                            //@synthesize devicePrimaryInAppPaymentApplication=_devicePrimaryInAppPaymentApplication - In the implementation block
@property (nonatomic,retain) PKPaymentApplication * devicePrimaryBarcodePaymentApplication;                          //@synthesize devicePrimaryBarcodePaymentApplication=_devicePrimaryBarcodePaymentApplication - In the implementation block
@property (nonatomic,retain) NSSet * deviceInAppPaymentApplications;                                                 //@synthesize deviceInAppPaymentApplications=_deviceInAppPaymentApplications - In the implementation block
@property (nonatomic,copy) NSString * transactionSourceIdentifier;                                                   //@synthesize transactionSourceIdentifier=_transactionSourceIdentifier - In the implementation block
@property (getter=isPrivateLabel,nonatomic,readonly) BOOL privateLabel; 
@property (assign,getter=isCobranded,nonatomic) BOOL cobranded;                                                      //@synthesize cobranded=_cobranded - In the implementation block
@property (nonatomic,copy) NSString * cobrandName;                                                                   //@synthesize cobrandName=_cobrandName - In the implementation block
@property (nonatomic,copy) NSURL * transactionServiceURL;                                                            //@synthesize transactionServiceURL=_transactionServiceURL - In the implementation block
@property (nonatomic,copy) NSURL * transactionServiceRegistrationURL;                                                //@synthesize transactionServiceRegistrationURL=_transactionServiceRegistrationURL - In the implementation block
@property (nonatomic,copy) NSString * transactionPushTopic;                                                          //@synthesize transactionPushTopic=_transactionPushTopic - In the implementation block
@property (nonatomic,copy) NSURL * messageServiceURL;                                                                //@synthesize messageServiceURL=_messageServiceURL - In the implementation block
@property (nonatomic,copy) NSURL * messageServiceRegistrationURL;                                                    //@synthesize messageServiceRegistrationURL=_messageServiceRegistrationURL - In the implementation block
@property (nonatomic,copy) NSString * messagePushTopic;                                                              //@synthesize messagePushTopic=_messagePushTopic - In the implementation block
@property (nonatomic,copy) NSString * appURLScheme;                                                                  //@synthesize appURLScheme=_appURLScheme - In the implementation block
@property (nonatomic,copy) NSString * customerServiceIdentifier;                                                     //@synthesize customerServiceIdentifier=_customerServiceIdentifier - In the implementation block
@property (nonatomic,copy) NSString * localizedSuspendedReason;                                                      //@synthesize localizedSuspendedReason=_localizedSuspendedReason - In the implementation block
@property (nonatomic,copy) PKPassAuxiliaryRegistrationRequirements * auxiliaryRegistrationRequirements;              //@synthesize auxiliaryRegistrationRequirements=_auxiliaryRegistrationRequirements - In the implementation block
@property (assign,nonatomic) BOOL requiresTransferSerialNumberBasedProvisioning;                                     //@synthesize requiresTransferSerialNumberBasedProvisioning=_requiresTransferSerialNumberBasedProvisioning - In the implementation block
@property (nonatomic,copy) NSArray * availableActions;                                                               //@synthesize availableActions=_availableActions - In the implementation block
@property (nonatomic,copy,readonly) PKTransitPassProperties * transitProperties; 
@property (nonatomic,readonly) BOOL supportsOnlyTransit; 
@property (nonatomic,readonly) NSArray * upgradeRequests; 
@property (readonly) NSString * deviceAccountIdentifier; 
@property (readonly) NSString * deviceAccountNumberSuffix; 
@property (nonatomic,readonly) long long passActivationState; 
@property (nonatomic,copy,readonly) NSString * devicePassIdentifier; 
@property (nonatomic,copy,readonly) NSString * pairedTerminalIdentifier; 
+(unsigned long long)defaultSettings;
+(BOOL)supportsSecureCoding;
+(id)displayableErrorForTransitAction:(id)arg1 andReason:(unsigned long long)arg2 ;
+(id)displayableNoPaymentNetworkErrorMessageForAction:(id)arg1 isTransit:(BOOL)arg2 ;
+(id)displayableErrorForAction:(id)arg1 andReason:(unsigned long long)arg2 ;
-(BOOL)hasImmediateAutomaticSelectionCriterion;
-(NSString *)deviceAccountNumberSuffix;
-(BOOL)supportsSerialNumberBasedProvisioning;
-(BOOL)requiresTransferSerialNumberBasedProvisioning;
-(void)encodeWithCoder:(id)arg1 ;
-(void)sanitizePaymentApplications;
-(BOOL)supportsBarcodePayment;
-(PKCurrencyAmount *)peerPaymentBalance;
-(long long)cardType;
-(BOOL)isCobranded;
-(void)setPeerPaymentBalance:(PKCurrencyAmount *)arg1 ;
-(PKTransitPassProperties *)transitProperties;
-(NSString *)appURLScheme;
-(BOOL)isSuicaPass;
-(NSString *)deviceAccountIdentifier;
-(NSString *)cobrandName;
-(PKPaymentApplication *)devicePrimaryInAppPaymentApplication;
-(id)addValueURL;
-(void)setPaymentApplications:(NSSet *)arg1 ;
-(void)setCobrandName:(NSString *)arg1 ;
-(void)setAssociatedApplicationIdentifiers:(NSSet *)arg1 ;
-(void)setAssociatedWebDomains:(NSSet *)arg1 ;
-(void)setPrimaryAccountIdentifier:(NSString *)arg1 ;
-(void)setIssuerCountryCode:(NSString *)arg1 ;
-(void)setPrimaryAccountNumberSuffix:(NSString *)arg1 ;
-(void)setSanitizedPrimaryAccountNumber:(NSString *)arg1 ;
-(void)setSanitizedPrimaryAccountName:(NSString *)arg1 ;
-(void)setCobranded:(BOOL)arg1 ;
-(void)setTopLeftBackgroundTitle:(NSString *)arg1 ;
-(void)setTopRightBackgroundTitle:(NSString *)arg1 ;
-(void)setSupportsDPANNotifications:(BOOL)arg1 ;
-(void)setSupportsFPANNotifications:(BOOL)arg1 ;
-(void)setSupportsDefaultCardSelection:(BOOL)arg1 ;
-(void)setSupportsSerialNumberBasedProvisioning:(BOOL)arg1 ;
-(void)setPaymentOptionSelectable:(BOOL)arg1 ;
-(void)setRequiresTransferSerialNumberBasedProvisioning:(BOOL)arg1 ;
-(void)setHasAssociatedPeerPaymentAccount:(BOOL)arg1 ;
-(void)setDevicePaymentApplications:(NSSet *)arg1 ;
-(void)setAssociatedAccountServiceAccountIdentifier:(NSString *)arg1 ;
-(void)setTransactionSourceIdentifier:(NSString *)arg1 ;
-(void)setDeviceInAppPaymentApplications:(NSSet *)arg1 ;
-(void)setDevicePrimaryPaymentApplication:(PKPaymentApplication *)arg1 ;
-(void)setDevicePrimaryContactlessPaymentApplication:(PKPaymentApplication *)arg1 ;
-(BOOL)isChinaTransitCredential;
-(void)setDevicePrimaryInAppPaymentApplication:(PKPaymentApplication *)arg1 ;
-(void)setDevicePrimaryBarcodePaymentApplication:(PKPaymentApplication *)arg1 ;
-(BOOL)isPrivateLabel;
-(BOOL)availableForAutomaticPresentationUsingBeaconContext;
-(id)deviceContactlessPaymentApplications;
-(unsigned long long)_activationStateForApplicationState:(long long)arg1 ;
-(BOOL)isOctopusPass;
-(long long)effectiveContactlessPaymentApplicationState;
-(id)sortedPaymentApplications:(id)arg1 ascending:(BOOL)arg2 ;
-(BOOL)supportsWebPaymentMode:(long long)arg1 withExclusionList:(id)arg2 clientOSVersion:(id)arg3 ;
-(id)_transactionServiceURLOverride;
-(NSURL *)transactionServiceURL;
-(NSURL *)transactionServiceRegistrationURL;
-(NSString *)transactionPushTopic;
-(NSURL *)messageServiceURL;
-(NSURL *)messageServiceRegistrationURL;
-(NSString *)messagePushTopic;
-(NSString *)customerServiceIdentifier;
-(id)_localizedSuspendedReasonForAID:(id)arg1 ;
-(unsigned long long)transitCommutePlanType;
-(id)transitCommutePlans;
-(id)notificationCenterTitle;
-(NSArray *)availableActions;
-(NSArray *)upgradeRequests;
-(PKPassAuxiliaryRegistrationRequirements *)auxiliaryRegistrationRequirements;
-(id)dynamicLayerConfiguration;
-(id)_launchURLForPassAction:(id)arg1 ;
-(BOOL)hasCredentials;
-(BOOL)canPerformAction:(id)arg1 unableReason:(unsigned long long*)arg2 displayableError:(id*)arg3 ;
-(NSString *)transactionSourceIdentifier;
-(id)paymentApplicationForAID:(id)arg1 ;
-(id)primaryPaymentApplicationForSecureElementIdentifiers:(id)arg1 ;
-(id)paymentApplicationsForSecureElementIdentifiers:(id)arg1 ;
-(BOOL)isDevicePrimaryPaymentApplicationPersonalized;
-(BOOL)needsHardcodedReminderOptions;
-(NSString *)devicePassIdentifier;
-(NSString *)issuerCountryCode;
-(NSString *)pairedTerminalIdentifier;
-(BOOL)requiresFelicaSecureElement;
-(BOOL)shouldIgnoreTransactionUpdatesSwitch;
-(long long)passActivationState;
-(BOOL)availableForAutomaticPresentationUsingVASContext;
-(BOOL)availableForAutomaticPresentationUsingInAppOrWebContext;
-(id)sanitizedDeviceAccountNumber;
-(PKPaymentApplication *)devicePrimaryBarcodePaymentApplication;
-(unsigned long long)contactlessActivationState;
-(BOOL)supportsOnlyTransit;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)hasContactlessDevicePaymentApplicationsAvailable;
-(void)updateDevicePaymentApplicationsWithSecureElementIdentifiers:(id)arg1 ;
-(NSString *)localizedSuspendedReason;
-(BOOL)shouldSuppressNoChargeAmount;
-(BOOL)isContactlessPaymentSupportedForTransitNetworks:(id)arg1 ;
-(id)deviceTransactionSourceIdentifiers;
-(BOOL)hasDeviceTransactionSourceIdentifier:(id)arg1 ;
-(BOOL)supportsDPANNotifications;
-(void)setAppURLScheme:(NSString *)arg1 ;
-(BOOL)supportsFPANNotifications;
-(BOOL)supportsDefaultCardSelection;
-(BOOL)supportsPeerPayment;
-(void)setSupportsPeerPayment:(BOOL)arg1 ;
-(BOOL)isPaymentOptionSelectable;
-(NSString *)topLeftBackgroundTitle;
-(NSString *)topRightBackgroundTitle;
-(void)setTransactionServiceURL:(NSURL *)arg1 ;
-(void)setTransactionServiceRegistrationURL:(NSURL *)arg1 ;
-(void)setTransactionPushTopic:(NSString *)arg1 ;
-(void)setMessageServiceURL:(NSURL *)arg1 ;
-(void)setMessagePushTopic:(NSString *)arg1 ;
-(void)setMessageServiceRegistrationURL:(NSURL *)arg1 ;
-(void)setCustomerServiceIdentifier:(NSString *)arg1 ;
-(void)setLocalizedSuspendedReason:(NSString *)arg1 ;
-(void)setAvailableActions:(NSArray *)arg1 ;
-(void)setAuxiliaryRegistrationRequirements:(PKPassAuxiliaryRegistrationRequirements *)arg1 ;
-(NSString *)primaryAccountIdentifier;
-(NSSet *)devicePaymentApplications;
-(PKPaymentApplication *)devicePrimaryContactlessPaymentApplication;
-(NSSet *)paymentApplications;
-(BOOL)isTransitPass;
-(BOOL)hasAssociatedPeerPaymentAccount;
-(NSString *)associatedAccountServiceAccountIdentifier;
-(void)setCardType:(long long)arg1 ;
-(NSSet *)associatedWebDomains;
-(NSSet *)associatedApplicationIdentifiers;
-(BOOL)supportsWebPaymentMode:(long long)arg1 withExclusionList:(id)arg2 ;
-(NSSet *)deviceInAppPaymentApplications;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 bundle:(id)arg2 ;
-(NSString *)sanitizedPrimaryAccountName;
-(NSString *)sanitizedPrimaryAccountNumber;
-(NSString *)primaryAccountNumberSuffix;
-(PKPaymentApplication *)devicePrimaryPaymentApplication;
-(BOOL)isAccessPass;
@end

