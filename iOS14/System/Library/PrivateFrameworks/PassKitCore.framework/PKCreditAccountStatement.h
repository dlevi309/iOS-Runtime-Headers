/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PKRecordObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSDecimalNumber;

@interface PKCreditAccountStatement : NSObject <NSSecureCoding, PKRecordObject, NSCopying> {

	NSString* _identifier;
	NSDate* _openingDate;
	NSDate* _closingDate;
	NSDate* _paymentDueDate;
	NSString* _currencyCode;
	NSDecimalNumber* _statementBalance;
	NSDecimalNumber* _totalBalance;
	NSDecimalNumber* _minimumDue;
	NSDecimalNumber* _purchases;
	NSDecimalNumber* _feesCharged;
	NSDecimalNumber* _interestCharged;
	NSDecimalNumber* _balanceTransfers;
	NSDecimalNumber* _paymentsAndCredits;
	NSDecimalNumber* _payments;
	NSDecimalNumber* _credits;
	NSDecimalNumber* _rewardsBalance;
	NSDecimalNumber* _rewardsEarned;
	NSDecimalNumber* _rewardsRedeemed;
	NSDecimalNumber* _rewardsYTD;
	NSDecimalNumber* _rewardsLifetime;

}

@property (nonatomic,copy) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSDate * openingDate;                              //@synthesize openingDate=_openingDate - In the implementation block
@property (nonatomic,copy) NSDate * closingDate;                              //@synthesize closingDate=_closingDate - In the implementation block
@property (nonatomic,copy) NSDate * paymentDueDate;                           //@synthesize paymentDueDate=_paymentDueDate - In the implementation block
@property (nonatomic,copy) NSString * currencyCode;                           //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * statementBalance;                //@synthesize statementBalance=_statementBalance - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * totalBalance;                    //@synthesize totalBalance=_totalBalance - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * minimumDue;                      //@synthesize minimumDue=_minimumDue - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * purchases;                       //@synthesize purchases=_purchases - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * feesCharged;                     //@synthesize feesCharged=_feesCharged - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * interestCharged;                 //@synthesize interestCharged=_interestCharged - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * balanceTransfers;                //@synthesize balanceTransfers=_balanceTransfers - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * paymentsAndCredits;              //@synthesize paymentsAndCredits=_paymentsAndCredits - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * payments;                        //@synthesize payments=_payments - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * credits;                         //@synthesize credits=_credits - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * rewardsBalance;                  //@synthesize rewardsBalance=_rewardsBalance - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * rewardsEarned;                   //@synthesize rewardsEarned=_rewardsEarned - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * rewardsRedeemed;                 //@synthesize rewardsRedeemed=_rewardsRedeemed - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * rewardsYTD;                      //@synthesize rewardsYTD=_rewardsYTD - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * rewardsLifetime;                 //@synthesize rewardsLifetime=_rewardsLifetime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)recordType;
+(id)recordNamePrefix;
-(NSString *)currencyCode;
-(NSDate *)paymentDueDate;
-(NSDecimalNumber *)payments;
-(NSDecimalNumber *)rewardsYTD;
-(NSDecimalNumber *)credits;
-(NSDecimalNumber *)rewardsBalance;
-(void)setRewardsBalance:(NSDecimalNumber *)arg1 ;
-(void)setPaymentDueDate:(NSDate *)arg1 ;
-(NSDate *)openingDate;
-(void)encodeWithRecord:(id)arg1 ;
-(NSDate *)closingDate;
-(NSDecimalNumber *)totalBalance;
-(NSDecimalNumber *)purchases;
-(NSDecimalNumber *)feesCharged;
-(void)setClosingDate:(NSDate *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setOpeningDate:(NSDate *)arg1 ;
-(NSDecimalNumber *)statementBalance;
-(void)setStatementBalance:(NSDecimalNumber *)arg1 ;
-(void)setTotalBalance:(NSDecimalNumber *)arg1 ;
-(void)setPurchases:(NSDecimalNumber *)arg1 ;
-(void)setFeesCharged:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)interestCharged;
-(void)setInterestCharged:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)balanceTransfers;
-(void)setBalanceTransfers:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)paymentsAndCredits;
-(void)setPayments:(NSDecimalNumber *)arg1 ;
-(void)setPaymentsAndCredits:(NSDecimalNumber *)arg1 ;
-(void)setCredits:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)rewardsEarned;
-(void)setRewardsEarned:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)rewardsRedeemed;
-(void)setRewardsRedeemed:(NSDecimalNumber *)arg1 ;
-(void)setRewardsYTD:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)rewardsLifetime;
-(void)setRewardsLifetime:(NSDecimalNumber *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setMinimumDue:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)minimumDue;
-(id)initWithRecord:(id)arg1 ;
-(NSString *)description;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

