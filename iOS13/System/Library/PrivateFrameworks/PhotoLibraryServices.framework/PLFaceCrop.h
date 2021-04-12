/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) id localID; 
@property (readonly) long long cloudDeletionType; 
@property (copy,readonly) NSString * cloudUUIDForDeletion; 
+(id)entityName;
+(id)faceCropsWithUUIDs:(id)arg1 inPhotoLibrary:(id)arg2 ;
+(id)faceCropsToUploadInPhotoLibrary:(id)arg1 limit:(unsigned long long)arg2 ;
+(long long)cloudDeletionTypeForTombstone:(id)arg1 ;
+(id)cloudUUIDKeyForDeletion;
+(id)listOfSyncedProperties;
+(void)resetCloudStateInPhotoLibrary:(id)arg1 hardReset:(BOOL)arg2 ;
+(id)insertOrUpdateWithCPLFaceCrop:(id)arg1 inPhotoLibrary:(id)arg2 ;
+(long long)_cloudTypeToPushFromLocalType:(short)arg1 cachedCloudType:(unsigned short)arg2 ;
+(int)_trainingFaceTypeForFaceFromFaceCrop:(id)arg1 ;
+(int)_nameSourceForFaceFromFaceCrop:(id)arg1 ;
+(id)insertIntoPhotoLibrary:(id)arg1 withUUID:(id)arg2 resourceData:(id)arg3 type:(short)arg4 ;
+(id)insertIntoManagedObjectContext:(id)arg1 withUUID:(id)arg2 resourceData:(id)arg3 type:(short)arg4 ;
+(id)_faceCropsMatchingPredicate:(id)arg1 limit:(unsigned long long)arg2 inManagedObjectContext:(id)arg3 ;
+(id)allFaceCropsInPhotoLibrary:(id)arg1 ;
+(id)faceCropsWithUUIDs:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(short)_localTypeFromCloudType:(long long)arg1 ;
-(NSString *)debugDescription;
-(void)prepareForDeletion;
-(void)willSave;
-(id)cplFullRecord;
-(id)momentShare;
-(id)cplFaceCropChange;
-(BOOL)supportsCloudUpload;
-(long long)cloudDeletionType;
-(NSString *)cloudUUIDForDeletion;
-(BOOL)isSyncableChange;
-(id)localID;
-(BOOL)needsPersistenceUpdate;
-(void)setNeedsPersistenceUpdate:(BOOL)arg1 ;
-(void)applyPropertiesToTrainingFace;
@end

