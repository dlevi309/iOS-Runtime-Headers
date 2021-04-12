/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


#import <NeutrinoCore/NeutrinoCore-Structs.h>
@interface NUVideoUtilities : NSObject
+(SCD_Struct_NU6)minimumFrameDurationForAssetTrack:(id)arg1 ;
+(id)defaultVideoSettingsForAVAssetReader;
+(id)rgbVideoSettingsForAVAssetReader;
+(id)bestOutputSettingsPresetForTargetVideoSize:(SCD_Struct_NU7)arg1 ;
+(id)firstEnabledVideoTrackInAsset:(id)arg1 error:(out id*)arg2 ;
+(SCD_Struct_NU6)minimumFrameDurationForAsset:(id)arg1 ;
+(SCD_Struct_NU6)minimumFrameDurationForAsset:(id)arg1 videoComposition:(id)arg2 ;
+(void)readNextPixelBuffer:(id)arg1 output:(id)arg2 block:(/*^block*/id)arg3 ;
+(void)readNextSampleBuffer:(id)arg1 output:(id)arg2 block:(/*^block*/id)arg3 ;
+(BOOL)_metadataTrack:(id)arg1 containsIdentifier:(id)arg2 ;
+(BOOL)isMetadataTrackStillImageDisplayTimeMarkerInLivePhoto:(id)arg1 ;
+(BOOL)isMetadataTrackWithStillImageTransformInLivePhoto:(id)arg1 ;
+(BOOL)isMetadataTrackWithStillImageDimensionsInLivePhoto:(id)arg1 ;
+(id)metadataTrackWithStillImageDisplayTimeMarkerInLivePhotoAsset:(id)arg1 ;
+(id)metadataTrackWithStillImageTransformInLivePhotoAsset:(id)arg1 ;
+(id)metadataTrackWithStillImageDimensionsInLivePhotoAsset:(id)arg1 ;
+(SCD_Struct_NU6)readStillImageTimeFromVideoAsset:(id)arg1 ;
+(BOOL)readFromReader:(id)arg1 andWriteToWriter:(id)arg2 stillImageTime:(SCD_Struct_NU6)arg3 createCustomMetadata:(BOOL)arg4 geometryTransform:(id)arg5 inputSize:(CGSize)arg6 outputSize:(CGSize)arg7 progress:(id)arg8 error:(out id*)arg9 ;
+(BOOL)updateVideoMetadataAtURL:(id)arg1 withItems:(id)arg2 stillImageTime:(SCD_Struct_NU6)arg3 error:(out id*)arg4 ;
+(id)deepMutableCopyVideoComposition:(id)arg1 ;
+(id)readerOutputForAsset:(id)arg1 outputSettings:(id)arg2 videoComposition:(id)arg3 error:(out id*)arg4 ;
+(CVBufferRef)readVideoFrameAtTime:(SCD_Struct_NU6)arg1 fromAsset:(id)arg2 outputSettings:(id)arg3 videoComposition:(id)arg4 error:(out id*)arg5 ;
+(long long)videoOrientationForAssetPreferredTransform:(CGAffineTransform)arg1 ;
+(long long)videoOrientationForAsset:(id)arg1 videoComposition:(id)arg2 ;
+(SCD_Struct_NU7)naturalSizeOfTrack:(id)arg1 oriented:(BOOL)arg2 ;
+(SCD_Struct_NU7)encodedPixelSizeOfTrack:(id)arg1 oriented:(BOOL)arg2 ;
+(SCD_Struct_NU8)cleanApertureOfTrack:(id)arg1 oriented:(BOOL)arg2 ;
+(id)newPixelBufferOfSize:(SCD_Struct_NU7)arg1 format:(unsigned)arg2 ;
+(SCD_Struct_NU14)conformRange:(SCD_Struct_NU14)arg1 inRange:(SCD_Struct_NU14)arg2 ;
+(id)repeatVideoComposition:(id)arg1 count:(long long)arg2 error:(out id*)arg3 ;
+(id)repeatAudio:(id)arg1 count:(long long)arg2 error:(out id*)arg3 ;
+(id)repeatVideo:(id)arg1 count:(long long)arg2 error:(out id*)arg3 ;
+(id)videoDescription:(id)arg1 ;
+(id)videoCompositionDescription:(id)arg1 ;
+(BOOL)compositionInstructions:(id)arg1 areEqualToCompositionInstructions:(id)arg2 ;
+(id)cleanApertureVideoSettingsFor:(SCD_Struct_NU8)arg1 scale:(SCD_Struct_NU7)arg2 videoSize:(SCD_Struct_NU7)arg3 ;
@end

