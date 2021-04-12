/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/PKAccountDetails.h>

@class NSDate, NSString, NSTimeZone, NSSet, NSURL, PKCreditAccountSummary, PKCreditAccountRates, PKCurrencyAmount;

@interface PKCreditAccountDetails : PKAccountDetails {

	BOOL _termsAcceptanceRequired;
	NSDate* _lastUpdatedDate;
	NSDate* _createdDate;
	NSString* _countryCode;
	NSString* _currencyCode;
	NSTimeZone* _productTimeZone;
	NSSet* _physicalCards;
	NSSet* _virtualCards;
	NSString* _termsIdentifier;
	NSURL* _termsURL;
	NSURL* _associatedPassURL;
	NSString* _associatedPassTypeIdentifier;
	NSString* _associatedPassSerialNumber;
	long long _cardType;
	PKCreditAccountSummary* _accountSummary;
	PKCreditAccountRates* _rates;
	NSSet* _installmentPlans;

}

@property (nonatomic,copy) NSDate * lastUpdatedDate;                               //@synthesize lastUpdatedDate=_lastUpdatedDate - In the implementation block
@property (nonatomic,copy) NSDate * createdDate;                                   //@synthesize createdDate=_createdDate - In the implementation block
@property (nonatomic,copy) NSString * countryCode;                                 //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,copy) NSString * currencyCode;                                //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,retain) NSTimeZone * productTimeZone;                         //@synthesize productTimeZone=_productTimeZone - In the implementation block
@property (nonatomic,copy) NSSet * physicalCards;                                  //@synthesize physicalCards=_physicalCards - In the implementation block
@property (nonatomic,copy) NSSet * virtualCards;                                   //@synthesize virtualCards=_virtualCards - In the implementation block
@property (assign,nonatomic) BOOL termsAcceptanceRequired;                         //@synthesize termsAcceptanceRequired=_termsAcceptanceRequired - In the implementation block
@property (nonatomic,copy) NSString * termsIdentifier;                             //@synthesize termsIdentifier=_termsIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * termsURL;                                       //@synthesize termsURL=_termsURL - In the implementation block
@property (nonatomic,copy) NSURL * associatedPassURL;                              //@synthesize associatedPassURL=_associatedPassURL - In the implementation block
@property (nonatomic,copy) NSString * associatedPassTypeIdentifier;                //@synthesize associatedPassTypeIdentifier=_associatedPassTypeIdentifier - In the implementation block
@property (nonatomic,copy) NSString * associatedPassSerialNumber;                  //@synthesize associatedPassSerialNumber=_associatedPassSerialNumber - In the implementation block
@property (assign,nonatomic) long long cardType;                                   //@synthesize cardType=_cardType - In the implementation block
@property (nonatomic,retain) PKCreditAccountSummary * accountSummary;              //@synthesize accountSummary=_accountSummary - In the implementation block
@property (nonatomic,retain) PKCreditAccountRates * rates;                         //@synthesize rates=_rates - In the implementation block
@property (nonatomic,copy) NSSet * installmentPlans;                               //@synthesize installmentPlans=_installmentPlans - In the implementation block
@property (nonatomic,copy,readonly) PKCurrencyAmount * cardBalance; 
@property (nonatomic,copy,readonly) PKCurrencyAmount * totalBalance; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)countryCode;
-(NSString *)currencyCode;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(PKCreditAccountRates *)rates;
-(void)setRates:(PKCreditAccountRates *)arg1 ;
-(NSDate *)createdDate;
-(void)setCreatedDate:(NSDate *)arg1 ;
-(NSDate *)lastUpdatedDate;
-(void)setLastUpdatedDate:(NSDate *)arg1 ;
-(long long)cardType;
-(void)setCardType:(long long)arg1 ;
-(NSString *)termsIdentifier;
-(void)setTermsIdentifier:(NSString *)arg1 ;
-(void)ingestExtendedAccountDetails:(id)arg1 ;
-(BOOL)termsAcceptanceRequired;
-(NSTimeZone *)productTimeZone;
-(PKCreditAccountSummary *)accountSummary;
-(void)setProductTimeZone:(NSTimeZone *)arg1 ;
-(NSString *)associatedPassTypeIdentifier;
-(NSString *)associatedPassSerialNumber;
-(PKCurrencyAmount *)cardBalance;
-(void)setVirtualCards:(NSSet *)arg1 ;
-(id)installmentPlanWithIdentifier:(id)arg1 ;
-(void)addOrUpdateVirtualCard:(id)arg1 ;
-(void)removeVirtualCard:(id)arg1 ;
-(id)virtualCardWithIdentifier:(id)arg1 ;
-(void)addOrUpdatePhysicalCard:(id)arg1 ;
-(PKCurrencyAmount *)totalBalance;
-(long long)numberOfActiveInstallments;
-(long long)numberOfActiveStatementedInstallments;
-(NSSet *)physicalCards;
-(void)setPhysicalCards:(NSSet *)arg1 ;
-(NSSet *)virtualCards;
-(void)setTermsAcceptanceRequired:(BOOL)arg1 ;
-(NSURL *)termsURL;
-(void)setTermsURL:(NSURL *)arg1 ;
-(NSURL *)associatedPassURL;
-(void)setAssociatedPassURL:(NSURL *)arg1 ;
-(void)setAssociatedPassTypeIdentifier:(NSString *)arg1 ;
-(void)setAssociatedPassSerialNumber:(NSString *)arg1 ;
-(void)setAccountSummary:(PKCreditAccountSummary *)arg1 ;
-(NSSet *)installmentPlans;
-(void)setInstallmentPlans:(NSSet *)arg1 ;
@end

