/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet, NSArray, NSDecimalNumber, PKMerchant, NSDate, NSString, PKCurrencyAmount;

@interface PKPaymentTransactionRequest : NSObject <NSSecureCoding> {

	NSSet* _transactionSourceIdentifiers;
	NSArray* _transactionTypes;
	NSArray* _transactionSources;
	NSArray* _transactionStatuses;
	long long _peerPaymentSubType;
	NSDecimalNumber* _rewardsValue;
	unsigned long long _rewardsValueUnit;
	PKMerchant* _merchant;
	long long _merchantCategory;
	NSArray* _regions;
	NSDate* _startDate;
	NSDate* _endDate;
	long long _dateOrder;
	NSString* _currencyCode;
	PKCurrencyAmount* _amount;
	long long _amountComparison;
	NSSet* _tags;
	long long _limit;

}

@property (nonatomic,retain) NSSet * transactionSourceIdentifiers;              //@synthesize transactionSourceIdentifiers=_transactionSourceIdentifiers - In the implementation block
@property (nonatomic,retain) NSArray * transactionTypes;                        //@synthesize transactionTypes=_transactionTypes - In the implementation block
@property (nonatomic,retain) NSArray * transactionSources;                      //@synthesize transactionSources=_transactionSources - In the implementation block
@property (nonatomic,retain) NSArray * transactionStatuses;                     //@synthesize transactionStatuses=_transactionStatuses - In the implementation block
@property (assign,nonatomic) long long peerPaymentSubType;                      //@synthesize peerPaymentSubType=_peerPaymentSubType - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * rewardsValue;                    //@synthesize rewardsValue=_rewardsValue - In the implementation block
@property (assign,nonatomic) unsigned long long rewardsValueUnit;               //@synthesize rewardsValueUnit=_rewardsValueUnit - In the implementation block
@property (nonatomic,retain) PKMerchant * merchant;                             //@synthesize merchant=_merchant - In the implementation block
@property (assign,nonatomic) long long merchantCategory;                        //@synthesize merchantCategory=_merchantCategory - In the implementation block
@property (nonatomic,retain) NSArray * regions;                                 //@synthesize regions=_regions - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                                  //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) long long dateOrder;                               //@synthesize dateOrder=_dateOrder - In the implementation block
@property (nonatomic,retain) NSString * currencyCode;                           //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,retain) PKCurrencyAmount * amount;                         //@synthesize amount=_amount - In the implementation block
@property (assign,nonatomic) long long amountComparison;                        //@synthesize amountComparison=_amountComparison - In the implementation block
@property (nonatomic,retain) NSSet * tags;                                      //@synthesize tags=_tags - In the implementation block
@property (assign,nonatomic) long long limit;                                   //@synthesize limit=_limit - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setLimit:(long long)arg1 ;
-(NSString *)currencyCode;
-(NSDate *)endDate;
-(long long)limit;
-(NSSet *)tags;
-(void)setStartDate:(NSDate *)arg1 ;
-(long long)merchantCategory;
-(void)setMerchantCategory:(long long)arg1 ;
-(NSDate *)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)regions;
-(void)setEndDate:(NSDate *)arg1 ;
-(PKMerchant *)merchant;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(void)setAmount:(PKCurrencyAmount *)arg1 ;
-(void)setTags:(NSSet *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PKCurrencyAmount *)amount;
-(long long)dateOrder;
-(NSSet *)transactionSourceIdentifiers;
-(void)setTransactionSourceIdentifiers:(NSSet *)arg1 ;
-(void)setTransactionTypes:(NSArray *)arg1 ;
-(void)setTransactionSources:(NSArray *)arg1 ;
-(void)setTransactionStatuses:(NSArray *)arg1 ;
-(long long)peerPaymentSubType;
-(void)setPeerPaymentSubType:(long long)arg1 ;
-(void)setDateOrder:(long long)arg1 ;
-(long long)amountComparison;
-(void)setAmountComparison:(long long)arg1 ;
-(void)setMerchant:(PKMerchant *)arg1 ;
-(void)setRegions:(NSArray *)arg1 ;
-(NSDecimalNumber *)rewardsValue;
-(void)setRewardsValue:(NSDecimalNumber *)arg1 ;
-(unsigned long long)rewardsValueUnit;
-(void)setRewardsValueUnit:(unsigned long long)arg1 ;
-(NSArray *)transactionTypes;
-(NSArray *)transactionStatuses;
-(NSArray *)transactionSources;
@end

