/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>
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
	BOOL _croppingEnabled;
	NSDictionary* _inputColorInfo;
	BOOL _usesHighEncodingPriority;
	unsigned long long _heifThumbnailMaxPixelSize;
	float _heifQualityOverride;
	BOOL _heifEmbedThumb;
	BOOL _heifForceCABAC;
	BOOL _heifForceHEVC;
	BOOL _heifUseTiling;
	int _heifTileWidth;
	int _heifTileHeight;
	long long _prewarmedSettingsID;
	BOOL _allowHEIFPrewarming;
	BOOL _prewarmingOngoing;
	float _segmentationDownscalingFactor;
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
+(CGRect)_cropRectForSampleBuffer:(opaqueCMSampleBufferRef)arg1 requestedStillImageCaptureSettings:(id)arg2 whenEnabled:(BOOL)arg3 ;
+(void)_updateMetadataForSampleBuffer:(opaqueCMSampleBufferRef)arg1 stillImageSettings:(id)arg2 whenCroppingEnabled:(BOOL)arg3 ;
+(BOOL)_croppingRequiredForSampleBuffer:(opaqueCMSampleBufferRef)arg1 stillImageSettings:(id)arg2 whenEnabled:(BOOL)arg3 ;
-(void)dealloc;
-(id)nodeType;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(BOOL)zeroShutterLagEnabled;
-(void)setZeroShutterLagEnabled:(BOOL)arg1 ;
-(void)handleStillImagePrewarmWithRequestedStillImageCaptureSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 photoManifest:(id)arg3 forInput:(id)arg4 ;
-(id)outputVideoFormatForAttachedMediaKey:(id)arg1 ;
-(void)setCameraSupportsFlash:(BOOL)arg1 ;
-(void)setUsesHighEncodingPriority:(BOOL)arg1 ;
-(BOOL)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)arg1 ;
-(BOOL)cameraSupportsFlash;
-(id)inputVideoFormatForAttachedMediaKey:(id)arg1 ;
-(id)inputFormatForAttachedMediaKey:(id)arg1 ;
-(id)inputInferenceVideoFormatForAttachedMediaKey:(id)arg1 ;
-(id)outputFormatForAttachedMediaKey:(id)arg1 ;
-(id)initWithPersonSegmentationEnabled:(BOOL)arg1 inferenceScheduler:(id)arg2 ;
-(void)setCroppingEnabled:(BOOL)arg1 ;
-(void)setSegmentationDownscalingFactor:(float)arg1 ;
-(BOOL)usesHighEncodingPriority;
-(void)setInputColorInfo:(id)arg1 ;
-(int)_generatePreviewForSampleBuffer:(opaqueCMSampleBufferRef)arg1 requestedStillImageCaptureSettings:(id)arg2 cropRect:(CGRect)arg3 previewPixelBuffer:(_CVBuffer*)arg4 ;
-(void)_performInferenceWithBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(int)_getColorSpacePropertiesForSourcePixelFormat:(unsigned)arg1 sourceWidth:(int)arg2 sourceHeight:(int)arg3 destinationPixelFormat:(unsigned)arg4 ;
-(int)_scaleInputPixelBuffer:(CVBufferRef)arg1 toDimensions:(SCD_Struct_BW19)arg2 colorSpaceProperties:(int)arg3 cropRect:(CGRect)arg4 pixelConverter:(id)arg5 poolCapacity:(int)arg6 thumbnailPixelBuffer:(_CVBuffer*)arg7 ;
-(int)_encodePhotoForPixelBuffer:(CVBufferRef)arg1 imageDimensions:(SCD_Struct_BW19)arg2 metadata:(id)arg3 thumbnailOptions:(id)arg4 requestedStillImageCaptureSettings:(id)arg5 resolvedStillImageCaptureSettings:(id)arg6 cropRect:(CGRect)arg7 usePixelsOutsideCrop:(BOOL)arg8 outputSurfaceImageSize:(CGSize*)arg9 ;
-(int)_addThumbnailFromBuffer:(CVBufferRef)arg1 metadata:(id)arg2 requestedStillImageCaptureSettings:(id)arg3 resolvedStillImageCaptureSettings:(id)arg4 cropRect:(CGRect)arg5 codecType:(unsigned)arg6 maxPixelSize:(unsigned long long)arg7 ;
-(id)_thumbnailOptionsForImageWithMetadata:(id)arg1 requestedStillImageCaptureSettings:(id)arg2 resolvedStillImageCaptureSettings:(id)arg3 cropRect:(CGRect)arg4 codecType:(unsigned)arg5 maxPixelSize:(unsigned long long)arg6 ;
-(void)_addDepthFromSampleBufferIfAvailable:(opaqueCMSampleBufferRef)arg1 ;
-(int)_addPortraitEffectsMatteFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(int)_addSemanticMattesFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(int)_addMetadataFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 requestedStillImageCaptureSettings:(id)arg2 resolvedStillImageCaptureSettings:(id)arg3 ;
-(IOSurfaceRef)_closeContainerAndCopySurfaceWithSurfaceSize:(unsigned long long*)arg1 ;
-(void)_addQualityOptionsToDictionary:(id)arg1 pixelBuffer:(CVBufferRef)arg2 imageDimensions:(SCD_Struct_BW19)arg3 metadata:(id)arg4 requestedStillImageCaptureSettings:(id)arg5 resolvedStillImageCaptureSettings:(id)arg6 forMainImage:(BOOL)arg7 ;
-(id)_depthEncodingOptionsFromDepthMetadata:(id)arg1 pixelFormat:(unsigned)arg2 ;
-(id)_encodingOptionsForAuxiliaryImageWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelBufferAttributes:(id)arg3 ;
-(int)_defaultJPEGIndexedQTableForPixelBuffer:(CVBufferRef)arg1 metadata:(id)arg2 captureType:(int)arg3 quantizationTableIndexOut:(int*)arg4 isHighGainImageOut:(BOOL*)arg5 ;
-(CGImageMetadataRef)_newAuxiliaryImagePropertiesFromDepthMetadata:(id)arg1 ;
-(int)_addValue:(id)arg1 toAuxiliaryImageProperties:(CGImageMetadataRef)arg2 namespace:(CFStringRef)arg3 prefix:(CFStringRef)arg4 key:(CFStringRef)arg5 ;
-(id)_arrayInColumnMajorOrderFrom3x3MatrixData:(SCD_Struct_Fi22)arg1 ;
-(id)_arrayInColumnMajorOrderFrom3x4MatrixData:(SCD_Struct_BW69)arg1 ;
-(CGImageMetadataRef)_newAuxiliaryImagePropertiesFromPortraitEffectsMatteMetadata:(id)arg1 ;
-(int)_addSemanticMatteSampleBuffer:(opaqueCMSampleBufferRef)arg1 withCustomURN:(id)arg2 ;
-(CGImageMetadataRef)_newAuxiliaryImagePropertiesFromSemanticMatteSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)_transcodeQualityHintFromQuantizationTableIndex:(int)arg1 ;
-(BOOL)croppingEnabled;
-(id)inputColorInfo;
-(float)segmentationDownscalingFactor;
@end

