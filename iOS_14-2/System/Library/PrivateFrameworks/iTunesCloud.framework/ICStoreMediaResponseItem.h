/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, ICURLBag, NSDate, NSURL, NSString, ICStoreFinanceItemMetadata, NSArray, ICStoreHLSAssetInfo;

@interface ICStoreMediaResponseItem : NSObject <NSCopying> {

	NSDictionary* _itemResponseDictionary;
	ICURLBag* _urlBag;
	NSDate* _assetExpirationDate;

}

@property (nonatomic,copy) NSDate * assetExpirationDate;                                //@synthesize assetExpirationDate=_assetExpirationDate - In the implementation block
@property (nonatomic,readonly) long long storeAdamID; 
@property (nonatomic,copy,readonly) NSURL * artworkURL; 
@property (nonatomic,copy,readonly) NSURL * cancelDownloadURL; 
@property (nonatomic,copy,readonly) NSString * downloadIdentifier; 
@property (nonatomic,readonly) BOOL isPurchasedRedownload; 
@property (nonatomic,copy,readonly) ICStoreFinanceItemMetadata * metadata; 
@property (nonatomic,copy,readonly) NSDate * purchaseDate; 
@property (nonatomic,copy,readonly) NSString * redownloadParameters; 
@property (nonatomic,copy,readonly) NSArray * fileAssets; 
@property (nonatomic,copy,readonly) ICStoreHLSAssetInfo * hlsAsset; 
@property (nonatomic,readonly) id suzeLeaseID; 
-(NSURL *)artworkURL;
-(NSString *)downloadIdentifier;
-(NSString *)redownloadParameters;
-(id)downloadableAsset;
-(id)initWithItemResponseDictionary:(id)arg1 urlBag:(id)arg2 ;
-(id)downloadableAssetMatchingFlavorType:(long long)arg1 ;
-(NSDate *)assetExpirationDate;
-(void)setAssetExpirationDate:(NSDate *)arg1 ;
-(NSURL *)cancelDownloadURL;
-(NSDate *)purchaseDate;
-(long long)storeAdamID;
-(ICStoreHLSAssetInfo *)hlsAsset;
-(BOOL)isPurchasedRedownload;
-(NSArray *)fileAssets;
-(id)suzeLeaseID;
-(ICStoreFinanceItemMetadata *)metadata;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

