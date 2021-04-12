/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoServices.framework/CloudPhotoServices
*/

#import <libobjc.A.dylib/CPLDerivativeGenerator.h>

@interface CloudPhotoServices : NSObject <CPLDerivativeGenerator>
+(void)initialize;
+(id)workQueue;
+(void)resizeImageAtURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(BOOL)isMovieUTI:(id)arg1 ;
+(void)generateFullSizeJPEGIfNecessaryFromInputResource:(id)arg1 destinationDirectory:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)resizeImageAtURL:(id)arg1 destinationURL:(id)arg2 maximumPixelCount:(long long)arg3 bakeInOrientation:(BOOL)arg4 colorOutput:(long long)arg5 completionHandler:(/*^block*/id)arg6 ;
+(BOOL)shouldGenerateVideoDerivativeForAVAsset:(id)arg1 forResourceType:(unsigned long long)arg2 adjusted:(BOOL)arg3 ;
+(unsigned)videoCodecFourCharCodeNumberForAVAsset:(id)arg1 ;
+(id)transcodeVideoAtURL:(id)arg1 withAdjustments:(id)arg2 destinationURL:(id)arg3 options:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
+(void)generatePosterFrameForVideoAtURL:(id)arg1 maximumPixelCount:(long long)arg2 destinationURL:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(id)generateGIFForVideoAtURL:(id)arg1 destinationURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(BOOL)canGenerateImageDerivativesFromUTI:(id)arg1 ;
+(void)generateDerivativeResourcesFromInputResource:(id)arg1 withAdjustments:(id)arg2 destinationDirectory:(id)arg3 derivativesFilter:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
+(BOOL)isUnsupportedOriginalFormatError:(id)arg1 ;
+(long long)paMediaConversionColorSpaceForCloudPhotoDerivativeColorOutput:(long long)arg1 ;
+(void)generateDerivativeResourcesFromInputResource:(id)arg1 withAdjustments:(id)arg2 destinationDirectory:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)_generateImageDerivativeResourcesFromInputResource:(id)arg1 destinationDirectory:(id)arg2 isAdjusted:(BOOL)arg3 derivativesFilter:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
+(unsigned long long)_bestImageResourceTypeForPixelCount:(long long)arg1 ;
+(id)_filenameForResourceWithItemScopedIdentifier:(id)arg1 resourceType:(unsigned long long)arg2 extension:(id)arg3 ;
+(void)_createDerivativeResourcesFromInputURL:(id)arg1 resourceTypes:(id)arg2 withItemScopedIdentifier:(id)arg3 destinationDirectory:(id)arg4 outputResources:(id)arg5 convertToSRGB:(BOOL)arg6 ;
+(id)derivativeImageResourceTypeIdentifierForResourceType:(unsigned long long)arg1 ;
+(id)_createCPLResourceFromURL:(id)arg1 withResourceType:(unsigned long long)arg2 uniformTypeIdentifier:(id)arg3 itemScopedIdentifier:(id)arg4 ;
+(void)_createPosterFrameResourcesFromInputURL:(id)arg1 withItemScopedIdentifier:(id)arg2 includeDerivative:(/*^block*/id)arg3 destinationDirectory:(id)arg4 outputResources:(id)arg5 ;
+(id)_extractVideoMetadataResourceFrom:(id)arg1 destinationDirectory:(id)arg2 ;
+(void)_generateVideoDerivativeResourcesFromInputResource:(id)arg1 withCPLAdjustments:(id)arg2 destinationDirectory:(id)arg3 derivativesFilter:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
+(BOOL)_shouldGenerateLargeVideoDerivativeForAVAsset:(id)arg1 ;
+(void)_createVideoResourcesFromInputURL:(id)arg1 withItemScopedIdentifier:(id)arg2 videoAdjustments:(id)arg3 resourceType:(unsigned long long)arg4 forIris:(BOOL)arg5 destinationDirectory:(id)arg6 outputResources:(id)arg7 ;
+(id)_imageServiceClient;
+(id)_videoServiceClient;
@end

