/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLManagedObject.h>
#import <libobjc.A.dylib/PLSyncableObject.h>
#import <libobjc.A.dylib/PLCloudDeletable.h>

@class NSString, NSData, PLPerson, PLDetectedFace, PLManagedAsset;

@interface PLFaceCrop : PLManagedObject <PLSyncableObject, PLCloudDeletable> {

	BOOL _needsPersistenceUpdate;

}

@property (assign,nonatomic) BOOL needsPersistenceUpdate;                             //@synthesize needsPersistenceUpdate=_needsPersistenceUpdate - In the implementation block
@property (assign,nonatomic) short cloudLocalState; 
@property (assign,nonatomic) short cloudDeleteState; 
@property (assign,nonatomic) short type; 
@property (assign,nonatomic) unsigned short cloudType; 
@property (assign,nonatomic) short state; 
@property (nonatomic,copy) NSString * uuid; 
@property (nonatomic,retain) NSData * resourceData; 
@property (nonatomic,retain) PLPerson * person; 
@property (nonatomic,retain) PLDetectedFace * face; 
@property (nonatomic,retain) NSString * invalidMergeCandidatePersonUUID; 
@property (nonatomic,retain) PLManagedAsset * asset; 
@property (nonatomic,retain,readonly) id localID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) long long cloudDeletionType; 
@property (copy,readonly) NSString * cloudUUIDForDeletion; 
+(id)entityName;
+(long long)_cloudTypeToPushFromLocalType:(short)arg1 cachedCloudType:(unsigned short)arg2 ;
+(int)_trainingFaceTypeForFaceFromFaceCrop:(id)arg1 ;
+(int)_nameSourceForFaceFromFaceCrop:(id)arg1 ;
+(id)insertIntoManagedObjectContext:(id)arg1 withUUID:(id)arg2 resourceData:(id)arg3 type:(short)arg4 ;
+(id)allFaceCropsInPhotoLibrary:(id)arg1 ;
+(id)_faceCropsMatchingPredicate:(id)arg1 limit:(unsigned long long)arg2 inManagedObjectContext:(id)arg3 ;
+(id)faceCropsWithUUIDs:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(short)_localTypeFromCloudType:(long long)arg1 ;
+(id)faceCropsWithUUIDs:(id)arg1 inPhotoLibrary:(id)arg2 ;
+(id)faceCropsToUploadInPhotoLibrary:(id)arg1 limit:(unsigned long long)arg2 ;
+(id)listOfSyncedProperties;
+(long long)cloudDeletionTypeForTombstone:(id)arg1 ;
+(id)insertOrUpdateWithCPLFaceCrop:(id)arg1 inPhotoLibrary:(id)arg2 ;
+(id)insertIntoPhotoLibrary:(id)arg1 withUUID:(id)arg2 resourceData:(id)arg3 type:(short)arg4 ;
+(id)cloudUUIDKeyForDeletion;
+(id)batchFetchFaceCropByFaceObjectIDWithFaceObjectIDs:(id)arg1 library:(id)arg2 ;
+(void)resetCloudStateInPhotoLibrary:(id)arg1 ;
-(long long)cloudDeletionType;
-(void)setNeedsPersistenceUpdate:(BOOL)arg1 ;
-(BOOL)supportsCloudUpload;
-(BOOL)needsPersistenceUpdate;
-(void)willSave;
-(NSString *)cloudUUIDForDeletion;
-(void)prepareForDeletion;
-(NSString *)debugDescription;
-(BOOL)isSyncableChange;
-(id)cplFaceCropChange;
-(id)localID;
-(void)applyPropertiesToTrainingFace;
-(id)momentShare;
-(id)cplFullRecord;
@end

