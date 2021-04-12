/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCaptureSourceFormat.h>

@class NSArray;

@interface FigCaptureSourceDepthDataFormat : FigCaptureSourceFormat

@property (readonly) SCD_Struct_BW19 dimensions; 
@property (readonly) float minSupportedFrameRate; 
@property (readonly) float maxSupportedFrameRate; 
@property (readonly) float fieldOfView; 
@property (readonly) SCD_Struct_BW19 highResStillImageDimensions; 
@property (getter=isStillImageOnlyDepthData,readonly) BOOL stillImageOnlyDepthData; 
@property (readonly) float portraitEffectsMatteMainImageDownscalingFactor; 
@property (readonly) BOOL RGBIRStereoFusionSupported; 
@property (readonly) NSArray * supportedSemanticSegmentationMatteURNs; 
-(unsigned)mediaType;
-(SCD_Struct_BW19)dimensions;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(float)maxSupportedFrameRate;
-(float)minSupportedFrameRate;
-(float)fieldOfView;
-(SCD_Struct_BW19)highResStillImageDimensions;
-(float)portraitEffectsMatteMainImageDownscalingFactor;
-(NSArray *)supportedSemanticSegmentationMatteURNs;
-(BOOL)RGBIRStereoFusionSupported;
-(SCD_Struct_BW19)depthEngineOutputDimensions;
-(id)copyWithNewPixelFormat:(unsigned)arg1 ;
-(BOOL)isStillImageOnlyDepthData;
@end

