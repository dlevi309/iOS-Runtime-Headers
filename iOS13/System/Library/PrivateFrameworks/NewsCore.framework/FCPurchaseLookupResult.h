/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setPrice:(NSNumber *)arg1 ;
-(NSNumber *)appAdamID;
-(void)setAppAdamID:(NSNumber *)arg1 ;
-(NSString *)offerName;
-(NSString *)purchaseID;
-(void)setPurchaseID:(NSString *)arg1 ;
-(NSString *)subscriptionPeriodInISO_8601;
-(void)setSubscriptionPeriodInISO_8601:(NSString *)arg1 ;
-(void)setOfferName:(NSString *)arg1 ;
-(NSString *)subscriptionPriceFormatted;
-(void)setSubscriptionPriceFormatted:(NSString *)arg1 ;
-(FCIntroductoryOffer *)introOffer;
-(void)setIntroOffer:(FCIntroductoryOffer *)arg1 ;
@end

