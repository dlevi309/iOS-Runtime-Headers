/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class NSData, NSDictionary;

@interface AVCameraCalibrationDataInternal : NSObject {

	SCD_Struct_AV32 intrinsicMatrix;
	CGSize intrinsicMatrixReferenceDimensions;
	SCD_Struct_AV33 extrinsicMatrix;
	float pixelSize;
	NSData* lensDistortionCoefficients;
	NSData* inverseLensDistortionCoefficients;
	CGPoint lensDistortionCenter;
	NSData* lensDistortionLookupTable;
	NSData* inverseLensDistortionLookupTable;
	NSDictionary* cameraCalibrationDataDictionary;

}
@end

