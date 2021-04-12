/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/JasperDepth.framework/JasperDepth
*/

#import <JasperDepth/JasperDepth-Structs.h>
#import <JasperDepth/JDMutableCameraCalibrationData.h>

@interface JDDynamicDistortionCameraCalibrationData : JDMutableCameraCalibrationData {

	JDGDCPolynomials _gdcBase;
	JDGDCPolynomials _gdcDynamic;
	float _rawSensorPixelSize;

}
-(BOOL)updateForFrameWithDimensions:(CGSize)arg1 metadataDictionary:(id)arg2 ;
-(id)initWithPixelSize:(float)arg1 gdcModel:(id)arg2 cameraToPlatformTransform:(SCD_Struct_JD25)arg3 ;
-(BOOL)pointFromMetadataField:(id)arg1 key:(id)arg2 point:(CGPoint*)arg3 ;
-(BOOL)rectFromMetadataField:(id)arg1 key:(id)arg2 rect:(CGRect*)arg3 ;
-(void)updateGDCCoefficients:(float)arg1 ;
@end

