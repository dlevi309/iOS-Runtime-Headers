/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/


@class NSString, NSDecimalNumber, NSLocale, NSArray, SKProductSubscriptionPeriod, SKProductDiscount;

@interface SKProduct : NSObject {

	id _internal;

}

@property (setter=_setLocaleIdentifier:,getter=_localeIdentifier,nonatomic,copy) NSString * _localeIdentifier; 
@property (nonatomic,readonly) NSString * localizedDescription; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSDecimalNumber * price; 
@property (nonatomic,readonly) NSLocale * priceLocale; 
@property (nonatomic,readonly) NSString * productIdentifier; 
@property (nonatomic,readonly) BOOL isDownloadable; 
@property (nonatomic,readonly) BOOL downloadable; 
@property (nonatomic,readonly) NSArray * contentLengths; 
@property (nonatomic,readonly) NSArray * downloadContentLengths; 
@property (nonatomic,readonly) NSString * contentVersion; 
@property (nonatomic,readonly) NSString * downloadContentVersion; 
@property (nonatomic,readonly) SKProductSubscriptionPeriod * subscriptionPeriod; 
@property (nonatomic,readonly) SKProductDiscount * introductoryPrice; 
@property (nonatomic,readonly) NSString * subscriptionGroupIdentifier; 
@property (nonatomic,readonly) NSArray * discounts; 
+(id)productsFromXPCEncodingsArray:(id)arg1 ;
+(id)productsFromDictionaries:(id)arg1 ;
-(id)init;
-(NSString *)localizedDescription;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)localizedTitle;
-(void)_setLocale:(id)arg1 ;
-(NSDecimalNumber *)price;
-(NSString *)productIdentifier;
-(NSString *)_localeIdentifier;
-(NSString *)contentVersion;
-(BOOL)isDownloadable;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSLocale *)priceLocale;
-(SKProductSubscriptionPeriod *)subscriptionPeriod;
-(void)_setPrice:(id)arg1 ;
-(void)_setPriceLocale:(id)arg1 ;
-(void)_setSubscriptionPeriod:(id)arg1 ;
-(id)initMinusLocaleWithDictionary:(id)arg1 ;
-(SKProductDiscount *)introductoryPrice;
-(NSArray *)downloadContentLengths;
-(NSString *)downloadContentVersion;
-(void)_setLocaleIdentifier:(id)arg1 ;
-(id)initMinusLocaleWithXPCEncoding:(id)arg1 ;
-(NSArray *)contentLengths;
-(BOOL)downloadable;
-(NSString *)subscriptionGroupIdentifier;
-(NSArray *)discounts;
-(void)_setContentVersion:(id)arg1 ;
-(void)_setDownloadContentLengths:(id)arg1 ;
-(void)_setDownloadable:(BOOL)arg1 ;
-(void)_setIntroductoryPrice:(id)arg1 ;
-(void)_setLocalizedDescription:(id)arg1 ;
-(void)_setLocalizedTitle:(id)arg1 ;
-(void)_setProductIdentifier:(id)arg1 ;
-(void)_setSubscriptionGroupIdentifier:(id)arg1 ;
-(void)_setDiscounts:(id)arg1 ;
@end

