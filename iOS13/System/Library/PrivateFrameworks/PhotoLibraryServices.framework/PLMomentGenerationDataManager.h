/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/PLMomentGenerationDataManagement.h>
#import <libobjc.A.dylib/PLHighlightItemModelReader.h>

@class NSDictionary, PLXPCTransaction, CNContactStore, PLMomentGeneration, PLPhotoLibraryPathManager, PLLibraryServicesManager, PLRoutineService, PLCameraAppWatcher, NSManagedObjectContext, PLPhotoLibrary, NSString;

@interface PLMomentGenerationDataManager : NSObject <PLMomentGenerationDataManagement, PLHighlightItemModelReader> {

	PLXPCTransaction* _keepAliveTransaction;
	/*^block*/id _reachabilityBlock;
	CNContactStore* _contactStore;
	PLMomentGeneration* _generator;
	NSDictionary* _generationOptions;
	BOOL _observingReachability;
	BOOL _isLightweightMigrationManager;
	PLPhotoLibraryPathManager* _lightWeightMigrationPathManager;
	PLLibraryServicesManager* _libraryServicesManager;
	PLRoutineService* _routineManager;
	BOOL _shouldPerformLightweightValidation;
	BOOL _previousValidationSucceeded;
	long long _previousValidatedModelVersion;
	PLCameraAppWatcher* _cameraWatcher;
	NSManagedObjectContext* _managedObjectContext;
	PLPhotoLibrary* _momentGenerationLibrary;

}

