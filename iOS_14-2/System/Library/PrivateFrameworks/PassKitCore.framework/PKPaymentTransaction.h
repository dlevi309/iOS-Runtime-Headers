/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PKCloudStoreCoding.h>

@class NSString, NSDecimalNumber, NSArray, NSDate, PKMerchant, NSTimeZone, NSNumber, NSData, PKPaymentTransactionForeignExchangeInformation, PKPaymentTransactionFees, NSUUID, PKPaymentTransactionRewards, NSSet, NSOrderedSet, PKAccountEvent, PKInstallmentPlanPayment, PKInstallmentPlan, NSDictionary, NSURL, PKTransactionAuthenticationContext, PKCurrencyAmount, CLLocation;

@interface PKPaymentTransaction : NSObject <NSSecureCoding, PKCloudStoreCoding> {

	BOOL _coarseLocation;
	BOOL _enRoute;
	BOOL _shouldSuppressDate;
	BOOL _suppressNotifications;
	BOOL _deviceScoreIdentifiersRequired;
	BOOL _deviceScoreIdentifiersSubmitted;
	BOOL _isCloudKitArchived;
	BOOL _processedForLocation;
	BOOL _processedForMerchantCleanup;
	BOOL _requiresMerchantReprocessing;
	BOOL _processedForStations;
	BOOL _hasAssociatedPaymentApplication;
	BOOL _hasNotificationServiceData;
	BOOL _originatedByDevice;
	BOOL _fuzzyMatched;
	BOOL _hasAdditionalOffers;
	NSString* _identifier;
	NSString* _serviceIdentifier;
	NSString* _paymentHash;
	NSDecimalNumber* _amount;
	NSDecimalNumber* _subtotalAmount;
	NSString* _currencyCode;
	NSArray* _amounts;
	NSDate* _transactionDate;
	NSDate* _transactionStatusChangedDate;
	NSDate* _expirationDate;
	PKMerchant* _merchant;
	NSString* _locality;
	NSString* _administrativeArea;
	NSTimeZone* _timeZone;
	NSDate* _locationDate;
	double _locationLatitude;
	double _locationLongitude;
	double _locationAltitude;
	double _locationHorizontalAccuracy;
	double _locationVerticalAccuracy;
	long long _transitType;
	unsigned long long _transitModifiers;
	NSString* _stationCodeProvider;
	NSNumber* _cityCode;
	NSData* _startStationCode;
	NSString* _startStation;
	double _startStationLatitude;
	double _startStationLongitude;
	NSData* _endStationCode;
	NSString* _endStation;
	double _endStationLatitude;
	double _endStationLongitude;
	long long _adjustmentType;
	long long _adjustmentTypeReason;
	long long _peerPaymentType;
	long long _accountType;
	NSString* _peerPaymentCounterpartHandle;
	NSString* _peerPaymentMemo;
	NSDate* _peerPaymentMessageReceivedDate;
	PKPaymentTransactionForeignExchangeInformation* _foreignExchangeInformation;
	PKPaymentTransactionFees* _fees;
	NSDecimalNumber* _primaryFundingSourceAmount;
	NSString* _primaryFundingSourceCurrencyCode;
	NSDecimalNumber* _secondaryFundingSourceAmount;
	NSString* _secondaryFundingSourceCurrencyCode;
	long long _secondaryFundingSourceNetwork;
	NSString* _secondaryFundingSourceDPANSuffix;
	NSString* _secondaryFundingSourceFPANIdentifier;
	NSString* _secondaryFundingSourceDescription;
	long long _secondaryFundingSourceType;
	NSUUID* _requestDeviceScoreIdentifier;
	NSUUID* _sendDeviceScoreIdentifier;
	NSString* _merchantProvidedTitle;
	NSString* _merchantProvidedDescription;
	NSDecimalNumber* _rewardsTotalAmount;
	NSString* _rewardsTotalCurrencyCode;
	unsigned long long _rewardsEligibilityReason;
	PKPaymentTransactionRewards* _rewards;
	unsigned long long _cardType;
	NSString* _accountIdentifier;
	NSString* _lifecycleIdentifier;
	NSString* _authNetworkData;
	NSString* _clearingNetworkData;
	NSString* _cardIdentifier;
	NSString* _dpanIdentifier;
	NSString* _cardNumberSuffix;
	NSString* _referenceIdentifier;
	unsigned long long _suppressBehavior;
	long long _redemptionType;
	NSSet* _questions;
	NSOrderedSet* _servicingEvents;
	NSArray* _payments;
	PKAccountEvent* _redemptionEvent;
	PKInstallmentPlanPayment* _installmentPayment;
	PKInstallmentPlan* _installmentPlan;
	NSDictionary* _metadata;
	NSDate* _lastMerchantReprocessingDate;
	NSString* _receiptProviderIdentifier;
	NSString* _receiptIdentifier;
	NSURL* _receiptProviderURL;
	NSString* _barcodeIdentifier;
	PKTransactionAuthenticationContext* _authenticationContext;
	NSString* _primaryFundingSourceDescription;
	NSDecimalNumber* _nominalAmount;
	NSArray* _awards;
	NSArray* _amountModifiers;
	NSString* _issueReportIdentifier;
	long long _transactionStatus;
	long long _transactionType;
	long long _technologyType;
	unsigned long long _transactionSource;
	long long _transactionDeclinedReason;
	unsigned long long _updateReasons;
	NSString* _transactionSourceIdentifier;

}

