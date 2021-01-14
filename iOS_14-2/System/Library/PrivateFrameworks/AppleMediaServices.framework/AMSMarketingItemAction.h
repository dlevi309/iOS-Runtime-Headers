/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSDictionary, AMSBuyParams, NSString, NSNumber, NSArray, NSURL;

@interface AMSMarketingItemAction : NSObject {

	NSDictionary* _rawValues;

}

@property (nonatomic,retain) NSDictionary * rawValues;                      //@synthesize rawValues=_rawValues - In the implementation block
@property (nonatomic,readonly) AMSBuyParams * buyParams; 
@property (nonatomic,readonly) NSString * callToActionLabel; 
@property (nonatomic,readonly) NSString * disclaimerText; 
@property (nonatomic,readonly) BOOL isDefault; 
@property (nonatomic,readonly) BOOL isFamily; 
@property (nonatomic,readonly) BOOL isRecommended; 
@property (nonatomic,readonly) NSString * offerID; 
@property (nonatomic,readonly) NSNumber * price; 
@property (nonatomic,readonly) NSString * priceForDisplay; 
@property (nonatomic,readonly) NSNumber * priceDiff; 
@property (nonatomic,readonly) NSString * priceDiffForDisplay; 
@property (nonatomic,readonly) NSString * valuePropDetail; 
@property (nonatomic,readonly) NSString * valuePropInfo; 
@property (nonatomic,readonly) NSArray * serviceComponents; 
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) NSURL * url; 
-(NSNumber *)price;
-(BOOL)isYearly;
-(id)introOfferPriceForDisplay;
-(BOOL)isFamily;
-(NSString *)disclaimerText;
-(NSDictionary *)rawValues;
-(BOOL)isRecommended;
-(id)introOfferPrice;
-(NSString *)priceForDisplay;
-(void)setRawValues:(NSDictionary *)arg1 ;
-(NSString *)valuePropDetail;
-(id)freeTrialPeriod;
-(NSURL *)url;
-(id)initWithDictionary:(id)arg1 ;
-(id)priceString;
-(NSString *)offerID;
-(id)name;
-(id)_serviceNames;
-(id)_serviceComponentsFromMap:(id)arg1 withNames:(id)arg2 ;
-(id)description;
-(NSNumber *)priceDiff;
-(id)introOfferPeriod;
-(NSString *)priceDiffForDisplay;
-(BOOL)isDefault;
-(id)dismissLabel;
-(NSString *)type;
-(NSArray *)serviceComponents;
-(NSString *)valuePropInfo;
-(NSString *)callToActionLabel;
-(id)inAppID;
-(id)priceFormatted;
-(id)_servicesData;
-(AMSBuyParams *)buyParams;
-(id)recurringSubscriptionPeriod;
@end

