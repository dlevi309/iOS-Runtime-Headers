/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
*/


#import <MediaConversionService/MediaConversionService-Structs.h>
@interface PAMediaConversionServiceImagingUtilities : NSObject
+(BOOL)generatePosterFrameExportForVideoURL:(id)arg1 outputData:(id*)arg2 maximumSize:(CGSize)arg3 outputFileType:(id)arg4 error:(id*)arg5 ;
+(id)imageDataForPassthroughConversionForSourceURL:(id)arg1 metadataPolicy:(id)arg2 outResultImageSize:(CGSize*)arg3 ;
+(id)imagePropertiesForFileAtURL:(id)arg1 ;
+(BOOL)generatePosterFrameExportForVideoURL:(id)arg1 destinationURL:(id)arg2 maximumSize:(CGSize)arg3 outputFileType:(id)arg4 error:(id*)arg5 ;
+(BOOL)_generatePosterFrameExportForVideoURL:(id)arg1 imageDestinationToAddToAndFinalize:(CGImageDestinationRef)arg2 maximumSize:(CGSize)arg3 error:(id*)arg4 ;
@end

