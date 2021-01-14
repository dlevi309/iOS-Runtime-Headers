/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSDecimalNumber, PKInstallmentPlanSummary, PKInstallmentPlanMerchant, PKInstallmentPlanProduct, NSArray, PKPaymentTransactionRewards, PKInstallmentPlanPayment;

@interface PKInstallmentPlan : NSObject <NSSecureCoding, NSCopying> {

	BOOL _userViewedIntroduction;
	NSString* _identifier;
	long long _state;
	NSDate* _lastUpdated;
	NSDecimalNumber* _apr;
	unsigned long long _duration;
	NSString* _currencyCode;
	NSDecimalNumber* _totalAmount;
	NSDecimalNumber* _totalProductAmount;
	NSDecimalNumber* _totalInterestAmount;
	long long _periodType;
	NSString* _transactionReferenceIdentifier;
	PKInstallmentPlanSummary* _summary;
	PKInstallmentPlanMerchant* _merchant;
	PKInstallmentPlanProduct* _product;
	NSArray* _lineItems;
	NSArray* _payments;
	PKPaymentTransactionRewards* _rewards;

}

@property (nonatomic,copy) NSString * identifier;                                      //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long state;                                          //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSDate * lastUpdated;                                     //@synthesize lastUpdated=_lastUpdated - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * apr;                                    //@synthesize apr=_apr - In the implementation block
@property (assign,nonatomic) unsigned long long duration;                              //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) NSString * currencyCode;                                    //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * totalAmount;                            //@synthesize totalAmount=_totalAmount - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * totalProductAmount;                     //@synthesize totalProductAmount=_totalProductAmount - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * totalInterestAmount;                    //@synthesize totalInterestAmount=_totalInterestAmount - In the implementation block
@property (assign,nonatomic) long long periodType;                                     //@synthesize periodType=_periodType - In the implementation block
@property (nonatomic,copy) NSString * transactionReferenceIdentifier;                  //@synthesize transactionReferenceIdentifier=_transactionReferenceIdentifier - In the implementation block
@property (nonatomic,retain) PKInstallmentPlanSummary * summary;                       //@synthesize summary=_summary - In the implementation block
@property (nonatomic,retain) PKInstallmentPlanMerchant * merchant;                     //@synthesize merchant=_merchant - In the implementation block
@property (nonatomic,retain) PKInstallmentPlanProduct * product;                       //@synthesize product=_product - In the implementation block
@property (nonatomic,copy) NSArray * lineItems;                                        //@synthesize lineItems=_lineItems - In the implementation block
@property (nonatomic,copy) NSArray * payments;                                         //@synthesize payments=_payments - In the implementation block
@property (nonatomic,retain) PKPaymentTransactionRewards * rewards;                    //@synthesize rewards=_rewards - In the implementation block
@property (nonatomic,readonly) NSDecimalNumber * remainingAmount; 
@property (nonatomic,readonly) NSDecimalNumber * totalBilled; 
@property (nonatomic,readonly) PKInstallmentPlanPayment * nextPaymentDue; 
@property (getter=isComplete,nonatomic,readonly) BOOL complete; 
@property (assign,nonatomic) BOOL userViewedIntroduction;                              //@synthesize userViewedIntroduction=_userViewedIntroduction - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)lastUpdated;
-(NSDecimalNumber *)apr;
-(NSString *)currencyCode;
-(BOOL)isComplete;
-(void)setDuration:(unsigned long long)arg1 ;
-(NSArray *)payments;
-(void)setRewards:(PKPaymentTransactionRewards *)arg1 ;
-(void)setApr:(NSDecimalNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPayments:(NSArray *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setLastUpdated:(NSDate *)arg1 ;
-(PKPaymentTransactionRewards *)rewards;
-(PKInstallmentPlanMerchant *)merchant;
-(void)setProduct:(PKInstallmentPlanProduct *)arg1 ;
-(PKInstallmentPlanSummary *)summary;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(PKInstallmentPlanProduct *)product;
-(void)setLineItems:(NSArray *)arg1 ;
-(NSDecimalNumber *)remainingAmount;
-(long long)periodType;
-(PKInstallmentPlanPayment *)nextPaymentDue;
-(void)setPeriodType:(long long)arg1 ;
-(NSDecimalNumber *)totalBilled;
-(BOOL)isEqualToInstallmentPlan:(id)arg1 ;
-(NSDecimalNumber *)totalProductAmount;
-(void)setTotalProductAmount:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)totalInterestAmount;
-(void)setTotalInterestAmount:(NSDecimalNumber *)arg1 ;
-(NSString *)transactionReferenceIdentifier;
-(void)setTransactionReferenceIdentifier:(NSString *)arg1 ;
-(BOOL)userViewedIntroduction;
-(void)setUserViewedIntroduction:(BOOL)arg1 ;
-(void)setState:(long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(NSArray *)lineItems;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setSummary:(PKInstallmentPlanSummary *)arg1 ;
-(void)setMerchant:(PKInstallmentPlanMerchant *)arg1 ;
-(unsigned long long)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDecimalNumber *)totalAmount;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTotalAmount:(NSDecimalNumber *)arg1 ;
@end

