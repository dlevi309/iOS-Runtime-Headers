/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
*/


#import <MediaConversionService/MediaConversionService-Structs.h>
@interface PAMediaConversionServiceImagingUtilities : NSObject
+(BOOL)generatePosterFrameExportForVideoURL:(id)arg1 outputData:(id*)arg2 maximumSize:(CGSize)arg3 error:(id*)arg4 ;
+(id)imageDataForPassthroughConversionForSourceURL:(id)arg1 metadataPolicy:(id)arg2 outResultImageSize:(CGSize*)arg3 ;
+(id)imagePropertiesForFileAtURL:(id)arg1 ;
+(BOOL)generatePosterFrameExportForVideoURL:(id)arg1 destinationURL:(id)arg2 maximumSize:(CGSize)arg3 error:(id*)arg4 ;
+(BOOL)_generatePosterFrameExportForVideoURL:(id)arg1 imageDestinationToAddToAndFinalize:(CGImageDestinationRef)arg2 maximumSize:(CGSize)arg3 error:(id*)arg4 ;
@end

