/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class AVCapturePhotoInternal, NSDictionary, AVDepthData, AVPortraitEffectsMatte, AVCameraCalibrationData, AVCaptureResolvedPhotoSettings, NSString;

@interface AVCapturePhoto : NSObject {

	AVCapturePhotoInternal* _internal;

}

@property (readonly) SCD_Struct_AV0 timestamp; 
@property (getter=isRawPhoto,readonly) BOOL rawPhoto; 
@property (readonly) CVBufferRef pixelBuffer; 
@property (readonly) CVBufferRef previewPixelBuffer; 
@property (readonly) NSDictionary * embeddedThumbnailPhotoFormat; 
@property (readonly) AVDepthData * depthData; 
@property (readonly) AVPortraitEffectsMatte * portraitEffectsMatte; 
@property (readonly) NSDictionary * metadata; 
@property (readonly) AVCameraCalibrationData * cameraCalibrationData; 
@property (readonly) AVCaptureResolvedPhotoSettings * resolvedSettings; 
@property (readonly) long long photoCount; 
@property (readonly) NSString * sourceDeviceType; 
+(void)initialize;
+(id)AVFileTypeFromFigCaptureStillImageSettingsFileType:(int)arg1 codec:(unsigned)arg2 unresolvedSettings:(id)arg3 ;
-(id)fileDataRepresentation;
-(unsigned)_orientation;
-(unsigned)photoProcessingFlags;
-(AVDepthData *)depthData;
-(id)bracketSettings;
-(id)fileDataRepresentationWithReplacementMetadata:(id)arg1 replacementEmbeddedThumbnailPhotoFormat:(id)arg2 replacementEmbeddedThumbnailPixelBuffer:(CVBufferRef)arg3 replacementDepthData:(id)arg4 ;
-(SCD_Struct_AV0)timestamp;
-(id)portraitMetadata;
-(long long)photoCount;
-(id)debugDescription;
-(id)processedFileType;
-(CVBufferRef)previewPixelBuffer;
-(CVBufferRef)_embeddedThumbnailSourcePixelBuffer;
-(id)_fileDataRepresentationWithReplacementMetadata:(id)arg1 replacementEmbeddedThumbnailPhotoFormat:(id)arg2 replacementEmbeddedThumbnailPixelBuffer:(CVBufferRef)arg3 replacementDepthData:(id)arg4 replacementPortraitEffectsMatte:(id)arg5 replacementHairSegmentationMatte:(id)arg6 replacementSkinSegmentationMatte:(id)arg7 replacementTeethSegmentationMatte:(id)arg8 replacementGlassesSegmentationMatte:(id)arg9 exceptionReason:(id*)arg10 ;
-(id)description;
-(unsigned)actualPhotoProcessingFlags;
-(NSDictionary *)embeddedThumbnailPhotoFormat;
-(id)initWithTimestamp:(SCD_Struct_AV0)arg1 photoSurface:(IOSurfaceRef)arg2 photoSurfaceSize:(unsigned long long)arg3 processedFileType:(id)arg4 previewPhotoSurface:(IOSurfaceRef)arg5 embeddedThumbnailSourceSurface:(IOSurfaceRef)arg6 metadata:(id)arg7 depthDataSurface:(IOSurfaceRef)arg8 depthMetadataDictionary:(id)arg9 portraitEffectsMatteSurface:(IOSurfaceRef)arg10 portraitEffectsMatteMetadataDictionary:(id)arg11 hairSegmentationMatteSurface:(IOSurfaceRef)arg12 hairSegmentationMatteMetadataDictionary:(id)arg13 skinSegmentationMatteSurface:(IOSurfaceRef)arg14 skinSegmentationMatteMetadataDictionary:(id)arg15 teethSegmentationMatteSurface:(IOSurfaceRef)arg16 teethSegmentationMatteMetadataDictionary:(id)arg17 glassesSegmentationMatteSurface:(IOSurfaceRef)arg18 glassesSegmentationMatteMetadataDictionary:(id)arg19 captureRequest:(id)arg20 bracketSettings:(id)arg21 sequenceCount:(unsigned long long)arg22 photoCount:(unsigned long long)arg23 expectedPhotoProcessingFlags:(unsigned)arg24 sourceDeviceType:(id)arg25 ;
-(id)fileDataRepresentationWithCustomizer:(id)arg1 ;
-(id)semanticSegmentationMatteForType:(id)arg1 ;
-(long long)lensStabilizationStatus;
-(CVBufferRef)pixelBuffer;
-(unsigned)expectedPhotoProcessingFlags;
-(AVPortraitEffectsMatte *)portraitEffectsMatte;
-(AVCaptureResolvedPhotoSettings *)resolvedSettings;
-(BOOL)isRawPhoto;
-(id)livePhotoMovieFileURL;
-(CGImageRef)previewCGImageRepresentation;
-(long long)sequenceCount;
-(NSString *)sourceDeviceType;
-(NSDictionary *)metadata;
-(AVCameraCalibrationData *)cameraCalibrationData;
-(id)privateClientMetadata;
-(void)dealloc;
-(CGImageRef)CGImageRepresentation;
@end

