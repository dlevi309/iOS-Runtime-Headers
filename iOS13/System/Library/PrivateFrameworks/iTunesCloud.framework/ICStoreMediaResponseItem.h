/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(ICStoreFinanceItemMetadata *)metadata;
-(NSString *)downloadIdentifier;
-(long long)storeAdamID;
-(id)suzeLeaseID;
-(NSArray *)fileAssets;
-(ICStoreHLSAssetInfo *)hlsAsset;
-(NSURL *)artworkURL;
-(NSString *)redownloadParameters;
-(NSDate *)purchaseDate;
-(NSURL *)cancelDownloadURL;
-(BOOL)isPurchasedRedownload;
-(id)initWithItemResponseDictionary:(id)arg1 urlBag:(id)arg2 ;
-(id)downloadableAsset;
-(id)downloadableAssetMatchingFlavorType:(long long)arg1 ;
-(NSDate *)assetExpirationDate;
-(void)setAssetExpirationDate:(NSDate *)arg1 ;
@end

