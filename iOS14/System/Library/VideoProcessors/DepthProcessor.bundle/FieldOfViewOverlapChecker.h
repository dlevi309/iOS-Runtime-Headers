/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/DepthProcessor.bundle/DepthProcessor
*/


#import <DepthProcessor/DepthProcessor-Structs.h>
@interface FieldOfViewOverlapChecker : NSObject {

	SCD_Struct_Fi5 _infraredCameraIntrinsicMatrixReferenceDimensions;
	SCD_Struct_Fi5 _rgbCameraIntrinsicMatrixReferenceDimensions;
	SCD_Struct_Fi6 _extrinsicMatrixFromInfraredToRGBCamera;
	float _infraredCameraPixelSizeInMillimeter;
	float _rgbCameraPixelSizeInMillimeter;
	float _infraredCameraFocalLengthInMillimeter;
	float _rgbCameraFocalLengthInMillimeter;
	 _infraredCameraOpticalCenterPixel;
	 _rgbCameraOpticalCenterPixel;
	float _virtualZinMillimeter;

}
-(float)_upscaleUinVGAToFullRGB:(int)arg1 ;
-(float)_downscaleVfromFullRGBtoVGA:(float)arg1 ;
-(float)_upscaleVinVGAToFullRGB:(int)arg1 ;
-(float)_downscaleUfromFullRGBtoVGA:(float)arg1 ;
-(int)_getPixelCoordinateOfLineBetween:(int)arg1 And:(int)arg2 inside:(2*)arg3 At:(int)arg4 ;
-(void)_resetExpectedDepthCoordianteLimitsIn:(SCD_Struct_Fi7*)arg1 ;
-(id)initWithInfraredCameraIntrinsicMatrix:(SCD_Struct_Fi8*)arg1 infraredCameraIntrinsicMatrixReferenceDimensions:(SCD_Struct_Fi5*)arg2 infraredCameraPixelSizeInMicrons:(float)arg3 rgbCameraIntrinsicMatrix:(SCD_Struct_Fi8*)arg4 rgbCameraIntrinsicMatrixReferenceDimensions:(SCD_Struct_Fi5*)arg5 rgbCameraPixelSizeInMicrons:(float)arg6 extrinsicMatrixFromInfraredToRGBCamera:(SCD_Struct_Fi6*)arg7 ;
-(int)_pixelToPixelTransformFromIR:(2*)arg1 ;
-(int)_setCutoffCoordinatesIn:(SCD_Struct_Fi7*)arg1 withIrCornersInRgbUVPixels:(2*)arg2 ;
-(int)setExpectedDepthCoordianteLimitsIn:(SCD_Struct_Fi7*)arg1 ;
@end

