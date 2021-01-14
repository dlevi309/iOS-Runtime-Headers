/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


@class NSString;

@interface IDSCarrierTokenRequestParameters : NSObject {

	long long _subscriptionSource;
	NSString* _IMEI;
	NSString* _carrierNonce;

}

@property (nonatomic,readonly) long long subscriptionSource;              //@synthesize subscriptionSource=_subscriptionSource - In the implementation block
@property (nonatomic,readonly) NSString * IMEI;                           //@synthesize IMEI=_IMEI - In the implementation block
@property (nonatomic,readonly) NSString * carrierNonce;                   //@synthesize carrierNonce=_carrierNonce - In the implementation block
-(NSString *)IMEI;
-(NSString *)carrierNonce;
-(id)initWithSubscriptionSource:(long long)arg1 IMEI:(id)arg2 carrierNonce:(id)arg3 ;
-(long long)subscriptionSource;
@end

