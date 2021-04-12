/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/


#import <CoreImage/CoreImage-Structs.h>
@interface InpaintingImageHelpers : NSObject
+(CGRect)expandBoundingBoxToRectangle:(CGRect)arg1 withSideExtraPercentage:(float)arg2 maxExtraSidePixels:(int)arg3 withinArea:(CGSize)arg4 roundUpSidesToClosestResolution:(id)arg5 ;
+(CGRect)expandBoundingBoxToSquare:(CGRect)arg1 withSideExtraPercentage:(float)arg2 maxExtraSidePixels:(int)arg3 withinArea:(CGSize)arg4 roundUpSidesToClosestResolution:(id)arg5 ;
+(id)compositeImage:(id)arg1 overImage:(id)arg2 ;
+(id)extractTileFromImage:(id)arg1 aroundCenterPoint:(CGPoint)arg2 tileSize:(int)arg3 ;
+(id)findEquidistantPointsOnMaskDiagonal:(id)arg1 tileSize:(int)arg2 maxDistanceBetweenPoints:(int)arg3 diagonalityDirection:(int)arg4 ;
+(id)scaleImage:(id)arg1 toSize:(CGSize)arg2 ;
+(id)moveOriginForImage:(id)arg1 to:(CGPoint)arg2 ;
+(id)multiplyImage:(id)arg1 withMask:(id)arg2 ;
+(CGRect)computeTileRectForImage:(id)arg1 aroundCenterPoint:(CGPoint)arg2 tileSize:(int)arg3 ;
+(id)blendImage:(id)arg1 withBackgroundImage:(id)arg2 usingMask:(id)arg3 andGaussianBlendRadius:(int)arg4 ;
+(id)reclampImageWith1PixBoundary:(id)arg1 ;
+(id)compositeImageNoReclamping:(id)arg1 overImage:(id)arg2 ;
+(id)compositeImageWithReclamping:(id)arg1 overImage:(id)arg2 ;
+(int)findTile1DOffsetForCenter:(int)arg1 maxBound:(int)arg2 tileSize:(int)arg3 ;
+(CGRect)expandBoundingBox:(CGRect)arg1 toWidth:(int)arg2 andHeight:(int)arg3 withinArea:(CGSize)arg4 ;
+(CGRect)expandBoundingBox:(CGRect)arg1 withSideExtraPercentage:(float)arg2 maxExtraSidePixels:(int)arg3 withinArea:(CGSize)arg4 ;
+(id)padImage:(id)arg1 toExtent:(CGRect)arg2 usingColor:(id)arg3 ;
+(double)expandDimension:(double)arg1 toOneOfTheResolutions:(id)arg2 ;
+(id)dilateMaskUsingClampingAndCropping:(id)arg1 usingRadius:(int)arg2 ;
+(id)erodeMaskUsingClampingAndCropping:(id)arg1 usingRadius:(int)arg2 ;
+(id)computePerChannelAvgPixelValueInImage:(id)arg1 onArea:(CGRect)arg2 ;
+(void)saveCIImage:(id)arg1 asPNGAt:(id)arg2 ;
+(id)scaleImage:(id)arg1 toShorterEdgeSize:(double)arg2 ;
+(id)dilateMask:(id)arg1 usingRadius:(int)arg2 ;
+(id)padMask:(id)arg1 toImageSize:(id)arg2 ;
+(id)createBGRAVImageWrapperFromCIImage:(id)arg1 ;
+(void)saveCIImage:(id)arg1 asTIFFAt:(id)arg2 ;
+(void)saveVImageWrapper:(id)arg1 asPNGAt:(id)arg2 ;
+(id)invertMask:(id)arg1 ;
+(id)thresholdMask:(id)arg1 ;
+(id)scaleImage:(id)arg1 toWidth:(double)arg2 andHeight:(double)arg3 ;
+(id)blurImage:(id)arg1 withSigma:(double)arg2 ;
+(id)blendImage:(id)arg1 withBackgroundImage:(id)arg2 usingMask:(id)arg3 ;
+(id)erodeMask:(id)arg1 usingRadius:(int)arg2 ;
+(id)absoluteDiffBetweenImage:(id)arg1 andImage:(id)arg2 ;
+(id)computePerChannelSumsOfPixelsInImage:(id)arg1 onArea:(CGRect)arg2 ;
@end

