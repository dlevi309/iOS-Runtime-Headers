/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, ICStoreRequestContext;

@interface ICMusicSubscriptionLeasePlaybackRequest : NSObject <NSCopying> {

	BOOL _shouldPreventLeaseAcquisition;
	BOOL _shouldRequireLeaseAcquisition;
	NSString* _assetSourceStorefrontID;
	ICStoreRequestContext* _requestContext;
	unsigned long long _storeCloudID;
	long long _storePurchasedAdamID;
	long long _storeSubscriptionAdamID;
	NSString* _cloudUniversalLibraryID;

}

@property (nonatomic,copy) NSString * assetSourceStorefrontID;                           //@synthesize assetSourceStorefrontID=_assetSourceStorefrontID - In the implementation block
@property (nonatomic,copy,readonly) ICStoreRequestContext * requestContext;              //@synthesize requestContext=_requestContext - In the implementation block
@property (assign,nonatomic) unsigned long long storeCloudID;                            //@synthesize storeCloudID=_storeCloudID - In the implementation block
@property (assign,nonatomic) long long storePurchasedAdamID;                             //@synthesize storePurchasedAdamID=_storePurchasedAdamID - In the implementation block
@property (assign,nonatomic) long long storeSubscriptionAdamID;                          //@synthesize storeSubscriptionAdamID=_storeSubscriptionAdamID - In the implementation block
@property (nonatomic,copy) NSString * cloudUniversalLibraryID;                           //@synthesize cloudUniversalLibraryID=_cloudUniversalLibraryID - In the implementation block
@property (assign,nonatomic) BOOL shouldPreventLeaseAcquisition;                         //@synthesize shouldPreventLeaseAcquisition=_shouldPreventLeaseAcquisition - In the implementation block
@property (assign,nonatomic) BOOL shouldRequireLeaseAcquisition;                         //@synthesize shouldRequireLeaseAcquisition=_shouldRequireLeaseAcquisition - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(ICStoreRequestContext *)requestContext;
-(NSString *)cloudUniversalLibraryID;
-(long long)storePurchasedAdamID;
-(long long)storeSubscriptionAdamID;
-(void)setAssetSourceStorefrontID:(NSString *)arg1 ;
-(id)initWithRequestContext:(id)arg1 ;
-(void)setCloudUniversalLibraryID:(NSString *)arg1 ;
-(void)setStoreSubscriptionAdamID:(long long)arg1 ;
-(unsigned long long)storeCloudID;
-(void)setStoreCloudID:(unsigned long long)arg1 ;
-(void)setStorePurchasedAdamID:(long long)arg1 ;
-(NSString *)assetSourceStorefrontID;
-(BOOL)shouldPreventLeaseAcquisition;
-(void)setShouldPreventLeaseAcquisition:(BOOL)arg1 ;
-(BOOL)shouldRequireLeaseAcquisition;
-(void)setShouldRequireLeaseAcquisition:(BOOL)arg1 ;
@end

