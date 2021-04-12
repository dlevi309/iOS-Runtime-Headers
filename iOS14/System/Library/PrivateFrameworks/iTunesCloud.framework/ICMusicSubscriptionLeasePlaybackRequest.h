/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, ICStoreRequestContext;

@interface ICMusicSubscriptionLeasePlaybackRequest : NSObject <NSCopying> {

	BOOL _shouldPreventLeaseAcquisition;
	BOOL _shouldRequireLeaseAcquisition;
	BOOL _followUp;
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
@property (assign,getter=isFollowUp,nonatomic) BOOL followUp;                            //@synthesize followUp=_followUp - In the implementation block
-(void)setCloudUniversalLibraryID:(NSString *)arg1 ;
-(void)setStoreCloudID:(unsigned long long)arg1 ;
-(BOOL)isFollowUp;
-(void)setFollowUp:(BOOL)arg1 ;
-(ICStoreRequestContext *)requestContext;
-(NSString *)assetSourceStorefrontID;
-(long long)storeSubscriptionAdamID;
-(long long)storePurchasedAdamID;
-(void)setAssetSourceStorefrontID:(NSString *)arg1 ;
-(void)setStorePurchasedAdamID:(long long)arg1 ;
-(BOOL)shouldPreventLeaseAcquisition;
-(void)setShouldPreventLeaseAcquisition:(BOOL)arg1 ;
-(BOOL)shouldRequireLeaseAcquisition;
-(void)setShouldRequireLeaseAcquisition:(BOOL)arg1 ;
-(void)setStoreSubscriptionAdamID:(long long)arg1 ;
-(unsigned long long)storeCloudID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)cloudUniversalLibraryID;
-(id)initWithRequestContext:(id)arg1 ;
@end

