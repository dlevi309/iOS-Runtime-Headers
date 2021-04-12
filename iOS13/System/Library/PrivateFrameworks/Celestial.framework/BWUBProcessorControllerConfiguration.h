/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/BWStillImageProcessorConfiguration.h>

@class BWVideoFormat, FigStillImageSharedProcessingResources;

@interface BWUBProcessorControllerConfiguration : BWStillImageProcessorConfiguration {

	BWVideoFormat* _outputFormat;
	BOOL _fusionEnabled;
	BOOL _lowLightFusionEnabled;
	BOOL _deepFusionEnabled;
	BOOL _depthDataDeliveryEnabled;
	BOOL _alwaysAllowModifyingInputBuffers;
	unsigned _figThreadPriority;
	BOOL _semanticRenderingEnabled;
	FigStillImageSharedProcessingResources* _sharedResources;

}

@property (nonatomic,retain) BWVideoFormat * outputFormat;                                          //@synthesize outputFormat=_outputFormat - In the implementation block
@property (assign,nonatomic) BOOL fusionEnabled;                                                    //@synthesize fusionEnabled=_fusionEnabled - In the implementation block
@property (assign,nonatomic) BOOL lowLightFusionEnabled;                                            //@synthesize lowLightFusionEnabled=_lowLightFusionEnabled - In the implementation block
@property (assign,nonatomic) BOOL deepFusionEnabled;                                                //@synthesize deepFusionEnabled=_deepFusionEnabled - In the implementation block
@property (assign,nonatomic) BOOL depthDataDeliveryEnabled;                                         //@synthesize depthDataDeliveryEnabled=_depthDataDeliveryEnabled - In the implementation block
@property (assign,nonatomic) BOOL alwaysAllowModifyingInputBuffers;                                 //@synthesize alwaysAllowModifyingInputBuffers=_alwaysAllowModifyingInputBuffers - In the implementation block
@property (assign,nonatomic) unsigned figThreadPriority;                                            //@synthesize figThreadPriority=_figThreadPriority - In the implementation block
@property (assign,nonatomic) BOOL semanticRenderingEnabled;                                         //@synthesize semanticRenderingEnabled=_semanticRenderingEnabled - In the implementation block
@property (nonatomic,retain) FigStillImageSharedProcessingResources * sharedResources;              //@synthesize sharedResources=_sharedResources - In the implementation block
-(void)dealloc;
-(BWVideoFormat *)outputFormat;
-(void)setOutputFormat:(BWVideoFormat *)arg1 ;
-(BOOL)depthDataDeliveryEnabled;
-(void)setDepthDataDeliveryEnabled:(BOOL)arg1 ;
-(void)setAlwaysAllowModifyingInputBuffers:(BOOL)arg1 ;
-(void)setFigThreadPriority:(unsigned)arg1 ;
-(void)setFusionEnabled:(BOOL)arg1 ;
-(BOOL)fusionEnabled;
-(void)setLowLightFusionEnabled:(BOOL)arg1 ;
-(BOOL)lowLightFusionEnabled;
-(void)setDeepFusionEnabled:(BOOL)arg1 ;
-(BOOL)deepFusionEnabled;
-(BOOL)semanticRenderingEnabled;
-(void)setSemanticRenderingEnabled:(BOOL)arg1 ;
-(BOOL)alwaysAllowModifyingInputBuffers;
-(void)setSharedResources:(FigStillImageSharedProcessingResources *)arg1 ;
-(FigStillImageSharedProcessingResources *)sharedResources;
-(unsigned)figThreadPriority;
@end

