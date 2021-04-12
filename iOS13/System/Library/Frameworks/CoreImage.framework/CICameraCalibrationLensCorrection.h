/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, AVCameraCalibrationData, NSNumber;

@interface CICameraCalibrationLensCorrection : CIFilter {

	CIImage* inputImage;
	AVCameraCalibrationData* inputAVCameraCalibrationData;
	NSNumber* inputUseInverseLookUpTable;

}
+(id)customAttributes;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)outputImage;
-(CGPoint)ReferenceensDistortionPointForPoint:(CGPoint)arg1 lookupTable:(id)arg2 distortionOpticalCenter:(CGPoint)arg3 imageSize:(CGSize)arg4 ;
-(CGRect)regionOf:(int)arg1 destRect:(CGRect)arg2 userInfo:(id)arg3 ;
@end

