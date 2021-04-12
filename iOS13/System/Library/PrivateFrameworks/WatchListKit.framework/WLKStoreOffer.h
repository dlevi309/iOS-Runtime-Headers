/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)_locKeyForPeriod:(id)arg1 ;
-(id)vui_subscriptionOfferButtonText;
-(id)vui_subscriptionOfferDisclaimerText;
-(NSDictionary *)dictionary;
-(NSString *)title;
-(unsigned long long)subscriptionType;
-(NSNumber *)price;
-(unsigned long long)offerType;
-(NSString *)buyParameters;
-(NSString *)formattedPrice;
-(id)sui_buttonTitle;
-(id)sui_buttonSubtitleWithServiceName:(id)arg1 ;
-(WLKStoreOfferPeriod *)introOfferPeriod;
-(WLKStoreOfferPeriod *)renewalPeriod;
-(BOOL)specialOfferEligible;
-(WLKStoreOfferPeriod *)freeTrialPeriod;
-(id)initWithSubscriptionDictionary:(id)arg1 ;
-(id)initWithMAPIDictionary:(id)arg1 ;
@end

