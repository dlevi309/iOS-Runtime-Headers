/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSString, NSNumber, FCIntroductoryOffer;

@interface FCPurchaseLookupResult : NSObject {

	NSString* _purchaseID;
	NSString* _offerName;
	NSString* _subscriptionPeriodInISO_8601;
	NSString* _subscriptionPriceFormatted;
	NSNumber* _price;
	NSNumber* _appAdamID;
	FCIntroductoryOffer* _introOffer;

}

@property (nonatomic,copy) NSString * purchaseID;                                //@synthesize purchaseID=_purchaseID - In the implementation block
@property (nonatomic,copy) NSString * offerName;                                 //@synthesize offerName=_offerName - In the implementation block
@property (nonatomic,copy) NSString * subscriptionPeriodInISO_8601;              //@synthesize subscriptionPeriodInISO_8601=_subscriptionPeriodInISO_8601 - In the implementation block
@property (nonatomic,copy) NSString * subscriptionPriceFormatted;                //@synthesize subscriptionPriceFormatted=_subscriptionPriceFormatted - In the implementation block
@property (nonatomic,copy) NSNumber * price;                                     //@synthesize price=_price - In the implementation block
@property (nonatomic,copy) NSNumber * appAdamID;                                 //@synthesize appAdamID=_appAdamID - In the implementation block
@property (nonatomic,retain) FCIntroductoryOffer * introOffer;                   //@synthesize introOffer=_introOffer - In the implementation block
-(NSNumber *)price;
-(void)setPurchaseID:(NSString *)arg1 ;
-(NSString *)subscriptionPriceFormatted;
-(NSString *)purchaseID;
-(NSString *)subscriptionPeriodInISO_8601;
-(void)setSubscriptionPeriodInISO_8601:(NSString *)arg1 ;
-(void)setOfferName:(NSString *)arg1 ;
-(FCIntroductoryOffer *)introOffer;
-(void)setPrice:(NSNumber *)arg1 ;
-(void)setSubscriptionPriceFormatted:(NSString *)arg1 ;
-(NSNumber *)appAdamID;
-(void)setAppAdamID:(NSNumber *)arg1 ;
-(NSString *)offerName;
-(void)setIntroOffer:(FCIntroductoryOffer *)arg1 ;
@end

