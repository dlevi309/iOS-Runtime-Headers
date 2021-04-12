/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/


#import <AppleDepth/AppleDepth-Structs.h>
@interface ADUtils : NSObject
+(long long)postProcessWithDepth:(CVBufferRef)arg1 confidence:(CVBufferRef)arg2 normals:(CVBufferRef)arg3 depthOutput:(CVBufferRef)arg4 confidenceOutput:(CVBufferRef)arg5 normalsOutput:(CVBufferRef)arg6 normalsRotation:(long long)arg7 depthUnitsType:(unsigned long long)arg8 inverse:(BOOL)arg9 ;
+(unsigned long long)layoutForSize:(CGSize)arg1 srcOrientation:(unsigned)arg2 dstOrientation:(unsigned)arg3 ;
+(void)updatePixelBufferAllocationWithNewSize:(CGSize)arg1 pixelFormat:(unsigned)arg2 pixelBuffer:(_CVBuffer*)arg3 ;
+(long long)scaleConvertRotateImage:(CVBufferRef)arg1 rotateBy:(unsigned char)arg2 cropBy:(CGRect)arg3 scaleInto:(CVBufferRef)arg4 intermediateScalingBuffer:(_CVBuffer*)arg5 intermediateRotatingBuffer:(_CVBuffer*)arg6 ;
+(long long)copyModifyPixelBuffer:(CVBufferRef)arg1 output:(CVBufferRef)arg2 multiplicationFactor:(float)arg3 inverse:(BOOL)arg4 zeroEdgesThick:(int)arg5 ;
+(long long)copyModifyNormalsPixelBuffer:(CVBufferRef)arg1 output:(CVBufferRef)arg2 normalsRotation:(long long)arg3 ;
+(long long)warpAndFuseWithCurrDepth:(CVBufferRef)arg1 prevDepth:(CVBufferRef)arg2 currNormals:(CVBufferRef)arg3 prevNormals:(CVBufferRef)arg4 opticalFlow:(CVBufferRef)arg5 alphaMap:(CVBufferRef)arg6 depthUnitsType:(unsigned long long)arg7 depthOutput:(CVBufferRef)arg8 normalsOutput:(CVBufferRef)arg9 ;
@end

