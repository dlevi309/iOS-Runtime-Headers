/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

@class NSArray, BWVideoFormat, FigStillImageSharedProcessingResources;


@protocol BWNoiseReductionAndFusionProcessorControllerConfiguration <NSObject>
@property (nonatomic,retain) NSArray * sensorConfigurations; 
@property (assign,nonatomic) BOOL deferredProcessingEnabled; 
@property (nonatomic,retain) id<MTLCommandQueue> metalCommandQueue; 
@property (nonatomic,retain) BWVideoFormat * inputFormat; 
@property (nonatomic,retain) BWVideoFormat * outputFormat; 
@property (assign,nonatomic) BOOL fusionEnabled; 
@property (assign,nonatomic) BOOL lowLightFusionEnabled; 
@property (assign,nonatomic) BOOL deepFusionEnabled; 
@property (assign,nonatomic) BOOL deepFusionWaitForProcessingToFinish; 
@property (assign,nonatomic) BOOL depthDataDeliveryEnabled; 
@property (assign,nonatomic) BOOL alwaysAllowModifyingInputBuffers; 
@property (assign,nonatomic) unsigned figThreadPriority; 
@property (assign,nonatomic) BOOL semanticRenderingEnabled; 
@property (assign,nonatomic) float gainMapMainImageDownscalingFactor; 
@property (nonatomic,retain) FigStillImageSharedProcessingResources * sharedResources; 
@required
-(BOOL)deferredProcessingEnabled;
-(BOOL)depthDataDeliveryEnabled;
-(void)setDeferredProcessingEnabled:(BOOL)arg1;
-(void)setOutputFormat:(id)arg1;
-(void)setDepthDataDeliveryEnabled:(BOOL)arg1;
-(BOOL)fusionEnabled;
-(void)setFusionEnabled:(BOOL)arg1;
-(BOOL)lowLightFusionEnabled;
-(void)setLowLightFusionEnabled:(BOOL)arg1;
-(BOOL)deepFusionEnabled;
-(void)setDeepFusionEnabled:(BOOL)arg1;
-(BOOL)deepFusionWaitForProcessingToFinish;
-(void)setDeepFusionWaitForProcessingToFinish:(BOOL)arg1;
-(BWVideoFormat *)outputFormat;
-(BOOL)alwaysAllowModifyingInputBuffers;
-(void)setAlwaysAllowModifyingInputBuffers:(BOOL)arg1;
-(BOOL)semanticRenderingEnabled;
-(void)setSemanticRenderingEnabled:(BOOL)arg1;
-(void)setSharedResources:(id)arg1;
-(BWVideoFormat *)inputFormat;
-(void)setGainMapMainImageDownscalingFactor:(float)arg1;
-(NSArray *)sensorConfigurations;
-(void)setSensorConfigurations:(id)arg1;
-(id<MTLCommandQueue>)metalCommandQueue;
-(void)setMetalCommandQueue:(id)arg1;
-(unsigned)figThreadPriority;
-(void)setFigThreadPriority:(unsigned)arg1;
-(void)setInputFormat:(id)arg1;
-(float)gainMapMainImageDownscalingFactor;
-(FigStillImageSharedProcessingResources *)sharedResources;

@end

