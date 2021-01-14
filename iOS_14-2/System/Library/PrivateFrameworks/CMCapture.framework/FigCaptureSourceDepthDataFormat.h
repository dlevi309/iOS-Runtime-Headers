/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureSourceFormat.h>

@class NSArray;

@interface FigCaptureSourceDepthDataFormat : FigCaptureSourceFormat

@property (readonly) SCD_Struct_BW2 dimensions; 
@property (readonly) float minSupportedFrameRate; 
@property (readonly) float maxSupportedFrameRate; 
@property (readonly) float fieldOfView; 
@property (readonly) SCD_Struct_BW2 highResStillImageDimensions; 
@property (getter=isStillImageOnlyDepthData,readonly) BOOL stillImageOnlyDepthData; 
@property (readonly) float portraitEffectsMatteMainImageDownscalingFactor; 
@property (readonly) BOOL RGBIRStereoFusionSupported; 
@property (readonly) NSArray * supportedSemanticSegmentationMatteURNs; 
-(unsigned)mediaType;
-(float)portraitEffectsMatteMainImageDownscalingFactor;
-(NSArray *)supportedSemanticSegmentationMatteURNs;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(float)minSupportedFrameRate;
-(SCD_Struct_BW2)dimensions;
-(SCD_Struct_BW2)highResStillImageDimensions;
-(float)maxSupportedFrameRate;
-(float)fieldOfView;
-(id)copyWithNewPixelFormat:(unsigned)arg1 ;
-(BOOL)isStillImageOnlyDepthData;
-(SCD_Struct_BW2)depthEngineOutputDimensions;
-(BOOL)RGBIRStereoFusionSupported;
@end

