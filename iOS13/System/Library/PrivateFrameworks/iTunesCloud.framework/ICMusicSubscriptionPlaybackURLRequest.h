/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICStoreURLRequest.h>

@class NSString, NSData;

@interface ICMusicSubscriptionPlaybackURLRequest : ICStoreURLRequest {

	BOOL _delegatedPlayback;
	NSString* _assetSourceStorefrontID;
	NSData* _certificateData;
	NSString* _cloudUniversalLibraryID;
	long long _requestType;
	unsigned long long _storeCloudID;
	long long _storePurchasedAdamID;
	long long _storeSubscriptionAdamID;

}

@property (nonatomic,copy) NSString * assetSourceStorefrontID;                               //@synthesize assetSourceStorefrontID=_assetSourceStorefrontID - In the implementation block
@property (nonatomic,copy) NSData * certificateData;                                         //@synthesize certificateData=_certificateData - In the implementation block
@property (nonatomic,copy) NSString * cloudUniversalLibraryID;                               //@synthesize cloudUniversalLibraryID=_cloudUniversalLibraryID - In the implementation block
@property (assign,getter=isDelegatedPlayback,nonatomic) BOOL delegatedPlayback;              //@synthesize delegatedPlayback=_delegatedPlayback - In the implementation block
@property (assign,nonatomic) long long requestType;                                          //@synthesize requestType=_requestType - In the implementation block
@property (assign,nonatomic) unsigned long long storeCloudID;                                //@synthesize storeCloudID=_storeCloudID - In the implementation block
@property (assign,nonatomic) long long storePurchasedAdamID;                                 //@synthesize storePurchasedAdamID=_storePurchasedAdamID - In the implementation block
@property (assign,nonatomic) long long storeSubscriptionAdamID;                              //@synthesize storeSubscriptionAdamID=_storeSubscriptionAdamID - In the implementation block
+(BOOL)requiresCertificateDataForRequestType:(long long)arg1 ;
-(long long)requestType;
-(NSData *)certificateData;
-(void)setRequestType:(long long)arg1 ;
-(NSString *)cloudUniversalLibraryID;
-(long long)storePurchasedAdamID;
-(long long)storeSubscriptionAdamID;
-(void)setAssetSourceStorefrontID:(NSString *)arg1 ;
-(void)setCloudUniversalLibraryID:(NSString *)arg1 ;
-(void)setStoreSubscriptionAdamID:(long long)arg1 ;
-(unsigned long long)storeCloudID;
-(void)setStoreCloudID:(unsigned long long)arg1 ;
-(void)setStorePurchasedAdamID:(long long)arg1 ;
-(void)setCertificateData:(NSData *)arg1 ;
-(NSString *)assetSourceStorefrontID;
-(void)setDelegatedPlayback:(BOOL)arg1 ;
-(BOOL)isDelegatedPlayback;
-(void)buildStoreURLRequestWithURLRequest:(id)arg1 builderProperties:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

