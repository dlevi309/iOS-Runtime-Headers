/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(unsigned long long)type;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(void)_setIdentifier:(id)arg1 ;
-(void)_setType:(unsigned long long)arg1 ;
-(NSDecimalNumber *)price;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSLocale *)priceLocale;
-(SKProductSubscriptionPeriod *)subscriptionPeriod;
-(unsigned long long)numberOfPeriods;
-(unsigned long long)paymentMode;
-(void)_setNumberOfPeriods:(unsigned long long)arg1 ;
-(void)_setPaymentMode:(unsigned long long)arg1 ;
-(void)_setPrice:(id)arg1 ;
-(void)_setPriceLocale:(id)arg1 ;
-(void)_setSubscriptionPeriod:(id)arg1 ;
@end

