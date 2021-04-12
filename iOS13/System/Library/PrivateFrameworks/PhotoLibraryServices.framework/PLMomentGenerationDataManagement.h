/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

@class NSDictionary;


@protocol PLMomentGenerationDataManagement <NSObject>
@property (assign,nonatomic) BOOL shouldPerformLightweightValidation; 
@property (assign,nonatomic) long long previousValidatedModelVersion; 
@property (assign,nonatomic) BOOL previousValidationSucceeded; 
@property (nonatomic,readonly) NSDictionary * generationOptions; 
@required
-(BOOL)hasChanges;
-(id)insertedObjects;
-(BOOL)save:(id*)arg1;
-(void)refreshAllObjects;
-(BOOL)isNetworkReachable;
-(id)updatedObjects;
-(id)deletedObjects;
-(void)refreshObject:(id)arg1 mergeChanges:(BOOL)arg2;
-(id)orphanedAssetIDsWithError:(id*)arg1;
-(void)performBlock:(/*^block*/id)arg1 synchronously:(BOOL)arg2 completionHandler:(/*^block*/id)arg3;
-(void)performDataTransaction:(/*^block*/id)arg1 synchronously:(BOOL)arg2 completionHandler:(/*^block*/id)arg3;
-(void)performBlock:(/*^block*/id)arg1 synchronously:(BOOL)arg2 priority:(long long)arg3 completionHandler:(/*^block*/id)arg4;
-(void)performDataTransaction:(/*^block*/id)arg1 synchronously:(BOOL)arg2 priority:(long long)arg3 completionHandler:(/*^block*/id)arg4;
-(unsigned long long)hardGenerationBatchSizeLimit;
-(void)invalidateLocationDataForAssetsInMoment:(id)arg1;
-(void)invalidateLocationDataForAssetsWithOIDs:(id)arg1;
-(void)pendingChangesUpdated:(unsigned long long)arg1;
-(id)momentAnalysisTransactionWithName:(const char*)arg1;
-(id)assetWithUniqueID:(id)arg1 error:(id*)arg2;
-(id)assetsWithUniqueIDs:(id)arg1 error:(id*)arg2;
-(id)momentWithUniqueID:(id)arg1 error:(id*)arg2;
-(void)enumerateAssetsWithIDs:(id)arg1 usingBlock:(/*^block*/id)arg2;
-(id)momentListWithUniqueID:(id)arg1 forLevel:(short)arg2 error:(id*)arg3;
-(id)momentsWithUniqueIDs:(id)arg1 error:(id*)arg2;
-(id)momentsForAssetsWithUniqueIDs:(id)arg1 error:(id*)arg2;
-(id)momentsSinceDate:(id)arg1;
-(id)momentsBetweenDate:(id)arg1 andDate:(id)arg2 sorted:(BOOL)arg3;
-(id)yearMomentListForYear:(long long)arg1;
-(id)monthMomentListForMonth:(long long)arg1 year:(long long)arg2;
-(id)allMomentsWithError:(id*)arg1;
-(id)allInvalidMomentsWithError:(id*)arg1;
-(id)momentsWithLocationTypeUnprocessedWithError:(id*)arg1;
-(id)momentsRequiringLocationProcessingWhenFrequentLocationsChangedWithError:(id*)arg1;
-(id)allMomentIDsWithError:(id*)arg1;
-(id)allInvalidMomentIDsWithError:(id*)arg1;
-(id)allMomentsWithInvalidReverseLocationData;
-(id)allMomentListsForLevel:(short)arg1;
-(id)allMomentLists;
-(id)momentsIntersectingDateInterval:(id)arg1;
-(id)allAssetsToBeIncludedInMomentsWithError:(id*)arg1;
-(id)invalidAssetsIgnoringAssetIdentifiers:(id)arg1 error:(id*)arg2;
-(id)allInvalidAssetsWithError:(id*)arg1;
-(id)allAssetIDsToBeIncludedInMomentsWithError:(id*)arg1;
-(id)highlightsIntersectingDateInterval:(id)arg1 ofKind:(unsigned short)arg2;
-(id)allPhotosHighlightsOfAllKindsWithError:(id*)arg1;
-(id)allPhotosHighlightsOfKind:(unsigned short)arg1 error:(id*)arg2;
-(id)allPhotosHighlightsOfKind:(unsigned short)arg1 withPredicate:(id)arg2 error:(id*)arg3;
-(id)allPhotosHighlightsWithPredicate:(id)arg1 error:(id*)arg2;
-(id)allInvalidPhotosHighlightsOfAllKindsWithError:(id*)arg1;
-(id)allEmptyPhotosHighlightsOfKind:(unsigned short)arg1 error:(id*)arg2;
-(BOOL)deleteAllMomentsWithError:(id*)arg1;
-(BOOL)deleteAllHighlightsWithError:(id*)arg1;
-(BOOL)deleteAllMomentListsWithError:(id*)arg1;
-(Class)momentListDataClassForGranularityLevel:(short)arg1;
-(Class)momentDataClass;
-(Class)momentAssetDataClass;
-(id)insertNewMomentListForGranularityLevel:(short)arg1;
-(id)insertNewMoment;
-(id)insertNewPhotosHighlight;
-(void)resetOnFailure;
-(void)beginObservingNetworkReachabilityChangesWithBlock:(/*^block*/id)arg1;
-(void)stopObservingNetworkReachabilityChanges;
-(id)homeAddressDictionary;
-(BOOL)routineIsAvailable;
-(BOOL)cameraIsActive;
-(id)locationsOfInterest;
-(void)fetchLocationsOfInterestIfNeeded;
-(void)logRoutineInformation;
-(id)locationCoordinatesForAssetIDs:(id)arg1;
-(void)invalidateShiftedLocationForAllAssetsInMoments;
-(id)allAssetIDsNeedingLocationShiftWithError:(id*)arg1;
-(void)runPeriodicMaintenanceTasks:(unsigned long long)arg1 withTransaction:(id)arg2;
-(void)invalidateAllHighlightSubtitles;
-(BOOL)wantsMomentReplayLogging;
-(id)replayLogPath;
-(BOOL)shouldPerformLightweightValidation;
-(void)setShouldPerformLightweightValidation:(BOOL)arg1;
-(long long)previousValidatedModelVersion;
-(void)setPreviousValidatedModelVersion:(long long)arg1;
-(BOOL)previousValidationSucceeded;
-(void)setPreviousValidationSucceeded:(BOOL)arg1;
-(NSDictionary *)generationOptions;

@end

