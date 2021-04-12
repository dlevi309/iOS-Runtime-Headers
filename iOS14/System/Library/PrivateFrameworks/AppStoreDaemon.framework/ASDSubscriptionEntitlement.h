/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSNumber, NSString, NSDate;

@interface ASDSubscriptionEntitlement : NSObject <NSSecureCoding> {

	NSDictionary* _dictionary;
	unsigned long long _segment;

}

@property (copy,readonly) NSNumber * appAdamID; 
@property (copy,readonly) NSNumber * appVersion; 
@property (readonly) BOOL autoRenewEnabled; 
@property (copy,readonly) NSString * chargeCountryCode; 
@property (copy,readonly) NSString * chargeCurrencyCode; 
@property (copy,readonly) NSNumber * chargeStoreFrontID; 
@property (copy,readonly) NSNumber * entitlementSourceAdamID; 
@property (copy,readonly) NSDate * expiryDate; 
@property (copy,readonly) NSNumber * familyID; 
@property (copy,readonly) NSNumber * featureAccessTypeID; 
@property (copy,readonly) NSNumber * freeTrialPeriodID; 
@property (copy,readonly) NSNumber * inAppAdamID; 
@property (copy,readonly) NSString * inAppVersion; 
@property (copy,readonly) NSNumber * initialPurchaseTimestamp; 
@property (readonly) BOOL isTrialPeriod; 
@property (readonly) BOOL isOfferPeriod; 
@property (readonly) BOOL isPurchaser; 
@property (getter=isNewsAppPurchase,readonly) BOOL newsAppPurchase; 
@property (readonly) BOOL isInGracePeriod; 
@property (copy,readonly) NSString * offerID; 
@property (copy,readonly) NSNumber * originalPurchaseDownloadID; 
@property (copy,readonly) NSString * poolType; 
@property (copy,readonly) NSNumber * promoScenarioID; 
@property (copy,readonly) NSNumber * purchasabilityType; 
@property (copy,readonly) NSNumber * purchaseDownloadID; 
@property (readonly) unsigned long long segment; 
@property (copy,readonly) NSNumber * serviceBeginsTimestamp; 
@property (copy,readonly) NSDate * startDate; 
@property (copy,readonly) NSNumber * subscriptionBundleID; 
@property (copy,readonly) NSNumber * quantity; 
@property (copy,readonly) NSString * vendorAdHocOfferID; 
@property (copy,readonly) NSString * vendorID; 
+(BOOL)supportsSecureCoding;
-(id)servicesBundlePurchaseID;
-(id)description;
-(NSNumber *)appVersion;
-(id)_valueForKey:(id)arg1 ofType:(Class)arg2 ;
-(id)_dateFromDateString:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 forAppAdamID:(id)arg2 segment:(unsigned long long)arg3 ;
-(NSNumber *)chargeStoreFrontID;
-(NSNumber *)entitlementSourceAdamID;
-(NSNumber *)featureAccessTypeID;
-(NSNumber *)freeTrialPeriodID;
-(NSNumber *)initialPurchaseTimestamp;
-(BOOL)isInGracePeriod;
-(NSNumber *)originalPurchaseDownloadID;
-(NSNumber *)promoScenarioID;
-(NSNumber *)purchaseDownloadID;
-(NSNumber *)serviceBeginsTimestamp;
-(NSString *)vendorAdHocOfferID;
-(unsigned long long)segment;
-(NSDate *)startDate;
-(NSNumber *)familyID;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isPurchaser;
-(NSNumber *)quantity;
-(NSString *)offerID;
-(NSString *)poolType;
-(BOOL)isNewsAppPurchase;
-(NSString *)chargeCountryCode;
-(NSNumber *)subscriptionBundleID;
-(NSNumber *)purchasabilityType;
-(NSString *)chargeCurrencyCode;
-(BOOL)autoRenewEnabled;
-(NSString *)inAppVersion;
-(BOOL)isTrialPeriod;
-(BOOL)isOfferPeriod;
-(NSDate *)expiryDate;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)appAdamID;
-(NSString *)vendorID;
-(NSNumber *)inAppAdamID;
@end

