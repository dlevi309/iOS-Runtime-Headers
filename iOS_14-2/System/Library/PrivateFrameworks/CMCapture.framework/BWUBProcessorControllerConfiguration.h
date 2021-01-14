/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/BWStillImageProcessorConfiguration.h>
#import <libobjc.A.dylib/BWNoiseReductionAndFusionProcessorControllerConfiguration.h>

@class NSArray, BWVideoFormat, FigStillImageSharedProcessingResources, NSString;

@interface BWUBProcessorControllerConfiguration : BWStillImageProcessorConfiguration <BWNoiseReductionAndFusionProcessorControllerConfiguration> {

	BWVideoFormat* _inputFormat;
	BWVideoFormat* _outputFormat;
	BOOL _fusionEnabled;
	BOOL _lowLightFusionEnabled;
	BOOL _deepFusionEnabled;
	BOOL _deepFusionWaitForProcessingToFinish;
	BOOL _depthDataDeliveryEnabled;
	BOOL _alwaysAllowModifyingInputBuffers;
	unsigned _figThreadPriority;
	BOOL _semanticRenderingEnabled;
	float _gainMapMainImageDownscalingFactor;
	FigStillImageSharedProcessingResources* _sharedResources;

}

@property (nonatomic,retain) NSArray * sensorConfigurations; 
@property (assign,nonatomic) BOOL deferredProcessingEnabled; 
@property (nonatomic,retain) id<MTLCommandQueue> metalCommandQueue; 
@property (nonatomic,retain) BWVideoFormat * inputFormat;                                           //@synthesize inputFormat=_inputFormat - In the implementation block
@property (nonatomic,retain) BWVideoFormat * outputFormat;                                          //@synthesize outputFormat=_outputFormat - In the implementation block
@property (assign,nonatomic) BOOL fusionEnabled;                                                    //@synthesize fusionEnabled=_fusionEnabled - In the implementation block
@property (assign,nonatomic) BOOL lowLightFusionEnabled;                                            //@synthesize lowLightFusionEnabled=_lowLightFusionEnabled - In the implementation block
@property (assign,nonatomic) BOOL deepFusionEnabled;                                                //@synthesize deepFusionEnabled=_deepFusionEnabled - In the implementation block
@property (assign,nonatomic) BOOL deepFusionWaitForProcessingToFinish;                              //@synthesize deepFusionWaitForProcessingToFinish=_deepFusionWaitForProcessingToFinish - In the implementation block
@property (assign,nonatomic) BOOL depthDataDeliveryEnabled;                                         //@synthesize depthDataDeliveryEnabled=_depthDataDeliveryEnabled - In the implementation block
@property (assign,nonatomic) BOOL alwaysAllowModifyingInputBuffers;                                 //@synthesize alwaysAllowModifyingInputBuffers=_alwaysAllowModifyingInputBuffers - In the implementation block
@property (assign,nonatomic) unsigned figThreadPriority;                                            //@synthesize figThreadPriority=_figThreadPriority - In the implementation block
@property (assign,nonatomic) BOOL semanticRenderingEnabled;                                         //@synthesize semanticRenderingEnabled=_semanticRenderingEnabled - In the implementation block
@property (assign,nonatomic) float gainMapMainImageDownscalingFactor;                               //@synthesize gainMapMainImageDownscalingFactor=_gainMapMainImageDownscalingFactor - In the implementation block
@property (nonatomic,retain) FigStillImageSharedProcessingResources * sharedResources;              //@synthesize sharedResources=_sharedResources - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)depthDataDeliveryEnabled;
-(void)setOutputFormat:(BWVideoFormat *)arg1 ;
-(void)setDepthDataDeliveryEnabled:(BOOL)arg1 ;
-(BOOL)fusionEnabled;
-(void)setFusionEnabled:(BOOL)arg1 ;
-(BOOL)lowLightFusionEnabled;
-(void)setLowLightFusionEnabled:(BOOL)arg1 ;
-(BOOL)deepFusionEnabled;
-(void)setDeepFusionEnabled:(BOOL)arg1 ;
-(BOOL)deepFusionWaitForProcessingToFinish;
-(void)setDeepFusionWaitForProcessingToFinish:(BOOL)arg1 ;
-(BWVideoFormat *)outputFormat;
-(BOOL)alwaysAllowModifyingInputBuffers;
-(void)setAlwaysAllowModifyingInputBuffers:(BOOL)arg1 ;
-(BOOL)semanticRenderingEnabled;
-(void)setSemanticRenderingEnabled:(BOOL)arg1 ;
-(void)setSharedResources:(FigStillImageSharedProcessingResources *)arg1 ;
-(BWVideoFormat *)inputFormat;
-(void)setGainMapMainImageDownscalingFactor:(float)arg1 ;
-(unsigned)figThreadPriority;
-(void)setFigThreadPriority:(unsigned)arg1 ;
-(void)setInputFormat:(BWVideoFormat *)arg1 ;
-(float)gainMapMainImageDownscalingFactor;
-(FigStillImageSharedProcessingResources *)sharedResources;
-(void)dealloc;
@end
