/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARImageBasedTechnique.h>

@protocol OS_dispatch_semaphore, MTLTexture, MTLCommandQueue, MTLDevice, OS_dispatch_queue, MTLFunction;
@class NSHashTable, NSObject, ARWorldTrackingErrorData, ARWorldTrackingPoseData, NSString, NSMutableSet, NSMutableArray, NSMutableDictionary, ARWorldTrackingOptions, ARTrackedRaycastPostProcessor;

@interface ARWorldTrackingTechnique : ARImageBasedTechnique {

	NSHashTable* _observers;
	NSObject*<OS_dispatch_semaphore> _observersSemaphore;
	map<CV3DVIOError, double, std::__1::less<CV3DVIOError>, std::__1::allocator<std::__1::pair<const CV3DVIOError, double> > >* _lastErrorLogTimestamp;
	BOOL _useFixedIntrinsics;
	long long _vioHandleState;
	NSObject*<OS_dispatch_semaphore> _vioHandleStateSemaphore;
	ARWorldTrackingErrorData* _errorData;
	ARWorldTrackingPoseData* _cachedPoseData;
	double _lastPoseMetaDataTimestamp;
	int _reinitializationAttempts;
	unsigned long long _numberOfCameraSwitches;
	unsigned long long _currentVIOMapSize;
	long long _reinitializationAttemptsAtInitialization;
	double _lastRelocalizationTimestamp;
	double _lastQualityKeyframeTimestamp;
	int _previousKeyframeCount;
	double _lastPoseTrackingMapTimestamp;
	double _lastMajorRelocalizationTimestamp;
	double _originTimestamp;
	NSString* _lastCameraType;
	unsigned _primaryCameraID;
	BOOL _relocalizingAfterSensorDataDrop;
	BOOL _didClearMap;
	NSObject*<OS_dispatch_semaphore> _resultSemaphore;
	double _minVergenceAngleCosine;
	double _resultLatency;
	BOOL _allowPoseGraphUpdates;
	CV3DSurfaceDetectionParameters _surfaceDetectionParameters;
	CV3DSurfaceDetectionRuntimeConfiguration _surfaceDetectionConfiguration;
	CV3DMLModel* _mlModel;
	NSMutableSet* _anchorsReceived;
	NSMutableSet* _participantAnchors;
	BOOL _participantAnchorsEnabled;
	CVPixelBufferPoolRef _depth16grayBufferPool;
	CVPixelBufferPoolRef _confidence8BufferPool;
	NSMutableArray* _latestSpatialMappingData;
	os_unfair_lock_s _latestSpatialMappingDataLock;
	NSMutableDictionary* _meshChunksWaitingForSemantics;
	NSMutableDictionary* _meshChunkIdentifiersCurrentlyBeingProcessed;
	os_unfair_lock_s _volumeSamplingLock;
	unordered_map<unsigned long long, std::__1::vector<float, std::__1::allocator<float> >, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::vector<float, std::__1::allocator<float> > > > >* _verticesForFloorPlan;
	unordered_map<unsigned long long, std::__1::vector<float, std::__1::allocator<float> >, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::vector<float, std::__1::allocator<float> > > > >* _normalsForFloorPlan;
	unordered_map<unsigned long long, std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > > > >* _semanticsForFloorPlan;
	os_unfair_lock_s _floorPlanStorageLock;
	id<MTLTexture> display_texture_;
	id<MTLTexture> _novelViewSynthesisDepthTexture;
	id<MTLCommandQueue> _spatialMappingCommandQueue;
	id<MTLDevice> _sharedMetalDevice;
	CV3DSMRendererRef _spatialMappingDepthRenderer;
	CVPixelBufferPoolRef _depthRenderPool;
	NSObject*<OS_dispatch_queue> _spatialMappingQueue;
	CVPixelBufferPoolRef _poolForSemanticsAnnotatedDepth;
	CVPixelBufferPoolRef _poolForConfidenceAnnotatedDepth;
	id<MTLFunction> _annotateDepthDataKernelFunction;
	BOOL _spatialMappingSetup;
	BOOL _spatialMappingActivated;
	NSMutableDictionary* _spatialMappingPointClouds;
	os_unfair_lock_s _spatialMappingPointCloudsLock;
	CVPixelBufferPoolRef _novelViewSynthesisDepthBufferPool;
	NSMutableDictionary* _spatialMappingResultDataWaitingForSemantics;
	NSObject*<OS_dispatch_queue> _spatialMappingObjectRefinementQueue;
	NSObject*<OS_dispatch_queue> _resultDataQueue;
	BOOL _hasQualityKeyframe;
	BOOL _meshReconstructionBusy;
	unsigned long long _techniqueIndex;
	ARWorldTrackingOptions* _mutableOptions;
	CV3DVIOContextRef _vioHandle;
	unsigned long long _vioSessionIdentifier;
	ARTrackedRaycastPostProcessor* _trackedRaycastPostProcessor;
	SCD_Struct_AR1 _referenceOriginTransform;
	SCD_Struct_AR1 _extrinsicsToWideSensor;

}

