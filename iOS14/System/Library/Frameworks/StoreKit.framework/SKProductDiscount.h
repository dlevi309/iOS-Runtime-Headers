/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/


@class NSDecimalNumber, NSLocale, NSString, SKProductSubscriptionPeriod;

@interface SKProductDiscount : NSObject {

	id _internal;

}

@property (nonatomic,readonly) NSDecimalNumber * price; 
@property (nonatomic,readonly) NSLocale * priceLocale; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) SKProductSubscriptionPeriod * subscriptionPeriod; 
@property (nonatomic,readonly) unsigned long long numberOfPeriods; 
@property (nonatomic,readonly) unsigned long long paymentMode; 
@property (nonatomic,readonly) unsigned long long type; 
-(NSDecimalNumber *)price;
-(id)initWithXPCEncoding:(id)arg1 ;
-(unsigned long long)numberOfPeriods;
-(id)copyXPCEncoding;
-(void)_setNumberOfPeriods:(unsigned long long)arg1 ;
-(void)_setPaymentMode:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)paymentMode;
-(SKProductSubscriptionPeriod *)subscriptionPeriod;
-(void)_setPrice:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)type;
-(void)_setType:(unsigned long long)arg1 ;
-(void)_setPriceLocale:(id)arg1 ;
-(NSLocale *)priceLocale;
-(void)_setIdentifier:(id)arg1 ;
-(void)_setSubscriptionPeriod:(id)arg1 ;
-(NSString *)identifier;
@end

