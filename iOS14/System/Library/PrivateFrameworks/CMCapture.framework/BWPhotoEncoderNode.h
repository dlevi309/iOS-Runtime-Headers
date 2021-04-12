/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>
#import <libobjc.A.dylib/BWInferenceFormatProvider.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject, FigCapturePixelConverter, NSDictionary, BWInferenceEngine, NSString;

@interface BWPhotoEncoderNode : BWNode <BWInferenceFormatProvider> {

	NSObject*<OS_dispatch_queue> _previewGenerationQueue;
	NSObject*<OS_dispatch_queue> _prewarmQueue;
	NSObject*<OS_dispatch_group> _previewGenerationGroup;
	FigCapturePixelConverter* _previewPixelConverter;
	FigCapturePixelConverter* _thumbnailPixelConverter;
	FigCapturePixelConverter* _clientThumbnailPixelConverter;
	BOOL _cameraSupportsFlash;
	BOOL _zeroShutterLagEnabled;
	FigPhotoCompressionSessionRef _compressionSession;
	FigCapturePixelConverter* _jpegPixelConverter;
	int _portraitRenderQuality;
	NSDictionary* _inputColorInfo;
	BOOL _usesHighEncodingPriority;
	unsigned long long _heifThumbnailMaxPixelSize;
	float _heifQualityOverride;
	float _lowLightOverrideLuxThreshold;
	float _lowLightOverrideQuality;
	float _lowLightOverrideMaxExposureBias;
	BOOL _heifForceEmbedThumb;
	BOOL _heifForceCABAC;
	BOOL _heifForceHEVC;
	BOOL _heifUseTiling;
	int _heifTileWidth;
	int _heifTileHeight;
	long long _prewarmedSettingsID;
	BOOL _allowHEIFPrewarming;
	BOOL _prewarmingOngoing;
	float _segmentationDownscalingFactor;
	float _gainMapMainImageDownscalingFactor;
	void* _prewarmQueueID;
	BWInferenceEngine* _inferenceEngine;
	BOOL _preparedInferenceEngine;
	AB _opportunisticInferenceCompleted;
	BOOL _alwaysAwaitInference;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(CGRect)_cropRectForSampleBuffer:(opaqueCMSampleBufferRef)arg1 scaleFactorOut:(float*)arg2 ;
+(void)_updateMetadataForSampleBuffer:(opaqueCMSampleBufferRef)arg1 cropRect:(CGRect)arg2 scaleFactor:(float)arg3 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(id)_arrayInColumnMajorOrderFrom3x4MatrixData:(SCD_Struct_BW14)arg1 ;
-(id)outputVideoFormatForAttachedMediaKey:(id)arg1 ;
-(id)nodeType;
-(CGImageMetadataRef)_newAuxiliaryImagePropertiesFromSemanticMatteSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)_depthEncodingOptionsFromDepthMetadata:(id)arg1 pixelFormat:(unsigned)arg2 ;
-(id)nodeSubType;
-(id)initWithNodeConfiguration:(id)arg1 personSegmentationEnabled:(BOOL)arg2 semanticDevelopmentVersion:(int)arg3 inferenceScheduler:(id)arg4 portraitRenderQuality:(int)arg5 ;
-(id)_encodingOptionsForAuxiliaryImageWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelBufferAttributes:(id)arg3 ;
-(id)_stringFromEncodingScheme:(int)arg1 ;
-(BOOL)usesHighEncodingPriority;
-(void)setUsesHighEncodingPriority:(BOOL)arg1 ;
-(int)_addMetadataFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 requestedStillImageCaptureSettings:(id)arg2 resolvedStillImageCaptureSettings:(id)arg3 ;
-(BOOL)zeroShutterLagEnabled;
-(BOOL)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)arg1 ;
-(void)_addQualityOptionsToDictionary:(id)arg1 codecType:(unsigned)arg2 pixelBuffer:(CVBufferRef)arg3 imageDimensions:(SCD_Struct_BW2)arg4 metadata:(id)arg5 requestedStillImageCaptureSettings:(id)arg6 resolvedStillImageCaptureSettings:(id)arg7 enableHEIFTiling:(BOOL)arg8 enableHEIFOrientation:(BOOL)arg9 ;
-(id)_arrayInColumnMajorOrderFrom3x3MatrixData:(SCD_Struct_BW82)arg1 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(void)setCameraSupportsFlash:(BOOL)arg1 ;
-(int)_addValue:(id)arg1 toAuxiliaryImageProperties:(CGImageMetadataRef)arg2 namespace:(CFStringRef)arg3 prefix:(CFStringRef)arg4 key:(CFStringRef)arg5 ;
-(int)_fileTypeForEncodingScheme:(int)arg1 ;
-(CGImageMetadataRef)_newAuxiliaryImagePropertiesFromDepthMetadata:(id)arg1 ;
-(int)_addThumbnailToJPEGImageFromBuffer:(CVBufferRef)arg1 metadata:(id)arg2 requestedStillImageCaptureSettings:(id)arg3 resolvedStillImageCaptureSettings:(id)arg4 cropRect:(CGRect)arg5 codecType:(unsigned)arg6 maxPixelSize:(unsigned long long)arg7 ;
-(int)_resolveEncodingSchemeForRequestedSettings:(id)arg1 captureSettings:(id)arg2 ;
-(float)segmentationDownscalingFactor;
-(id)inputVideoFormatForAttachedMediaKey:(id)arg1 ;
-(void)handleStillImagePrewarmWithSettings:(id)arg1 forInput:(id)arg2 ;
-(id)inputFormatForAttachedMediaKey:(id)arg1 ;
-(BOOL)_addGainMapFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 cropRect:(CGRect)arg2 scaleFactor:(float)arg3 stillImageSettings:(id)arg4 ;
-(int)_containerFormatForEncodingScheme:(int)arg1 ;
-(void)setZeroShutterLagEnabled:(BOOL)arg1 ;
-(void)setGainMapMainImageDownscalingFactor:(float)arg1 ;
-(CGImageMetadataRef)_newAuxiliaryImagePropertiesFromPortraitEffectsMatteMetadata:(id)arg1 ;
-(BOOL)_addDepthFromSampleBufferIfAvailable:(opaqueCMSampleBufferRef)arg1 ;
-(int)_scaleInputPixelBuffer:(CVBufferRef)arg1 toDimensions:(SCD_Struct_BW2)arg2 colorSpaceProperties:(int)arg3 cropRect:(CGRect)arg4 pixelConverter:(id)arg5 poolCapacity:(int)arg6 thumbnailPixelBuffer:(_CVBuffer*)arg7 ;
-(CGImageMetadataRef)_newAuxiliaryImagePropertiesFromGainMapSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_performInferenceWithBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)_addSemanticMattesFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)inputColorInfo;
-(BOOL)_isSupportedThumbnailCodecType:(unsigned)arg1 forEncodingScheme:(int)arg2 ;
-(int)_getColorSpacePropertiesForSourcePixelFormat:(unsigned)arg1 sourceWidth:(int)arg2 sourceHeight:(int)arg3 destinationPixelFormat:(unsigned)arg4 ;
-(void)setSegmentationDownscalingFactor:(float)arg1 ;
-(void)setInputColorInfo:(id)arg1 ;
-(int)_addSemanticMatteSampleBuffer:(opaqueCMSampleBufferRef)arg1 withCustomURN:(id)arg2 ;
-(id)inputInferenceVideoFormatForAttachedMediaKey:(id)arg1 ;
-(BOOL)_addPortraitEffectsMatteFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(unsigned)_codecTypeForEncodingScheme:(int)arg1 ;
-(int)_encodePhotoForEncodingScheme:(int)arg1 pixelBuffer:(CVBufferRef)arg2 imageDimensions:(SCD_Struct_BW2)arg3 metadata:(id)arg4 thumbnailOptions:(id)arg5 requestedStillImageCaptureSettings:(id)arg6 resolvedStillImageCaptureSettings:(id)arg7 cropRect:(CGRect)arg8 usePixelsOutsideCrop:(BOOL)arg9 outputSurfaceImageSize:(CGSize*)arg10 ;
-(int)_generatePreviewForSampleBuffer:(opaqueCMSampleBufferRef)arg1 requestedStillImageCaptureSettings:(id)arg2 cropRect:(CGRect)arg3 previewPixelBuffer:(_CVBuffer*)arg4 ;
-(BOOL)cameraSupportsFlash;
-(int)_defaultJPEGIndexedQTableForPixelBuffer:(CVBufferRef)arg1 metadata:(id)arg2 captureType:(int)arg3 quantizationTableIndexOut:(int*)arg4 isHighGainImageOut:(BOOL*)arg5 ;
-(IOSurfaceRef)_closeContainerAndCopySurfaceWithSurfaceSize:(unsigned long long*)arg1 ;
-(id)_transcodeQualityHintFromQuantizationTableIndex:(int)arg1 ;
-(id)outputFormatForAttachedMediaKey:(id)arg1 ;
-(id)_thumbnailOptionsForImageWithMetadata:(id)arg1 requestedStillImageCaptureSettings:(id)arg2 resolvedStillImageCaptureSettings:(id)arg3 cropRect:(CGRect)arg4 codecType:(unsigned)arg5 maxPixelSize:(unsigned long long)arg6 ;
-(float)gainMapMainImageDownscalingFactor;
-(void)dealloc;
@end

