/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/BWFilterRenderer.h>

@protocol OS_dispatch_queue, CVAPortraitVideoPipeline;
@class NSObject, BWPixelBufferPool, BWFigVideoCaptureDevice, BWSpringSimulation, BWStreamingCVAFilterRendererAnimator, NSMutableDictionary, NSMutableArray, NSString;

@interface BWStreamingCVAFilterRenderer : NSObject <BWFilterRenderer> {

	NSObject*<OS_dispatch_queue> _sharedContextQueue;
	SCD_Struct_BW73* _sharedContext;
	id<CVAPortraitVideoPipeline> _portraitVideoPipeline;
	BWPixelBufferPool* _postprocessedDisparityBufferPool;
	CVBufferRef _mattingBuffer;
	int _depthDataSource;
	BWFigVideoCaptureDevice* _captureDevice;
	BOOL _studioAndContourRenderingEnabled;
	BOOL _stageRenderingEnabled;
	BWSpringSimulation* _stageProxyLiveRenderingSpringSimulation;
	BWStreamingCVAFilterRendererAnimator* _animator;
	NSMutableDictionary* _faceVisibilityByFaceID;
	NSMutableArray* _postprocessedFaces;

}

@property (nonatomic,readonly) BOOL studioAndContourRenderingEnabled;              //@synthesize studioAndContourRenderingEnabled=_studioAndContourRenderingEnabled - In the implementation block
@property (nonatomic,readonly) BOOL stageRenderingEnabled;                         //@synthesize stageRenderingEnabled=_stageRenderingEnabled - In the implementation block
@property (assign) float simulatedAperture; 
@property (assign) float portraitLightingEffectStrength; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,readonly) short type; 
@property (nonatomic,readonly) BOOL supportsAnimation; 
@property (nonatomic,readonly) BOOL adjustsMetadata; 
+(void)initialize;
-(void)dealloc;
-(short)type;
-(NSString *)displayName;
-(float)simulatedAperture;
-(void)setSimulatedAperture:(float)arg1 ;
-(float)portraitLightingEffectStrength;
-(void)setPortraitLightingEffectStrength:(float)arg1 ;
-(int)prepareForRenderingWithParameters:(id)arg1 inputVideoFormat:(id)arg2 inputDepthFormat:(id)arg3 ;
-(void)renderUsingParameters:(id)arg1 inputPixelBuffer:(CVBufferRef)arg2 inputSampleBuffer:(opaqueCMSampleBufferRef)arg3 originalPixelBuffer:(CVBufferRef)arg4 processedPixelBuffer:(CVBufferRef)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)adjustMetadataOfSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)supportsAnimation;
-(BOOL)adjustsMetadata;
-(id)initWithCaptureDevice:(id)arg1 studioAndContourRenderingEnabled:(BOOL)arg2 stageRenderingEnabled:(BOOL)arg3 depthDataSource:(int)arg4 ;
-(BOOL)studioAndContourRenderingEnabled;
-(BOOL)stageRenderingEnabled;
-(void)disparityPostprocessingRequest:(id)arg1 didCompleteDisparityPostprocessingWithResult:(id)arg2 ;
-(void)mattingRequest:(id)arg1 didCompleteMattingWithResult:(id)arg2 ;
-(void)portraitRequest:(id)arg1 didCompletePortraitWithResult:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_removeFaceVisibilityForFacesMissingFromDetectedFaces:(id)arg1 ;
@end

