/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/JasperDepth.framework/JasperDepth
*/

#import <JasperDepth/JasperDepth-Structs.h>
#import <JasperDepth/JDMutableCameraCalibrationData.h>

@interface JDDynamicDistortionCameraCalibrationData : JDMutableCameraCalibrationData {

	JDGDCPolynomials _gdcBase;
	JDGDCPolynomials _gdcDynamic;
	float _rawSensorPixelSize;

}
-(id)initWithPixelSize:(float)arg1 gdcModel:(id)arg2 cameraToPlatformTransform:(SCD_Struct_JD23)arg3 ;
-(BOOL)pointFromMetadataField:(id)arg1 key:(id)arg2 point:(CGPoint*)arg3 ;
-(BOOL)rectFromMetadataField:(id)arg1 key:(id)arg2 rect:(CGRect*)arg3 ;
-(BOOL)updateForFrameWithDimensions:(CGSize)arg1 metadataDictionary:(id)arg2 ;
@end

