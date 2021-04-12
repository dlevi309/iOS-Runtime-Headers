/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDecimalNumber, NSDate, PKCreditAccountBalanceSummary, PKCreditAccountStatement;

@interface PKCreditAccountSummary : NSObject <NSSecureCoding, NSCopying> {

	BOOL _requiresDebtCollectionNotices;
	BOOL _inGrace;
	BOOL _autoPayEnabled;
	NSDecimalNumber* _creditLimit;
	NSDecimalNumber* _availableCredit;
	NSDecimalNumber* _currentBalance;
	NSDecimalNumber* _rewardsBalance;
	NSDecimalNumber* _remainingStatementBalance;
	NSDecimalNumber* _remainingMinimumPayment;
	NSDecimalNumber* _remainingMinimumPaymentExcludedFromInterestCalculation;
	NSDecimalNumber* _installmentBalance;
	NSDate* _lastPaymentDate;
	long long _cyclesPastDue;
	unsigned long long _balanceStatus;
	PKCreditAccountBalanceSummary* _balanceSummary;
	NSDecimalNumber* _unpostedInterest;
	NSDate* _unpostedInterestTimestamp;
	NSDecimalNumber* _chargeOffPreventionAmount;
	NSDecimalNumber* _pastDueAmount;
	PKCreditAccountStatement* _currentStatement;
	NSDecimalNumber* _adjustedBalance;
	NSDate* _paymentDueDate;

}

@property (nonatomic,copy) NSDecimalNumber * creditLimit;                                                         //@synthesize creditLimit=_creditLimit - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * availableCredit;                                                     //@synthesize availableCredit=_availableCredit - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * currentBalance;                                                      //@synthesize currentBalance=_currentBalance - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * adjustedBalance;                                                     //@synthesize adjustedBalance=_adjustedBalance - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * rewardsBalance;                                                      //@synthesize rewardsBalance=_rewardsBalance - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * remainingStatementBalance;                                           //@synthesize remainingStatementBalance=_remainingStatementBalance - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * remainingMinimumPayment;                                             //@synthesize remainingMinimumPayment=_remainingMinimumPayment - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * remainingMinimumPaymentExcludedFromInterestCalculation;              //@synthesize remainingMinimumPaymentExcludedFromInterestCalculation=_remainingMinimumPaymentExcludedFromInterestCalculation - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * installmentBalance;                                                  //@synthesize installmentBalance=_installmentBalance - In the implementation block
@property (nonatomic,copy) NSDate * paymentDueDate;                                                               //@synthesize paymentDueDate=_paymentDueDate - In the implementation block
@property (nonatomic,copy) NSDate * lastPaymentDate;                                                              //@synthesize lastPaymentDate=_lastPaymentDate - In the implementation block
@property (assign,nonatomic) BOOL autoPayEnabled;                                                                 //@synthesize autoPayEnabled=_autoPayEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long balanceStatus;                                                    //@synthesize balanceStatus=_balanceStatus - In the implementation block
@property (nonatomic,retain) PKCreditAccountBalanceSummary * balanceSummary;                                      //@synthesize balanceSummary=_balanceSummary - In the implementation block
@property (assign,nonatomic) long long cyclesPastDue;                                                             //@synthesize cyclesPastDue=_cyclesPastDue - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * unpostedInterest;                                                    //@synthesize unpostedInterest=_unpostedInterest - In the implementation block
@property (nonatomic,copy) NSDate * unpostedInterestTimestamp;                                                    //@synthesize unpostedInterestTimestamp=_unpostedInterestTimestamp - In the implementation block
@property (assign,nonatomic) BOOL requiresDebtCollectionNotices;                                                  //@synthesize requiresDebtCollectionNotices=_requiresDebtCollectionNotices - In the implementation block
@property (assign,nonatomic) BOOL inGrace;                                                                        //@synthesize inGrace=_inGrace - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * chargeOffPreventionAmount;                                           //@synthesize chargeOffPreventionAmount=_chargeOffPreventionAmount - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * pastDueAmount;                                                       //@synthesize pastDueAmount=_pastDueAmount - In the implementation block
@property (nonatomic,retain) PKCreditAccountStatement * currentStatement;                                         //@synthesize currentStatement=_currentStatement - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)inGrace;
-(NSDecimalNumber *)adjustedBalance;
-(NSDate *)paymentDueDate;
-(long long)cyclesPastDue;
-(void)setInGrace:(BOOL)arg1 ;
-(NSDecimalNumber *)currentBalance;
-(NSDecimalNumber *)availableCredit;
-(void)setCreditLimit:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)creditLimit;
-(void)ingestExtendedAccountDetails:(id)arg1 ;
-(void)setAvailableCredit:(NSDecimalNumber *)arg1 ;
-(void)setCurrentBalance:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)rewardsBalance;
-(void)setRewardsBalance:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)remainingStatementBalance;
-(void)setRemainingStatementBalance:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)remainingMinimumPayment;
-(void)setRemainingMinimumPayment:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)remainingMinimumPaymentExcludedFromInterestCalculation;
-(void)setRemainingMinimumPaymentExcludedFromInterestCalculation:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)installmentBalance;
-(void)setInstallmentBalance:(NSDecimalNumber *)arg1 ;
-(unsigned long long)balanceStatus;
-(NSDate *)lastPaymentDate;
-(void)setLastPaymentDate:(NSDate *)arg1 ;
-(void)setCyclesPastDue:(long long)arg1 ;
-(void)setBalanceStatus:(unsigned long long)arg1 ;
-(PKCreditAccountBalanceSummary *)balanceSummary;
-(void)setBalanceSummary:(PKCreditAccountBalanceSummary *)arg1 ;
-(BOOL)requiresDebtCollectionNotices;
-(void)setRequiresDebtCollectionNotices:(BOOL)arg1 ;
-(NSDecimalNumber *)unpostedInterest;
-(void)setUnpostedInterest:(NSDecimalNumber *)arg1 ;
-(NSDate *)unpostedInterestTimestamp;
-(void)setUnpostedInterestTimestamp:(NSDate *)arg1 ;
-(NSDecimalNumber *)chargeOffPreventionAmount;
-(void)setChargeOffPreventionAmount:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)pastDueAmount;
-(void)setPastDueAmount:(NSDecimalNumber *)arg1 ;
-(BOOL)autoPayEnabled;
-(void)setAutoPayEnabled:(BOOL)arg1 ;
-(PKCreditAccountStatement *)currentStatement;
-(void)setCurrentStatement:(PKCreditAccountStatement *)arg1 ;
-(void)setAdjustedBalance:(NSDecimalNumber *)arg1 ;
-(void)setPaymentDueDate:(NSDate *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

