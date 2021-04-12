/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


#import <StoreServices/StoreServices-Structs.h>
@class NSNumber, NSString, NSDate;

@interface SSVSubscriptionEntitlementsSubscription : NSObject {

	BOOL _newsAppPurchase;
	NSNumber* _appAdamId;
	NSNumber* _appVersion;
	NSString* _chargeCountryCode;
	NSString* _chargeCurrencyCode;
	NSNumber* _chargeStoreFrontIdentifier;
	NSDate* _expireDate;
	NSNumber* _familyId;
	NSNumber* _inAppAdamId;
	NSString* _inAppVersion;
	NSString* _offerIdentifier;
	NSNumber* _originalPurchaseDownloadId;
	NSNumber* _purchasabilityType;
	NSNumber* _purchaseDownloadId;
	NSNumber* _quantity;
	NSString* _vendorIdentifier;

}

@property (nonatomic,copy) NSNumber * appAdamId;                                         //@synthesize appAdamId=_appAdamId - In the implementation block
@property (nonatomic,copy) NSNumber * appVersion;                                        //@synthesize appVersion=_appVersion - In the implementation block
@property (nonatomic,copy) NSString * chargeCountryCode;                                 //@synthesize chargeCountryCode=_chargeCountryCode - In the implementation block
@property (nonatomic,copy) NSString * chargeCurrencyCode;                                //@synthesize chargeCurrencyCode=_chargeCurrencyCode - In the implementation block
@property (nonatomic,copy) NSNumber * chargeStoreFrontIdentifier;                        //@synthesize chargeStoreFrontIdentifier=_chargeStoreFrontIdentifier - In the implementation block
@property (nonatomic,copy) NSDate * expireDate;                                          //@synthesize expireDate=_expireDate - In the implementation block
@property (nonatomic,copy) NSNumber * familyId;                                          //@synthesize familyId=_familyId - In the implementation block
@property (nonatomic,copy) NSNumber * inAppAdamId;                                       //@synthesize inAppAdamId=_inAppAdamId - In the implementation block
@property (nonatomic,copy) NSString * inAppVersion;                                      //@synthesize inAppVersion=_inAppVersion - In the implementation block
@property (assign,getter=isNewsAppPurchase,nonatomic) BOOL newsAppPurchase;              //@synthesize newsAppPurchase=_newsAppPurchase - In the implementation block
@property (nonatomic,copy) NSString * offerIdentifier;                                   //@synthesize offerIdentifier=_offerIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * originalPurchaseDownloadId;                        //@synthesize originalPurchaseDownloadId=_originalPurchaseDownloadId - In the implementation block
@property (nonatomic,copy) NSNumber * purchasabilityType;                                //@synthesize purchasabilityType=_purchasabilityType - In the implementation block
@property (nonatomic,copy) NSNumber * purchaseDownloadId;                                //@synthesize purchaseDownloadId=_purchaseDownloadId - In the implementation block
@property (nonatomic,copy) NSNumber * quantity;                                          //@synthesize quantity=_quantity - In the implementation block
@property (nonatomic,copy) NSString * vendorIdentifier;                                  //@synthesize vendorIdentifier=_vendorIdentifier - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)quantity;
-(void)setQuantity:(NSNumber *)arg1 ;
-(NSNumber *)appAdamId;
-(void)setAppAdamId:(NSNumber *)arg1 ;
-(NSNumber *)appVersion;
-(void)setAppVersion:(NSNumber *)arg1 ;
-(NSDate *)expireDate;
-(NSString *)offerIdentifier;
-(void)setOfferIdentifier:(NSString *)arg1 ;
-(NSString *)vendorIdentifier;
-(void)setVendorIdentifier:(NSString *)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSString *)chargeCountryCode;
-(void)setChargeCountryCode:(NSString *)arg1 ;
-(NSString *)chargeCurrencyCode;
-(void)setChargeCurrencyCode:(NSString *)arg1 ;
-(NSNumber *)chargeStoreFrontIdentifier;
-(void)setChargeStoreFrontIdentifier:(NSNumber *)arg1 ;
-(void)setExpireDate:(NSDate *)arg1 ;
-(NSNumber *)familyId;
-(void)setFamilyId:(NSNumber *)arg1 ;
-(NSNumber *)inAppAdamId;
-(void)setInAppAdamId:(NSNumber *)arg1 ;
-(NSString *)inAppVersion;
-(void)setInAppVersion:(NSString *)arg1 ;
-(BOOL)isNewsAppPurchase;
-(void)setNewsAppPurchase:(BOOL)arg1 ;
-(NSNumber *)originalPurchaseDownloadId;
-(void)setOriginalPurchaseDownloadId:(NSNumber *)arg1 ;
-(NSNumber *)purchasabilityType;
-(void)setPurchasabilityType:(NSNumber *)arg1 ;
-(NSNumber *)purchaseDownloadId;
-(void)setPurchaseDownloadId:(NSNumber *)arg1 ;
@end