@property (assign) unsigned long long techniqueIndex;                                        //@synthesize techniqueIndex=_techniqueIndex - In the implementation block
@property (retain) ARWorldTrackingOptions * mutableOptions;                                  //@synthesize mutableOptions=_mutableOptions - In the implementation block
@property (assign) SCD_Struct_AR1 referenceOriginTransform;                                  //@synthesize referenceOriginTransform=_referenceOriginTransform - In the implementation block
@property (assign,nonatomic) CV3DVIOContextRef vioHandle;                                    //@synthesize vioHandle=_vioHandle - In the implementation block
@property (readonly) unsigned long long vioSessionIdentifier;                                //@synthesize vioSessionIdentifier=_vioSessionIdentifier - In the implementation block
@property (assign) BOOL hasQualityKeyframe;                                                  //@synthesize hasQualityKeyframe=_hasQualityKeyframe - In the implementation block
@property (retain) ARTrackedRaycastPostProcessor * trackedRaycastPostProcessor;              //@synthesize trackedRaycastPostProcessor=_trackedRaycastPostProcessor - In the implementation block
@property (assign) BOOL meshReconstructionBusy;                                              //@synthesize meshReconstructionBusy=_meshReconstructionBusy - In the implementation block
@property (assign) SCD_Struct_AR1 extrinsicsToWideSensor;                                    //@synthesize extrinsicsToWideSensor=_extrinsicsToWideSensor - In the implementation block
@property (nonatomic,copy,readonly) ARWorldTrackingOptions * options; 
+(BOOL)isSupported;
+(BOOL)supportsVideoResolution:(CGSize)arg1 forDeviceType:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(ARWorldTrackingOptions *)options;
-(id)initWithOptions:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)processData:(id)arg1 ;
-(id)_fullDescription;
-(void)_didFailWithError:(id)arg1 ;
-(void)prepare:(BOOL)arg1 ;
-(void)pushCollaborationData:(id)arg1 ;
-(void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
-(void)invalidateAllRaycasts;
-(void)stopRaycast:(id)arg1 ;
-(unsigned long long)requiredSensorDataTypes;
-(double)requiredTimeInterval;
-(id)resultDataClasses;
-(BOOL)reconfigurableFrom:(id)arg1 ;
-(void)reconfigureFrom:(id)arg1 ;
-(SCD_Struct_AR1)extrinsicsToWideSensor;
-(void)setExtrinsicsToWideSensor:(SCD_Struct_AR1)arg1 ;
-(void)prepareResultData:(id)arg1 forContext:(id)arg2 ;
-(BOOL)deterministicMode;
-(long long)captureBehavior;
-(id)predictedResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
-(void)mergeResultData:(id)arg1 intoData:(id)arg2 context:(id)arg3 ;
-(ARWorldTrackingOptions *)mutableOptions;
-(void)setMutableOptions:(ARWorldTrackingOptions *)arg1 ;
-(long long)vioHandleState;
-(void)_setupSpatialMappingIfRequired;
-(void)activateSpatialMapping;
-(void)deactivateSpatialMapping;
-(void)updateSurfaceDetectionConfiguration;
-(id)getObservers;
-(long long)_initializeVIOHandle;
-(void)_initializeSurfaceDetection;
-(unsigned)_trackingCameraID:(const CV3DSLAMStateSnapshotContextRef)arg1 state:(const CV3DSLAMStateContextRef)arg2 ;
-(int)_poseFromSnapshot:(const CV3DSLAMStateSnapshotContextRef)arg1 state:(const CV3DSLAMStateContextRef)arg2 trackingCamera:(unsigned)arg3 rotationWorldToCamera:(double)arg4 translationWorldToCamera:(double)arg5 ;
-(void)annotateDepth:(id)arg1 withSemantics:(id)arg2 toTargetSemanticsImage:(CVBufferRef)arg3 targetConfidenceBuffer:(CVBufferRef)arg4 useGpu:(BOOL)arg5 ;
-(void)annotateDepth:(id)arg1 withSemantics:(id)arg2 toTargetSemanticsImage:(CVBufferRef)arg3 targetConfidenceBuffer:(CVBufferRef)arg4 ;
-(void)pushToSceneUnderstandingDepth:(id)arg1 segmentation:(id)arg2 pose:(id)arg3 ;
-(void)pushToSceneUnderstandingSegmentation:(id)arg1 pose:(id)arg2 ;
-(void)pushToHitTestingDepth:(id)arg1 pose:(id)arg2 ;
-(void)pushToSpatialMappingDepth:(id)arg1 semanticSegmentationData:(id)arg2 personSegmentationData:(id)arg3 pose:(id)arg4 ;
-(void)setMeshReconstructionBusy:(BOOL)arg1 ;
-(void)setHasQualityKeyframe:(BOOL)arg1 ;
-(void)resetSpatialMapping;
-(unsigned long long)vioSessionIdentifier;
-(id)raycastResultsFrom:(CV3DHitTestResults*)arg1 forRay:(id)arg2 ;
-(id)raycastResultFrom:(CV3DHitTestResult*)arg1 ;
-(SCD_Struct_AR1)referenceOriginTransform;
-(void)setTechniqueIndex:(unsigned long long)arg1 ;
-(BOOL)_shouldEnableQualityMode;
-(void)_configureMeshPlaneHarmonization;
-(unsigned long long)techniqueIndex;
-(void)_updatePoseDataTrackingState:(id)arg1 slamState:(const CV3DSLAMStateContextRef)arg2 ;
-(void)_reportCollaborationData:(id)arg1 type:(int)arg2 metadata:(const void*)arg3 ;
-(long long)_mappingStatusFromMapSize:(int)arg1 keyframeQuality:(int)arg2 isTrackingMap:(BOOL)arg3 timestamp:(double)arg4 ;
-(id)_featurePointDataFromSLAMState:(const CV3DSLAMStateContextRef)arg1 ;
-(id)meshChunksFromResults:(SCD_Struct_AR89*)arg1 timestamp:(double)arg2 ;
-(void)pushVolumeSampingRequestWithSpatialMappingResultData:(id)arg1 ;
-(id)newDisplayTextureForSurface:(CV3DSMRasterSurfaceRef)arg1 ;
-(void)renderSurface:(CV3DSMRasterSurfaceRef)arg1 intoDisplayTexture:(id)arg2 ;
-(CGImageRef)cgImageFromTexture:(id)arg1 ;
-(id)depthTextureForSurface:(CV3DSMRasterSurfaceRef)arg1 ;
-(id)serializeWorldMapWithReferenceOrigin:(SCD_Struct_AR1)arg1 ;
-(void)clearMap;
-(id)serializeSurfaceData;
-(void)loadSurfaceData:(id)arg1 ;
-(void)addReferenceAnchors:(id)arg1 ;
-(void)removeReferenceAnchors:(id)arg1 ;
-(id)raycast:(id)arg1 ;
-(id)trackedRaycast:(id)arg1 updateHandler:(/*^block*/id)arg2 ;
-(void)stopAllRaycasts;
-(void)didUpdateRaycastResult:(CV3DHitTestResults*)arg1 ;
-(void)_updatePose:(double)arg1 frame:(CVBufferRef)arg2 snapshotHandle:(const CV3DSLAMStateSnapshotContextRef)arg3 ;
-(void)_reportError:(double)arg1 error:(int)arg2 ;
-(void)didReceiveSpatialMappingCallbackWithResults:(SCD_Struct_AR89*)arg1 forTimestamp:(double)arg2 ;
-(void)didReceiveVolumeSamplingCallbackWithData:(CFDataRef)arg1 numSamples:(unsigned)arg2 requestTimestamp:(double)arg3 sampleTimestamp:(double)arg4 sampleType:(int)arg5 ;
-(void)didReceivePredictedSurfaceCallbackWithTimestamp:(double)arg1 surface:(CV3DSMRasterSurfaceRef)arg2 ;
-(id)convertFromRecon3dUUIDs:(SCD_Struct_AR92*)arg1 ;
-(void)didReceiveKeyframesUpdatedCallbackWithSurfaces:(SCD_Struct_AR93*)arg1 poses:(SCD_Struct_AR94*)arg2 indices:(SCD_Struct_AR92*)arg3 ;
-(void)setReferenceOriginTransform:(SCD_Struct_AR1)arg1 ;
-(CV3DVIOContextRef)vioHandle;
-(void)setVioHandle:(CV3DVIOContextRef)arg1 ;
-(BOOL)hasQualityKeyframe;
-(ARTrackedRaycastPostProcessor *)trackedRaycastPostProcessor;
-(void)setTrackedRaycastPostProcessor:(ARTrackedRaycastPostProcessor *)arg1 ;
-(BOOL)meshReconstructionBusy;
@end

