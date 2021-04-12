/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PKRecordObject.h>

@class NSString, PKCurrencyAmount, PKCreditAccountRates;

@interface PKAccountCreditTermsUpdate : NSObject <NSSecureCoding, PKRecordObject> {

	long long _type;
	long long _initiator;
	NSString* _requestIdentifier;
	NSString* _adverseActionContentIdentifier;
	PKCurrencyAmount* _creditLimit;
	PKCreditAccountRates* _rates;

}

@property (assign,nonatomic) long long type;                                       //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long initiator;                                  //@synthesize initiator=_initiator - In the implementation block
@property (nonatomic,copy) NSString * requestIdentifier;                           //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,copy) NSString * adverseActionContentIdentifier;              //@synthesize adverseActionContentIdentifier=_adverseActionContentIdentifier - In the implementation block
@property (nonatomic,retain) PKCurrencyAmount * creditLimit;                       //@synthesize creditLimit=_creditLimit - In the implementation block
@property (nonatomic,retain) PKCreditAccountRates * rates;                         //@synthesize rates=_rates - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)recordType;
+(id)recordNamePrefix;
-(void)setRequestIdentifier:(NSString *)arg1 ;
-(PKCreditAccountRates *)rates;
-(void)setRates:(PKCreditAccountRates *)arg1 ;
-(NSString *)requestIdentifier;
-(void)setCreditLimit:(PKCurrencyAmount *)arg1 ;
-(PKCurrencyAmount *)creditLimit;
-(void)encodeWithRecord:(id)arg1 ;
-(NSString *)adverseActionContentIdentifier;
-(void)setAdverseActionContentIdentifier:(NSString *)arg1 ;
-(void)setInitiator:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(id)initWithRecord:(id)arg1 ;
-(NSString *)description;
-(long long)initiator;
-(long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

