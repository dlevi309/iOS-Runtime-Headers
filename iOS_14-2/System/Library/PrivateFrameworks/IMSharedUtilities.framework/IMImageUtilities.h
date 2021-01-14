/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
@interface IMImageUtilities : NSObject
+(double)scaleFactorForThumbnailWithSize:(CGSize)arg1 constraints:(IMPreviewConstraints)arg2 targetPxSize:(CGSize)arg3 shouldScaleUpPreview:(BOOL)arg4 maxUpScale:(double)arg5 ;
+(CGSize)imageRefPxSize:(CGImageRef)arg1 ;
+(BOOL)persistPreviewToDiskCache:(CGImageRef)arg1 previewURL:(id)arg2 error:(id*)arg3 ;
+(BOOL)persistCPBitmapWithImage:(CGImageRef)arg1 url:(id)arg2 ;
+(void)sampleImageEdges:(char*)arg1 usingRect:(CGRect)arg2 forMostlyWhitePixels:(unsigned long long*)arg3 otherPixels:(unsigned long long*)arg4 bytesPerRow:(long long)arg5 ;
+(CGSize)imageSourcePxSize:(CGImageSourceRef)arg1 ;
+(CGImageRef)newThumbnailForTargetSize:(CGSize)arg1 imageSize:(CGSize)arg2 imageSource:(CGImageSourceRef)arg3 atIndex:(unsigned long long)arg4 mode:(long long)arg5 scale:(double)arg6 ;
+(CGImageRef)newThumbnailForTargetSize:(CGSize)arg1 imageSize:(CGSize)arg2 imageSource:(CGImageSourceRef)arg3 mode:(long long)arg4 scale:(double)arg5 ;
@end

