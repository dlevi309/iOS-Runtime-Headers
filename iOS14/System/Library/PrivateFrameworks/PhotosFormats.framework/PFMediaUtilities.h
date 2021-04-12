/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
*/


#import <PhotosFormats/PhotosFormats-Structs.h>
@interface PFMediaUtilities : NSObject
+(BOOL)isPdfUTI:(id)arg1 ;
+(BOOL)isValidImageFileForURL:(id)arg1 ;
+(BOOL)isValidAVFileForURL:(id)arg1 ;
+(id)stringFromFourCharCode:(unsigned)arg1 ;
+(BOOL)isQuicktimeMovieUTI:(id)arg1 ;
+(BOOL)isPsdUTI:(id)arg1 ;
+(id)UTIForHFSType:(unsigned)arg1 ;
+(BOOL)isRawUTI:(id)arg1 ;
+(BOOL)embeddedJPEGSuitableForDerivatives:(id)arg1 imageProperties:(id)arg2 ;
+(id)preferredExtensionForUTI:(id)arg1 ;
+(long long)rawSourceMaximumPixelCountForBackgroundProcessing;
+(BOOL)isJpeg2000UTI:(id)arg1 ;
+(id)imagePropertiesFromImageSource:(CGImageSourceRef)arg1 ;
+(BOOL)isHeifUTI:(id)arg1 ;
+(id)resourceModelUTIForExtension:(id)arg1 ;
+(BOOL)isTiffUTI:(id)arg1 ;
+(BOOL)canLoadAssetAsRawForInteractiveEditingWithImageProperties:(id)arg1 ;
+(CGSize)maximumImageSizeFromProperties:(id)arg1 ;
+(BOOL)isPngUTI:(id)arg1 ;
+(BOOL)isValidExtension:(id)arg1 forUTI:(id)arg2 ;
+(id)UTIForURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)UTIRequiresRasterizationDPI:(id)arg1 ;
+(BOOL)isJpegUTI:(id)arg1 ;
+(BOOL)canGenerateImageDerivativesFromUTI:(id)arg1 ;
+(BOOL)isGifUTI:(id)arg1 ;
+(long long)devicePerformanceMemoryClass;
+(long long)rawSourceMaximumPixelCountForInteractiveEditing;
+(id)UTIForExtension:(id)arg1 ;
+(BOOL)isImageUTI:(id)arg1 ;
+(BOOL)isAudioUTI:(id)arg1 ;
+(id)imagePropertiesFromImageSource:(CGImageSourceRef)arg1 atIndex:(unsigned long long)arg2 ;
+(BOOL)isMovieUTI:(id)arg1 ;
+(id)mainVideoTrackForAsset:(id)arg1 ;
+(long long)defaultRasterizationDPI;
@end

