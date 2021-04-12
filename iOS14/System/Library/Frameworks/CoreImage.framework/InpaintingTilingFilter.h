/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/


#import <CoreImage/CoreImage-Structs.h>
@interface InpaintingTilingFilter : NSObject
+(BOOL)isMaskNarrowDiagonal:(id)arg1 maskBoundingBox:(CGRect)arg2 expandedMaskBoundingBox:(CGRect)arg3 maxDiagonalMaskEdgeSize:(int)arg4 maxRelativeMaskAreaSize:(float)arg5 ;
+(id)performInpaintingTilingPipelineOnImage:(id)arg1 usingMask:(id)arg2 boundingBox:(CGRect)arg3 additionalParameters:(id)arg4 espressoResources:(id)arg5 executionContext:(id)arg6 ;
+(double)computeDistanceMultiplierForMask:(id)arg1 andTileSize:(int)arg2 ;
+(BOOL)isMaskRelativeAreaTooLargeForTiling:(id)arg1 maskBoundingBox:(CGRect)arg2 expandedMaskBoundingBox:(CGRect)arg3 andMaxRelativeAreaSize:(double)arg4 ;
+(void)computeTileSize:(int*)arg1 andMaxDistanceBetweenTiles:(double*)arg2 forExpandedMaskBBox:(CGRect)arg3 ;
+(id)computeTileCentersForNarrowDiagonalMask:(id)arg1 tileSize:(int)arg2 maxBaseDistanceBetweenPoints:(int)arg3 maxRelativeMaskAreaSize:(float)arg4 ;
+(BOOL)initializeBoundaryPreservingTile;
+(BOOL)isMaskSmallOrElongated:(id)arg1 maskBoundingBox:(CGRect)arg2 expandedMaskBoundingBox:(CGRect)arg3 maxElogatedMaskEdgeSize:(int)arg4 ;
@end

