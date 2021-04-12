/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@class NSString, NSNumber, NSDictionary, WLKStoreOfferPeriod;

@interface WLKStoreOffer : NSObject {

	NSString* _buyParameters;
	NSString* _formattedPrice;
	NSNumber* _price;
	unsigned long long _offerType;
	unsigned long long _subscriptionType;
	NSString* _title;
	NSDictionary* _dictionary;
	WLKStoreOfferPeriod* _renewalPeriod;
	WLKStoreOfferPeriod* _freeTrialPeriod;
	WLKStoreOfferPeriod* _introOfferPeriod;

}

@property (nonatomic,readonly) NSString * buyParameters;                            //@synthesize buyParameters=_buyParameters - In the implementation block
@property (nonatomic,readonly) NSString * formattedPrice;                           //@synthesize formattedPrice=_formattedPrice - In the implementation block
@property (nonatomic,readonly) NSNumber * price;                                    //@synthesize price=_price - In the implementation block
@property (nonatomic,readonly) unsigned long long offerType;                        //@synthesize offerType=_offerType - In the implementation block
@property (nonatomic,readonly) unsigned long long subscriptionType;                 //@synthesize subscriptionType=_subscriptionType - In the implementation block
@property (nonatomic,readonly) NSString * title;                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionary;                           //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) WLKStoreOfferPeriod * renewalPeriod;                 //@synthesize renewalPeriod=_renewalPeriod - In the implementation block
@property (nonatomic,readonly) WLKStoreOfferPeriod * freeTrialPeriod;               //@synthesize freeTrialPeriod=_freeTrialPeriod - In the implementation block
@property (nonatomic,readonly) WLKStoreOfferPeriod * introOfferPeriod;              //@synthesize introOfferPeriod=_introOfferPeriod - In the implementation block
+(id)offersWithSubscriptionDictionaries:(id)arg1 ;
+(id)offersWithMAPIDictionaries:(id)arg1 ;
-(id)_localize:(id)arg1 token:(id)arg2 value:(id)arg3 ;
-(id)vui_subscriptionOfferButtonText;
-(id)vui_subscriptionOfferDisclaimerText;
-(NSNumber *)price;
-(unsigned long long)subscriptionType;
-(WLKStoreOfferPeriod *)freeTrialPeriod;
-(NSString *)buyParameters;
-(NSString *)formattedPrice;
-(WLKStoreOfferPeriod *)introOfferPeriod;
-(NSDictionary *)dictionary;
-(unsigned long long)offerType;
-(id)sui_buttonTitle;
-(id)sui_buttonSubtitleWithServiceName:(id)arg1 ;
-(NSString *)title;
-(WLKStoreOfferPeriod *)renewalPeriod;
-(BOOL)specialOfferEligible;
-(id)initWithSubscriptionDictionary:(id)arg1 ;
-(id)initWithMAPIDictionary:(id)arg1 ;
@end

