/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VisionKit.framework/VisionKit
*/


@interface ICDocCamImageFilters : NSObject
+(id)perspectiveCorrectedImageFromImage:(id)arg1 normalizedImageQuad:(id)arg2 ;
+(id)filteredImage:(id)arg1 imageFilterType:(short)arg2 ;
+(id)filteredImage:(id)arg1 orientation:(long long)arg2 imageFilterType:(short)arg3 ;
+(id)imageWithRGBColorspaceFromImage:(id)arg1 ;
+(id)localizedImageFilterNameForType:(short)arg1 ;
+(id)sharedCoreImageContext;
+(id)nonLocalizedImageFilterNameForType:(short)arg1 ;
+(id)imageFilterNames;
+(id)nonLocalizedImageFilterNames;
+(short)imageFilterTypeFromName:(id)arg1 ;
+(id)convertImageToGrayScale:(id)arg1 ;
+(id)bradleyAdaptiveThreshold:(id)arg1 ;
+(id)colorDocument:(id)arg1 orientation:(long long)arg2 ;
+(id)grayscaleDocument:(id)arg1 orientation:(long long)arg2 ;
+(id)bradleyAdaptiveThreshold:(id)arg1 orientation:(long long)arg2 ;
+(id)whiteboardFilter:(id)arg1 orientation:(long long)arg2 ;
+(id)perspectiveCorrectedCIImageFromCIImage:(id)arg1 imageQuad:(id)arg2 ;
+(id)perspectiveCorrectedImageFromImage:(id)arg1 imageQuad:(id)arg2 ;
+(short)imageFilterTypeFromNonLocalizedName:(id)arg1 ;
+(id)localizedImageFilterNameForName:(id)arg1 ;
+(id)whiteboardAndSaturation:(id)arg1 orientation:(long long)arg2 ;
+(id)grayscale:(id)arg1 orientation:(long long)arg2 ;
+(id)bradleyAdaptiveThresholdWithBlur:(id)arg1 orientation:(long long)arg2 ;
@end

