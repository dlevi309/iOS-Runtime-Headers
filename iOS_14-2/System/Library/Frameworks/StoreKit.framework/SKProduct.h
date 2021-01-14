/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) BOOL isFamilyShareable; 
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
-(NSDecimalNumber *)price;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSString *)localizedTitle;
-(id)init;
-(void)_setSubscriptionGroupIdentifier:(id)arg1 ;
-(BOOL)isFamilyShareable;
-(BOOL)downloadable;
-(id)initMinusLocaleWithXPCEncoding:(id)arg1 ;
-(id)initMinusLocaleWithDictionary:(id)arg1 ;
-(SKProductSubscriptionPeriod *)subscriptionPeriod;
-(void)_setPrice:(id)arg1 ;
-(void)_setProductIdentifier:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)productIdentifier;
-(BOOL)isDownloadable;
-(NSString *)localizedDescription;
-(void)_setLocalizedDescription:(id)arg1 ;
-(NSString *)downloadContentVersion;
-(NSArray *)downloadContentLengths;
-(SKProductDiscount *)introductoryPrice;
-(void)_setDiscounts:(id)arg1 ;
-(void)_setContentVersion:(id)arg1 ;
-(NSArray *)discounts;
-(void)_setPriceLocale:(id)arg1 ;
-(NSString *)subscriptionGroupIdentifier;
-(void)_setLocaleIdentifier:(id)arg1 ;
-(NSLocale *)priceLocale;
-(NSString *)contentVersion;
-(void)_setSubscriptionPeriod:(id)arg1 ;
-(void)_setIntroductoryPrice:(id)arg1 ;
-(void)_setDownloadable:(BOOL)arg1 ;
-(NSArray *)contentLengths;
-(void)_setDownloadContentLengths:(id)arg1 ;
-(void)_setFamilyShareable:(BOOL)arg1 ;
-(NSString *)_localeIdentifier;
-(void)_setLocalizedTitle:(id)arg1 ;
@end

