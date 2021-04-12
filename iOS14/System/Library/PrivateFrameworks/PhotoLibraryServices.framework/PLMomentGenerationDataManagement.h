/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

@class NSDictionary;


@protocol PLMomentGenerationDataManagement <NSObject>
@property (assign,nonatomic) BOOL shouldPerformLightweightValidation; 
@property (assign,nonatomic) long long previousValidatedModelVersion; 
@property (assign,nonatomic) BOOL previousValidationSucceeded; 
@property (nonatomic,readonly) BOOL isLightweightMigrationManager; 
@property (nonatomic,readonly) NSDictionary * generationOptions; 
@required
-(BOOL)isNetworkReachable;
-(BOOL)save:(id*)arg1;
-(long long)previousValidatedModelVersion;
-(id)locationsOfInterest;
-(id)invalidAssetsIgnoringAssetIdentifiers:(id)arg1 error:(id*)arg2;
-(id)monthMomentListForMonth:(long long)arg1 year:(long long)arg2;
-(BOOL)wantsMomentReplayLogging;
-(id)insertNewPhotosHighlight;
-(void)invalidateLocationDataForAssetsWithOIDs:(id)arg1;
-(void)invalidateShiftedLocationForAllAssetsInMoments;
-(id)allAssetsToBeIncludedInMomentsWithError:(id*)arg1;
-(void)setPreviousValidatedModelVersion:(long long)arg1;
-(id)updatedObjects;
-(void)pendingChangesUpdated:(unsigned long long)arg1;
-(BOOL)deleteAllHighlightsWithError:(id*)arg1;
-(id)allAssetIDsToBeIncludedInMomentsWithError:(id*)arg1;
-(id)momentsRequiringLocationProcessingWhenFrequentLocationsChangedWithError:(id*)arg1;
-(Class)momentListDataClassForGranularityLevel:(short)arg1;
-(id)allPhotosHighlightsOfKind:(unsigned short)arg1 error:(id*)arg2;
-(id)momentsWithLocationTypeUnprocessedWithError:(id*)arg1;
-(BOOL)previousValidationSucceeded;
-(id)highlightsIntersectingDateInterval:(id)arg1 ofKind:(unsigned short)arg2;
-(Class)momentAssetDataClass;
-(id)allInvalidPhotosHighlightsOfAllKindsWithError:(id*)arg1;
-(id)allMomentLists;
-(id)insertNewMoment;
-(id)homeAddressDictionary;
-(void)enumerateAssetsWithIDs:(id)arg1 usingBlock:(/*^block*/id)arg2;
-(id)insertedObjects;
-(id)insertNewMomentListForGranularityLevel:(short)arg1;
-(id)momentsWithUniqueIDs:(id)arg1 error:(id*)arg2;
-(id)allPhotosHighlightsOfKind:(unsigned short)arg1 withPredicate:(id)arg2 error:(id*)arg3;
-(id)locationCoordinatesForAssetIDs:(id)arg1;
-(void)invalidateLocationDataForAssetsInMoment:(id)arg1;
-(id)allPhotosHighlightsOfAllKindsWithError:(id*)arg1;
-(void)performDataTransaction:(/*^block*/id)arg1 synchronously:(BOOL)arg2 completionHandler:(/*^block*/id)arg3;
-(void)runPeriodicMaintenanceTasks:(unsigned long long)arg1 withTransaction:(id)arg2;
-(id)momentListWithUniqueID:(id)arg1 forLevel:(short)arg2 error:(id*)arg3;
-(void)performBlock:(/*^block*/id)arg1 synchronously:(BOOL)arg2 priority:(long long)arg3 completionHandler:(/*^block*/id)arg4;
-(id)momentWithUniqueID:(id)arg1 error:(id*)arg2;
-(void)resetOnFailure;
-(id)allInvalidMomentsWithError:(id*)arg1;
-(void)fetchLocationsOfInterestIfNeeded;
-(id)replayLogPath;
-(BOOL)deleteAllMomentListsWithError:(id*)arg1;
-(void)beginObservingNetworkReachabilityChangesWithBlock:(/*^block*/id)arg1;
-(id)momentsBetweenDate:(id)arg1 andDate:(id)arg2 sorted:(BOOL)arg3;
-(BOOL)deleteAllMomentsWithError:(id*)arg1;
-(BOOL)isLightweightMigrationManager;
-(id)allPhotosHighlightsWithPredicate:(id)arg1 error:(id*)arg2;
-(id)allMomentsWithInvalidReverseLocationData;
-(BOOL)hasChanges;
-(id)allEmptyPhotosHighlightsOfKind:(unsigned short)arg1 error:(id*)arg2;
-(id)yearMomentListForYear:(long long)arg1;
-(unsigned long long)hardGenerationBatchSizeLimit;
-(id)assetsWithUniqueIDs:(id)arg1 error:(id*)arg2;
-(id)allMomentListsForLevel:(short)arg1;
-(void)stopObservingNetworkReachabilityChanges;
-(id)allInvalidAssetsWithError:(id*)arg1;
-(id)allMomentIDsWithError:(id*)arg1;
-(id)assetWithUniqueID:(id)arg1 error:(id*)arg2;
-(BOOL)routineIsAvailable;
-(void)refreshObject:(id)arg1 mergeChanges:(BOOL)arg2;
-(id)lastLocationOfInterestVisit;
-(id)momentAnalysisTransactionWithName:(const char*)arg1;
-(id)momentsIntersectingDateInterval:(id)arg1;
-(void)invalidateAllHighlightSubtitles;
-(void)performDataTransaction:(/*^block*/id)arg1 synchronously:(BOOL)arg2 priority:(long long)arg3 completionHandler:(/*^block*/id)arg4;
-(id)momentsSinceDate:(id)arg1;
-(id)deletedObjects;
-(id)momentsForAssetsWithUniqueIDs:(id)arg1 error:(id*)arg2;
-(BOOL)cameraIsActive;
-(void)refreshAllObjects;
-(BOOL)shouldPerformLightweightValidation;
-(NSDictionary *)generationOptions;
-(id)allAssetIDsNeedingLocationShiftWithError:(id*)arg1;
-(Class)momentDataClass;
-(void)setShouldPerformLightweightValidation:(BOOL)arg1;
-(void)logRoutineInformation;
-(id)orphanedAssetIDsWithError:(id*)arg1;
-(void)setPreviousValidationSucceeded:(BOOL)arg1;
-(void)performBlock:(/*^block*/id)arg1 synchronously:(BOOL)arg2 completionHandler:(/*^block*/id)arg3;
-(id)allInvalidMomentIDsWithError:(id*)arg1;
-(id)allMomentsWithError:(id*)arg1;

@end

