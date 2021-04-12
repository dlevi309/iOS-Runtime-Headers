/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, PKCurrencyAmount, NSDecimalNumber, NSDate, NSURL, NSArray, NSDictionary;

@interface PKPeerPaymentAccount : NSObject <NSSecureCoding> {

	BOOL _accountStateDirty;
	BOOL _identityVerificationForDisbursementsRequired;
	BOOL _identityVerificationRequired;
	BOOL _termsAcceptanceRequired;
	unsigned long long _state;
	unsigned long long _stage;
	NSString* _countryCode;
	PKCurrencyAmount* _currentBalance;
	NSDecimalNumber* _maximumBalance;
	NSDate* _lastUpdated;
	double _proactiveFetchPeriod;
	NSURL* _associatedPassURL;
	long long _pendingPaymentCount;
	NSArray* _supportedFeatureDescriptors;
	NSString* _termsIdentifier;
	NSURL* _termsURL;
	NSString* _associatedPassSerialNumber;
	NSString* _associatedPassTypeIdentifier;
	NSArray* _cloudStoreZoneNames;

}

@property (nonatomic,readonly) NSDictionary * minimumTransferAmounts; 
@property (nonatomic,readonly) NSDictionary * maximumTransferAmounts; 
@property (assign,nonatomic) unsigned long long state;                                       //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned long long stage;                                       //@synthesize stage=_stage - In the implementation block
@property (nonatomic,copy) NSString * countryCode;                                           //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,copy) PKCurrencyAmount * currentBalance;                                //@synthesize currentBalance=_currentBalance - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * maximumBalance;                                 //@synthesize maximumBalance=_maximumBalance - In the implementation block
@property (assign,nonatomic) BOOL identityVerificationRequired;                              //@synthesize identityVerificationRequired=_identityVerificationRequired - In the implementation block
@property (nonatomic,retain) NSDate * lastUpdated;                                           //@synthesize lastUpdated=_lastUpdated - In the implementation block
@property (assign,nonatomic) double proactiveFetchPeriod;                                    //@synthesize proactiveFetchPeriod=_proactiveFetchPeriod - In the implementation block
@property (assign,nonatomic) BOOL termsAcceptanceRequired;                                   //@synthesize termsAcceptanceRequired=_termsAcceptanceRequired - In the implementation block
@property (nonatomic,copy) NSString * termsIdentifier;                                       //@synthesize termsIdentifier=_termsIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * termsURL;                                                 //@synthesize termsURL=_termsURL - In the implementation block
@property (nonatomic,copy) NSURL * associatedPassURL;                                        //@synthesize associatedPassURL=_associatedPassURL - In the implementation block
@property (nonatomic,copy) NSString * associatedPassSerialNumber;                            //@synthesize associatedPassSerialNumber=_associatedPassSerialNumber - In the implementation block
@property (nonatomic,copy) NSString * associatedPassTypeIdentifier;                          //@synthesize associatedPassTypeIdentifier=_associatedPassTypeIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * supportedFeatureDescriptors;                            //@synthesize supportedFeatureDescriptors=_supportedFeatureDescriptors - In the implementation block
@property (assign,nonatomic) long long pendingPaymentCount;                                  //@synthesize pendingPaymentCount=_pendingPaymentCount - In the implementation block
@property (assign,nonatomic) BOOL identityVerificationForDisbursementsRequired;              //@synthesize identityVerificationForDisbursementsRequired=_identityVerificationForDisbursementsRequired - In the implementation block
@property (nonatomic,copy) NSArray * cloudStoreZoneNames;                                    //@synthesize cloudStoreZoneNames=_cloudStoreZoneNames - In the implementation block
@property (nonatomic,copy,readonly) NSArray * defaultSuggestions; 
@property (assign,getter=isAccountStateDirty,nonatomic) BOOL accountStateDirty;              //@synthesize accountStateDirty=_accountStateDirty - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)countryCode;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)stage;
-(void)setStage:(unsigned long long)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(NSDate *)lastUpdated;
-(void)setLastUpdated:(NSDate *)arg1 ;
-(NSString *)termsIdentifier;
-(void)setTermsIdentifier:(NSString *)arg1 ;
-(NSArray *)defaultSuggestions;
-(PKCurrencyAmount *)currentBalance;
-(void)setCurrentBalance:(PKCurrencyAmount *)arg1 ;
-(id)associatedPassUniqueID;
-(BOOL)termsAcceptanceRequired;
-(NSString *)associatedPassTypeIdentifier;
-(NSString *)associatedPassSerialNumber;
-(NSArray *)cloudStoreZoneNames;
-(void)setAccountStateDirty:(BOOL)arg1 ;
-(void)setCloudStoreZoneNames:(NSArray *)arg1 ;
-(id)_featureWithIdentifier:(id)arg1 ;
-(BOOL)supportsPreserveCurrentBalance;
-(BOOL)supportsCardBalancePromotion;
-(id)loadFromCardFeatureDescriptor;
-(id)sendToUserFeatureDescriptor;
-(void)setTermsAcceptanceRequired:(BOOL)arg1 ;
-(NSURL *)termsURL;
-(void)setTermsURL:(NSURL *)arg1 ;
-(NSURL *)associatedPassURL;
-(void)setAssociatedPassURL:(NSURL *)arg1 ;
-(void)setAssociatedPassTypeIdentifier:(NSString *)arg1 ;
-(void)setAssociatedPassSerialNumber:(NSString *)arg1 ;
-(id)instantWithdrawalPromotionFeatureDescriptor;
-(id)initWithDictionary:(id)arg1 lastUpdated:(id)arg2 ;
-(BOOL)isAccountOutOfDate;
-(BOOL)identityVerificationRequired;
-(NSDecimalNumber *)maximumBalance;
-(void)setMaximumBalance:(NSDecimalNumber *)arg1 ;
-(BOOL)isAccountStateDirty;
-(double)proactiveFetchPeriod;
-(void)setProactiveFetchPeriod:(double)arg1 ;
-(long long)pendingPaymentCount;
-(void)setPendingPaymentCount:(long long)arg1 ;
-(BOOL)identityVerificationForDisbursementsRequired;
-(void)setIdentityVerificationForDisbursementsRequired:(BOOL)arg1 ;
-(NSArray *)supportedFeatureDescriptors;
-(void)setSupportedFeatureDescriptors:(NSArray *)arg1 ;
-(void)setIdentityVerificationRequired:(BOOL)arg1 ;
-(id)transferToBankFeatureDescriptor;
-(id)requestFromUserFeatureDescriptor;
-(id)cardBalancePromotionFeatureDescriptor;
-(id)preserveCurrentBalanceFeatureDescriptor;
-(BOOL)supportsLoadFromCard;
-(BOOL)supportsTransferToBank;
-(BOOL)supportsSendToUser;
-(BOOL)supportsRequestFromUser;
-(BOOL)supportsInstantWithdrawal;
-(NSDictionary *)minimumTransferAmounts;
-(NSDictionary *)maximumTransferAmounts;
@end

