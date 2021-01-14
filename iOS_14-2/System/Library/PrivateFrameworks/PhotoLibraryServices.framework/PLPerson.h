/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,retain) NSString * personUUID; 
@property (nonatomic,retain) NSString * fullName; 
@property (nonatomic,readonly) BOOL userVerified; 
@property (nonatomic,readonly) BOOL graphVerified; 
@property (nonatomic,readonly) BOOL isTombstone; 
@property (nonatomic,readonly) BOOL keyFaceIsPicked; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) id localID; 
@property (assign,nonatomic) short cloudLocalState; 
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
@property (assign,nonatomic) unsigned short suggestedForClientType; 
@property (nonatomic,retain) NSSet * mergeCandidates; 
@property (nonatomic,retain) NSSet * invalidMergeCandidates; 
@property (nonatomic,retain) PLPerson * mergeTargetPerson; 
@property (nonatomic,retain) NSSet * mergeSourcePersons; 
@property (assign,nonatomic) int effectiveVerifiedType; 
@property (readonly) long long cloudDeletionType; 
@property (copy,readonly) NSString * cloudUUIDForDeletion; 
+(void)batchFetchPersonsByAssetUUIDWithAssetUUIDs:(id)arg1 predicate:(id)arg2 library:(id)arg3 completion:(/*^block*/id)arg4 ;
+(id)entityName;
+(id)allPersonsInManagedObjectContext:(id)arg1 ;
+(id)predicateForPersonsNeedingFaceCropGenerationForFaceObjectID:(id)arg1 ;
+(id)personWithUUID:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)personsWithPersonUri:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)listOfPropertiesToResetAgeAndGender;
+(id)listOfSyncedProperties;
+(void)createAssociatedPersonForFaceGroup:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)predicateForVisibleKeyFace;
+(BOOL)person:(id)arg1 isBetterMergeTargetThanPerson:(id)arg2 ;
+(id)insertIntoManagedObjectContext:(id)arg1 withPersonUUID:(id)arg2 fullName:(id)arg3 verifiedType:(int)arg4 ;
+(id)_predicateForSupportedVerifiedTypesForUpload;
+(long long)cloudDeletionTypeForTombstone:(id)arg1 ;
+(void)batchFetchPersonUUIDsByAssetUUIDWithAssetUUIDs:(id)arg1 predicate:(id)arg2 inManagedObjectContext:(id)arg3 completion:(/*^block*/id)arg4 ;
+(void)enumerateAssetUUIDsForSearchIndexingWithPersonUUID:(id)arg1 managedObjectContext:(id)arg2 assetUUIDHandler:(/*^block*/id)arg3 ;
+(id)_batchFetchPersonUUIDsByAssetUUIDWithAssetUUIDs:(id)arg1 predicate:(id)arg2 inManagedObjectContext:(id)arg3 error:(id*)arg4 ;
+(id)fetchFinalMergeTargetPersonForPersonWithUUID:(id)arg1 context:(id)arg2 predicate:(id)arg3 ;
+(id)insertIntoPhotoLibrary:(id)arg1 withPersonUUID:(id)arg2 fullName:(id)arg3 verifiedType:(int)arg4 ;
+(id)personsToPrefetchInManagedObjectContext:(id)arg1 ;
+(id)fetchPersonCountByAssetUUIDForAssetUUIDs:(id)arg1 predicate:(id)arg2 library:(id)arg3 error:(id*)arg4 ;
+(id)predicateForPersistence;
+(id)personsToUploadInManagedObjectContext:(id)arg1 limit:(long long)arg2 ;
+(id)personsMatchingPredicate:(id)arg1 fetchLimit:(unsigned long long)arg2 sortDescriptors:(id)arg3 relationshipKeyPathsForPrefetching:(id)arg4 inManagedObjectContext:(id)arg5 ;
+(id)personsWithUUIDs:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(void)createAssociatedPersonForFaceGroup:(id)arg1 ;
+(void)batchFetchAssociatedPersonByFaceGroupUUIDWithFaceGroupUUIDs:(id)arg1 predicate:(id)arg2 library:(id)arg3 completion:(/*^block*/id)arg4 ;
+(id)cloudUUIDKeyForDeletion;
+(BOOL)resetAllInLibrary:(id)arg1 error:(id*)arg2 ;
+(id)displayNameFromContact:(id)arg1 ;
+(void)resetCloudStateInPhotoLibrary:(id)arg1 ;
+(id)_stringFromContact:(id)arg1 preferGivenName:(BOOL)arg2 ;
+(id)fullNameFromContact:(id)arg1 ;
-(id)payloadID;
-(long long)cloudDeletionType;
-(BOOL)supportsCloudUpload;
-(void)removePersistedFileSystemDataWithPathManager:(id)arg1 ;
-(id)payloadForChangedKeys:(id)arg1 ;
-(id)payloadIDForTombstone:(id)arg1 ;
-(void)willSave;
-(NSString *)cloudUUIDForDeletion;
-(void)prepareForDeletion;
-(BOOL)isValidForPersistence;
-(void)persistMetadataToFileSystemWithPathManager:(id)arg1 ;
-(void)rejectFaceIfPossible:(id)arg1 shouldCreateFaceCrop:(BOOL)arg2 ;
-(BOOL)shouldIndexForSearch;
-(void)basicMergePersons:(id)arg1 ;
-(void)resetAllFacesToDefault;
-(void)disconnectFaceGroup;
-(void)prepareForUserInitiatedMergeWithPersons:(id)arg1 ;
-(id)mutableFaces;
-(int)effectiveVerifiedType;
-(id)pickKeyFaceOptimalStateForContactDedupeWithPersons:(id)arg1 ;
-(BOOL)graphVerified;
-(void)refreshFaces;
-(id)_nameRelatedMetadataKeys;
-(BOOL)dedupeGraphPersons:(id)arg1 error:(id*)arg2 ;
-(BOOL)isSyncableChange;
-(void)setEffectiveVerifiedType:(int)arg1 ;
-(id)mutableFaceCrops;
-(id)finalMergeTargetPerson;
-(void)_basicMergePersons:(id)arg1 ;
-(void)setCPLSyncedMergeTarget:(id)arg1 ;
-(void)mergePersons:(id)arg1 withOptimalState:(id)arg2 ;
-(id)mutableInvalidMergeCandidates;
-(id)localID;
-(id)cplPersonChange;
-(id)debugLogDescription;
-(void)_refreshRelationshipForKey:(id)arg1 ;
-(id)syncDescription;
-(BOOL)userVerified;
-(id)mutableRejectedFacesNeedingFaceCrops;
-(id)reverseOrderedMergeTargetPersons;
-(void)refreshFaceCrops;
-(void)refreshInvalidMergeCandidates;
-(id)momentShare;
-(id)cplFullRecord;
-(void)refereshMergeCandidates;
-(BOOL)validForPersistenceChangedForChangedKeys:(id)arg1 ;
-(void)setKeyFaceToPicked;
-(id)pickOptimalStateForUserInitiatedMergeWithPersons:(id)arg1 nominalTarget:(id)arg2 ;
-(id)mutableMergeCandidates;
-(id)mutableRejectedFaces;
-(void)refreshRejectedFaces;
-(BOOL)keyFaceIsPicked;
-(id)faceGroupDescription;
-(BOOL)isTombstone;
-(void)setKeyFace:(id)arg1 pickSource:(short)arg2 ;
@end

