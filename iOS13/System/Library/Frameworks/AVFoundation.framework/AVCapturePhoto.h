/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVCapturePhotoInternal, NSDictionary, AVDepthData, AVPortraitEffectsMatte, AVCameraCalibrationData, AVCaptureResolvedPhotoSettings, NSString;

@interface AVCapturePhoto : NSObject {

	AVCapturePhotoInternal* _internal;

}

@property (readonly) SCD_Struct_AV7 timestamp; 
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
+(id)AVFileTypeFromFigCaptureStillImageSettingsFileType:(int)arg1 codec:(unsigned)arg2 unresolvedSettings:(id)arg3 ;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(SCD_Struct_AV7)timestamp;
-(unsigned)_orientation;
-(CVBufferRef)pixelBuffer;
-(AVDepthData *)depthData;
-(AVCameraCalibrationData *)cameraCalibrationData;
-(NSDictionary *)metadata;
-(AVPortraitEffectsMatte *)portraitEffectsMatte;
-(AVCaptureResolvedPhotoSettings *)resolvedSettings;
-(id)processedFileType;
-(id)livePhotoMovieFileURL;
-(NSDictionary *)embeddedThumbnailPhotoFormat;
-(NSString *)sourceDeviceType;
-(id)initWithTimestamp:(SCD_Struct_AV7)arg1 photoSurface:(IOSurfaceRef)arg2 photoSurfaceSize:(unsigned long long)arg3 processedFileType:(id)arg4 previewPhotoSurface:(IOSurfaceRef)arg5 embeddedThumbnailSourceSurface:(IOSurfaceRef)arg6 metadata:(id)arg7 depthDataSurface:(IOSurfaceRef)arg8 depthMetadataDictionary:(id)arg9 portraitEffectsMatteSurface:(IOSurfaceRef)arg10 portraitEffectsMatteMetadataDictionary:(id)arg11 hairSegmentationMatteSurface:(IOSurfaceRef)arg12 hairSegmentationMatteMetadataDictionary:(id)arg13 skinSegmentationMatteSurface:(IOSurfaceRef)arg14 skinSegmentationMatteMetadataDictionary:(id)arg15 teethSegmentationMatteSurface:(IOSurfaceRef)arg16 teethSegmentationMatteMetadataDictionary:(id)arg17 captureRequest:(id)arg18 bracketSettings:(id)arg19 sequenceCount:(unsigned long long)arg20 photoCount:(unsigned long long)arg21 expectedPhotoProcessingFlags:(unsigned)arg22 sourceDeviceType:(id)arg23 ;
-(CVBufferRef)previewPixelBuffer;
-(BOOL)isRawPhoto;
-(id)bracketSettings;
-(long long)sequenceCount;
-(long long)photoCount;
-(unsigned)expectedPhotoProcessingFlags;
-(unsigned)actualPhotoProcessingFlags;
-(id)privateClientMetadata;
-(id)portraitMetadata;
-(long long)lensStabilizationStatus;
-(CVBufferRef)_embeddedThumbnailSourcePixelBuffer;
-(id)semanticSegmentationMatteForType:(id)arg1 ;
-(id)_fileDataRepresentationWithReplacementMetadata:(id)arg1 replacementEmbeddedThumbnailPhotoFormat:(id)arg2 replacementEmbeddedThumbnailPixelBuffer:(CVBufferRef)arg3 replacementDepthData:(id)arg4 replacementPortraitEffectsMatte:(id)arg5 replacementHairSegmentationMatte:(id)arg6 replacementSkinSegmentationMatte:(id)arg7 replacementTeethSegmentationMatte:(id)arg8 exceptionReason:(id*)arg9 ;
-(id)fileDataRepresentation;
-(id)fileDataRepresentationWithReplacementMetadata:(id)arg1 replacementEmbeddedThumbnailPhotoFormat:(id)arg2 replacementEmbeddedThumbnailPixelBuffer:(CVBufferRef)arg3 replacementDepthData:(id)arg4 ;
-(id)fileDataRepresentationWithCustomizer:(id)arg1 ;
-(CGImageRef)CGImageRepresentation;
-(CGImageRef)previewCGImageRepresentation;
-(unsigned)photoProcessingFlags;
@end

