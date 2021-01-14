/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSString;

@interface FCIntroductoryOffer : NSObject {

	int _offerType;
	unsigned long long _numOfPeriods;
	NSString* _priceFormatted;
	NSString* _subscriptionPeriodInISO_8601;

}

@property (nonatomic,copy) NSString * priceFormatted;                            //@synthesize priceFormatted=_priceFormatted - In the implementation block
@property (nonatomic,copy) NSString * subscriptionPeriodInISO_8601;              //@synthesize subscriptionPeriodInISO_8601=_subscriptionPeriodInISO_8601 - In the implementation block
@property (assign,nonatomic) int offerType;                                      //@synthesize offerType=_offerType - In the implementation block
@property (assign,nonatomic) unsigned long long numOfPeriods;                    //@synthesize numOfPeriods=_numOfPeriods - In the implementation block
-(void)setNumOfPeriods:(unsigned long long)arg1 ;
-(void)setPriceFormatted:(NSString *)arg1 ;
-(NSString *)subscriptionPeriodInISO_8601;
-(id)initWithOfferType:(int)arg1 priceFormatted:(id)arg2 recurringSubscriptionPeriod:(id)arg3 numOfPeriods:(unsigned long long)arg4 ;
-(void)setSubscriptionPeriodInISO_8601:(NSString *)arg1 ;
-(NSString *)priceFormatted;
-(void)setOfferType:(int)arg1 ;
-(int)offerType;
-(unsigned long long)numOfPeriods;
@end

