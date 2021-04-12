/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSString, NSDecimalNumber;

@interface PKBillPaymentSuggestedAmount : NSObject {

	NSString* _title;
	NSString* _message;
	unsigned long long _category;
	NSDecimalNumber* _amount;
	long long _priority;
	long long _merchantCategory;

}

@property (nonatomic,copy) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                         //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) unsigned long long category;              //@synthesize category=_category - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * amount;                   //@synthesize amount=_amount - In the implementation block
@property (assign,nonatomic) long long merchantCategory;               //@synthesize merchantCategory=_merchantCategory - In the implementation block
@property (assign,nonatomic) long long priority;                       //@synthesize priority=_priority - In the implementation block
-(void)setMessage:(NSString *)arg1 ;
-(long long)compare:(id)arg1 ;
-(NSString *)message;
-(void)setCategory:(unsigned long long)arg1 ;
-(id)initWithAmount:(id)arg1 category:(unsigned long long)arg2 ;
-(long long)merchantCategory;
-(void)setMerchantCategory:(long long)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(unsigned long long)category;
-(id)description;
-(void)setAmount:(NSDecimalNumber *)arg1 ;
-(unsigned long long)hash;
-(NSDecimalNumber *)amount;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

