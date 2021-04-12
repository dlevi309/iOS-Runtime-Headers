/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@class NSString, ICStoreRequestContext;

@interface ICMusicSubscriptionAccountlessPlaybackRequest : NSObject {

	NSString* _assetSourceStorefrontID;
	ICStoreRequestContext* _requestContext;
	long long _qualityOfService;
	long long _storeSubscriptionAdamID;

}

@property (nonatomic,copy) NSString * assetSourceStorefrontID;                           //@synthesize assetSourceStorefrontID=_assetSourceStorefrontID - In the implementation block
@property (nonatomic,copy,readonly) ICStoreRequestContext * requestContext;              //@synthesize requestContext=_requestContext - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                                 //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (nonatomic,readonly) long long storeSubscriptionAdamID;                        //@synthesize storeSubscriptionAdamID=_storeSubscriptionAdamID - In the implementation block
-(void)setQualityOfService:(long long)arg1 ;
-(id)performWithResponseHandler:(/*^block*/id)arg1 ;
-(ICStoreRequestContext *)requestContext;
-(NSString *)assetSourceStorefrontID;
-(long long)storeSubscriptionAdamID;
-(void)setAssetSourceStorefrontID:(NSString *)arg1 ;
-(long long)qualityOfService;
-(id)initWithRequestContext:(id)arg1 storeSubscriptionAdamID:(long long)arg2 ;
@end

