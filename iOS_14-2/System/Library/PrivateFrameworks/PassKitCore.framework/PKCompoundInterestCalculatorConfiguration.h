/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSCalendar, NSDecimalNumber, NSDate, NSArray, NSTimeZone;

@interface PKCompoundInterestCalculatorConfiguration : NSObject {

	NSCalendar* _calendar;
	BOOL _inGrace;
	BOOL _isInDisasterRecovery;
	unsigned long long _calculationMethod;
	NSDecimalNumber* _apr;
	long long _compoundingPeriods;
	NSDate* _periodStartDate;
	NSDate* _periodEndDate;
	NSDecimalNumber* _periodStartingBalance;
	NSDecimalNumber* _remainingPeriodStartingBalance;
	NSDecimalNumber* _remainingPeriodMinimumPayment;
	NSDecimalNumber* _remainingPeriodMinimumPaymentExcludedFromInterestCalculation;
	NSDecimalNumber* _currentBalance;
	NSDecimalNumber* _unpostedInterest;
	NSDate* _unpostedInterestTimestamp;
	NSArray* _periodTransactions;
	NSArray* _futurePayments;
	NSTimeZone* _productTimeZone;

}

@property (assign,nonatomic) unsigned long long calculationMethod;                                                        //@synthesize calculationMethod=_calculationMethod - In the implementation block
@property (setter=setAPR:,nonatomic,retain) NSDecimalNumber * apr;                                                        //@synthesize apr=_apr - In the implementation block
@property (assign,nonatomic) long long compoundingPeriods;                                                                //@synthesize compoundingPeriods=_compoundingPeriods - In the implementation block
@property (nonatomic,retain) NSDate * periodStartDate;                                                                    //@synthesize periodStartDate=_periodStartDate - In the implementation block
@property (nonatomic,retain) NSDate * periodEndDate;                                                                      //@synthesize periodEndDate=_periodEndDate - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * periodStartingBalance;                                                     //@synthesize periodStartingBalance=_periodStartingBalance - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * remainingPeriodStartingBalance;                                            //@synthesize remainingPeriodStartingBalance=_remainingPeriodStartingBalance - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * remainingPeriodMinimumPayment;                                             //@synthesize remainingPeriodMinimumPayment=_remainingPeriodMinimumPayment - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * remainingPeriodMinimumPaymentExcludedFromInterestCalculation;              //@synthesize remainingPeriodMinimumPaymentExcludedFromInterestCalculation=_remainingPeriodMinimumPaymentExcludedFromInterestCalculation - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * currentBalance;                                                            //@synthesize currentBalance=_currentBalance - In the implementation block
@property (assign,nonatomic) BOOL inGrace;                                                                                //@synthesize inGrace=_inGrace - In the implementation block
@property (assign,nonatomic) BOOL isInDisasterRecovery;                                                                   //@synthesize isInDisasterRecovery=_isInDisasterRecovery - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * unpostedInterest;                                                          //@synthesize unpostedInterest=_unpostedInterest - In the implementation block
@property (nonatomic,retain) NSDate * unpostedInterestTimestamp;                                                          //@synthesize unpostedInterestTimestamp=_unpostedInterestTimestamp - In the implementation block
@property (nonatomic,copy) NSArray * periodTransactions;                                                                  //@synthesize periodTransactions=_periodTransactions - In the implementation block
@property (nonatomic,copy) NSArray * futurePayments;                                                                      //@synthesize futurePayments=_futurePayments - In the implementation block
@property (nonatomic,retain) NSTimeZone * productTimeZone;                                                                //@synthesize productTimeZone=_productTimeZone - In the implementation block
+(id)configurationWithCreditAccount:(id)arg1 ;
-(NSDecimalNumber *)apr;
-(BOOL)inGrace;
-(void)setInGrace:(BOOL)arg1 ;
-(NSDecimalNumber *)currentBalance;
-(id)init;
-(void)setCurrentBalance:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)unpostedInterest;
-(void)setUnpostedInterest:(NSDecimalNumber *)arg1 ;
-(NSDate *)unpostedInterestTimestamp;
-(void)setUnpostedInterestTimestamp:(NSDate *)arg1 ;
-(void)setAPR:(id)arg1 ;
-(NSTimeZone *)productTimeZone;
-(id)description;
-(void)setProductTimeZone:(NSTimeZone *)arg1 ;
-(NSArray *)futurePayments;
-(unsigned long long)calculationMethod;
-(void)updateWithCreditAccount:(id)arg1 ;
-(long long)_daysInYearForDate:(id)arg1 withTimeZone:(id)arg2 ;
-(void)setCalculationMethod:(unsigned long long)arg1 ;
-(long long)compoundingPeriods;
-(void)setCompoundingPeriods:(long long)arg1 ;
-(void)setPeriodStartDate:(NSDate *)arg1 ;
-(void)setPeriodEndDate:(NSDate *)arg1 ;
-(NSDecimalNumber *)periodStartingBalance;
-(void)setPeriodStartingBalance:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)remainingPeriodStartingBalance;
-(void)setRemainingPeriodStartingBalance:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)remainingPeriodMinimumPayment;
-(NSArray *)periodTransactions;
-(void)setRemainingPeriodMinimumPayment:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)remainingPeriodMinimumPaymentExcludedFromInterestCalculation;
-(void)setFuturePayments:(NSArray *)arg1 ;
-(void)setRemainingPeriodMinimumPaymentExcludedFromInterestCalculation:(NSDecimalNumber *)arg1 ;
-(BOOL)isInDisasterRecovery;
-(void)setIsInDisasterRecovery:(BOOL)arg1 ;
-(void)setPeriodTransactions:(NSArray *)arg1 ;
-(NSDate *)periodEndDate;
-(NSDate *)periodStartDate;
@end

