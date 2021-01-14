/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLMomentGenerationDataManagement.h>
#import <libobjc.A.dylib/PLHighlightItemModelReader.h>

@class NSDictionary, PLXPCTransaction, CNContactStore, PLMomentGeneration, PLPhotoLibraryPathManager, PLLibraryServicesManager, PLRoutineService, PLCameraAppWatcher, PLPhotoLibrary, NSManagedObjectContext, NSString;

@interface PLMomentGenerationDataManager : NSObject <PLMomentGenerationDataManagement, PLHighlightItemModelReader> {

	PLXPCTransaction* _keepAliveTransaction;
	/*^block*/id _reachabilityBlock;
	CNContactStore* _contactStore;
	PLMomentGeneration* _generator;
	NSDictionary* _generationOptions;
	BOOL _observingReachability;
	os_unfair_lock_s _lightweightMigrationLock;
	PLPhotoLibraryPathManager* _lightWeightMigrationPathManager;
	PLLibraryServicesManager* _libraryServicesManager;
	PLRoutineService* _routineManager;
	BOOL _shouldPerformLightweightValidation;
	BOOL _previousValidationSucceeded;
	BOOL _isLightweightMigrationManager;
	long long _previousValidatedModelVersion;
	PLCameraAppWatcher* _cameraWatcher;
	PLPhotoLibrary* _momentGenerationLibrary;
	NSManagedObjectContext* _managedObjectContext;

}

