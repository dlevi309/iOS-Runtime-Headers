/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>
#import <libobjc.A.dylib/BWRendererResourceProvider.h>
#import <libobjc.A.dylib/BWDetectedFacesFilterDelegate.h>

@protocol OS_dispatch_queue;
@class BWRenderList, BWRenderListAnimator, BWStreamingCVAFilterRenderer, BWRenderListProcessor, BWColorLookupCache, NSObject, BWFigVideoCaptureDevice, NSString;

@interface BWStreamingFilterNode : BWNode <BWRendererResourceProvider, BWDetectedFacesFilterDelegate> {

	BOOL _preparedToBecomeLive;
	BOOL _depthDataDeliveryEnabled;
	BOOL _focusBlurMapDeliveryEnabled;
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

@property (assign,getter=isDepthDataDeliveryEnabled,nonatomic) BOOL depthDataDeliveryEnabled; 
@property (assign,getter=isFocusBlurMapDeliveryEnabled,nonatomic) BOOL focusBlurMapDeliveryEnabled; 
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
-(void)dealloc;
-(float)simulatedAperture;
-(id)nodeType;
-(BOOL)isDepthDataDeliveryEnabled;
-(void)setDepthDataDeliveryEnabled:(BOOL)arg1 ;
-(void)setSimulatedAperture:(float)arg1 ;
-(float)portraitLightingEffectStrength;
-(void)setPortraitLightingEffectStrength:(float)arg1 ;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(id)videoOutput;
-(BOOL)attachesInputPixelBufferAfterRendering;
-(id)provideStreamingCVAFilterRenderer;
-(id)provideCoreImageFilterRenderer;
-(id)provideStillImageMetalSDOFRenderer;
-(id)provideStillImageMetalBlurMapRenderer;
-(id)provideMetalFilterRenderer;
-(id)provideColorLookupCache;
-(void)filterDetectedFacesInSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)initWithCaptureDevice:(id)arg1 usingDepth:(BOOL)arg2 ;
-(void)prepareForRenderingWithPreparedPixelBufferPool;
-(void)changeToFilters:(id)arg1 animated:(BOOL)arg2 ;
-(id)videoInput;
-(BOOL)isFocusBlurMapDeliveryEnabled;
-(void)setFocusBlurMapDeliveryEnabled:(BOOL)arg1 ;
-(BOOL)isMetadataProcessingEnabled;
-(void)setMetadataProcessingEnabled:(BOOL)arg1 ;
-(void)setAttachesInputPixelBufferAfterRendering:(BOOL)arg1 ;
-(BOOL)studioAndContourRenderingEnabled;
-(void)setStudioAndContourRenderingEnabled:(BOOL)arg1 ;
-(BOOL)stageRenderingEnabled;
-(void)setStageRenderingEnabled:(BOOL)arg1 ;
@end

