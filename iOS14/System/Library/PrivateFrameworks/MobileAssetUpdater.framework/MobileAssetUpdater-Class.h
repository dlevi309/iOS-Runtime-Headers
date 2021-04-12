/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileAssetUpdater.framework/MobileAssetUpdater
*/


@class MAAsset, MAAssetQuery, NSString, NSMutableArray, NSLock, NSURL;

@interface MobileAssetUpdater : NSObject {

	MAAsset* _asset;
	MAAssetQuery* _query;
	NSString* _assetType;
	NSMutableArray* _alternateAssetTypes;
	NSString* _overrideFile;
	NSString* _purgeOverrideFile;
	BOOL _assetDownloaded;
	BOOL _requireAssetMetadata;
	BOOL _overrideApplied;
	BOOL _downloadOnCellularAllowed;
	/*^block*/id _logger;
	NSLock* _lock;
	NSURL* _assetLocation;

}

@property (retain) MAAsset * asset;                                           //@synthesize asset=_asset - In the implementation block
@property (retain) MAAssetQuery * query;                                      //@synthesize query=_query - In the implementation block
@property (retain) NSString * assetType;                                      //@synthesize assetType=_assetType - In the implementation block
@property (nonatomic,copy) NSMutableArray * alternateAssetTypes;              //@synthesize alternateAssetTypes=_alternateAssetTypes - In the implementation block
@property (retain) NSString * overrideFile;                                   //@synthesize overrideFile=_overrideFile - In the implementation block
@property (retain) NSString * purgeOverrideFile;                              //@synthesize purgeOverrideFile=_purgeOverrideFile - In the implementation block
@property (readonly) BOOL assetAvailable; 
@property (readonly) BOOL assetDownloaded;                                    //@synthesize assetDownloaded=_assetDownloaded - In the implementation block
@property (readonly) BOOL overrideApplied;                                    //@synthesize overrideApplied=_overrideApplied - In the implementation block
@property (assign) BOOL requireAssetMetadata;                                 //@synthesize requireAssetMetadata=_requireAssetMetadata - In the implementation block
@property (copy) id logger;                                                   //@synthesize logger=_logger - In the implementation block
@property (assign) BOOL downloadOnCellularAllowed;                            //@synthesize downloadOnCellularAllowed=_downloadOnCellularAllowed - In the implementation block
@property (retain) NSURL * assetLocation;                                     //@synthesize assetLocation=_assetLocation - In the implementation block
-(MAAssetQuery *)query;
-(void)setAsset:(MAAsset *)arg1 ;
-(NSString *)assetType;
-(MAAsset *)asset;
-(void)setAssetType:(NSString *)arg1 ;
-(id)initWithAssetType:(id)arg1 ;
-(void)setLogger:(id)arg1 ;
-(id)logger;
-(void)setQuery:(MAAssetQuery *)arg1 ;
-(void)dealloc;
-(id)queryPredicate;
-(BOOL)downloadOnCellularAllowed;
-(void)setDownloadOnCellularAllowed:(BOOL)arg1 ;
-(void)log:(int)arg1 format:(id)arg2 ;
-(void)doneWithAsset;
-(id)assetWithMaxVersion:(id)arg1 ;
-(id)validateAssetAttributes:(id)arg1 ;
-(id)validateAsset;
-(void)setRequireAssetMetadata:(BOOL)arg1 ;
-(NSString *)overrideFile;
-(void)queryComplete:(id)arg1 remote:(BOOL)arg2 status:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(id)filterFoundAssets:(id)arg1 ;
-(id)findAsset:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)requireAssetMetadata;
-(BOOL)filterAsset:(id)arg1 osBuild:(id)arg2 osVersion:(id)arg3 ;
-(void)downloadComplete:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)purgeOverrideFile;
-(void)setAlternateAssetTypes:(NSMutableArray *)arg1 ;
-(BOOL)assetAvailable;
-(void)purgeAsset;
-(id)downloadAsset:(/*^block*/id)arg1 ;
-(id)overrideQueryPredicateFromDict:(id)arg1 ;
-(NSMutableArray *)alternateAssetTypes;
-(void)setOverrideFile:(NSString *)arg1 ;
-(void)setPurgeOverrideFile:(NSString *)arg1 ;
-(BOOL)assetDownloaded;
-(BOOL)overrideApplied;
-(NSURL *)assetLocation;
-(void)setAssetLocation:(NSURL *)arg1 ;
@end

