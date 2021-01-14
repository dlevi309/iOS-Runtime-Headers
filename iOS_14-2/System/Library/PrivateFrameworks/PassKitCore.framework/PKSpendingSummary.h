/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, PKCurrencyAmount, NSArray, PKPaymentTransactionGroup;

@interface PKSpendingSummary : NSObject <NSSecureCoding> {

	BOOL _isLoading;
	unsigned long long _summaryType;
	unsigned long long _summaryUnit;
	NSDate* _startDate;
	NSDate* _endDate;
	PKCurrencyAmount* _totalSpending;
	NSArray* _orderedSpendingCategories;
	NSArray* _orderedSpendingPerMerchants;
	PKCurrencyAmount* _previousTotalSpending;
	PKCurrencyAmount* _previousMaxAmount;
	PKPaymentTransactionGroup* _rewards;
	PKPaymentTransactionGroup* _interest;
	PKPaymentTransactionGroup* _payments;
	PKPaymentTransactionGroup* _refunds;
	PKPaymentTransactionGroup* _adjustments;
	NSArray* _spendingsPerCalendarUnit;

}

@property (assign,nonatomic) unsigned long long summaryType;                        //@synthesize summaryType=_summaryType - In the implementation block
@property (assign,nonatomic) unsigned long long summaryUnit;                        //@synthesize summaryUnit=_summaryUnit - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                    //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                                      //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) BOOL isLoading;                                        //@synthesize isLoading=_isLoading - In the implementation block
@property (nonatomic,retain) PKCurrencyAmount * totalSpending;                      //@synthesize totalSpending=_totalSpending - In the implementation block
@property (nonatomic,copy) NSArray * orderedSpendingCategories;                     //@synthesize orderedSpendingCategories=_orderedSpendingCategories - In the implementation block
@property (nonatomic,copy) NSArray * orderedSpendingPerMerchants;                   //@synthesize orderedSpendingPerMerchants=_orderedSpendingPerMerchants - In the implementation block
@property (nonatomic,retain) PKCurrencyAmount * previousTotalSpending;              //@synthesize previousTotalSpending=_previousTotalSpending - In the implementation block
@property (nonatomic,retain) PKCurrencyAmount * previousMaxAmount;                  //@synthesize previousMaxAmount=_previousMaxAmount - In the implementation block
@property (nonatomic,retain) PKPaymentTransactionGroup * rewards;                   //@synthesize rewards=_rewards - In the implementation block
@property (nonatomic,retain) PKPaymentTransactionGroup * interest;                  //@synthesize interest=_interest - In the implementation block
@property (nonatomic,retain) PKPaymentTransactionGroup * payments;                  //@synthesize payments=_payments - In the implementation block
@property (nonatomic,retain) PKPaymentTransactionGroup * refunds;                   //@synthesize refunds=_refunds - In the implementation block
@property (nonatomic,retain) PKPaymentTransactionGroup * adjustments;               //@synthesize adjustments=_adjustments - In the implementation block
@property (nonatomic,retain) NSArray * spendingsPerCalendarUnit;                    //@synthesize spendingsPerCalendarUnit=_spendingsPerCalendarUnit - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)endDate;
-(PKPaymentTransactionGroup *)payments;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setRewards:(PKPaymentTransactionGroup *)arg1 ;
-(BOOL)isLoading;
-(NSDate *)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPayments:(PKPaymentTransactionGroup *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(PKPaymentTransactionGroup *)rewards;
-(PKPaymentTransactionGroup *)refunds;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setInterest:(PKPaymentTransactionGroup *)arg1 ;
-(unsigned long long)summaryType;
-(void)setSummaryType:(unsigned long long)arg1 ;
-(unsigned long long)summaryUnit;
-(void)setSummaryUnit:(unsigned long long)arg1 ;
-(PKCurrencyAmount *)totalSpending;
-(void)setTotalSpending:(PKCurrencyAmount *)arg1 ;
-(NSArray *)orderedSpendingCategories;
-(void)setOrderedSpendingCategories:(NSArray *)arg1 ;
-(PKPaymentTransactionGroup *)interest;
-(NSArray *)orderedSpendingPerMerchants;
-(void)setOrderedSpendingPerMerchants:(NSArray *)arg1 ;
-(PKCurrencyAmount *)previousTotalSpending;
-(void)setPreviousTotalSpending:(PKCurrencyAmount *)arg1 ;
-(PKCurrencyAmount *)previousMaxAmount;
-(void)setPreviousMaxAmount:(PKCurrencyAmount *)arg1 ;
-(void)setRefunds:(PKPaymentTransactionGroup *)arg1 ;
-(PKPaymentTransactionGroup *)adjustments;
-(void)setAdjustments:(PKPaymentTransactionGroup *)arg1 ;
-(NSArray *)spendingsPerCalendarUnit;
-(void)setSpendingsPerCalendarUnit:(NSArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setIsLoading:(BOOL)arg1 ;
@end

