/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PKRecordObject.h>

@class NSString, PKCurrencyAmount, PKPaymentTransactionRewards, NSSet;

@interface PKAccountRewards : NSObject <NSSecureCoding, PKRecordObject> {

	NSString* _identifier;
	PKCurrencyAmount* _currencyAmount;
	NSString* _status;
	long long _statusCode;
	PKPaymentTransactionRewards* _rewards;
	long long _type;
	NSSet* _transactionIdentifiers;
	NSSet* _rewardsAddedIdentifiers;

}

@property (nonatomic,copy) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) PKCurrencyAmount * currencyAmount;                  //@synthesize currencyAmount=_currencyAmount - In the implementation block
@property (nonatomic,copy) NSString * status;                                    //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) long long statusCode;                               //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,retain) PKPaymentTransactionRewards * rewards;              //@synthesize rewards=_rewards - In the implementation block
@property (assign,nonatomic) long long type;                                     //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSSet * transactionIdentifiers;                       //@synthesize transactionIdentifiers=_transactionIdentifiers - In the implementation block
@property (nonatomic,copy) NSSet * rewardsAddedIdentifiers;                      //@synthesize rewardsAddedIdentifiers=_rewardsAddedIdentifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)recordType;
+(id)recordNamePrefix;
-(void)setRewards:(PKPaymentTransactionRewards *)arg1 ;
-(BOOL)isEqualToAccountEvent:(id)arg1 ;
-(NSSet *)transactionIdentifiers;
-(void)setTransactionIdentifiers:(NSSet *)arg1 ;
-(NSSet *)rewardsAddedIdentifiers;
-(void)setRewardsAddedIdentifiers:(NSSet *)arg1 ;
-(void)encodeWithRecord:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(void)setStatusCode:(long long)arg1 ;
-(PKCurrencyAmount *)currencyAmount;
-(void)setCurrencyAmount:(PKCurrencyAmount *)arg1 ;
-(PKPaymentTransactionRewards *)rewards;
-(long long)statusCode;
-(id)initWithRecord:(id)arg1 ;
-(NSString *)description;
-(long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setStatus:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)status;
@end

