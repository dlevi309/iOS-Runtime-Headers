/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(long long)statusCode;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)status;
-(void)setStatus:(NSString *)arg1 ;
-(id)initWithRecord:(id)arg1 ;
-(void)setStatusCode:(long long)arg1 ;
-(PKCurrencyAmount *)currencyAmount;
-(void)setCurrencyAmount:(PKCurrencyAmount *)arg1 ;
-(void)encodeWithRecord:(id)arg1 ;
-(BOOL)isEqualToAccountEvent:(id)arg1 ;
-(PKPaymentTransactionRewards *)rewards;
-(void)setRewards:(PKPaymentTransactionRewards *)arg1 ;
-(NSSet *)transactionIdentifiers;
-(void)setTransactionIdentifiers:(NSSet *)arg1 ;
-(NSSet *)rewardsAddedIdentifiers;
-(void)setRewardsAddedIdentifiers:(NSSet *)arg1 ;
@end

