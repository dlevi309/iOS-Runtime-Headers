/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)qualityOfService;
-(void)setQualityOfService:(long long)arg1 ;
-(ICStoreRequestContext *)requestContext;
-(long long)storeSubscriptionAdamID;
-(id)performWithResponseHandler:(/*^block*/id)arg1 ;
-(void)setAssetSourceStorefrontID:(NSString *)arg1 ;
-(id)initWithRequestContext:(id)arg1 storeSubscriptionAdamID:(long long)arg2 ;
-(NSString *)assetSourceStorefrontID;
@end

