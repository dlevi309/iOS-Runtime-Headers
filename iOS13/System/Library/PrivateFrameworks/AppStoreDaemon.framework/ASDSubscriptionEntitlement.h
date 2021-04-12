/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (copy,readonly) NSDate * expiryDate; 
@property (copy,readonly) NSNumber * familyID; 
@property (copy,readonly) NSNumber * inAppAdamID; 
@property (copy,readonly) NSString * inAppVersion; 
@property (readonly) BOOL isTrialPeriod; 
@property (readonly) BOOL isOfferPeriod; 
@property (readonly) BOOL isPurchaser; 
@property (getter=isNewsAppPurchase,readonly) BOOL newsAppPurchase; 
@property (copy,readonly) NSString * offerID; 
@property (copy,readonly) NSNumber * originalPurchaseDownloadID; 
@property (copy,readonly) NSNumber * purchasabilityType; 
@property (copy,readonly) NSNumber * purchaseDownloadID; 
@property (readonly) unsigned long long segment; 
@property (copy,readonly) NSNumber * quantity; 
@property (copy,readonly) NSString * vendorID; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)familyID;
-(NSDate *)expiryDate;
-(unsigned long long)segment;
-(NSNumber *)quantity;
-(NSNumber *)appAdamID;
-(NSString *)vendorID;
-(NSNumber *)appVersion;
-(NSString *)chargeCountryCode;
-(NSString *)chargeCurrencyCode;
-(NSString *)inAppVersion;
-(BOOL)isNewsAppPurchase;
-(NSNumber *)purchasabilityType;
-(id)_valueForKey:(id)arg1 ofType:(Class)arg2 ;
-(id)initWithDictionary:(id)arg1 forAppAdamID:(id)arg2 segment:(unsigned long long)arg3 ;
-(BOOL)autoRenewEnabled;
-(NSNumber *)chargeStoreFrontID;
-(NSNumber *)inAppAdamID;
-(BOOL)isTrialPeriod;
-(BOOL)isOfferPeriod;
-(BOOL)isPurchaser;
-(NSString *)offerID;
-(NSNumber *)originalPurchaseDownloadID;
-(NSNumber *)purchaseDownloadID;
@end