@property (nonatomic,__weak,readonly) CNContactStore * _contactStore; 
@property (nonatomic,retain) PLPhotoLibrary * momentGenerationLibrary;                   //@synthesize momentGenerationLibrary=_momentGenerationLibrary - In the implementation block
@property (nonatomic,readonly) PLCameraAppWatcher * cameraWatcher;                       //@synthesize cameraWatcher=_cameraWatcher - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,readonly) BOOL isLightweightMigrationManager;                       //@synthesize isLightweightMigrationManager=_isLightweightMigrationManager - In the implementation block
@property (assign,nonatomic) BOOL shouldPerformLightweightValidation;                    //@synthesize shouldPerformLightweightValidation=_shouldPerformLightweightValidation - In the implementation block
@property (assign,nonatomic) long long previousValidatedModelVersion;                    //@synthesize previousValidatedModelVersion=_previousValidatedModelVersion - In the implementation block
@property (assign,nonatomic) BOOL previousValidationSucceeded;                           //@synthesize previousValidationSucceeded=_previousValidationSucceeded - In the implementation block
@property (nonatomic,readonly) NSDictionary * generationOptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)isManagedObjectContextMomentarilyBlessed:(id)arg1 ;
+(void)setManagerMomentarilyBlessed:(id)arg1 ;
+(void)_setManagedObjectContextMomentarilyBlessed:(id)arg1 ;
-(BOOL)isNetworkReachable;
-(BOOL)save:(id*)arg1 ;
-(long long)previousValidatedModelVersion;
-(id)locationsOfInterest;
-(NSManagedObjectContext *)managedObjectContext;
-(PLPhotoLibrary *)momentGenerationLibrary;
-(id)invalidAssetsIgnoringAssetIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)monthMomentListForMonth:(long long)arg1 year:(long long)arg2 ;
-(BOOL)wantsMomentReplayLogging;
-(void)_networkReachabilityDidChange:(id)arg1 ;
-(id)insertNewPhotosHighlight;
-(void)invalidateLocationDataForAssetsWithOIDs:(id)arg1 ;
-(void)invalidateShiftedLocationForAllAssetsInMoments;
-(id)allAssetsToBeIncludedInMomentsWithError:(id*)arg1 ;
-(void)setPreviousValidatedModelVersion:(long long)arg1 ;
-(id)updatedObjects;
-(void)pendingChangesUpdated:(unsigned long long)arg1 ;
-(id)initWithLibraryServicesManager:(id)arg1 ;
-(BOOL)deleteAllHighlightsWithError:(id*)arg1 ;
-(id)allAssetIDsToBeIncludedInMomentsWithError:(id*)arg1 ;
-(id)_highlightsRelationshipKeyPathsForPrefetching;
-(id)momentsRequiringLocationProcessingWhenFrequentLocationsChangedWithError:(id*)arg1 ;
-(void)_finalizeInit;
-(Class)momentListDataClassForGranularityLevel:(short)arg1 ;
-(id)allPhotosHighlightsOfKind:(unsigned short)arg1 error:(id*)arg2 ;
-(id)momentsWithLocationTypeUnprocessedWithError:(id*)arg1 ;
-(BOOL)previousValidationSucceeded;
-(id)highlightsIntersectingDateInterval:(id)arg1 ofKind:(unsigned short)arg2 ;
-(Class)momentAssetDataClass;
-(id)initWithManagedObjectContext:(id)arg1 pathManagerForLightweightMigration:(id)arg2 ;
-(id)allInvalidPhotosHighlightsOfAllKindsWithError:(id*)arg1 ;
-(id)allMomentLists;
-(id)insertNewMoment;
-(id)homeAddressDictionary;
-(BOOL)_batchDeleteForEntityName:(id)arg1 error:(id*)arg2 ;
-(void)enumerateAssetsWithIDs:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)insertedObjects;
-(id)insertNewMomentListForGranularityLevel:(short)arg1 ;
-(id)momentsWithUniqueIDs:(id)arg1 error:(id*)arg2 ;
-(id)allPhotosHighlightsOfKind:(unsigned short)arg1 withPredicate:(id)arg2 error:(id*)arg3 ;
-(id)locationCoordinatesForAssetIDs:(id)arg1 ;
-(void)_updateKeepAlive;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(void)invalidateLocationDataForAssetsInMoment:(id)arg1 ;
-(id)allPhotosHighlightsOfAllKindsWithError:(id*)arg1 ;
-(void)verifyAndRepairOrphanedAssets:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)performDataTransaction:(/*^block*/id)arg1 synchronously:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)runPeriodicMaintenanceTasks:(unsigned long long)arg1 withTransaction:(id)arg2 ;
-(id)momentListWithUniqueID:(id)arg1 forLevel:(short)arg2 error:(id*)arg3 ;
-(void)performBlock:(/*^block*/id)arg1 synchronously:(BOOL)arg2 priority:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)momentWithUniqueID:(id)arg1 error:(id*)arg2 ;
-(void)resetOnFailure;
-(id)allInvalidMomentsWithError:(id*)arg1 ;
-(void)fetchLocationsOfInterestIfNeeded;
-(id)replayLogPath;
-(BOOL)deleteAllMomentListsWithError:(id*)arg1 ;
-(id)fetchChildHighlightItemsForHighlightItem:(id)arg1 ;
-(void)beginObservingNetworkReachabilityChangesWithBlock:(/*^block*/id)arg1 ;
-(id)momentsBetweenDate:(id)arg1 andDate:(id)arg2 sorted:(BOOL)arg3 ;
-(void)_removeKeepAlive;
-(BOOL)deleteAllMomentsWithError:(id*)arg1 ;
-(BOOL)isLightweightMigrationManager;
-(id)fetchParentHighlightItemsForHighlightItems:(id)arg1 ;
-(id)allPhotosHighlightsWithPredicate:(id)arg1 error:(id*)arg2 ;
-(id)allMomentsWithInvalidReverseLocationData;
-(BOOL)hasChanges;
-(CNContactStore *)_contactStore;
-(id)allEmptyPhotosHighlightsOfKind:(unsigned short)arg1 error:(id*)arg2 ;
-(id)yearMomentListForYear:(long long)arg1 ;
-(unsigned long long)hardGenerationBatchSizeLimit;
-(id)assetsWithUniqueIDs:(id)arg1 error:(id*)arg2 ;
-(id)allMomentListsForLevel:(short)arg1 ;
-(void)stopObservingNetworkReachabilityChanges;
-(id)allInvalidAssetsWithError:(id*)arg1 ;
-(id)allMomentIDsWithError:(id*)arg1 ;
-(id)assetWithUniqueID:(id)arg1 error:(id*)arg2 ;
-(BOOL)routineIsAvailable;
-(void)refreshObject:(id)arg1 mergeChanges:(BOOL)arg2 ;
-(id)lastLocationOfInterestVisit;
-(id)fetchNeighborHighlightItemsForHighlightItems:(id)arg1 ;
-(id)momentAnalysisTransactionWithName:(const char*)arg1 ;
-(id)momentsIntersectingDateInterval:(id)arg1 ;
-(void)reloadGenerationOptions;
-(void)invalidateAllHighlightSubtitles;
-(void)performDataTransaction:(/*^block*/id)arg1 synchronously:(BOOL)arg2 priority:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)momentsSinceDate:(id)arg1 ;
-(id)_currentHomeAddressDictionary;
-(id)deletedObjects;
-(id)momentsForAssetsWithUniqueIDs:(id)arg1 error:(id*)arg2 ;
-(BOOL)cameraIsActive;
-(void)refreshAllObjects;
-(BOOL)shouldPerformLightweightValidation;
-(NSDictionary *)generationOptions;
-(id)allAssetIDsNeedingLocationShiftWithError:(id*)arg1 ;
-(id)_highlightsRelationshipKeyPathsForPrefetchingForKind:(unsigned short)arg1 ;
-(Class)momentDataClass;
-(PLCameraAppWatcher *)cameraWatcher;
-(void)setShouldPerformLightweightValidation:(BOOL)arg1 ;
-(void)logRoutineInformation;
-(id)orphanedAssetIDsWithError:(id*)arg1 ;
-(id)generator;
-(void)setPreviousValidationSucceeded:(BOOL)arg1 ;
-(void)dealloc;
-(void)performBlock:(/*^block*/id)arg1 synchronously:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)allInvalidMomentIDsWithError:(id*)arg1 ;
-(void)setMomentGenerationLibrary:(PLPhotoLibrary *)arg1 ;
-(id)allMomentsWithError:(id*)arg1 ;
@end

