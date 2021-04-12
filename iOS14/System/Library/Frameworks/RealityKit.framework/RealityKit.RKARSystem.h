/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/RealityKit.framework/RealityKit
*/


@interface RealityKit.RKARSystem : NSObject {

	 engine;
	 delegate;
	 session;
	 cameraMode;
	 arView;
	 scene;
	 textureCache;
	 capturedFrame;
	 isFaceSession;
	 lightEntity;
	 useLowSampleAA;
	 updateCameraViewDescriptorSettings;
	 prevOrientation;
	 simpleForwardEmitter;
	 arEmitter;
	 suDepthFeatheringMaterial;
	 cameraPassthroughMaterial;
	 cameraSegmentationCompositeMaterial;
	 cameraCombinedPostProcessMaterials;
	 drPostAndCompositionMaterial;
	 addedAnchors;
	 updatedAnchors;
	 removedAnchors;
	 anchorSemaphore;
	 occlusionEntitiesByAnchorIdentifier;
	 shadowReceiverEntitiesByAnchorIdentifier;
	 lastUpdateTime;
	 fallbackAmbientIntensity;
	 fallbackAmbientColor;
	 zNear;
	 zFar;
	 displayToCameraMatrix;
	 cameraNoiseRandomTranslation;
	 arProbePlacementManager;
	 arProbeRenderManager;
	 arProbeBackgroundManager;
	 __passthroughIntensityExponent;
	 __enableUpdateCameraWorldMatrixFromARFrame;
	 __enableUpdateCameraProjectionMatrixFromARFrame;
	 __autoFireStartTriggerOnPlacement;
	 collaborationStarted;
	 needInitialCollaborationData;
	 netSessionObserver;
	 connectedPeers;
	 $__lazy_storage_$_cameraRenderGraph;
	 $__lazy_storage_$_depthOfFieldRenderGraph;
	 $__lazy_storage_$_motionBlurRenderGraph;
	 $__lazy_storage_$_postProcessingCombinedRenderGraph;
	 $__lazy_storage_$_postProcessingCombinedHDRRenderGraph;
	 debugOptions;
	 renderOptions;
	 groundingShadowMode;
	 $__lazy_storage_$_debugAxisEntity;
	 $__lazy_storage_$_debugAnchorPlaneMaterial;
	 $__lazy_storage_$_debugProbeMaterial;
	 worldOrigin;
	 debugAnchorsByAnchorIdentifier;
	 debugPlanesByAnchorIdentifier;
	 debugProbesByAnchorIdentifier;
	 debugFeaturePointUpdateRate;
	 timeSinceLastDebugFeaturePointUpdate;
	 debugFeaturePoints;
	 cachedGestureHitTestResults;
	 __renderQuality;
	 lastARFrameTimeStamp;
	 maxNumberOfAttemptsToGetARFrameInDuplicateCase;
	 sleepDurationInDuplicateARFrameCase;
	 shouldRenderCameraFeed;

}
-(id)init;
-(void)dealloc;
@end

