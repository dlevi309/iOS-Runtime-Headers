/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>
#import <libobjc.A.dylib/BWRendererResourceProvider.h>
#import <libobjc.A.dylib/BWDetectedFacesFilterDelegate.h>

@protocol OS_dispatch_queue;
@class BWRenderList, BWRenderListAnimator, BWStreamingCVAFilterRenderer, BWRenderListProcessor, BWColorLookupCache, NSObject, BWFigVideoCaptureDevice, NSString;

@interface BWStreamingFilterNode : BWNode <BWRendererResourceProvider, BWDetectedFacesFilterDelegate> {

	BOOL _preparedToBecomeLive;
	BOOL _streamingSegmentationFromInferenceEngine;
	BOOL _depthDataDeliveryEnabled;
	BOOL _focusBlurMapDeliveryEnabled;
	BOOL _depthFromMonocularNetworkEnabled;
	BOOL _metadataProcessingEnabled;
	BOOL _attachesInputPixelBufferAfterRendering;
	BOOL _studioAndContourRenderingEnabled;
	BOOL _stageRenderingEnabled;
	os_unfair_lock_s _renderListLock;
	BWRenderList* _currentRenderList;
	BWRenderListAnimator* _currentAnimator;
	BWRenderList* _nextRenderList;
	BWRenderList* _mostRecentRenderListRequested;
	BWRenderListAnimator* _nextAnimator;
	BWStreamingCVAFilterRenderer* _streamingCVAFilterRenderer;
	BWRenderListProcessor* _renderListProcessor;
	BWColorLookupCache* _colorLookupCache;
	NSObject*<OS_dispatch_queue> _processorPreparationQueue;
	BWFigVideoCaptureDevice* _captureDevice;
	BOOL _receivedInitialFixedPointDisparityBuffer;
	BOOL _receivedOccludedFixedPointDisparityBuffer;

}

@property (assign,getter=isStreamingSegmentationFromInferenceEngine,nonatomic) BOOL streamingSegmentationFromInferenceEngine; 
@property (assign,getter=isDepthDataDeliveryEnabled,nonatomic) BOOL depthDataDeliveryEnabled; 
@property (assign,getter=isFocusBlurMapDeliveryEnabled,nonatomic) BOOL focusBlurMapDeliveryEnabled; 
@property (assign,getter=isDepthFromMonocularNetworkEnabled,nonatomic) BOOL depthFromMonocularNetworkEnabled; 
@property (assign,getter=isMetadataProcessingEnabled,nonatomic) BOOL metadataProcessingEnabled; 
@property (assign,nonatomic) BOOL attachesInputPixelBufferAfterRendering; 
@property (assign,nonatomic) BOOL studioAndContourRenderingEnabled; 
@property (assign,nonatomic) BOOL stageRenderingEnabled; 
@property (assign) float simulatedAperture; 
@property (assign) float portraitLightingEffectStrength; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(BOOL)isDepthDataDeliveryEnabled;
-(id)nodeType;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(id)nodeSubType;
-(void)setDepthDataDeliveryEnabled:(BOOL)arg1 ;
-(id)videoOutput;
-(BOOL)stageRenderingEnabled;
-(id)videoInput;
-(void)changeToFilters:(id)arg1 animated:(BOOL)arg2 ;
-(id)provideStreamingCVAFilterRenderer;
-(id)provideStillImageMetalBlurMapRenderer;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(BOOL)studioAndContourRenderingEnabled;
-(void)prepareForRenderingWithPreparedPixelBufferPool;
-(float)simulatedAperture;
-(void)setPortraitLightingEffectStrength:(float)arg1 ;
-(float)portraitLightingEffectStrength;
-(void)setStreamingSegmentationFromInferenceEngine:(BOOL)arg1 ;
-(id)provideColorLookupCache;
-(BOOL)attachesInputPixelBufferAfterRendering;
-(id)provideMetalFilterRenderer;
-(BOOL)isFocusBlurMapDeliveryEnabled;
-(BOOL)isStreamingSegmentationFromInferenceEngine;
-(void)setStudioAndContourRenderingEnabled:(BOOL)arg1 ;
-(void)setDepthFromMonocularNetworkEnabled:(BOOL)arg1 ;
-(void)setAttachesInputPixelBufferAfterRendering:(BOOL)arg1 ;
-(BOOL)isMetadataProcessingEnabled;
-(id)provideCoreImageFilterRenderer;
-(void)setFocusBlurMapDeliveryEnabled:(BOOL)arg1 ;
-(id)provideStillImageMetalSDOFRenderer;
-(void)setMetadataProcessingEnabled:(BOOL)arg1 ;
-(void)setStageRenderingEnabled:(BOOL)arg1 ;
-(BOOL)isDepthFromMonocularNetworkEnabled;
-(void)filterDetectedFacesInSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)setSimulatedAperture:(float)arg1 ;
-(void)dealloc;
-(id)initWithCaptureDevice:(id)arg1 ;
@end

