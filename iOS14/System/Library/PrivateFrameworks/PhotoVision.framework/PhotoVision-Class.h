/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
*/


@protocol PVVisionIntegrating, PVNotificationListener, PVPersistenceDelegate;
@class PVContext, PVVisionAnalyzer, PVFaceMerger, PVEventManager, PVClusterer, NSURL;

@interface PhotoVision : NSObject {

	id<PVVisionIntegrating> _visionIntegration;
	id<PVNotificationListener> _notificationListener;
	id<PVPersistenceDelegate> _persistenceDelegate;
	PVContext* _context;
	PVVisionAnalyzer* _analyzer;
	PVFaceMerger* _faceMerger;
	PVEventManager* _eventManager;
	PVClusterer* _clusterer;
	NSURL* _cacheDirUrl;
	unsigned _faceAlgorithmUmbrellaVersion;
	unsigned _sceneAlgorithmUmbrellaVersion;

}

@property (nonatomic,readonly) unsigned faceAlgorithmUmbrellaVersion;               //@synthesize faceAlgorithmUmbrellaVersion=_faceAlgorithmUmbrellaVersion - In the implementation block
@property (nonatomic,readonly) unsigned sceneAlgorithmUmbrellaVersion;              //@synthesize sceneAlgorithmUmbrellaVersion=_sceneAlgorithmUmbrellaVersion - In the implementation block
+(unsigned long long)defaultFaceAnalysisOptionsForFaceAlgorithmUmbrellaVersion:(unsigned)arg1 ;
+(unsigned)minimumSceneAlgorithmUmbrellaVersion;
+(unsigned)maximumSceneAlgorithmUmbrellaVersion;
+(int)_intValueForKey:(id)arg1 defaultValue:(int)arg2 ;
+(void)setAlgorithmRevisionForRequest:(id)arg1 algorithmUmbrellaVersion:(unsigned)arg2 algorithmCollectionType:(unsigned long long)arg3 ;
+(unsigned)maximumFaceAlgorithmUmbrellaVersion;
+(id)supportedSceneAlgorithmUmbrellaVersions;
+(BOOL)isAppleInternal;
+(unsigned long long)faceprintAnalysisOptionsForFaceAlgorithmUmbrellaVersion:(unsigned)arg1 ;
+(id)supportedFaceAlgorithmUmbrellaVersions;
+(unsigned)minimumFaceAlgorithmUmbrellaVersion;
-(unsigned)faceAlgorithmUmbrellaVersion;
-(id)context;
-(void)stop;
-(void)startAndSyncClusterCacheWithLibrary:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(void)performFaceClusteringAndWait;
-(long long)clustererState;
-(id)clusteringStatus;
-(void)performFaceClusteringWithCompletion:(/*^block*/id)arg1 ;
-(void)cancelFaceClustering;
-(void)performFaceClusteringIfNecessaryAndWait;
-(void)scheduleClusteringOfFacesWithLocalIdentifiers:(id)arg1 ;
-(void)scheduleUnclusteringOfFacesWithClusterSequenceNumbers:(id)arg1 ;
-(unsigned long long)numberOfFacesPendingClustering;
-(BOOL)getFaceClusters:(id*)arg1 clusteringThreshold:(double*)arg2 utilizingGPU:(BOOL*)arg3 error:(id*)arg4 ;
-(void)resetClusterer;
-(BOOL)clustererIsReadyToReturnSuggestions;
-(id)analyzeImage:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(unsigned)sceneAlgorithmUmbrellaVersion;
-(id)requestSuggestionsForFaceClusterSequenceNumbers:(id)arg1 withClusteringFlags:(id)arg2 updateHandler:(/*^block*/id)arg3 error:(id*)arg4 ;
-(id)differencesBetweenClustersInClusterCacheAndLibrary:(id*)arg1 ;
-(id)mergeExistingFaces:(id)arg1 withDetectedFaces:(id)arg2 forImage:(id)arg3 ;
-(BOOL)resetFaceClusteringStateWithContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)reclusterFacesWithThreshold:(id)arg1 shouldRecluster:(BOOL)arg2 withContext:(id)arg3 error:(id*)arg4 ;
-(id)suggestedPersonLocalIdentifierForPersonLocalIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)buildPersonsWithCanceler:(id)arg1 keyFaceUpdateBlock:(/*^block*/id)arg2 extendTimeoutBlock:(/*^block*/id)arg3 error:(id*)arg4 ;
-(void)cancelAllSuggestionRequests;
-(id)initWithPersistenceDelegate:(id)arg1 visionIntegration:(id)arg2 workingDirectoryURL:(id)arg3 faceAlgorithmUmbrellaVersion:(unsigned)arg4 sceneAlgorithmUmbrellaVersion:(unsigned)arg5 notificationListener:(id)arg6 ;
-(void)cancelSuggestionRequest:(id)arg1 ;
-(id)suggestionsForFaceClusterSequenceNumbers:(id)arg1 error:(id*)arg2 ;
-(id)suggestedPersonLocalIdentifierForFaceLocalIdentifier:(id)arg1 error:(id*)arg2 ;
@end

