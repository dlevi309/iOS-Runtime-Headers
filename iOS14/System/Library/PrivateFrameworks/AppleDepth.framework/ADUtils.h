/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/


#import <AppleDepth/AppleDepth-Structs.h>
@interface ADUtils : NSObject
+(long long)postProcessDepth:(CVBufferRef)arg1 depthOutput:(CVBufferRef)arg2 depthUnitsType:(unsigned long long)arg3 inverse:(BOOL)arg4 ;
+(long long)scaleConvertRotateImage:(CVBufferRef)arg1 rotateBy:(unsigned char)arg2 cropBy:(CGRect)arg3 scaleInto:(CVBufferRef)arg4 intermediateScalingBuffer:(_CVBuffer*)arg5 intermediateRotatingBuffer:(_CVBuffer*)arg6 ;
+(long long)projectPointCloud:(id)arg1 croppedBy:(CGRect)arg2 rotatedBy:(long long)arg3 scaledInto:(CVBufferRef)arg4 ;
+(long long)projectPointCloud:(id)arg1 filteredBy:(id)arg2 croppedBy:(CGRect)arg3 rotatedBy:(long long)arg4 scaledInto:(CVBufferRef)arg5 ;
+(SCD_Struct_AD22)calcRotationMatrix:;
+(unsigned long long)layoutForSize:(CGSize)arg1 inputOrientation:(unsigned)arg2 rotationPreference:(unsigned long long)arg3 ;
+(void)updatePixelBufferAllocationWithNewSize:(CGSize)arg1 pixelFormat:(unsigned)arg2 pixelBuffer:(_CVBuffer*)arg3 ;
+(long long)warpPreviousDepth:(CVBufferRef)arg1 intoCurrentDepth:(CVBufferRef)arg2 previousConfidence:(CVBufferRef)arg3 intoCurrentConfidence:(CVBufferRef)arg4 previousNormals:(CVBufferRef)arg5 intoCurrentNormals:(CVBufferRef)arg6 usingOpticalFlow:(CVBufferRef)arg7 ;
+(long long)convertToLevelsConfidence:(CVBufferRef)arg1 confidenceOutput:(CVBufferRef)arg2 confidenceLowThreshold:(float)arg3 confidenceHighThreshold:(float)arg4 inverseThresholds:(BOOL)arg5 zeroEdgesThick:(int)arg6 ;
+(long long)copyModifyNormalsPixelBuffer:(CVBufferRef)arg1 output:(CVBufferRef)arg2 normalsRotation:(long long)arg3 ;
+(long long)postProcessConfidence:(CVBufferRef)arg1 confidenceOutput:(CVBufferRef)arg2 rawConfidenceUnits:(unsigned long long)arg3 outConfidenceUnits:(unsigned long long)arg4 outDepthUnits:(unsigned long long)arg5 confidenceLowThreshold:(float)arg6 confidenceHighThreshold:(float)arg7 ;
+(long long)postProcessNormals:(CVBufferRef)arg1 normalsOutput:(CVBufferRef)arg2 normalsRotation:(long long)arg3 ;
+(long long)warpMap:(CVBufferRef)arg1 toOutput:(CVBufferRef)arg2 usingOpticalFlow:(CVBufferRef)arg3 ;
+(long long)fuseCurrentDepthAndConfidenceMaps:(CVBufferRef)arg1 previousDepth:(CVBufferRef)arg2 currentConfidence:(CVBufferRef)arg3 previousConfidence:(CVBufferRef)arg4 outputDepth:(CVBufferRef)arg5 outputConfidence:(CVBufferRef)arg6 defaultAlpha:(float)arg7 depthMaxDiff:(float)arg8 ;
+(long long)fuseCurrentMap:(CVBufferRef)arg1 previousMap:(CVBufferRef)arg2 intoOutputMap:(CVBufferRef)arg3 usingAlpha:(CVBufferRef)arg4 defaultAlpha:(float)arg5 diffThreshold:(float)arg6 ;
+(long long)projectPointCloud:(id)arg1 filteredBy:(id)arg2 croppedBy:(CGRect)arg3 rotatedBy:(long long)arg4 scaledMergingWith:(CVBufferRef)arg5 ;
+(long long)postProcessWithDepth:(CVBufferRef)arg1 confidence:(CVBufferRef)arg2 normals:(CVBufferRef)arg3 depthOutput:(CVBufferRef)arg4 confidenceOutput:(CVBufferRef)arg5 normalsOutput:(CVBufferRef)arg6 normalsRotation:(long long)arg7 depthUnitsType:(unsigned long long)arg8 inverse:(BOOL)arg9 rawConfidenceUnits:(unsigned long long)arg10 outConfidenceUnits:(unsigned long long)arg11 confidenceLowThreshold:(float)arg12 confidenceHighThreshold:(float)arg13 ;
+(long long)warpAndFuseWithCurrDepth:(CVBufferRef)arg1 prevDepth:(CVBufferRef)arg2 currNormals:(CVBufferRef)arg3 prevNormals:(CVBufferRef)arg4 opticalFlow:(CVBufferRef)arg5 alphaMap:(CVBufferRef)arg6 depthUnitsType:(unsigned long long)arg7 defaultAlpha:(float)arg8 depthOutput:(CVBufferRef)arg9 normalsOutput:(CVBufferRef)arg10 ;
+(long long)filterInvalidsFromFloatImage:(CVBufferRef)arg1 minValue:(float)arg2 maxValue:(float)arg3 ;
+(2)calcRotationAngle:(SCD_Struct_AD22*)arg1 ;
+(SCD_Struct_AD22)addAnglesToRotation:(SCD_Struct_AD22)arg1 ;
+(long long)fuseCurrentDepth:(CVBufferRef)arg1 previousDepth:(CVBufferRef)arg2 intoOutputDepth:(CVBufferRef)arg3 currentConfidence:(CVBufferRef)arg4 previousConfidence:(CVBufferRef)arg5 intoOutputConfidence:(CVBufferRef)arg6 currentNormals:(CVBufferRef)arg7 previousNormals:(CVBufferRef)arg8 intoOutputNormals:(CVBufferRef)arg9 usingAlpha:(CVBufferRef)arg10 defaultAlpha:(float)arg11 depthUnits:(unsigned long long)arg12 confidenceUnits:(unsigned long long)arg13 ;
@end
