/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLManagedObject.h>
#import <libobjc.A.dylib/PLSyncablePerson.h>
#import <libobjc.A.dylib/PLCloudDeletable.h>
#import <libobjc.A.dylib/PLFileSystemMetadataPersistence.h>

@class NSString, PLDetectedFace, NSSet, PLDetectedFaceGroup, NSDictionary;

@interface PLPerson : PLManagedObject <PLSyncablePerson, PLCloudDeletable, PLFileSystemMetadataPersistence>

@property (assign,nonatomic) int verifiedType; 
@property (assign,nonatomic) int cloudVerifiedType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) id localID; 
@property (assign,nonatomic) short cloudLocalState; 
@property (nonatomic,retain) NSString * personUUID; 
@property (nonatomic,retain) NSString * fullName; 
@property (nonatomic,readonly) BOOL userVerified; 
@property (nonatomic,readonly) BOOL graphVerified; 
@property (nonatomic,readonly) BOOL isTombstone; 
@property (nonatomic,readonly) BOOL keyFaceIsPicked; 
@property (nonatomic,retain) PLDetectedFace * keyFace; 
@property (nonatomic,retain) NSString * displayName; 
@property (nonatomic,retain) NSSet * personReferences; 
@property (nonatomic,retain) NSSet * detectedFaces; 
@property (assign,nonatomic) short keyFacePickSource; 
@property (nonatomic,retain) NSSet * rejectedFaces; 
@property (nonatomic,retain) NSSet * rejectedFacesNeedingFaceCrops; 
@property (nonatomic,retain) NSSet * clusterRejectedFaces; 
@property (nonatomic,retain) NSSet * faceCrops; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) unsigned manualOrder; 
@property (nonatomic,retain) NSString * personUri; 
@property (assign,nonatomic) BOOL inPersonNamingModel; 
@property (nonatomic,readonly) int faceCount; 
@property (assign,nonatomic) short cloudDeleteState; 
@property (nonatomic,retain) PLDetectedFaceGroup * associatedFaceGroup; 
@property (nonatomic,retain) NSDictionary * contactMatchingDictionary; 
@property (assign,nonatomic) short questionType; 
@property (assign,nonatomic) unsigned short genderType; 
@property (assign,nonatomic) unsigned short ageType; 
@property (nonatomic,retain) NSSet * mergeCandidates; 
@property (nonatomic,retain) NSSet * invalidMergeCandidates; 
@property (nonatomic,retain) PLPerson * mergeTargetPerson; 
@property (nonatomic,retain) NSSet * mergeSourcePersons; 
@property (assign,nonatomic) int effectiveVerifiedType; 
@property (readonly) long long cloudDeletionType; 
@property (copy,readonly) NSString * cloudUUIDForDeletion; 
+(id)entityName;
+(id)personsWithUUIDs:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)personWithUUID:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)personsToUploadInManagedObjectContext:(id)arg1 limit:(long long)arg2 ;
+(long long)cloudDeletionTypeForTombstone:(id)arg1 ;
+(id)cloudUUIDKeyForDeletion;
+(id)listOfSyncedProperties;
+(void)enumerateAssetUUIDsForSearchIndexingWithPersonUUID:(id)arg1 managedObjectContext:(id)arg2 assetUUIDHandler:(/*^block*/id)arg3 ;
+(void)createAssociatedPersonForFaceGroup:(id)arg1 ;
+(id)predicateForPersistence;
+(void)createAssociatedPersonForFaceGroup:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(void)resetCloudStateInPhotoLibrary:(id)arg1 hardReset:(BOOL)arg2 ;
+(BOOL)person:(id)arg1 isBetterMergeTargetThanPerson:(id)arg2 ;
+(id)personsWithPersonUri:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)insertIntoManagedObjectContext:(id)arg1 withPersonUUID:(id)arg2 fullName:(id)arg3 verifiedType:(int)arg4 ;
+(id)displayNameFromContact:(id)arg1 ;
+(id)fullNameFromContact:(id)arg1 ;
+(id)personsToPrefetchInManagedObjectContext:(id)arg1 ;
+(id)listOfPropertiesToResetAgeAndGender;
+(id)insertIntoPhotoLibrary:(id)arg1 withPersonUUID:(id)arg2 fullName:(id)arg3 verifiedType:(int)arg4 ;
+(id)personsMatchingPredicate:(id)arg1 fetchLimit:(unsigned long long)arg2 sortDescriptors:(id)arg3 relationshipKeyPathsForPrefetching:(id)arg4 inManagedObjectContext:(id)arg5 ;
+(id)allPersonsInManagedObjectContext:(id)arg1 ;
+(id)_batchFetchPersonUUIDsByAssetUUIDWithAssetUUIDs:(id)arg1 predicate:(id)arg2 inManagedObjectContext:(id)arg3 error:(id*)arg4 ;
+(void)batchFetchPersonUUIDsByAssetUUIDWithAssetUUIDs:(id)arg1 predicate:(id)arg2 inManagedObjectContext:(id)arg3 completion:(/*^block*/id)arg4 ;
+(void)batchFetchPersonsByAssetUUIDWithAssetUUIDs:(id)arg1 predicate:(id)arg2 library:(id)arg3 completion:(/*^block*/id)arg4 ;
+(id)fetchPersonCountByAssetUUIDForAssetUUIDs:(id)arg1 predicate:(id)arg2 library:(id)arg3 error:(id*)arg4 ;
+(void)batchFetchAssociatedPersonByFaceGroupUUIDWithFaceGroupUUIDs:(id)arg1 predicate:(id)arg2 library:(id)arg3 completion:(/*^block*/id)arg4 ;
+(id)_stringFromContact:(id)arg1 preferGivenName:(BOOL)arg2 ;
+(id)predicateForPersonsNeedingFaceCropGenerationForFaceObjectID:(id)arg1 ;
+(id)predicateForVisibleKeyFace;
+(BOOL)resetAllInLibrary:(id)arg1 error:(id*)arg2 ;
+(id)fetchFinalMergeTargetPersonForPersonWithUUID:(id)arg1 context:(id)arg2 predicate:(id)arg3 ;
+(id)_predicateForSupportedVerifiedTypesForUpload;
-(void)prepareForDeletion;
-(void)willSave;
-(id)cplFullRecord;
-(id)momentShare;
-(id)cplPersonChange;
-(id)reverseOrderedMergeTargetPersons;
-(BOOL)supportsCloudUpload;
-(id)syncDescription;
-(long long)cloudDeletionType;
-(id)payloadID;
-(id)payloadIDForTombstone:(id)arg1 ;
-(id)payloadForChangedKeys:(id)arg1 ;
-(id)debugLogDescription;
-(NSString *)cloudUUIDForDeletion;
-(BOOL)isSyncableChange;
-(id)mutableRejectedFaces;
-(void)resetAllFacesToDefault;
-(BOOL)isValidForPersistence;
-(BOOL)shouldIndexForSearch;
-(id)localID;
-(void)persistMetadataToFileSystemWithPathManager:(id)arg1 ;
-(void)removePersistedFileSystemDataWithPathManager:(id)arg1 ;
-(void)refreshFaces;
-(BOOL)validForPersistenceChangedForChangedKeys:(id)arg1 ;
-(void)setKeyFace:(id)arg1 pickSource:(short)arg2 ;
-(void)setEffectiveVerifiedType:(int)arg1 ;
-(id)mutableFaces;
-(BOOL)dedupeGraphPersons:(id)arg1 error:(id*)arg2 ;
-(id)finalMergeTargetPerson;
-(void)mergePersons:(id)arg1 withOptimalState:(id)arg2 ;
-(id)pickKeyFaceOptimalStateForContactDedupeWithPersons:(id)arg1 ;
-(BOOL)isTombstone;
-(void)setCPLSyncedMergeTarget:(id)arg1 ;
-(BOOL)userVerified;
-(BOOL)graphVerified;
-(BOOL)keyFaceIsPicked;
-(id)mutableMergeCandidates;
-(id)mutableInvalidMergeCandidates;
-(void)setKeyFaceToPicked;
-(id)mutableRejectedFacesNeedingFaceCrops;
-(id)mutableFaceCrops;
-(id)faceGroupDescription;
-(void)rejectFaceIfPossible:(id)arg1 shouldCreateFaceCrop:(BOOL)arg2 ;
-(int)effectiveVerifiedType;
-(void)_refreshRelationshipForKey:(id)arg1 ;
-(void)refreshRejectedFaces;
-(void)refreshFaceCrops;
-(void)refereshMergeCandidates;
-(void)refreshInvalidMergeCandidates;
-(id)_nameRelatedMetadataKeys;
-(id)pickOptimalStateForUserInitiatedMergeWithPersons:(id)arg1 nominalTarget:(id)arg2 ;
-(void)prepareForUserInitiatedMergeWithPersons:(id)arg1 ;
-(void)_basicMergePersons:(id)arg1 ;
-(void)basicMergePersons:(id)arg1 ;
@end

