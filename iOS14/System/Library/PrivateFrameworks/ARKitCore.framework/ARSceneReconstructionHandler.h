/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


@protocol ARSceneReconstructionDelegate;
#import <ARKitCore/ARKitCore-Structs.h>
@class ARSceneReconstructionOptions;

@interface ARSceneReconstructionHandler : NSObject {

	CV3DReconSessionRef _reconstructionSession;
	BOOL _sessionActivated;
	CVPixelBufferPoolRef _postProcessedDepthConfidencePool;
	unsigned long long _sceneReconstruction;
	id<ARSceneReconstructionDelegate> _delegate;
	ARSceneReconstructionOptions* _options;
	CV3DVIOContextRef _vioHandle;

}

@property (nonatomic,readonly) ARSceneReconstructionOptions * options;                       //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) CV3DVIOContextRef vioHandle;                                  //@synthesize vioHandle=_vioHandle - In the implementation block
@property (nonatomic,readonly) unsigned long long sceneReconstruction;                       //@synthesize sceneReconstruction=_sceneReconstruction - In the implementation block
@property (assign,nonatomic,__weak) id<ARSceneReconstructionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setup;
-(id<ARSceneReconstructionDelegate>)delegate;
-(void)start;
-(void)pause;
-(ARSceneReconstructionOptions *)options;
-(void)setDelegate:(id<ARSceneReconstructionDelegate>)arg1 ;
-(void)reset;
-(void)dealloc;
-(unsigned long long)sceneReconstruction;
-(void)reconfigureSceneReconstruction:(unsigned long long)arg1 ;
-(void)pushDepth:(id)arg1 semanticSegmentation:(id)arg2 personSegmentation:(id)arg3 pose:(id)arg4 ;
-(id)initWithSceneReconstruction:(unsigned long long)arg1 options:(id)arg2 vioHandle:(CV3DVIOContextRef)arg3 ;
-(void)meshPlaneHarmonizationShouldEnable:(BOOL)arg1 ;
-(void)processPlaneList:(CV3DPlaneDetectionPlaneListRef)arg1 ;
-(CV3DVIOContextRef)vioHandle;
-(void)handleCFError:(CFErrorRef)arg1 withErrorMessage:(id)arg2 ;
-(BOOL)_configureMeshingConfiguration:(CV3DReconMeshingConfigurationRef)arg1 ;
-(void)_didReceiveMeshListUpdateCallbackWithMeshList:(CV3DReconMeshListRef)arg1 timestamp:(double)arg2 error:(CFErrorRef)arg3 ;
-(void)handleCFError:(CFErrorRef)arg1 withErrorMessage:(id)arg2 failSession:(BOOL)arg3 ;
-(CVBufferRef)postProcessConfidenceBuffer:(CVBufferRef)arg1 fromSegmentationData:(id)arg2 ;
@end

