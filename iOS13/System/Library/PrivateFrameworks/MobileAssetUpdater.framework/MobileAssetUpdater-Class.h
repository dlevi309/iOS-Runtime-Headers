/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileAssetUpdater.framework/MobileAssetUpdater
*/


@class MAAsset, MAAssetQuery, NSString;

@interface MobileAssetUpdater : NSObject {

	MAAsset* _asset;
	MAAssetQuery* _query;
	NSString* _assetType;
	NSString* _overrideFile;
	NSString* _purgeOverrideFile;
	BOOL _assetDownloaded;
	BOOL _requireAssetMetadata;
	BOOL _overrideApplied;
	BOOL _downloadOnCellularAllowed;
	/*^block*/id _logger;

}

@property (retain) MAAsset * asset;                             //@synthesize asset=_asset - In the implementation block
@property (retain) MAAssetQuery * query;                        //@synthesize query=_query - In the implementation block
@property (retain) NSString * assetType;                        //@synthesize assetType=_assetType - In the implementation block
@property (retain) NSString * overrideFile;                     //@synthesize overrideFile=_overrideFile - In the implementation block
@property (retain) NSString * purgeOverrideFile;                //@synthesize purgeOverrideFile=_purgeOverrideFile - In the implementation block
@property (readonly) BOOL assetAvailable; 
@property (readonly) BOOL assetDownloaded;                      //@synthesize assetDownloaded=_assetDownloaded - In the implementation block
@property (readonly) BOOL overrideApplied;                      //@synthesize overrideApplied=_overrideApplied - In the implementation block
@property (assign) BOOL requireAssetMetadata;                   //@synthesize requireAssetMetadata=_requireAssetMetadata - In the implementation block
@property (copy) id logger;                                     //@synthesize logger=_logger - In the implementation block
@property (assign) BOOL downloadOnCellularAllowed;              //@synthesize downloadOnCellularAllowed=_downloadOnCellularAllowed - In the implementation block
-(void)dealloc;
-(MAAssetQuery *)query;
-(void)setQuery:(MAAssetQuery *)arg1 ;
-(id)logger;
-(MAAsset *)asset;
-(void)setAsset:(MAAsset *)arg1 ;
-(id)initWithAssetType:(id)arg1 ;
-(NSString *)assetType;
-(void)setLogger:(id)arg1 ;
-(void)setAssetType:(NSString *)arg1 ;
-(id)downloadAsset:(/*^block*/id)arg1 ;
-(id)queryPredicate;
-(void)log:(int)arg1 format:(id)arg2 ;
-(void)doneWithAsset;
-(id)assetWithMaxVersion:(id)arg1 ;
-(id)validateAssetAttributes:(id)arg1 ;
-(id)validateAsset;
-(void)setRequireAssetMetadata:(BOOL)arg1 ;
-(NSString *)overrideFile;
-(void)queryComplete:(id)arg1 remote:(BOOL)arg2 status:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(id)filterFoundAssets:(id)arg1 ;
-(BOOL)requireAssetMetadata;
-(BOOL)filterAsset:(id)arg1 osBuild:(id)arg2 osVersion:(id)arg3 ;
-(void)downloadComplete:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)purgeOverrideFile;
-(id)findAsset:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)assetAvailable;
-(id)overrideQueryPredicateFromDict:(id)arg1 ;
-(void)setOverrideFile:(NSString *)arg1 ;
-(void)setPurgeOverrideFile:(NSString *)arg1 ;
-(BOOL)assetDownloaded;
-(BOOL)overrideApplied;
-(BOOL)downloadOnCellularAllowed;
-(void)setDownloadOnCellularAllowed:(BOOL)arg1 ;
@end