@property (nonatomic,__weak,readonly) CNContactStore * _contactStore; 
@property (nonatomic,retain) PLPhotoLibrary * momentGenerationLibrary;                   //@synthesize momentGenerationLibrary=_momentGenerationLibrary - In the implementation block
@property (nonatomic,readonly) PLCameraAppWatcher * cameraWatcher;                       //@synthesize cameraWatcher=_cameraWatcher - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL shouldPerformLightweightValidation;                    //@synthesize shouldPerformLightweightValidation=_shouldPerformLightweightValidation - In the implementation block
@property (assign,nonatomic) long long previousValidatedModelVersion;                    //@synthesize previousValidatedModelVersion=_previousValidatedModelVersion - In the implementation block
@property (assign,nonatomic) BOOL previousValidationSucceeded;                           //@synthesize previousValidationSucceeded=_previousValidationSucceeded - In the implementation block
@property (nonatomic,readonly) NSDictionary * generationOptions; 
+(void)initialize;
+(void)setManagerMomentarilyBlessed:(id)arg1 ;
+(void)_setManagedObjectContextMomentarilyBlessed:(id)arg1 ;
+(BOOL)isManagedObjectContextMomentarilyBlessed:(id)arg1 ;
-(void)dealloc;
-(BOOL)hasChanges;
-(id)insertedObjects;
-(BOOL)save:(id*)arg1 ;
-(CNContactStore *)_contactStore;
-(void)refreshAllObjects;
-(NSManagedObjectContext *)managedObjectContext;
-(BOOL)isNetworkReachable;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(id)updatedObjects;
-(id)deletedObjects;
-(void)refreshObject:(id)arg1 mergeChanges:(BOOL)arg2 ;
-(id)generator;
-(id)initWithLibraryServicesManager:(id)arg1 ;
-(id)orphanedAssetIDsWithError:(id*)arg1 ;
-(id)initWithManagedObjectContext:(id)arg1 pathManagerForLightweightMigration:(id)arg2 ;
-(id)fetchNeighborHighlightItemsForHighlightItems:(id)arg1 ;
-(id)fetchChildHighlightItemsForHighlightItem:(id)arg1 ;
-(id)fetchParentHighlightItemsForHighlightItems:(id)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 synchronously:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)performDataTransaction:(/*^block*/id)arg1 synchronously:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)performBlock:(/*^block*/id)arg1 synchronously:(BOOL)arg2 priority:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)performDataTransaction:(/*^block*/id)arg1 synchronously:(BOOL)arg2 priority:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(unsigned long long)hardGenerationBatchSizeLimit;
-(void)invalidateLocationDataForAssetsInMoment:(id)arg1 ;
-(void)invalidateLocationDataForAssetsWithOIDs:(id)arg1 ;
-(void)pendingChangesUpdated:(unsigned long long)arg1 ;
-(id)momentAnalysisTransactionWithName:(const char*)arg1 ;
-(id)assetWithUniqueID:(id)arg1 error:(id*)arg2 ;
-(id)assetsWithUniqueIDs:(id)arg1 error:(id*)arg2 ;
-(id)momentWithUniqueID:(id)arg1 error:(id*)arg2 ;
-(void)enumerateAssetsWithIDs:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)momentListWithUniqueID:(id)arg1 forLevel:(short)arg2 error:(id*)arg3 ;
-(id)momentsWithUniqueIDs:(id)arg1 error:(id*)arg2 ;
-(id)momentsForAssetsWithUniqueIDs:(id)arg1 error:(id*)arg2 ;
-(id)momentsSinceDate:(id)arg1 ;
-(id)momentsBetweenDate:(id)arg1 andDate:(id)arg2 sorted:(BOOL)arg3 ;
-(id)yearMomentListForYear:(long long)arg1 ;
-(id)monthMomentListForMonth:(long long)arg1 year:(long long)arg2 ;
-(id)allMomentsWithError:(id*)arg1 ;
-(id)allInvalidMomentsWithError:(id*)arg1 ;
-(id)momentsWithLocationTypeUnprocessedWithError:(id*)arg1 ;
-(id)momentsRequiringLocationProcessingWhenFrequentLocationsChangedWithError:(id*)arg1 ;
-(id)allMomentIDsWithError:(id*)arg1 ;
-(id)allInvalidMomentIDsWithError:(id*)arg1 ;
-(id)allMomentsWithInvalidReverseLocationData;
-(id)allMomentListsForLevel:(short)arg1 ;
-(id)allMomentLists;
-(id)momentsIntersectingDateInterval:(id)arg1 ;
-(id)allAssetsToBeIncludedInMomentsWithError:(id*)arg1 ;
-(id)invalidAssetsIgnoringAssetIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)allInvalidAssetsWithError:(id*)arg1 ;
-(id)allAssetIDsToBeIncludedInMomentsWithError:(id*)arg1 ;
-(id)highlightsIntersectingDateInterval:(id)arg1 ofKind:(unsigned short)arg2 ;
-(id)allPhotosHighlightsOfAllKindsWithError:(id*)arg1 ;
-(id)allPhotosHighlightsOfKind:(unsigned short)arg1 error:(id*)arg2 ;
-(id)allPhotosHighlightsOfKind:(unsigned short)arg1 withPredicate:(id)arg2 error:(id*)arg3 ;
-(id)allPhotosHighlightsWithPredicate:(id)arg1 error:(id*)arg2 ;
-(id)allInvalidPhotosHighlightsOfAllKindsWithError:(id*)arg1 ;
-(id)allEmptyPhotosHighlightsOfKind:(unsigned short)arg1 error:(id*)arg2 ;
-(BOOL)deleteAllMomentsWithError:(id*)arg1 ;
-(BOOL)deleteAllHighlightsWithError:(id*)arg1 ;
-(BOOL)deleteAllMomentListsWithError:(id*)arg1 ;
-(Class)momentListDataClassForGranularityLevel:(short)arg1 ;
-(Class)momentDataClass;
-(Class)momentAssetDataClass;
-(id)insertNewMomentListForGranularityLevel:(short)arg1 ;
-(id)insertNewMoment;
-(id)insertNewPhotosHighlight;
-(void)resetOnFailure;
-(void)beginObservingNetworkReachabilityChangesWithBlock:(/*^block*/id)arg1 ;
-(void)stopObservingNetworkReachabilityChanges;
-(id)homeAddressDictionary;
-(BOOL)routineIsAvailable;
-(BOOL)cameraIsActive;
-(id)locationsOfInterest;
-(void)fetchLocationsOfInterestIfNeeded;
-(void)logRoutineInformation;
-(id)locationCoordinatesForAssetIDs:(id)arg1 ;
-(void)invalidateShiftedLocationForAllAssetsInMoments;
-(id)allAssetIDsNeedingLocationShiftWithError:(id*)arg1 ;
-(void)runPeriodicMaintenanceTasks:(unsigned long long)arg1 withTransaction:(id)arg2 ;
-(void)invalidateAllHighlightSubtitles;
-(BOOL)wantsMomentReplayLogging;
-(id)replayLogPath;
-(BOOL)shouldPerformLightweightValidation;
-(void)setShouldPerformLightweightValidation:(BOOL)arg1 ;
-(long long)previousValidatedModelVersion;
-(void)setPreviousValidatedModelVersion:(long long)arg1 ;
-(BOOL)previousValidationSucceeded;
-(void)setPreviousValidationSucceeded:(BOOL)arg1 ;
-(NSDictionary *)generationOptions;
-(void)_finalizeInit;
-(void)reloadGenerationOptions;
-(PLPhotoLibrary *)momentGenerationLibrary;
-(void)_networkReachabilityDidChange:(id)arg1 ;
-(id)_currentHomeAddressDictionary;
-(void)_updateKeepAlive;
-(void)_removeKeepAlive;
-(id)_highlightsRelationshipKeyPathsForPrefetchingForKind:(unsigned short)arg1 ;
-(id)_highlightsRelationshipKeyPathsForPrefetching;
-(BOOL)_batchDeleteForEntityName:(id)arg1 error:(id*)arg2 ;
-(void)verifyAndRepairOrphanedAssets:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(PLCameraAppWatcher *)cameraWatcher;
-(void)setMomentGenerationLibrary:(PLPhotoLibrary *)arg1 ;
@end

