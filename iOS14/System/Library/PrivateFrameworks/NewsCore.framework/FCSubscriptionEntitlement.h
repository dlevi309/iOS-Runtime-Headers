/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSString, NSNumber;

@interface FCSubscriptionEntitlement : NSObject {

	BOOL _newsAppPurchase;
	BOOL _isTrialPeriod;
	BOOL _isPurchaser;
	BOOL _isAmplifyUser;
	NSString* _servicesBundleAdamID;
	NSNumber* _appAdamID;
	NSString* _chargeCurrencyCode;
	NSNumber* _inAppAdamID;

}

@property (nonatomic,readonly) NSString * servicesBundleAdamID;                            //@synthesize servicesBundleAdamID=_servicesBundleAdamID - In the implementation block
@property (nonatomic,readonly) NSNumber * appAdamID;                                       //@synthesize appAdamID=_appAdamID - In the implementation block
@property (nonatomic,readonly) NSString * chargeCurrencyCode;                              //@synthesize chargeCurrencyCode=_chargeCurrencyCode - In the implementation block
@property (nonatomic,readonly) NSNumber * inAppAdamID;                                     //@synthesize inAppAdamID=_inAppAdamID - In the implementation block
@property (getter=isNewsAppPurchase,nonatomic,readonly) BOOL newsAppPurchase;              //@synthesize newsAppPurchase=_newsAppPurchase - In the implementation block
@property (nonatomic,readonly) BOOL isTrialPeriod;                                         //@synthesize isTrialPeriod=_isTrialPeriod - In the implementation block
@property (nonatomic,readonly) BOOL isPurchaser;                                           //@synthesize isPurchaser=_isPurchaser - In the implementation block
@property (nonatomic,readonly) BOOL isAmplifyUser;                                         //@synthesize isAmplifyUser=_isAmplifyUser - In the implementation block
-(BOOL)isPurchaser;
-(id)description;
-(NSString *)servicesBundleAdamID;
-(BOOL)isNewsAppPurchase;
-(NSString *)chargeCurrencyCode;
-(id)initWithAppAdamID:(id)arg1 inAppAdamID:(id)arg2 chargeCurrencyCode:(id)arg3 newsAppPurchase:(BOOL)arg4 isTrialPeriod:(BOOL)arg5 isPurchaser:(BOOL)arg6 servicesBundleAdamID:(id)arg7 isAmplifyUser:(BOOL)arg8 ;
-(BOOL)isTrialPeriod;
-(BOOL)isAmplifyUser;
-(NSNumber *)appAdamID;
-(NSNumber *)inAppAdamID;
@end

