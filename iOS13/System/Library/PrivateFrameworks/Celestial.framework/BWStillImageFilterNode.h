/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>
#import <libobjc.A.dylib/BWRendererResourceProvider.h>

@protocol BWRendererResourceProvider, OS_dispatch_queue, MTLCommandQueue;
@class BWRenderList, BWRenderListProcessor, BWStillImageMetalSDOFRenderer, BWStillImageMetalBlurMapRenderer, BWMetalColorCubeRenderer, BWColorLookupCache, NSDictionary, BWPixelBufferPool, NSObject, NSString;

@interface BWStillImageFilterNode : BWNode <BWRendererResourceProvider> {

	BWRenderList* _renderList;
	BWRenderListProcessor* _renderListProcessor;
	id<BWRendererResourceProvider> _rendererProvider;
	BWStillImageMetalSDOFRenderer* _metalSDOFRenderer;
	BWStillImageMetalBlurMapRenderer* _metalBlurMapRenderer;
	BWMetalColorCubeRenderer* _metalFilterRenderer;
	BWColorLookupCache* _colorLookupCache;
	BOOL _depthDataDeliveryEnabled;
	SCD_Struct_BW19 _depthDataMapDimensions;
	NSDictionary* _sensorIDDictionary;
	BWPixelBufferPool* _processingBufferPool;
	NSObject*<OS_dispatch_queue> _emitQueue;
	id<MTLCommandQueue> _mtlCommandQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)dealloc;
-(id)nodeType;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(id)sensorIDDictionary;
-(void)handleStillImagePrewarmWithRequestedStillImageCaptureSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 photoManifest:(id)arg3 forInput:(id)arg4 ;
-(id)provideStreamingCVAFilterRenderer;
-(id)provideCoreImageFilterRenderer;
-(id)provideStillImageMetalSDOFRenderer;
-(id)provideStillImageMetalBlurMapRenderer;
-(id)provideMetalFilterRenderer;
-(id)provideColorLookupCache;
-(id)initWithNodeConfiguration:(id)arg1 depthDataDeliveryEnabled:(BOOL)arg2 personSegmentationEnabled:(BOOL)arg3 refinedDepthEnabled:(BOOL)arg4 ;
-(void)setSensorIDDictionary:(id)arg1 ;
-(id)_initWithNodeConfiguration:(id)arg1 depthDataDeliveryEnabled:(BOOL)arg2 personSegmentationEnabled:(BOOL)arg3 refinedDepthEnabled:(BOOL)arg4 renderResourceProvider:(id)arg5 ;
-(int)_allocateOutputBufferPoolWithVideoFormat:(id)arg1 ;
-(void)_prepareStillImageFilterRenderersForOriginalFilters:(id)arg1 processedFilters:(id)arg2 ;
-(void)_emitSampleBufferAsync:(opaqueCMSampleBufferRef)arg1 ;
-(void)_emitNodeErrorForErrorStatus:(int)arg1 numberOfNodeErrors:(int)arg2 requestedStillImageCaptureSettings:(id)arg3 resolvedStillImageCaptureSettings:(id)arg4 ;
-(id)_debugStringForBuffer:(opaqueCMSampleBufferRef)arg1 ;
@end

