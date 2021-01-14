/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGRect)regionOf:(int)arg1 destRect:(CGRect)arg2 userInfo:(id)arg3 ;
-(CGPoint)ReferenceensDistortionPointForPoint:(CGPoint)arg1 lookupTable:(id)arg2 distortionOpticalCenter:(CGPoint)arg3 imageSize:(CGSize)arg4 ;
-(id)outputImage;
@end

