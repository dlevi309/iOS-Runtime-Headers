/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSDecimalNumber;

@interface PKCreditAccountBalanceSummary : NSObject <NSSecureCoding, NSCopying> {

	NSDate* _openingDate;
	NSDate* _closingDate;
	NSDecimalNumber* _purchases;
	NSDecimalNumber* _pendingPurchases;
	NSDecimalNumber* _balanceTransfers;
	NSDecimalNumber* _interestCharged;
	NSDecimalNumber* _feesCharged;
	NSDecimalNumber* _paymentsAndCredits;
	NSDecimalNumber* _payments;
	NSDecimalNumber* _credits;
	NSDecimalNumber* _rewardsEarned;
	NSDecimalNumber* _rewardsRedeemed;

}

@property (nonatomic,copy) NSDate * openingDate;                              //@synthesize openingDate=_openingDate - In the implementation block
@property (nonatomic,copy) NSDate * closingDate;                              //@synthesize closingDate=_closingDate - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * purchases;                       //@synthesize purchases=_purchases - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * pendingPurchases;                //@synthesize pendingPurchases=_pendingPurchases - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * balanceTransfers;                //@synthesize balanceTransfers=_balanceTransfers - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * interestCharged;                 //@synthesize interestCharged=_interestCharged - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * feesCharged;                     //@synthesize feesCharged=_feesCharged - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * paymentsAndCredits;              //@synthesize paymentsAndCredits=_paymentsAndCredits - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * payments;                        //@synthesize payments=_payments - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * credits;                         //@synthesize credits=_credits - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * rewardsEarned;                   //@synthesize rewardsEarned=_rewardsEarned - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * rewardsRedeemed;                 //@synthesize rewardsRedeemed=_rewardsRedeemed - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDecimalNumber *)payments;
-(NSDecimalNumber *)credits;
-(NSDate *)openingDate;
-(NSDate *)closingDate;
-(NSDecimalNumber *)purchases;
-(NSDecimalNumber *)feesCharged;
-(void)setClosingDate:(NSDate *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setOpeningDate:(NSDate *)arg1 ;
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
-(id)initWithDictionary:(id)arg1 ;
-(void)setPendingPurchases:(NSDecimalNumber *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDecimalNumber *)pendingPurchases;
-(BOOL)isEqual:(id)arg1 ;
@end

