/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) id localID; 
+(id)entityName;
+(id)cloudMasterWithScopedIdentifier:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)listOfSyncedProperties;
+(void)deleteAllCloudMastersInManagedObjectContext:(id)arg1 ;
+(void)resetCloudMastersStateInManagedObjectContext:(id)arg1 hardReset:(BOOL)arg2 ;
+(id)insertIntoPhotoLibrary:(id)arg1 withCloudMasterGUID:(id)arg2 inMomentShare:(id)arg3 ;
+(unsigned long long)fullSizeJPEGSourceForUTI:(id)arg1 andImageDimensions:(CGSize)arg2 ;
+(id)cloudMasterWithGUID:(id)arg1 inMomentShare:(id)arg2 inManagedObjectContext:(id)arg3 ;
+(id)_originalTypes;
-(NSString *)description;
-(void)awakeFromInsert;
-(id)allMasterResources;
-(id)scopedIdentifier;
-(id)cplFullRecord;
-(id)rm_cloudResourcesForResourceType:(unsigned long long)arg1 ;
-(id)cplPropertyRecord;
-(BOOL)supportsCloudUpload;
-(unsigned long long)sizeOfOriginal;
-(id)assetUUIDToCloudResources;
-(BOOL)isSyncableChange;
-(id)localID;
-(BOOL)allOriginalsAreUploaded;
-(BOOL)hasResourcesOtherThanForAssetUuid:(id)arg1 ;
-(id)rm_cloudResourceForResourceType:(unsigned long long)arg1 forAssetUuid:(id)arg2 ;
-(id)rm_applyResourcesFromCPLMasterChange:(id)arg1 inPhotoLibrary:(id)arg2 ;
-(void)rm_applyExpungeableResourceStatesFromCPLMasterChange:(id)arg1 inPhotoLibrary:(id)arg2 ;
-(id)rm_assetUUIDToCloudResources;
-(id)cloudResourceForResourceType:(unsigned long long)arg1 forAssetUuid:(id)arg2 ;
-(id)cloudResourcesForResourceType:(unsigned long long)arg1 ;
-(id)payloadsForChangedKeys:(id)arg1 ;
-(void)applyPropertiesFromCPLMasterChange:(id)arg1 ;
-(id)cplMasterPropertyChangeForAsset:(id)arg1 ;
-(void)_promptForNilScopeIdentifierRadar;
-(BOOL)allOriginalsAreLocallyAvailableForAssetUuid:(id)arg1 useOriginalAltInsteadOfOriginal:(BOOL)arg2 ;
-(id)originalFilenameForResourceType:(unsigned long long)arg1 filePath:(id)arg2 ;
@end

