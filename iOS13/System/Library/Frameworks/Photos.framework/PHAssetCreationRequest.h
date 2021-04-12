/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <Photos/PHAssetChangeRequest.h>
#import <libobjc.A.dylib/PHInsertChangeRequest.h>
#import <libobjc.A.dylib/PHMomentSharePropertySet.h>

@class NSMutableArray, PHAssetResourceBag, NSMutableDictionary, PLManagedAsset, NSObject, NSData, NSString, PHAssetCreationPhotoStreamPublishingRequest, PHMomentShare, PHRelationshipChangeRequestHelper, PHAssetCreationAdjustmentBakeInOptions, PHAssetCreationMetadataCopyOptions, NSDictionary, NSManagedObjectID;

@interface PHAssetCreationRequest : PHAssetChangeRequest <PHInsertChangeRequest, PHMomentSharePropertySet> {

	NSMutableArray* _assetResources;
	PHAssetResourceBag* _assetResourceBag;
	NSMutableDictionary* _movedFiles;
	BOOL _duplicateAllowsPrivateMetadata;
	BOOL _shouldCreateScreenshot;
	/*^block*/id _concurrentWorkBlock;
	PLManagedAsset* _asset;
	NSObject* _previewImage;
	NSObject* _thumbnailImage;
	NSData* _originalHash;
	BOOL _shouldPerformConcurrentWork;
	BOOL _duplicateLivePhotoAsStill;
	BOOL _duplicateAsOriginal;
	BOOL _duplicateSinglePhotoFromBurst;
	BOOL _duplicateSpatialOverCaptureResources;
	short _importedBy;
	unsigned short _duplicateAssetPhotoLibraryType;
	NSString* _importSessionID;
	PHAssetCreationPhotoStreamPublishingRequest* __photoStreamPublishingRequest;
	PHMomentShare* _momentShare;
	NSString* _momentShareUUID;
	PHRelationshipChangeRequestHelper* _momentShareHelper;
	NSString* _duplicateAssetIdentifier;
	PHAssetCreationAdjustmentBakeInOptions* _adjustmentBakeInOptions;
	PHAssetCreationMetadataCopyOptions* _metadataCopyOptions;
	/*^block*/id _destinationAssetAvailabilityHandler;
	SCD_Struct_PH9 _duplicateStillSourceTime;

}

