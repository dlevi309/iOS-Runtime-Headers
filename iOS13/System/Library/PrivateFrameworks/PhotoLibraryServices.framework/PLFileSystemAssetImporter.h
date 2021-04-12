/*
* Generated on Monday, March 1, 2021 at 2:30:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class PLPhotoLibrary, NSString, NSMutableIndexSet, NSMutableSet, NSMutableDictionary;

@interface PLFileSystemAssetImporter : NSObject {

	PLPhotoLibrary* _photoLibrary;
	NSString* _libraryBundlePath;
	NSString* _photoLibraryStoreUUID;
	NSMutableIndexSet* _thumbIndexes;
	BOOL _hasProcessedAnyAssets;
	NSMutableSet* _existingUUIDs;
	NSMutableDictionary* _existingUUIDsByUppercasePath;
	NSMutableDictionary* _existingOIDsByUUID;
	unsigned long long _thumbnailBatchFetchSize;

}

@property (nonatomic,retain) NSMutableSet * existingUUIDs;                                    //@synthesize existingUUIDs=_existingUUIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * existingUUIDsByUppercasePath;              //@synthesize existingUUIDsByUppercasePath=_existingUUIDsByUppercasePath - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * existingOIDsByUUID;                        //@synthesize existingOIDsByUUID=_existingOIDsByUUID - In the implementation block
@property (assign,nonatomic) unsigned long long thumbnailBatchFetchSize;                      //@synthesize thumbnailBatchFetchSize=_thumbnailBatchFetchSize - In the implementation block
-(void)dealloc;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(id)addAssetWithURLs:(id)arg1 assetPayload:(id)arg2 forceInsert:(BOOL)arg3 forceUpdate:(BOOL)arg4 fixAddedDate:(BOOL)arg5 ;
-(void)setExistingOIDsByUUID:(NSMutableDictionary *)arg1 ;
-(void)setExistingUUIDsByUppercasePath:(NSMutableDictionary *)arg1 ;
-(void)setExistingUUIDs:(NSMutableSet *)arg1 ;
-(id)libraryBundlePathWithPhotoLibrary:(id)arg1 ;
-(id)_addAssetWithURL:(id)arg1 existingOID:(id)arg2 isPlaceholder:(BOOL)arg3 ;
-(id)assetURLisInDatabase:(id)arg1 deferredPreviewURL:(id)arg2 ;
-(void)setModificationAndCreationDateOnAsset:(id)arg1 withURL:(id)arg2 ;
-(BOOL)_setupPhotoAssetAsPhotoIrisIfNeeded:(id)arg1 hasVideoComplementResource:(BOOL)arg2 ;
-(BOOL)_setupPhotoAsset:(id)arg1 withURL:(id)arg2 isPlaceholder:(BOOL)arg3 hasVideoComplementResource:(BOOL)arg4 ;
-(BOOL)_setupUnknownAsset:(id)arg1 withURL:(id)arg2 ;
-(id)_assetAdjustmentsIfExistsForAsset:(id)arg1 ;
-(BOOL)_setupAdjustmentsFromAdjustmentFileForAsset:(id)arg1 ;
-(BOOL)_setupPhotoAsset:(id)arg1 withURL:(id)arg2 unknownType:(BOOL)arg3 isPlaceholder:(BOOL)arg4 hasVideoComplementResource:(BOOL)arg5 ;
-(BOOL)_setupVideoAsset:(id)arg1 withURL:(id)arg2 ;
-(void)addAvailableThumbnailIndex:(unsigned long long)arg1 ;
-(unsigned long long)nextThumbnailIndex;
-(NSMutableSet *)existingUUIDs;
-(NSMutableDictionary *)existingUUIDsByUppercasePath;
-(NSMutableDictionary *)existingOIDsByUUID;
-(unsigned long long)thumbnailBatchFetchSize;
-(void)setThumbnailBatchFetchSize:(unsigned long long)arg1 ;
@end

