/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/

#import <PhotoAnalysis/PhotoAnalysis-Structs.h>
#import <PhotoAnalysis/PHAVisionServiceWorker.h>
#import <libobjc.A.dylib/PVNotificationListener.h>
#import <libobjc.A.dylib/PVVisionIntegrating.h>
#import <libobjc.A.dylib/PVPersonPromoterDelegate.h>
#import <libobjc.A.dylib/PLPhotoAnalysisVisionServiceFaceProcessingProtocol.h>

@class PhotoVision, PHAVisionServicePersistenceDelegate, NSMutableDictionary, NSURL, NSString;

@interface PHAVisionServiceFaceProcessingWorker : PHAVisionServiceWorker <PVNotificationListener, PVVisionIntegrating, PVPersonPromoterDelegate, PLPhotoAnalysisVisionServiceFaceProcessingProtocol> {

	PhotoVision* _photoVision;
	PHAVisionServicePersistenceDelegate* _persistenceDelegate;
	SCD_Struct_PH5 _analysisStatistics;
	NSMutableDictionary* _state;
	unsigned long long _incrementalPersonProcessingStage;
	BOOL _disabledByUserDefaults;
	unsigned long long _faceAnalysisOptions;
	unsigned long long _faceIDModelRebuildPeriod;
	NSURL* _suggestionLoggingDirectory;
	BOOL _suggestionLoggingSessionOpen;
	BOOL _suggestionsLoggingEnabled;
	BOOL _clustererNeedsSyncing;
	BOOL _personBuilderMergeCandidatesEnabled;
	unsigned long long _lastMinimumFaceGroupSizeForCreatingMergeCandidates;

}