@property (nonatomic,copy) NSString * identifier;                                                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * serviceIdentifier;                                                               //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (nonatomic,copy) NSString * paymentHash;                                                                     //@synthesize paymentHash=_paymentHash - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * amount;                                                                   //@synthesize amount=_amount - In the implementation block
@property (nonatomic,readonly) PKCurrencyAmount * currencyAmount; 
@property (nonatomic,copy) NSDecimalNumber * subtotalAmount;                                                           //@synthesize subtotalAmount=_subtotalAmount - In the implementation block
@property (nonatomic,readonly) PKCurrencyAmount * subtotalCurrencyAmount; 
@property (nonatomic,copy) NSString * currencyCode;                                                                    //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,copy) NSArray * amounts;                                                                          //@synthesize amounts=_amounts - In the implementation block
@property (nonatomic,readonly) NSString * formattedBalanceAdjustmentAmount; 
@property (nonatomic,readonly) NSString * formattedBalanceAdjustmentAbsoluteAmount; 
@property (nonatomic,readonly) NSString * formattedBalanceAdjustmentSubtotalAmount; 
@property (nonatomic,copy) NSDate * transactionDate;                                                                   //@synthesize transactionDate=_transactionDate - In the implementation block
@property (nonatomic,copy) NSDate * transactionStatusChangedDate;                                                      //@synthesize transactionStatusChangedDate=_transactionStatusChangedDate - In the implementation block
@property (nonatomic,copy) NSDate * expirationDate;                                                                    //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,retain) PKMerchant * merchant;                                                                    //@synthesize merchant=_merchant - In the implementation block
@property (nonatomic,retain) NSString * locality;                                                                      //@synthesize locality=_locality - In the implementation block
@property (nonatomic,retain) NSString * administrativeArea;                                                            //@synthesize administrativeArea=_administrativeArea - In the implementation block
@property (nonatomic,__weak,readonly) NSString * displayLocation; 
@property (nonatomic,retain) NSTimeZone * timeZone;                                                                    //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,retain) CLLocation * location; 
@property (nonatomic,retain) NSDate * locationDate;                                                                    //@synthesize locationDate=_locationDate - In the implementation block
@property (assign,nonatomic) double locationLatitude;                                                                  //@synthesize locationLatitude=_locationLatitude - In the implementation block
@property (assign,nonatomic) double locationLongitude;                                                                 //@synthesize locationLongitude=_locationLongitude - In the implementation block
@property (assign,nonatomic) double locationAltitude;                                                                  //@synthesize locationAltitude=_locationAltitude - In the implementation block
@property (assign,nonatomic) double locationHorizontalAccuracy;                                                        //@synthesize locationHorizontalAccuracy=_locationHorizontalAccuracy - In the implementation block
@property (assign,nonatomic) double locationVerticalAccuracy;                                                          //@synthesize locationVerticalAccuracy=_locationVerticalAccuracy - In the implementation block
@property (assign,getter=isCoarseLocation,nonatomic) BOOL coarseLocation;                                              //@synthesize coarseLocation=_coarseLocation - In the implementation block
@property (nonatomic,readonly) CLLocation * preferredLocation; 
@property (assign,nonatomic) long long transitType;                                                                    //@synthesize transitType=_transitType - In the implementation block
@property (assign,nonatomic) unsigned long long transitModifiers;                                                      //@synthesize transitModifiers=_transitModifiers - In the implementation block
@property (assign,nonatomic) BOOL enRoute;                                                                             //@synthesize enRoute=_enRoute - In the implementation block
@property (nonatomic,copy) NSString * stationCodeProvider;                                                             //@synthesize stationCodeProvider=_stationCodeProvider - In the implementation block
@property (nonatomic,copy) NSNumber * cityCode;                                                                        //@synthesize cityCode=_cityCode - In the implementation block
@property (nonatomic,copy) NSData * startStationCode;                                                                  //@synthesize startStationCode=_startStationCode - In the implementation block
@property (nonatomic,copy) NSString * startStation;                                                                    //@synthesize startStation=_startStation - In the implementation block
@property (nonatomic,retain) CLLocation * startStationLocation; 
@property (assign,nonatomic) double startStationLatitude;                                                              //@synthesize startStationLatitude=_startStationLatitude - In the implementation block
@property (assign,nonatomic) double startStationLongitude;                                                             //@synthesize startStationLongitude=_startStationLongitude - In the implementation block
@property (nonatomic,copy) NSData * endStationCode;                                                                    //@synthesize endStationCode=_endStationCode - In the implementation block
@property (nonatomic,copy) NSString * endStation;                                                                      //@synthesize endStation=_endStation - In the implementation block
@property (nonatomic,retain) CLLocation * endStationLocation; 
@property (assign,nonatomic) double endStationLatitude;                                                                //@synthesize endStationLatitude=_endStationLatitude - In the implementation block
@property (assign,nonatomic) double endStationLongitude;                                                               //@synthesize endStationLongitude=_endStationLongitude - In the implementation block
@property (assign,nonatomic) BOOL shouldSuppressDate;                                                                  //@synthesize shouldSuppressDate=_shouldSuppressDate - In the implementation block
@property (assign,nonatomic) BOOL suppressNotifications;                                                               //@synthesize suppressNotifications=_suppressNotifications - In the implementation block
@property (assign,nonatomic) long long adjustmentType;                                                                 //@synthesize adjustmentType=_adjustmentType - In the implementation block
@property (assign,nonatomic) long long adjustmentTypeReason;                                                           //@synthesize adjustmentTypeReason=_adjustmentTypeReason - In the implementation block
@property (assign,nonatomic) long long peerPaymentType;                                                                //@synthesize peerPaymentType=_peerPaymentType - In the implementation block
@property (assign,nonatomic) long long peerPaymentStatus; 
@property (assign,nonatomic) long long accountType;                                                                    //@synthesize accountType=_accountType - In the implementation block
@property (nonatomic,copy) NSString * peerPaymentCounterpartHandle;                                                    //@synthesize peerPaymentCounterpartHandle=_peerPaymentCounterpartHandle - In the implementation block
@property (nonatomic,copy) NSString * peerPaymentMemo;                                                                 //@synthesize peerPaymentMemo=_peerPaymentMemo - In the implementation block
@property (nonatomic,copy) NSDate * peerPaymentMessageReceivedDate;                                                    //@synthesize peerPaymentMessageReceivedDate=_peerPaymentMessageReceivedDate - In the implementation block
@property (nonatomic,retain) PKPaymentTransactionForeignExchangeInformation * foreignExchangeInformation;              //@synthesize foreignExchangeInformation=_foreignExchangeInformation - In the implementation block
@property (nonatomic,retain) PKPaymentTransactionFees * fees;                                                          //@synthesize fees=_fees - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * primaryFundingSourceAmount;                                               //@synthesize primaryFundingSourceAmount=_primaryFundingSourceAmount - In the implementation block
@property (nonatomic,copy) NSString * primaryFundingSourceCurrencyCode;                                                //@synthesize primaryFundingSourceCurrencyCode=_primaryFundingSourceCurrencyCode - In the implementation block
@property (nonatomic,readonly) PKCurrencyAmount * primaryFundingSourceCurrencyAmount; 
@property (nonatomic,copy) NSDecimalNumber * secondaryFundingSourceAmount;                                             //@synthesize secondaryFundingSourceAmount=_secondaryFundingSourceAmount - In the implementation block
@property (nonatomic,copy) NSString * secondaryFundingSourceCurrencyCode;                                              //@synthesize secondaryFundingSourceCurrencyCode=_secondaryFundingSourceCurrencyCode - In the implementation block
@property (nonatomic,readonly) PKCurrencyAmount * secondaryFundingSourceCurrencyAmount; 
@property (assign,nonatomic) long long secondaryFundingSourceNetwork;                                                  //@synthesize secondaryFundingSourceNetwork=_secondaryFundingSourceNetwork - In the implementation block
@property (nonatomic,copy) NSString * secondaryFundingSourceDPANSuffix;                                                //@synthesize secondaryFundingSourceDPANSuffix=_secondaryFundingSourceDPANSuffix - In the implementation block
@property (nonatomic,copy) NSString * secondaryFundingSourceFPANIdentifier;                                            //@synthesize secondaryFundingSourceFPANIdentifier=_secondaryFundingSourceFPANIdentifier - In the implementation block
@property (nonatomic,copy) NSString * secondaryFundingSourceDescription;                                               //@synthesize secondaryFundingSourceDescription=_secondaryFundingSourceDescription - In the implementation block
@property (assign,nonatomic) long long secondaryFundingSourceType;                                                     //@synthesize secondaryFundingSourceType=_secondaryFundingSourceType - In the implementation block
@property (nonatomic,copy) NSUUID * requestDeviceScoreIdentifier;                                                      //@synthesize requestDeviceScoreIdentifier=_requestDeviceScoreIdentifier - In the implementation block
@property (nonatomic,copy) NSUUID * sendDeviceScoreIdentifier;                                                         //@synthesize sendDeviceScoreIdentifier=_sendDeviceScoreIdentifier - In the implementation block
@property (assign,nonatomic) BOOL deviceScoreIdentifiersRequired;                                                      //@synthesize deviceScoreIdentifiersRequired=_deviceScoreIdentifiersRequired - In the implementation block
@property (assign,nonatomic) BOOL deviceScoreIdentifiersSubmitted;                                                     //@synthesize deviceScoreIdentifiersSubmitted=_deviceScoreIdentifiersSubmitted - In the implementation block
@property (nonatomic,copy) NSString * merchantProvidedTitle;                                                           //@synthesize merchantProvidedTitle=_merchantProvidedTitle - In the implementation block
@property (nonatomic,copy) NSString * merchantProvidedDescription;                                                     //@synthesize merchantProvidedDescription=_merchantProvidedDescription - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * rewardsTotalAmount;                                                     //@synthesize rewardsTotalAmount=_rewardsTotalAmount - In the implementation block
@property (nonatomic,retain) NSString * rewardsTotalCurrencyCode;                                                      //@synthesize rewardsTotalCurrencyCode=_rewardsTotalCurrencyCode - In the implementation block
@property (assign,nonatomic) unsigned long long rewardsEligibilityReason;                                              //@synthesize rewardsEligibilityReason=_rewardsEligibilityReason - In the implementation block
@property (nonatomic,readonly) PKCurrencyAmount * rewardsTotalCurrencyAmount; 
@property (nonatomic,retain) PKPaymentTransactionRewards * rewards;                                                    //@synthesize rewards=_rewards - In the implementation block
@property (assign,nonatomic) unsigned long long cardType;                                                              //@synthesize cardType=_cardType - In the implementation block
@property (nonatomic,retain) NSString * accountIdentifier;                                                             //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * lifecycleIdentifier;                                                             //@synthesize lifecycleIdentifier=_lifecycleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * authNetworkData;                                                                 //@synthesize authNetworkData=_authNetworkData - In the implementation block
@property (nonatomic,copy) NSString * clearingNetworkData;                                                             //@synthesize clearingNetworkData=_clearingNetworkData - In the implementation block
@property (nonatomic,retain) NSString * cardIdentifier;                                                                //@synthesize cardIdentifier=_cardIdentifier - In the implementation block
@property (setter=setDPANIdentifier:,nonatomic,retain) NSString * dpanIdentifier;                                      //@synthesize dpanIdentifier=_dpanIdentifier - In the implementation block
@property (nonatomic,retain) NSString * cardNumberSuffix;                                                              //@synthesize cardNumberSuffix=_cardNumberSuffix - In the implementation block
@property (nonatomic,copy) NSString * referenceIdentifier;                                                             //@synthesize referenceIdentifier=_referenceIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long suppressBehavior;                                                      //@synthesize suppressBehavior=_suppressBehavior - In the implementation block
@property (assign,nonatomic) long long redemptionType;                                                                 //@synthesize redemptionType=_redemptionType - In the implementation block
@property (nonatomic,retain) NSSet * questions;                                                                        //@synthesize questions=_questions - In the implementation block
@property (nonatomic,readonly) NSSet * answeredQuestionsOnThisDevice; 
@property (nonatomic,readonly) NSSet * unansweredQuestions; 
@property (nonatomic,readonly) BOOL reviewed; 
@property (nonatomic,retain) NSOrderedSet * servicingEvents;                                                           //@synthesize servicingEvents=_servicingEvents - In the implementation block
@property (nonatomic,retain) NSArray * payments;                                                                       //@synthesize payments=_payments - In the implementation block
@property (nonatomic,readonly) unsigned long long disputeStatus; 
@property (nonatomic,readonly) unsigned long long disputeType; 
@property (nonatomic,retain) PKAccountEvent * redemptionEvent;                                                         //@synthesize redemptionEvent=_redemptionEvent - In the implementation block
@property (nonatomic,retain) PKInstallmentPlanPayment * installmentPayment;                                            //@synthesize installmentPayment=_installmentPayment - In the implementation block
@property (nonatomic,retain) PKInstallmentPlan * installmentPlan;                                                      //@synthesize installmentPlan=_installmentPlan - In the implementation block
@property (nonatomic,copy) NSDictionary * metadata;                                                                    //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic) BOOL isCloudKitArchived;                                                                  //@synthesize isCloudKitArchived=_isCloudKitArchived - In the implementation block
@property (assign,nonatomic) BOOL processedForLocation;                                                                //@synthesize processedForLocation=_processedForLocation - In the implementation block
@property (assign,nonatomic) BOOL processedForMerchantCleanup;                                                         //@synthesize processedForMerchantCleanup=_processedForMerchantCleanup - In the implementation block
@property (assign,nonatomic) BOOL requiresMerchantReprocessing;                                                        //@synthesize requiresMerchantReprocessing=_requiresMerchantReprocessing - In the implementation block
@property (nonatomic,retain) NSDate * lastMerchantReprocessingDate;                                                    //@synthesize lastMerchantReprocessingDate=_lastMerchantReprocessingDate - In the implementation block
@property (assign,nonatomic) BOOL processedForStations;                                                                //@synthesize processedForStations=_processedForStations - In the implementation block
@property (assign,nonatomic) BOOL hasAssociatedPaymentApplication;                                                     //@synthesize hasAssociatedPaymentApplication=_hasAssociatedPaymentApplication - In the implementation block
@property (assign,nonatomic) BOOL hasNotificationServiceData;                                                          //@synthesize hasNotificationServiceData=_hasNotificationServiceData - In the implementation block
@property (nonatomic,readonly) BOOL hasTransactionSource; 
@property (nonatomic,readonly) BOOL hasBackingData; 
@property (nonatomic,readonly) BOOL supportsFuzzyMatching; 
@property (nonatomic,readonly) BOOL fullyProcessed; 
@property (assign,nonatomic) BOOL originatedByDevice;                                                                  //@synthesize originatedByDevice=_originatedByDevice - In the implementation block
@property (assign,getter=isFuzzyMatched,nonatomic) BOOL fuzzyMatched;                                                  //@synthesize fuzzyMatched=_fuzzyMatched - In the implementation block
@property (nonatomic,copy) NSString * receiptProviderIdentifier;                                                       //@synthesize receiptProviderIdentifier=_receiptProviderIdentifier - In the implementation block
@property (nonatomic,copy) NSString * receiptIdentifier;                                                               //@synthesize receiptIdentifier=_receiptIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * receiptProviderURL;                                                               //@synthesize receiptProviderURL=_receiptProviderURL - In the implementation block
@property (nonatomic,readonly) NSString * associatedReceiptUniqueID; 
@property (nonatomic,copy) NSString * barcodeIdentifier;                                                               //@synthesize barcodeIdentifier=_barcodeIdentifier - In the implementation block
@property (nonatomic,retain) PKTransactionAuthenticationContext * authenticationContext;                               //@synthesize authenticationContext=_authenticationContext - In the implementation block
@property (nonatomic,copy) NSString * primaryFundingSourceDescription;                                                 //@synthesize primaryFundingSourceDescription=_primaryFundingSourceDescription - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * nominalAmount;                                                            //@synthesize nominalAmount=_nominalAmount - In the implementation block
@property (nonatomic,readonly) PKCurrencyAmount * nominalCurrencyAmount; 
@property (assign,nonatomic) BOOL hasAdditionalOffers;                                                                 //@synthesize hasAdditionalOffers=_hasAdditionalOffers - In the implementation block
@property (nonatomic,retain) NSArray * awards;                                                                         //@synthesize awards=_awards - In the implementation block
@property (nonatomic,retain) NSArray * amountModifiers;                                                                //@synthesize amountModifiers=_amountModifiers - In the implementation block
@property (nonatomic,copy) NSString * issueReportIdentifier;                                                           //@synthesize issueReportIdentifier=_issueReportIdentifier - In the implementation block
@property (assign,nonatomic) long long transactionStatus;                                                              //@synthesize transactionStatus=_transactionStatus - In the implementation block
@property (assign,nonatomic) long long transactionType;                                                                //@synthesize transactionType=_transactionType - In the implementation block
@property (assign,nonatomic) long long technologyType;                                                                 //@synthesize technologyType=_technologyType - In the implementation block
@property (assign,nonatomic) unsigned long long transactionSource;                                                     //@synthesize transactionSource=_transactionSource - In the implementation block
@property (assign,nonatomic) long long transactionDeclinedReason;                                                      //@synthesize transactionDeclinedReason=_transactionDeclinedReason - In the implementation block
@property (nonatomic,readonly) BOOL hasEffectiveTransactionSource; 
@property (nonatomic,readonly) unsigned long long effectiveTransactionSource; 
@property (nonatomic,readonly) unsigned long long updateReasons;                                                       //@synthesize updateReasons=_updateReasons - In the implementation block
@property (nonatomic,readonly) BOOL updateReasonIsInitialDownload; 
@property (nonatomic,copy) NSString * transactionSourceIdentifier;                                                     //@synthesize transactionSourceIdentifier=_transactionSourceIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)paymentTransactionWithSource:(unsigned long long)arg1 dictionary:(id)arg2 hasNotificationServiceData:(BOOL)arg3 ;
+(id)formattedBalanceAdjustmentForAmount:(id)arg1 transactionType:(long long)arg2 adjustmentType:(long long)arg3 peerPaymentType:(long long)arg4 ;
+(id)paymentTransactionFromSource:(unsigned long long)arg1 ;
+(id)paymentTransactionWithSource:(unsigned long long)arg1 ;
+(id)recordNamePrefix;
-(long long)accountType;
-(id)dictionaryRepresentation;
-(NSString *)currencyCode;
-(NSTimeZone *)timeZone;
-(PKPaymentTransactionFees *)fees;
-(void)setLocality:(NSString *)arg1 ;
-(NSString *)cardNumberSuffix;
-(NSURL *)receiptProviderURL;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(void)setRequestDeviceScoreIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)requestDeviceScoreIdentifier;
-(NSArray *)payments;
-(void)setRewards:(PKPaymentTransactionRewards *)arg1 ;
-(id)init;
-(NSNumber *)cityCode;
-(NSArray *)amounts;
-(NSUUID *)sendDeviceScoreIdentifier;
-(void)setSendDeviceScoreIdentifier:(NSUUID *)arg1 ;
-(void)setPeerPaymentType:(long long)arg1 ;
-(void)setPeerPaymentCounterpartHandle:(NSString *)arg1 ;
-(void)setProcessedForLocation:(BOOL)arg1 ;
-(void)setPrimaryFundingSourceAmount:(NSDecimalNumber *)arg1 ;
-(void)setPrimaryFundingSourceCurrencyCode:(NSString *)arg1 ;
-(void)setSecondaryFundingSourceAmount:(NSDecimalNumber *)arg1 ;
-(void)setSecondaryFundingSourceCurrencyCode:(NSString *)arg1 ;
-(void)setSecondaryFundingSourceNetwork:(long long)arg1 ;
-(void)setSecondaryFundingSourceDPANSuffix:(NSString *)arg1 ;
-(void)setSecondaryFundingSourceDescription:(NSString *)arg1 ;
-(void)setHasNotificationServiceData:(BOOL)arg1 ;
-(void)setProcessedForMerchantCleanup:(BOOL)arg1 ;
-(void)setPeerPaymentStatus:(long long)arg1 ;
-(BOOL)enRoute;
-(NSSet *)questions;
-(void)setTransactionType:(long long)arg1 ;
-(NSArray *)awards;
-(void)setAmounts:(NSArray *)arg1 ;
-(CLLocation *)location;
-(void)setFees:(PKPaymentTransactionFees *)arg1 ;
-(void)setCityCode:(NSNumber *)arg1 ;
-(void)setStartStation:(NSString *)arg1 ;
-(void)setEndStation:(NSString *)arg1 ;
-(unsigned long long)disputeType;
-(NSString *)accountIdentifier;
-(BOOL)hasAssociatedPaymentApplication;
-(void)setHasAssociatedPaymentApplication:(BOOL)arg1 ;
-(unsigned long long)transitModifiers;
-(BOOL)hasNotificationServiceData;
-(BOOL)processedForLocation;
-(BOOL)processedForStations;
-(BOOL)isZeroTransaction;
-(unsigned long long)disputeStatus;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)formattedBalanceAdjustmentSubtotalAmount;
-(NSString *)formattedBalanceAdjustmentAmount;
-(id)formattedStringForMultipleAmounts;
-(id)transactionAmountsForMultipleAmounts;
-(PKCurrencyAmount *)rewardsTotalCurrencyAmount;
-(PKInstallmentPlan *)installmentPlan;
-(PKAccountEvent *)redemptionEvent;
-(PKInstallmentPlanPayment *)installmentPayment;
-(NSString *)peerPaymentMemo;
-(long long)secondaryFundingSourceType;
-(NSString *)merchantProvidedDescription;
-(NSSet *)unansweredQuestions;
-(long long)transactionDeclinedReason;
-(NSString *)rewardsTotalCurrencyCode;
-(BOOL)shouldSuppressDate;
-(NSString *)secondaryFundingSourceDescription;
-(NSString *)secondaryFundingSourceFPANIdentifier;
-(long long)secondaryFundingSourceNetwork;
-(NSString *)secondaryFundingSourceDPANSuffix;
-(void)setPayments:(NSArray *)arg1 ;
-(BOOL)isFuzzyMatched;
-(NSString *)clearingNetworkData;
-(NSString *)authNetworkData;
-(BOOL)isCoarseLocation;
-(void)setSecondaryFundingSourceType:(long long)arg1 ;
-(void)setSecondaryFundingSourceFPANIdentifier:(NSString *)arg1 ;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(NSDate *)transactionDate;
-(void)setTransactionDate:(NSDate *)arg1 ;
-(NSString *)referenceIdentifier;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSString *)displayLocation;
-(PKCurrencyAmount *)currencyAmount;
-(PKPaymentTransactionRewards *)rewards;
-(PKMerchant *)merchant;
-(void)setLocation:(CLLocation *)arg1 ;
-(NSString *)locality;
-(unsigned long long)updateReasons;
-(BOOL)updateReasonIsInitialDownload;
-(BOOL)hasTransactionSource;
-(void)setProcessedForStations:(BOOL)arg1 ;
-(BOOL)processedForMerchantCleanup;
-(BOOL)requiresMerchantReprocessing;
-(BOOL)originatedByDevice;
-(void)setCoarseLocation:(BOOL)arg1 ;
-(void)setRequiresMerchantReprocessing:(BOOL)arg1 ;
-(double)locationLongitude;
-(unsigned long long)cardType;
-(double)locationLatitude;
-(double)locationAltitude;
-(NSData *)startStationCode;
-(NSData *)endStationCode;
-(NSString *)serviceIdentifier;
-(BOOL)isCloudArchivableDeviceDataEqual:(id)arg1 ;
-(BOOL)hasCloudArchivableDeviceData;
-(void)setStartStationLocation:(CLLocation *)arg1 ;
-(void)setEndStationLocation:(CLLocation *)arg1 ;
-(BOOL)hasBackingData;
-(void)setLastMerchantReprocessingDate:(NSDate *)arg1 ;
-(id)description;
-(long long)redemptionType;
-(void)setAuthenticationContext:(PKTransactionAuthenticationContext *)arg1 ;
-(unsigned long long)itemType;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(PKTransactionAuthenticationContext *)authenticationContext;
-(void)encodeWithCloudStoreCoder:(id)arg1 ;
-(id)initWithCloudStoreCoder:(id)arg1 ;
-(id)recordTypesAndNamesIncludingServerData:(BOOL)arg1 ;
-(void)applyPropertiesFromCloudStoreRecord:(id)arg1 ;
-(void)encodeServerAndDeviceDataWithCloudStoreCoder:(id)arg1 ;
-(NSDate *)expirationDate;
-(BOOL)reviewed;
-(NSString *)stationCodeProvider;
-(void)setAmount:(NSDecimalNumber *)arg1 ;
-(id)updateReasonsDescription;
-(void)setAwards:(NSArray *)arg1 ;
-(NSString *)barcodeIdentifier;
-(void)setBarcodeIdentifier:(NSString *)arg1 ;
-(void)setQuestions:(NSSet *)arg1 ;
-(void)setTransactionSourceIdentifier:(NSString *)arg1 ;
-(NSString *)transactionSourceIdentifier;
-(unsigned long long)hash;
-(NSString *)paymentHash;
-(id)primaryIdentifier;
-(void)setTransactionStatusChangedDate:(NSDate *)arg1 ;
-(void)setPeerPaymentMemo:(NSString *)arg1 ;
-(void)setRedemptionType:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setCardNumberSuffix:(NSString *)arg1 ;
-(void)setRewardsTotalAmount:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)amount;
-(void)setNominalAmount:(NSDecimalNumber *)arg1 ;
-(void)setRewardsTotalCurrencyCode:(NSString *)arg1 ;
-(void)setReceiptProviderURL:(NSURL *)arg1 ;
-(long long)technologyType;
-(void)setTechnologyType:(long long)arg1 ;
-(void)setAmountModifiers:(NSArray *)arg1 ;
-(NSDecimalNumber *)nominalAmount;
-(void)setTransactionStatus:(long long)arg1 ;
-(void)setFuzzyMatched:(BOOL)arg1 ;
-(long long)transactionStatus;
-(CLLocation *)preferredLocation;
-(NSDate *)transactionStatusChangedDate;
-(NSString *)merchantProvidedTitle;
-(long long)adjustmentTypeReason;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setDPANIdentifier:(id)arg1 ;
-(long long)adjustmentType;
-(void)setStationCodeProvider:(NSString *)arg1 ;
-(void)setPrimaryFundingSourceDescription:(NSString *)arg1 ;
-(BOOL)fullyProcessed;
-(void)setAdministrativeArea:(NSString *)arg1 ;
-(void)setHasAdditionalOffers:(BOOL)arg1 ;
-(id)_transactionSourceString;
-(BOOL)isEqualToPaymentTransaction:(id)arg1 ;
-(NSSet *)answeredQuestionsOnThisDevice;
-(NSDate *)locationDate;
-(NSString *)identifier;
-(id)_preformattedStringForMultipleAmounts;
-(id)_formatBalanceAdjustmentAmount:(id)arg1 ;
-(double)locationHorizontalAccuracy;
-(void)setLocationLatitude:(double)arg1 ;
-(double)locationVerticalAccuracy;
-(void)setLocationLongitude:(double)arg1 ;
-(void)setLocationAltitude:(double)arg1 ;
-(void)setLocationHorizontalAccuracy:(double)arg1 ;
-(void)setLocationDate:(NSDate *)arg1 ;
-(void)setOriginatedByDevice:(BOOL)arg1 ;
-(void)setPaymentHash:(NSString *)arg1 ;
-(void)addUpdateReasons:(unsigned long long)arg1 ;
-(void)setCardType:(unsigned long long)arg1 ;
-(void)setAccountType:(long long)arg1 ;
-(void)setLocationVerticalAccuracy:(double)arg1 ;
-(id)_transactionTypeString;
-(id)_transitSubtypeString;
-(id)_latestDisputeEvent;
-(BOOL)isCloudKitArchived;
-(void)setMerchant:(PKMerchant *)arg1 ;
-(void)setIsCloudKitArchived:(BOOL)arg1 ;
-(long long)peerPaymentStatus;
-(BOOL)hasEffectiveTransactionSource;
-(BOOL)supportsFuzzyMatching;
-(NSString *)associatedReceiptUniqueID;
-(PKCurrencyAmount *)nominalCurrencyAmount;
-(NSDictionary *)metadata;
-(PKCurrencyAmount *)primaryFundingSourceCurrencyAmount;
-(PKCurrencyAmount *)secondaryFundingSourceCurrencyAmount;
-(id)formattedAwards;
-(CLLocation *)startStationLocation;
-(NSString *)formattedBalanceAdjustmentAbsoluteAmount;
-(CLLocation *)endStationLocation;
-(id)formattedTransitTransactionMessage:(BOOL)arg1 ;
-(void)answeredQuestion:(unsigned long long)arg1 ;
-(double)startStationLatitude;
-(void)setStartStationLatitude:(double)arg1 ;
-(double)startStationLongitude;
-(void)setStartStationLongitude:(double)arg1 ;
-(double)endStationLatitude;
-(void)setTransitType:(long long)arg1 ;
-(long long)transitType;
-(void)setEndStationLatitude:(double)arg1 ;
-(double)endStationLongitude;
-(void)setEndStationLongitude:(double)arg1 ;
-(void)setShouldSuppressDate:(BOOL)arg1 ;
-(void)setSuppressNotifications:(BOOL)arg1 ;
-(NSString *)endStation;
-(void)setAdjustmentType:(long long)arg1 ;
-(void)setAdjustmentTypeReason:(long long)arg1 ;
-(NSDate *)peerPaymentMessageReceivedDate;
-(void)setPeerPaymentMessageReceivedDate:(NSDate *)arg1 ;
-(PKPaymentTransactionForeignExchangeInformation *)foreignExchangeInformation;
-(void)setForeignExchangeInformation:(PKPaymentTransactionForeignExchangeInformation *)arg1 ;
-(NSDecimalNumber *)primaryFundingSourceAmount;
-(NSString *)primaryFundingSourceCurrencyCode;
-(unsigned long long)effectiveTransactionSource;
-(NSDecimalNumber *)secondaryFundingSourceAmount;
-(NSString *)secondaryFundingSourceCurrencyCode;
-(BOOL)deviceScoreIdentifiersRequired;
-(void)setMerchantProvidedTitle:(NSString *)arg1 ;
-(NSString *)administrativeArea;
-(NSString *)peerPaymentCounterpartHandle;
-(long long)peerPaymentType;
-(NSString *)startStation;
-(void)setDeviceScoreIdentifiersRequired:(BOOL)arg1 ;
-(BOOL)deviceScoreIdentifiersSubmitted;
-(void)setDeviceScoreIdentifiersSubmitted:(BOOL)arg1 ;
-(unsigned long long)suppressBehavior;
-(void)setMerchantProvidedDescription:(NSString *)arg1 ;
-(unsigned long long)rewardsEligibilityReason;
-(void)setRewardsEligibilityReason:(unsigned long long)arg1 ;
-(NSString *)lifecycleIdentifier;
-(NSString *)cardIdentifier;
-(void)setLifecycleIdentifier:(NSString *)arg1 ;
-(void)setAuthNetworkData:(NSString *)arg1 ;
-(void)setClearingNetworkData:(NSString *)arg1 ;
-(void)setCardIdentifier:(NSString *)arg1 ;
-(void)setReferenceIdentifier:(NSString *)arg1 ;
-(void)setTransitModifiers:(unsigned long long)arg1 ;
-(void)setStartStationCode:(NSData *)arg1 ;
-(void)setEndStationCode:(NSData *)arg1 ;
-(void)setEnRoute:(BOOL)arg1 ;
-(NSString *)dpanIdentifier;
-(void)setSuppressBehavior:(unsigned long long)arg1 ;
-(NSOrderedSet *)servicingEvents;
-(void)setServicingEvents:(NSOrderedSet *)arg1 ;
-(void)setRedemptionEvent:(PKAccountEvent *)arg1 ;
-(void)setInstallmentPayment:(PKInstallmentPlanPayment *)arg1 ;
-(void)setInstallmentPlan:(PKInstallmentPlan *)arg1 ;
-(long long)transactionType;
-(NSDate *)lastMerchantReprocessingDate;
-(NSString *)primaryFundingSourceDescription;
-(BOOL)hasAdditionalOffers;
-(NSArray *)amountModifiers;
-(NSString *)issueReportIdentifier;
-(unsigned long long)transactionSource;
-(void)setTransactionSource:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSDecimalNumber *)rewardsTotalAmount;
-(PKCurrencyAmount *)subtotalCurrencyAmount;
-(BOOL)suppressNotifications;
-(NSString *)receiptProviderIdentifier;
-(void)setReceiptProviderIdentifier:(NSString *)arg1 ;
-(NSString *)receiptIdentifier;
-(NSDecimalNumber *)subtotalAmount;
-(void)setIssueReportIdentifier:(NSString *)arg1 ;
-(void)setTransactionDeclinedReason:(long long)arg1 ;
-(void)setReceiptIdentifier:(NSString *)arg1 ;
-(void)setSubtotalAmount:(NSDecimalNumber *)arg1 ;
@end

