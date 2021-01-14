/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLManagedObject.h>
#import <libobjc.A.dylib/PLSyncableObject.h>

@class NSString, NSDate, NSSet, PLCloudMasterMediaMetadata, PLMomentShare;

@interface PLCloudMaster : PLManagedObject <PLSyncableObject>

@property (nonatomic,retain) NSString * cloudMasterGUID; 
@property (assign,nonatomic) short cloudLocalState; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (assign,nonatomic) short fullSizeJPEGSource; 
@property (nonatomic,retain) NSDate * importDate; 
@property (nonatomic,retain) NSString * uniformTypeIdentifier; 
@property (nonatomic,retain) NSString * originalFilename; 
@property (assign,nonatomic) short originalOrientation; 
@property (nonatomic,retain) NSString * importSessionID; 
@property (nonatomic,copy) NSString * originatingAssetIdentifier; 
@property (assign,nonatomic) short placeholderState; 
@property (assign,nonatomic) short importedBy; 
@property (assign,nonatomic) NSString * codecName; 
@property (assign,nonatomic) short videoFrameRate; 
@property (nonatomic,retain) NSSet * assets; 
@property (nonatomic,retain) NSSet * resources; 
@property (nonatomic,retain) NSSet * transientModernResources; 
@property (nonatomic,retain) NSString * mediaMetadataType; 
@property (nonatomic,retain) PLCloudMasterMediaMetadata * mediaMetadata; 
@property (nonatomic,retain) PLMomentShare * momentShare; 
@property (nonatomic,retain,readonly) id localID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)entityName;
+(id)cloudMasterWithGUID:(id)arg1 inMomentShare:(id)arg2 prefetchResources:(BOOL)arg3 inManagedObjectContext:(id)arg4 ;
+(void)deleteAllCloudMastersInManagedObjectContext:(id)arg1 ;
+(void)resetCloudMastersStateInManagedObjectContext:(id)arg1 ;
+(id)cloudMasterWithScopedIdentifier:(id)arg1 prefetchResources:(BOOL)arg2 inManagedObjectContext:(id)arg3 ;
+(id)listOfSyncedProperties;
+(id)_originalTypes;
+(id)cloudMastersWithScopedIdentifiers:(id)arg1 relationshipKeyPathsForPrefetching:(id)arg2 inLibrary:(id)arg3 ;
+(id)cloudMastersByScopedIdentifiers:(id)arg1 relationshipKeyPathsForPrefetching:(id)arg2 inLibrary:(id)arg3 ;
+(id)insertIntoPhotoLibrary:(id)arg1 withCloudMasterGUID:(id)arg2 inMomentShare:(id)arg3 ;
+(unsigned long long)fullSizeJPEGSourceForUTI:(id)arg1 andImageDimensions:(CGSize)arg2 ;
-(BOOL)supportsCloudUpload;
-(void)awakeFromInsert;
-(BOOL)hasResourcesOtherThanForAssetUuid:(id)arg1 ;
-(id)rm_cloudResourceForResourceType:(unsigned long long)arg1 forAssetUuid:(id)arg2 ;
-(id)rm_applyResourcesFromCPLMasterChange:(id)arg1 inPhotoLibrary:(id)arg2 ;
-(void)rm_applyExpungeableResourceStatesFromCPLMasterChange:(id)arg1 inPhotoLibrary:(id)arg2 ;
-(id)rm_assetUUIDToCloudResources;
-(BOOL)isSyncableChange;
-(id)allMasterResources;
-(id)scopedIdentifier;
-(id)cplPropertyRecord;
-(unsigned long long)sizeOfOriginal;
-(NSString *)description;
-(id)rm_cloudResourcesForResourceType:(unsigned long long)arg1 ;
-(id)localID;
-(id)originalFilenameForResourceType:(unsigned long long)arg1 filePath:(id)arg2 ;
-(BOOL)allOriginalsAreUploaded;
-(id)payloadsForChangedKeys:(id)arg1 ;
-(void)applyPropertiesFromCPLMasterChange:(id)arg1 ;
-(id)cplFullRecord;
-(BOOL)allOriginalsAreLocallyAvailableForAssetUuid:(id)arg1 useOriginalAltInsteadOfOriginal:(BOOL)arg2 ;
-(id)cplMasterPropertyChangeForAsset:(id)arg1 ;
-(void)_promptForNilScopeIdentifierRadar;
@end