@property (setter=_setPhotoStreamPublishingRequest:,nonatomic,retain) PHAssetCreationPhotoStreamPublishingRequest * _photoStreamPublishingRequest;              //@synthesize _photoStreamPublishingRequest=__photoStreamPublishingRequest - In the implementation block
@property (nonatomic,readonly) NSDictionary * _movedFiles; 
@property (assign,setter=_setDuplicateAllowsPrivateMetadata:,nonatomic) BOOL duplicateAllowsPrivateMetadata; 
@property (assign,setter=_setShouldCreateScreenshot:,getter=_shouldCreateScreenshot,nonatomic) BOOL shouldCreateScreenshot; 
@property (nonatomic,retain) PHMomentShare * momentShare;                                                                                                       //@synthesize momentShare=_momentShare - In the implementation block
@property (nonatomic,retain) NSString * momentShareUUID;                                                                                                        //@synthesize momentShareUUID=_momentShareUUID - In the implementation block
@property (assign,nonatomic) BOOL shouldPerformConcurrentWork;                                                                                                  //@synthesize shouldPerformConcurrentWork=_shouldPerformConcurrentWork - In the implementation block
@property (nonatomic,readonly) PHRelationshipChangeRequestHelper * momentShareHelper;                                                                           //@synthesize momentShareHelper=_momentShareHelper - In the implementation block
@property (setter=_setDuplicateAssetIdentifier:,nonatomic,retain) NSString * duplicateAssetIdentifier;                                                          //@synthesize duplicateAssetIdentifier=_duplicateAssetIdentifier - In the implementation block
@property (assign,setter=_setDuplicateAssetPhotoLibraryType:,nonatomic) unsigned short duplicateAssetPhotoLibraryType;                                          //@synthesize duplicateAssetPhotoLibraryType=_duplicateAssetPhotoLibraryType - In the implementation block
@property (assign,setter=_setDuplicateStillSourceTime:,nonatomic) SCD_Struct_PH9 duplicateStillSourceTime;                                                      //@synthesize duplicateStillSourceTime=_duplicateStillSourceTime - In the implementation block
@property (assign,setter=_setDuplicateLivePhotoAsStill:,nonatomic) BOOL duplicateLivePhotoAsStill;                                                              //@synthesize duplicateLivePhotoAsStill=_duplicateLivePhotoAsStill - In the implementation block
@property (assign,setter=_setDuplicateAsOriginal:,nonatomic) BOOL duplicateAsOriginal;                                                                          //@synthesize duplicateAsOriginal=_duplicateAsOriginal - In the implementation block
@property (assign,setter=_setDuplicateSinglePhotoFromBurst:,nonatomic) BOOL duplicateSinglePhotoFromBurst;                                                      //@synthesize duplicateSinglePhotoFromBurst=_duplicateSinglePhotoFromBurst - In the implementation block
@property (assign,setter=_setDuplicateSpatialOverCaptureResources:,nonatomic) BOOL duplicateSpatialOverCaptureResources;                                        //@synthesize duplicateSpatialOverCaptureResources=_duplicateSpatialOverCaptureResources - In the implementation block
@property (setter=_setAdjustmentBakeInOptions:,nonatomic,copy) PHAssetCreationAdjustmentBakeInOptions * adjustmentBakeInOptions;                                //@synthesize adjustmentBakeInOptions=_adjustmentBakeInOptions - In the implementation block
@property (setter=_setMetadataCopyOptions:,nonatomic,copy) PHAssetCreationMetadataCopyOptions * metadataCopyOptions;                                            //@synthesize metadataCopyOptions=_metadataCopyOptions - In the implementation block
@property (setter=_setDestinationAssetAvailabilityHandler:,nonatomic,copy) id destinationAssetAvailabilityHandler;                                              //@synthesize destinationAssetAvailabilityHandler=_destinationAssetAvailabilityHandler - In the implementation block
@property (nonatomic,retain) NSString * importSessionID;                                                                                                        //@synthesize importSessionID=_importSessionID - In the implementation block
@property (assign,nonatomic) short importedBy;                                                                                                                  //@synthesize importedBy=_importedBy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * managedEntityName; 
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (getter=isClientEntitled,nonatomic,readonly) BOOL clientEntitled; 
@property (nonatomic,readonly) NSString * clientName; 
@property (readonly) BOOL isNewRequest; 
@property (nonatomic,readonly) id concurrentWorkBlock; 
+(id)_creationRequestForAssetUsingUUID:(id)arg1 ;
+(id)creationRequestForAsset;
+(id)creationRequestForAssetFromImageData:(id)arg1 ;
+(id)creationRequestForAssetFromImageData:(id)arg1 usingUUID:(id)arg2 ;
+(id)creationRequestForAssetFromScreenshotImage:(id)arg1 ;
+(id)creationRequestForAssetFromImage:(id)arg1 ;
+(id)creationRequestForAssetFromImageAtFileURL:(id)arg1 ;
+(id)creationRequestForAssetFromVideoAtFileURL:(id)arg1 ;
+(id)creationRequestForAssetFromVideoComplementBundle:(id)arg1 ;
+(id)creationRequestForAssetFromAssetBundle:(id)arg1 ;
+(id)creationRequestForAssetCopyFromAsset:(id)arg1 options:(id)arg2 ;
+(id)creationRequestForAssetCopyFromAsset:(id)arg1 ;
+(BOOL)supportsAssetResourceTypes:(id)arg1 ;
+(BOOL)supportsImportAssetResourceTypes:(id)arg1 ;
-(id)initWithHelper:(id)arg1 ;
-(void)setMomentShare:(PHMomentShare *)arg1 ;
-(PHMomentShare *)momentShare;
-(void)setImportedBy:(short)arg1 ;
-(NSString *)importSessionID;
-(void)setImportSessionID:(NSString *)arg1 ;
-(short)importedBy;
-(NSString *)momentShareUUID;
-(void)setMomentShareUUID:(NSString *)arg1 ;
-(BOOL)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3 ;
-(void)encodeToXPCDict:(id)arg1 ;
-(id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3 ;
-(id)initForNewObject;
-(BOOL)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1 ;
-(void)finalizeRequestWithBatchSuccess:(BOOL)arg1 ;
-(id)concurrentWorkBlock;
-(id)initForNewObjectWithUUID:(id)arg1 ;
-(void)_setDestinationAssetAvailabilityHandler:(/*^block*/id)arg1 ;
-(id)destinationAssetAvailabilityHandler;
-(PHAssetCreationAdjustmentBakeInOptions *)adjustmentBakeInOptions;
-(PHAssetCreationMetadataCopyOptions *)metadataCopyOptions;
-(NSDictionary *)_movedFiles;
-(BOOL)_shouldCreateScreenshot;
-(void)_copyMetadataFromAsset:(id)arg1 ;
-(void)_copyUserSpecificMetadataFromAsset:(id)arg1 ;
-(void)_copyMediaAnalysisProperties:(id)arg1 ;
-(void)_didMoveFileFromURL:(id)arg1 toURL:(id)arg2 ;
-(BOOL)_restoreMovedFilesOnFailure;
-(void)_resetMovedFiles;
-(id)_secureMove:(BOOL)arg1 fileAtURL:(id)arg2 toURL:(id)arg3 capabilities:(id)arg4 error:(id*)arg5 ;
-(id)_secureMove:(BOOL)arg1 assetResource:(id)arg2 photoLibrary:(id)arg3 error:(id*)arg4 ;
-(void)updateOriginalResourceOptionsWithResource:(id)arg1 sourceUrl:(id)arg2 ;
-(id)makeSubstitueRenderImageFileFromPath:(id)arg1 primaryResource:(id)arg2 fileSuffix:(id)arg3 error:(id*)arg4 ;
-(id)makeSubstitueRenderVideoFileFromPath:(id)arg1 primaryResource:(id)arg2 fileSuffix:(id)arg3 error:(id*)arg4 ;
-(BOOL)_createAssetAsAdjusted:(id)arg1 fromValidatedResources:(id)arg2 error:(id*)arg3 ;
-(BOOL)_ingestOriginalInPlaceSrcURL:(id)arg1 dstURL:(id)arg2 asset:(id)arg3 error:(id*)arg4 ;
-(id)_ingestOriginalFromSrcURL:(id)arg1 toDstURL:(id)arg2 useSecureMove:(BOOL)arg3 resource:(id)arg4 resourceType:(unsigned)arg5 asset:(id)arg6 error:(id*)arg7 ;
-(BOOL)_createAssetAsPhotoIris:(id)arg1 fromValidatedResources:(id)arg2 error:(id*)arg3 ;
-(BOOL)_createRAWSidecarForAsset:(id)arg1 fromValidatedResources:(id)arg2 photoLibrary:(id)arg3 error:(id*)arg4 ;
-(BOOL)_createSocResourceForAsset:(id)arg1 fromValidatedResources:(id)arg2 photoLibrary:(id)arg3 error:(id*)arg4 ;
-(BOOL)_createXmpResourceForAsset:(id)arg1 fromValidatedResources:(id)arg2 photoLibrary:(id)arg3 error:(id*)arg4 ;
-(BOOL)_createAudioResourceForAsset:(id)arg1 fromValidatedResources:(id)arg2 photoLibrary:(id)arg3 error:(id*)arg4 ;
-(BOOL)_createOriginalResourceForAsset:(id)arg1 fromValidatedResource:(id)arg2 resourceType:(unsigned)arg3 photoLibrary:(id)arg4 destinationURL:(id)arg5 error:(id*)arg6 ;
-(id)_exifPropertiesFromSourceImageDataExifProperties:(id)arg1 ;
-(short)_savedAssetTypeForAsset;
-(id)_managedAssetFromPrimaryResourceData:(id)arg1 withUUID:(id)arg2 photoLibrary:(id)arg3 getImageSource:(CGImageSource*)arg4 imageData:(id*)arg5 ;
-(BOOL)_accessWritableURLForUUID:(id)arg1 imageUTI:(id)arg2 originalFilename:(id)arg3 photoLibrary:(id)arg4 withHandler:(/*^block*/id)arg5 ;
-(BOOL)_writeDataToDisk:(id)arg1 imageUTIType:(id)arg2 exifProperties:(id)arg3 mainFileURL:(id)arg4 thumbnailData:(id)arg5 ;
-(id)_externalLivePhotoResourceForAsset:(id)arg1 ;
-(void)_pairLivePhotoResource:(id)arg1 withAssetInLibrary:(id)arg2 metadata:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_setupConcurrentWorkIfNecessaryWithImageSource:(CGImageSourceRef)arg1 originalImageData:(id)arg2 ;
-(id)_sourceOptionsForCreateThumbnailWithAsset:(id)arg1 hasAdjustments:(BOOL)arg2 ;
-(id)createAssetFromValidatedResources:(id)arg1 withUUID:(id)arg2 inPhotoLibrary:(id)arg3 error:(id*)arg4 ;
-(BOOL)needsConcurrentWork;
-(void)addResourceWithType:(long long)arg1 fileURL:(id)arg2 options:(id)arg3 ;
-(void)addResourceWithType:(long long)arg1 data:(id)arg2 options:(id)arg3 ;
-(void)_addResourceWithType:(long long)arg1 data:(id)arg2 orFileURL:(id)arg3 options:(id)arg4 ;
-(id)placeholderForCreatedAsset;
-(long long)_mediaTypeForCreatedAsset;
-(id)_duplicatedAssetResourcesFromAsset:(id)arg1 stillSourceTime:(SCD_Struct_PH9)arg2 flattenLivePhotoIntoStillPhoto:(BOOL)arg3 original:(BOOL)arg4 removeBurstIdentifier:(BOOL)arg5 error:(id*)arg6 ;
-(void)_updateMutationsForDuplicatingPrivateMetadataFromAsset:(id)arg1 ;
-(BOOL)_populateDuplicatingAssetCreationRequest:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3 ;
-(void)_prepareMomentShareHelperIfNeeded;
-(id)_mutableMomentShareObjectIDsAndUUIDs;
-(BOOL)isNew;
-(void)_setDuplicateAllowsPrivateMetadata:(BOOL)arg1 ;
-(BOOL)duplicateAllowsPrivateMetadata;
-(void)_setShouldCreateScreenshot:(BOOL)arg1 ;
-(PHAssetCreationPhotoStreamPublishingRequest *)_photoStreamPublishingRequest;
-(void)_setPhotoStreamPublishingRequest:(id)arg1 ;
-(BOOL)shouldPerformConcurrentWork;
-(void)setShouldPerformConcurrentWork:(BOOL)arg1 ;
-(PHRelationshipChangeRequestHelper *)momentShareHelper;
-(NSString *)duplicateAssetIdentifier;
-(void)_setDuplicateAssetIdentifier:(id)arg1 ;
-(unsigned short)duplicateAssetPhotoLibraryType;
-(void)_setDuplicateAssetPhotoLibraryType:(unsigned short)arg1 ;
-(SCD_Struct_PH9)duplicateStillSourceTime;
-(void)_setDuplicateStillSourceTime:(SCD_Struct_PH9)arg1 ;
-(BOOL)duplicateLivePhotoAsStill;
-(void)_setDuplicateLivePhotoAsStill:(BOOL)arg1 ;
-(BOOL)duplicateAsOriginal;
-(void)_setDuplicateAsOriginal:(BOOL)arg1 ;
-(BOOL)duplicateSinglePhotoFromBurst;
-(void)_setDuplicateSinglePhotoFromBurst:(BOOL)arg1 ;
-(BOOL)duplicateSpatialOverCaptureResources;
-(void)_setDuplicateSpatialOverCaptureResources:(BOOL)arg1 ;
-(void)_setAdjustmentBakeInOptions:(id)arg1 ;
-(void)_setMetadataCopyOptions:(id)arg1 ;
@end

