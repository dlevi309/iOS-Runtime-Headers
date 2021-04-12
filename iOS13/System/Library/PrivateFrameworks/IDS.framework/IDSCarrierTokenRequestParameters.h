/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithSubscriptionSource:(long long)arg1 IMEI:(id)arg2 carrierNonce:(id)arg3 ;
-(long long)subscriptionSource;
-(NSString *)carrierNonce;
@end