@property (assign,nonatomic) unsigned long long incrementalPersonProcessingStage;                                //@synthesize incrementalPersonProcessingStage=_incrementalPersonProcessingStage - In the implementation block
@property (assign,nonatomic) BOOL personBuilderMergeCandidatesEnabled;                                           //@synthesize personBuilderMergeCandidatesEnabled=_personBuilderMergeCandidatesEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long lastMinimumFaceGroupSizeForCreatingMergeCandidates;              //@synthesize lastMinimumFaceGroupSizeForCreatingMergeCandidates=_lastMinimumFaceGroupSizeForCreatingMergeCandidates - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)runsExclusively;
+(long long)applicationDataFolderIdentifier;
+(short)workerType;
-(void)cooldown;
-(BOOL)_needToRunClusteringJobForScenario:(unsigned long long)arg1 ;
-(id)densityClusteringForObjects:(id)arg1 maximumDistance:(double)arg2 minimumNumberOfObjects:(unsigned long long)arg3 withDistanceBlock:(/*^block*/id)arg4 ;
-(int)_performPersistedFaceAnalysisOfPVImage:(id)arg1 withAttributes:(id)arg2 forAsset:(id)arg3 error:(id*)arg4 ;
-(id)_loadPersonsModelWithPhotoLibrary:(id)arg1 ;
-(void)_logFaceToSuggestionsLog:(id)arg1 ;
-(BOOL)performPersonBuildingWithCanceler:(id)arg1 extendTimeoutBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(BOOL)_generateAndPersistFaceCropsOfUserConfirmedFacesInImage:(id)arg1 forAsset:(id)arg2 error:(id*)arg3 ;
-(BOOL)_needToRunPersonPromoterForScenario:(unsigned long long)arg1 ;
-(void)shutdown;
-(BOOL)_needToRunFaceIDModelCreationForScenario:(unsigned long long)arg1 ;
-(id)workerStateFileURL;
-(void)validateClusterCacheWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)warmupWithProgressBlock:(/*^block*/id)arg1 ;
-(BOOL)hasAdditionalJobsForScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2 ;
-(unsigned long long)incrementalPersonProcessingStage;
-(void)willCompleteJob:(id)arg1 ;
-(void)requestSuggestedMePersonIdentifierWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)_needToRunFaceCropProcessingJobForScenario:(unsigned long long)arg1 ;
-(void)processPersonsWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)resetFaceClusteringStateWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)_closeSuggestionsLoggingSession;
-(BOOL)processDirtyFaceCrop:(id)arg1 error:(id*)arg2 ;
-(void)suggestPersonsForPersonWithLocalIdentifier:(id)arg1 toBeConfirmedPersonSuggestions:(id)arg2 toBeRejectedPersonSuggestions:(id)arg3 context:(id)arg4 reply:(/*^block*/id)arg5 ;
-(id)_analyzePVImage:(id)arg1 forAsset:(id)arg2 withAttributes:(id)arg3 error:(id*)arg4 ;
-(id)_facesRequiringFaceCropGenerationForAsset:(id)arg1 error:(id*)arg2 ;
-(id)generateFaceCropForFaceCropSourceDescriptors:(id)arg1 ;
-(void)pingFaceWorkerWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)sortedPoolOfContactIdentifiersExcludingContactIdentifiers:(id)arg1 ;
-(BOOL)_setAllFaceGroupsNeedPersonBuilding;
-(void)faceProcessingStatusForUserInterfaceWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)_persistentStorageDirectoryURLWithPhotoLibrary:(id)arg1 ;
-(void)setIncrementalPersonProcessingStage:(unsigned long long)arg1 ;
-(void)_didPerformFaceClustering;
-(BOOL)_promotePersonsWithError:(id*)arg1 ;
-(void)performFaceProcessingOnAssetWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)interruptPhotoVision;
-(id)personModelPath;
-(BOOL)contactClassificationDidExceedTimeInterval;
-(BOOL)shouldProcessContact:(id)arg1 ;
-(BOOL)personBuilderMergeCandidatesEnabled;
-(void)_performFaceCropProcessingWhileKeepingAliveJob:(id)arg1 ;
-(void)_performIntermediateVisionCleanup;
-(id)_pvImageForAssetResource:(id)arg1 asset:(id)arg2 error:(id*)arg3 ;
-(void)setLastMinimumFaceGroupSizeForCreatingMergeCandidate:(unsigned long long)arg1 ;
-(void)setLastMinimumFaceGroupSizeForCreatingMergeCandidates:(unsigned long long)arg1 ;
-(void)markLastBackgroundContactClassificationJobDate;
-(void)_logAnalysisStatistics;
-(BOOL)stopAnalysisJob:(id)arg1 error:(id*)arg2 ;
-(BOOL)_generateAndAssociateFaceprintedFaceForFaceCrop:(id)arg1 createFaceTorsoprint:(BOOL)arg2 error:(id*)arg3 ;
-(id)keyFaceForPerson:(id)arg1 qualityMeasureByFace:(id)arg2 updateBlock:(/*^block*/id)arg3 ;
-(void)setPersonBuilderMergeCandidatesEnabled:(BOOL)arg1 ;
-(void)_willPerformFaceClustering;
-(void)_performFullVisionCleanup;
-(void)generateFaceIDModelShouldForce:(BOOL)arg1 progress:(id)arg2 extendTimeoutBlock:(/*^block*/id)arg3 ;
-(void)_finalizeSuggestionsLog;
-(unsigned long long)lastMinimumFaceGroupSizeForCreatingMergeCandidates;
-(id)_faceToFaceCountMapForFaces:(id)arg1 ;
-(BOOL)_needsToRunContactClassificationForScenario:(unsigned long long)arg1 ;
-(void)_setStateValue:(id)arg1 forKey:(id)arg2 ;
-(void)resetFaceClassificationModelWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)_openSuggestionsLoggingSession;
-(BOOL)_updateFaceCropFace:(id)arg1 withFaceprintForFaceCrop:(id)arg2 createFaceTorsoprint:(BOOL)arg3 error:(id*)arg4 ;
-(void)_appendToSuggestionsLog:(id)arg1 ;
-(id)statusAsDictionary;
-(BOOL)_clusterFacesWithPhotoVision:(id)arg1 incrementally:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)_deleteAllVerifiedPersonsWithError:(id*)arg1 ;
-(void)markLastBackgroundFaceIDModelRebuildJobDate;
-(void)configureRequest:(id)arg1 algorithmUmbrellaVersion:(unsigned)arg2 ;
-(BOOL)performFaceClusteringWithCompletion:(/*^block*/id)arg1 error:(id*)arg2 ;
-(id)fetchPersonsForFaceIDModel;
-(id)_suggestionsForPersonLocalIdentifier:(id)arg1 clusterSequenceNumbers:(id)arg2 excludePersonLocalIdentifiers:(id)arg3 operation:(id)arg4 context:(id)arg5 error:(id*)arg6 ;
-(BOOL)_resetFaceClusteringStateWithContext:(id)arg1 error:(id*)arg2 ;
-(void)_copyImageAtURLToSuggestionsLoggingSession:(id)arg1 ;
-(id)bestRepresentativeFaceForPerson:(id)arg1 qualityMeasureByFace:(id)arg2 canceler:(id)arg3 ;
-(BOOL)shouldReclassifyContacts;
-(void)faceCandidatesforKeyFaceForPersonsWithLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)_suggestionsForPersonWithLocalIdentifier:(id)arg1 toBeConfirmedPersonSuggestions:(id)arg2 toBeRejectedPersonSuggestions:(id)arg3 operation:(id)arg4 error:(id*)arg5 ;
-(BOOL)_buildPersonsIncrementally:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)_generateAndPersistFaceCropsOfFaces:(id)arg1 inImage:(id)arg2 forAsset:(id)arg3 error:(id*)arg4 ;
-(BOOL)deletePersonModelWithError:(id*)arg1 ;
-(void)faceClusteringInformation:(unsigned long long)arg1 withContext:(id)arg2 reply:(/*^block*/id)arg3 ;
-(BOOL)processAsset:(id)arg1 error:(id*)arg2 ;
-(void)reclusterFacesWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)rebuildPersonsWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)requestOnDemandFaceCropsForFaceLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(BOOL)persistPersonModel:(id)arg1 ;
-(void)_readState;
-(BOOL)_validateAsset:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)_analyzeAsset:(id)arg1 withAttributes:(id)arg2 usingPVImageProvidedByBlock:(/*^block*/id)arg3 error:(id*)arg4 ;
-(id)performSocialGroupsIdentifiersWithPersonClusterManager:(id)arg1 forPersons:(id)arg2 overTheYearsComputation:(BOOL)arg3 updateBlock:(/*^block*/id)arg4 ;
-(BOOL)isEnabled;
-(void)_resetAnalysisStatistics;
-(int)_faceWorkerTasksToPerformOnAsset:(id)arg1 accordingToAnalysisAttributes:(id)arg2 ;
-(id)_pvImageForAsset:(id)arg1 targetSize:(CGSize)arg2 error:(id*)arg3 ;
-(unsigned long long)analyzeImageData:(id)arg1 forAsset:(id)arg2 withAttributes:(id)arg3 error:(id*)arg4 ;
-(void)terminatePhotoVision;
-(id)suggestedMeIdentifierWithPersonClusterManager:(id)arg1 forPersons:(id)arg2 updateBlock:(/*^block*/id)arg3 ;
-(void)handlePVNotification:(id)arg1 ;
-(unsigned long long)analyzeAssetResourceFileAtURL:(id)arg1 forAsset:(id)arg2 withAttributes:(id)arg3 error:(id*)arg4 ;
-(id)nextAdditionalJobWithScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2 ;
-(BOOL)classifyContactsWithProgress:(id)arg1 extendTimeoutBlock:(/*^block*/id)arg2 ;
-(void)processDirtyFaceCrops;
-(void)suggestVerifiedPersonLocalIdentifierForPersonWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(BOOL)getLocallyAvailableAssetResource:(id*)arg1 forAnalyzingAsset:(id)arg2 error:(id*)arg3 ;
-(id)_photoVisionAllowingCreation:(BOOL)arg1 syncClusterCache:(BOOL)arg2 error:(id*)arg3 ;
-(void)updateKeyFacesOfPersonsWithLocalIdentifiers:(id)arg1 forceUpdate:(BOOL)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(BOOL)_needToRunPersonBuildingJobForScenario:(unsigned long long)arg1 ;
-(void)personPromoterStatusWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)_pvImageForAssetResourceFileURL:(id)arg1 forAsset:(id)arg2 error:(id*)arg3 ;
-(BOOL)shouldRebuildFaceIDModel;
-(id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2 ;
-(int)_performPersistedFaceAnalysisOfResource:(id)arg1 withAttributes:(id)arg2 forAsset:(id)arg3 error:(id*)arg4 ;
-(BOOL)faceIDModelLastGenerationDidExceedTimeInterval;
-(BOOL)hasStandaloneJobsForScenario:(unsigned long long)arg1 ;
@end

