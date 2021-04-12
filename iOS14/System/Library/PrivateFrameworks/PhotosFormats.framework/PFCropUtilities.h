/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
*/


#import <PhotosFormats/PhotosFormats-Structs.h>
@interface PFCropUtilities : NSObject
+(double)_rectDimensionOffset:(CGRect)arg1 insideRect:(CGRect)arg2 forEdge:(unsigned)arg3 ;
+(CGRect)_interpolationV2AdjustedCrop:(CGRect)arg1 toFocusRegion:(CGRect)arg2 withFullsizeRect:(CGRect)arg3 andImportantRect:(CGRect)arg4 ;
+(CGSize)_interpolationCropSizeForRatio:(double)arg1 andZoom:(double)arg2 forImageSize:(CGSize)arg3 ;
+(double)_rectDimensionSize:(CGRect)arg1 forEdge:(unsigned)arg2 ;
+(CGPoint)_translationToIncludeRect:(CGRect)arg1 insideRect:(CGRect)arg2 ;
+(CGRect)_interpolationCropToSize:(CGSize)arg1 withinRect:(CGRect)arg2 withPreferredRect:(CGRect)arg3 andAcceptableRect:(CGRect)arg4 outputScore:(double*)arg5 ;
+(double)_interpolationFactorFor:(double)arg1 between:(double)arg2 and:(double)arg3 ;
+(double)_interpolationV2ScoreForCrop:(CGRect)arg1 withFullsizeRect:(CGRect)arg2 andPreferredRect:(CGRect)arg3 andAcceptableRect:(CGRect)arg4 ;
+(CGRect)_interpolationV2CropForAspectRatio:(double)arg1 withFocusRegion:(CGRect)arg2 andAcceptableRect:(CGRect)arg3 andPreferredRect:(CGRect)arg4 andImageRect:(CGRect)arg5 outputCropScore:(double*)arg6 ;
+(void)_flipRect:(CGRect*)arg1 withinContentSize:(CGSize)arg2 ;
+(double)_interpolationV2ScoreAlongEdge:(unsigned)arg1 forCrop:(CGRect)arg2 withFullsizeRect:(CGRect)arg3 andPreferredRect:(CGRect)arg4 andAcceptableRect:(CGRect)arg5 ;
+(double)_interpolationFocusRegionMaxSize:(CGRect)arg1 forEdge:(unsigned)arg2 andImageSize:(CGSize)arg3 withPreferredRect:(CGRect)arg4 withAcceptableRect:(CGRect)arg5 ;
+(CGRect)bestCropRectForAspectRatio:(double)arg1 verticalContentMode:(long long)arg2 cropMode:(long long)arg3 sourcePixelWidth:(unsigned long long)arg4 sourcePixelHeight:(unsigned long long)arg5 sourcePreferredCropRectNormalized:(CGRect)arg6 sourceAcceptableCropRectNormalized:(CGRect)arg7 sourceFaceAreaRectNormalized:(CGRect)arg8 ;
+(CGRect)_interpolationCropForAspectRatio:(double)arg1 acceptableRect:(CGRect)arg2 andPreferredRect:(CGRect)arg3 andImageRect:(CGRect)arg4 outputCropScore:(double*)arg5 ;
+(BOOL)_rectIsValid:(CGRect)arg1 ;
+(CGRect)bestCropRectV2ForAspectRatio:(double)arg1 withFocusRegion:(CGRect)arg2 sourcePixelWidth:(unsigned long long)arg3 sourcePixelHeight:(unsigned long long)arg4 sourcePreferredCropRectNormalized:(CGRect)arg5 sourceAcceptableCropRectNormalized:(CGRect)arg6 sourceFaceAreaRectNormalized:(CGRect)arg7 outputCropScore:(double*)arg8 ;
+(CGRect)_curatedLibraryAdjustedRectWithFaceAreaRect:(CGRect)arg1 proposedCropRect:(CGRect)arg2 assetRect:(CGRect)arg3 verticalContentMode:(long long)arg4 ;
+(double)_interpolationWithFocusRegion:(CGRect)arg1 forEdge:(unsigned)arg2 withRect:(CGRect)arg3 inMaxRect:(CGRect)arg4 ;
+(CGRect)bestCropRectV2ForAspectRatio:(double)arg1 withFocusRegion:(CGRect)arg2 sourcePixelWidth:(unsigned long long)arg3 sourcePixelHeight:(unsigned long long)arg4 sourcePreferredCropRectNormalized:(CGRect)arg5 sourceAcceptableCropRectNormalized:(CGRect)arg6 sourceFaceAreaRectNormalized:(CGRect)arg7 ;
+(CGRect)_faceAreaRectWithPadding:(CGRect)arg1 ;
+(CGSize)_interpolationV2MaxCropSizeForAspectRatio:(double)arg1 andZoom:(double)arg2 withFocusRegion:(CGRect)arg3 forImageSize:(CGSize)arg4 withImportantRect:(CGRect)arg5 ;
+(double)_interpolationWithFactor:(double)arg1 between:(double)arg2 and:(double)arg3 ;
+(double)_interpolationV2ScoreForFocusRegion:(CGRect)arg1 insideCropRect:(CGRect)arg2 withImportantRect:(CGRect)arg3 ;
+(CGRect)_curatedLibraryCropForAspectRatio:(double)arg1 verticalContentMode:(long long)arg2 cropMode:(long long)arg3 sourcePixelWidth:(unsigned long long)arg4 sourcePixelHeight:(unsigned long long)arg5 sourcePreferredCropRectNormalized:(CGRect)arg6 sourceAcceptableCropRectNormalized:(CGRect)arg7 sourceFaceAreaRectNormalized:(CGRect)arg8 ;
+(double)_interpolationWithFocusRegion:(CGRect)arg1 forEdge:(unsigned)arg2 betweenRect:(CGRect)arg3 andRect:(CGRect)arg4 inMaxRect:(CGRect)arg5 ;
@end

