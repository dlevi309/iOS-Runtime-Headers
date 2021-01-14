/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@class PHPhotoLibrary, PVClusterer, PVContext, VCPFaceVisionIntegrating, VCPPhotosPersistenceDelegate;

@interface VCPFaceClusterer : NSObject {

	PHPhotoLibrary* _photoLibrary;
	PVClusterer* _clusterer;
	PVContext* _context;
	VCPFaceVisionIntegrating* _visionIntegrating;
	VCPPhotosPersistenceDelegate* _persistenceDelegate;
	/*^block*/id _updateBlock;

}

@property (nonatomic,copy) id updateBlock;              //@synthesize updateBlock=_updateBlock - In the implementation block
-(BOOL)resetFaceClusteringState:(id*)arg1 ;
-(void)stop;
-(id)initWithPhotoLibrary:(id)arg1 andContext:(id)arg2 ;
-(void)startAndSyncClusterCacheWithLibrary:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(void)performFaceClusteringAndWait;
-(long long)clustererState;
-(int)clusterFacesWithExtendTimeoutBlock:(/*^block*/id)arg1 andCancelBlock:(/*^block*/id)arg2 ;
-(id)clusteringStatus;
-(void)performFaceClusteringWithCompletion:(/*^block*/id)arg1 ;
-(void)cancelFaceClustering;
-(void)performFaceClusteringIfNecessaryAndWait;
-(void)scheduleClusteringOfFacesWithLocalIdentifiers:(id)arg1 ;
-(void)scheduleUnclusteringOfFacesWithClusterSequenceNumbers:(id)arg1 ;
-(unsigned long long)numberOfFacesPendingClustering;
-(BOOL)reclusterFacesWithThreshold:(id)arg1 shouldRecluster:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)getFaceClusters:(id*)arg1 clusteringThreshold:(double*)arg2 utilizingGPU:(BOOL*)arg3 error:(id*)arg4 ;
-(void)resetClusterer;
-(BOOL)clustererIsReadyToReturnSuggestions;
-(int)clusterFacesIfNecessaryWithExtendTimeoutBlock:(/*^block*/id)arg1 andCancelBlock:(/*^block*/id)arg2 ;
-(BOOL)_resetFaceClusteringStateWithContext:(id)arg1 error:(id*)arg2 ;
-(void)setUpdateBlock:(id)arg1 ;
-(id)updateBlock;
-(id)differencesBetweenClustersInClusterCacheAndLibrary:(id*)arg1 ;
-(BOOL)reclusterFacesWithThreshold:(id)arg1 shouldRecluster:(BOOL)arg2 withContext:(id)arg3 extendTimeout:(/*^block*/id)arg4 cancel:(/*^block*/id)arg5 error:(id*)arg6 ;
-(id)clusterer;
@end

