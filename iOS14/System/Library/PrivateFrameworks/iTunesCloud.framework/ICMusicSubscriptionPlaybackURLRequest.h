/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICStoreURLRequest.h>

@class NSString;

@interface ICMusicSubscriptionPlaybackURLRequest : ICStoreURLRequest {

	BOOL _delegatedPlayback;
	NSString* _assetSourceStorefrontID;
	NSString* _cloudUniversalLibraryID;
	long long _requestType;
	unsigned long long _storeCloudID;
	long long _storePurchasedAdamID;
	long long _storeSubscriptionAdamID;

}

@property (nonatomic,copy) NSString * assetSourceStorefrontID;                               //@synthesize assetSourceStorefrontID=_assetSourceStorefrontID - In the implementation block
@property (nonatomic,copy) NSString * cloudUniversalLibraryID;                               //@synthesize cloudUniversalLibraryID=_cloudUniversalLibraryID - In the implementation block
@property (assign,getter=isDelegatedPlayback,nonatomic) BOOL delegatedPlayback;              //@synthesize delegatedPlayback=_delegatedPlayback - In the implementation block
@property (assign,nonatomic) long long requestType;                                          //@synthesize requestType=_requestType - In the implementation block
@property (assign,nonatomic) unsigned long long storeCloudID;                                //@synthesize storeCloudID=_storeCloudID - In the implementation block
@property (assign,nonatomic) long long storePurchasedAdamID;                                 //@synthesize storePurchasedAdamID=_storePurchasedAdamID - In the implementation block
@property (assign,nonatomic) long long storeSubscriptionAdamID;                              //@synthesize storeSubscriptionAdamID=_storeSubscriptionAdamID - In the implementation block
-(void)buildStoreURLRequestWithURLRequest:(id)arg1 builderProperties:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setRequestType:(long long)arg1 ;
-(void)setCloudUniversalLibraryID:(NSString *)arg1 ;
-(void)setDelegatedPlayback:(BOOL)arg1 ;
-(long long)requestType;
-(void)setStoreCloudID:(unsigned long long)arg1 ;
-(NSString *)assetSourceStorefrontID;
-(long long)storeSubscriptionAdamID;
-(BOOL)isDelegatedPlayback;
-(long long)storePurchasedAdamID;
-(void)setAssetSourceStorefrontID:(NSString *)arg1 ;
-(void)setStorePurchasedAdamID:(long long)arg1 ;
-(void)setStoreSubscriptionAdamID:(long long)arg1 ;
-(unsigned long long)storeCloudID;
-(NSString *)cloudUniversalLibraryID;
@end

