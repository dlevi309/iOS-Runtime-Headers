/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLManagedObject.h>
#import <libobjc.A.dylib/PLResource.h>
#import <libobjc.A.dylib/PLValidatesResourceModel.h>
#import <libobjc.A.dylib/PLResourceAvailabilityMarking.h>
#import <libobjc.A.dylib/PLCloudDeletable.h>

@class NSDate, NSString, PLInternalResourceSidecarRepresentation, PLUniformTypeIdentifier, PLCodec, PLManagedAsset, NSData, PLFileSystemBookmark, PLFileSystemVolume, NSNumber, PLCloudMaster;

@interface PLInternalResource : PLManagedObject <PLResource, PLValidatesResourceModel, PLResourceAvailabilityMarking, PLCloudDeletable> {

	PLInternalResourceSidecarRepresentation* _sidecarRepresentation;

}

@property (assign,nonatomic) unsigned resourceType; 
@property (assign,nonatomic) unsigned version; 
@property (assign,nonatomic) unsigned recipeID; 
@property (nonatomic,retain) PLUniformTypeIdentifier * uniformTypeIdentifier; 
@property (assign,nonatomic) unsigned orientation; 
@property (assign,nonatomic) long long unorientedWidth; 
@property (assign,nonatomic) long long unorientedHeight; 
@property (nonatomic,retain) PLCodec * codec; 
@property (nonatomic,readonly) long long orientedWidth; 
@property (nonatomic,readonly) long long orientedHeight; 
@property (nonatomic,retain) PLManagedAsset * asset; 
@property (nonatomic,readonly) BOOL isDerivative; 
@property (assign,nonatomic) short localAvailability; 
@property (assign,nonatomic) short localAvailabilityTarget; 
@property (assign,nonatomic) short remoteAvailability; 
@property (assign,nonatomic) short remoteAvailabilityTarget; 
@property (assign,nonatomic) short dataStoreClassID; 
@property (assign,nonatomic) long long dataStoreSubtype; 
@property (nonatomic,copy) NSData * dataStoreKeyData; 
@property (assign,nonatomic) long long dataLength; 
@property (assign,nonatomic) long long fileID; 
@property (nonatomic,retain) NSString * fingerprint; 
@property (assign,nonatomic) short trashedState; 
@property (nonatomic,retain) NSDate * trashedDate; 
@property (nonatomic,retain) NSString * cloudDeleteAssetUUIDWithResourceType; 
@property (assign,nonatomic) int qualitySortValue; 
@property (nonatomic,retain) PLFileSystemBookmark * fileSystemBookmark; 
@property (nonatomic,retain) PLFileSystemVolume * fileSystemVolume; 
@property (nonatomic,retain) NSNumber * sidecarIndex; 
@property (assign,nonatomic) long long ptpTrashedState; 
@property (nonatomic,readonly) PLInternalResourceSidecarRepresentation * sidecarRepresentation;              //@synthesize sidecarRepresentation=_sidecarRepresentation - In the implementation block
@property (assign,nonatomic) short cloudLocalState; 
@property (nonatomic,retain) NSDate * cloudMasterDateCreated; 
@property (nonatomic,retain) NSDate * cloudLastOnDemandDownloadDate; 
@property (nonatomic,retain) NSDate * cloudLastPrefetchDate; 
@property (assign,nonatomic) short cloudPrefetchCount; 
@property (nonatomic,retain) NSDate * cloudPrunedAt; 
@property (assign,nonatomic) int cloudSourceType; 
@property (nonatomic,retain) PLCloudMaster * transientCloudMaster; 
@property (nonatomic,readonly) unsigned long long cplType; 
@property (nonatomic,readonly) float scale; 
@property (nonatomic,copy,readonly) id<PLAssetID> assetID; 
@property (nonatomic,readonly) id<PLResourceDataStore> dataStore; 
@property (nonatomic,readonly) id<PLResourceDataStoreKey> dataStoreKey; 
@property (nonatomic,readonly) id<PLCodecIdentity> codecID; 
@property (nonatomic,readonly) long long estimatedDataLength; 
@property (nonatomic,readonly) id<PLUniformTypeIdentifierIdentity> uniformTypeIdentifierID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) short cloudDeleteState; 
@property (readonly) long long cloudDeletionType; 
@property (copy,readonly) NSString * cloudUUIDForDeletion; 
+(id)entityName;
+(id)originalCPLResourceTypesForAsset;
+(id)resourceForManagedAsset:(id)arg1 sharedStreamsType:(unsigned)arg2 managedObjectContext:(id)arg3 error:(id*)arg4 ;
+(BOOL)_countOfLocallyAvailableCloudResourcesOfType:(unsigned long long)arg1 inManagedObjectContext:(id)arg2 forMediumSized:(BOOL)arg3 localCount:(unsigned long long*)arg4 unavailableCount:(unsigned long long*)arg5 error:(id*)arg6 ;
+(void)resetPrefetchStateForResourcesWithVersion:(unsigned)arg1 cplType:(unsigned long long)arg2 assetUuids:(id)arg3 inLibrary:(id)arg4 ;
+(id)prunePredicateForCPLResourceTypes:(id)arg1 ;
+(id)prunePredicateForAllCPLResourceTypes;
+(id)predicateForAllOriginalResourcesLocallyAvailable;
+(id)prefetchResourcePredicateForCPLResourceType:(unsigned long long)arg1 isAssetResource:(BOOL)arg2 maxRetry:(unsigned long long)arg3 additionalResourcePredicates:(id)arg4 ;
+(id)predicateForOriginalsToDownload;
+(BOOL)batchResetFileIDInManagedObjectContext:(id)arg1 error:(id*)arg2 ;
+(id)predicateForResourceIsNotLocallyAvailableWithCPLResourceType:(unsigned long long)arg1 version:(unsigned)arg2 ;
+(id)listOfSyncedProperties;
+(BOOL)deleteObsoleteResourcesInManagedObjectContext:(id)arg1 error:(id*)arg2 ;
+(id)predicateForMaxFilesize:(long long)arg1 ;
+(id)insertResourceForAssetObjectID:(id)arg1 resourceIdentity:(id)arg2 inManagedObjectContext:(id)arg3 ;
+(id)_obsoleteResourceRecipesWithCPLOff;
+(id)predicateForAllFullSizeResourcesLocallyAvailable;
+(long long)cloudDeletionTypeForTombstone:(id)arg1 ;
+(id)nonOriginalCPLResourceTypes;
+(unsigned long long)bytesNeededToDownloadOriginalResourcesInLibrary:(id)arg1 ;
+(BOOL)countOfMediumOriginalLocallyAvailableCloudResourcesInManagedObjectContext:(id)arg1 localCount:(unsigned long long*)arg2 unavailableCount:(unsigned long long*)arg3 error:(id*)arg4 ;
+(id)insertResourceForMasterObjectID:(id)arg1 withExternalCPLResource:(id)arg2 inManagedObjectContext:(id)arg3 ;
+(unsigned long long)bytesForAllResourcesInLibrary:(id)arg1 ;
+(id)predicateForImageResourcePixelsLessOrEqual:(long long)arg1 ;
+(id)purgeablePushedPredicateForCPLResourceTypes:(id)arg1 urgency:(long long)arg2 ;
+(BOOL)isCPLJPEGThumbnailResource:(id)arg1 ;
+(BOOL)supportsTrashedStateForResourceIdentity:(id)arg1 ;
+(void)resetCloudResourcesStateForCloudInManagedObjectContext:(id)arg1 hardReset:(BOOL)arg2 ;
+(short)plTrashedStateForCPLExpungedState:(unsigned long long)arg1 ;
+(id)cloudUUIDKeyForDeletion;
+(id)predicateForAvailableResources;
+(unsigned long long)cplExpungedStateForTrashedState:(short)arg1 ;
+(id)predicateForPurgeableOriginalResources;
+(id)originalCPLResourceTypes;
+(BOOL)countOfLocallyAvailableCloudResourcesOfType:(unsigned long long)arg1 inManagedObjectContext:(id)arg2 localCount:(unsigned long long*)arg3 unavailableCount:(unsigned long long*)arg4 error:(id*)arg5 ;
+(id)originalCPLResourceTypesForMaster;
+(id)predicateForResourceCreatedAfterDate:(id)arg1 ;
-(id)payloadID;
-(id<PLResourceDataStore>)dataStore;
-(long long)cloudDeletionType;
-(BOOL)supportsCloudUpload;
-(unsigned long long)cplType;
-(id<PLCodecIdentity>)codecID;
-(id)payloadForChangedKeys:(id)arg1 ;
-(id)cplResourceIncludeFile:(BOOL)arg1 ;
-(void)willSave;
-(NSString *)cloudUUIDForDeletion;
-(void)prepareForDeletion;
-(id)cplFileURL;
-(long long)orientedWidth;
-(BOOL)isPlayableVideo;
-(void)setDataLength:(long long)arg1 ;
-(BOOL)isInCloud;
-(void)setQualitySortValueBasedOnAssetWidth:(long long)arg1 height:(long long)arg2 ;
-(void)setFingerprint:(NSString *)arg1 ;
-(BOOL)isTrashedOrExpunged;
-(BOOL)isDerivative;
-(BOOL)isDefaultOrientation;
-(BOOL)isCPLMasterResource;
-(void)markAsLocallyAvailableWithFilePath:(id)arg1 ;
-(id<PLUniformTypeIdentifierIdentity>)uniformTypeIdentifierID;
-(float)scale;
-(void)applyTrashedState:(short)arg1 ;
-(NSString *)debugDescription;
-(id<PLAssetID>)assetID;
-(BOOL)canRepresentAsSidecar;
-(BOOL)shouldPersistTrashedState;
-(BOOL)isCPLJPEGThumbnail;
-(BOOL)isSyncableChange;
-(id)scopedIdentifier;
-(id)fileURL;
-(void)transitional_reconsiderLocalAvailabilityBasedOnExistingLocationOfCPLResourceAtFilePath:(id)arg1 ;
-(id)singleLineDescription;
-(BOOL)repairResourceValidationErrors:(id)arg1 managedObjectContext:(id)arg2 ;
-(void)deleteResource;
-(void)setCloudLocalState:(short)arg1 ;
-(void)setResourceIdentity:(id)arg1 managedObjectContext:(id)arg2 ;
-(BOOL)isRemotelyAvailable;
-(id<PLResourceDataStoreKey>)dataStoreKey;
-(BOOL)isCPLOriginalResource;
-(id)photosCTLDescription;
-(void)persistTrashedStateToFilesystem;
-(BOOL)_colorSpaceIsNativeForDisplay;
-(BOOL)isCPLResource;
-(void)setCloudAttributesWithExternalResource:(id)arg1 ;
-(void)setLocalAvailability:(short)arg1 ;
-(id)validatedExternalResourceRepresentationUsingFileURL:(id)arg1 ;
-(void)markAsNotLocallyAvailable;
-(BOOL)isCPLAssetResource;
-(void)updateResourceForMasterExternalCPLResource:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(void)resetPrefetchState;
-(BOOL)isLocallyAvailable;
-(id)referenceMediaFileURL;
-(id)photosCTLJSONDict;
-(id)_libraryID;
-(long long)estimatedDataLength;
-(float)scaleGivenAssetHasAdjustments:(BOOL)arg1 currentWidth:(long long)arg2 currentHeight:(long long)arg3 ;
-(id)redactedDescription;
-(PLInternalResourceSidecarRepresentation *)sidecarRepresentation;
-(void)applyTrashedState:(short)arg1 trashedDate:(id)arg2 ;
-(BOOL)isAdjustedFullSizeRenderResource;
-(id)validateForAssetID:(id)arg1 resourceIdentity:(id)arg2 ;
-(long long)orientedHeight;
-(BOOL)supportsTrashedState;
-(id)expungeableResourceStateRepresentation;
-(BOOL)isAdjustedResource;
@end

