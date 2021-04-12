/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

