/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/JasperDepth.framework/JasperDepth
*/


#import <JasperDepth/JasperDepth-Structs.h>
@class NSData;

@interface JDCameraCalibrationData : NSObject {

	NSData* _distortedRadii;
	NSData* _undistortedRadii;
	shared_ptr<jasper::CameraCalibrationData>* _internal;

}

@property (nonatomic,readonly) SCD_Struct_JD24 intrinsicMatrix; 
@property (nonatomic,readonly) CGSize referenceDimensions; 
@property (nonatomic,readonly) SCD_Struct_JD25 cameraToPlatformTransform; 
@property (nonatomic,readonly) float pixelSize; 
@property (nonatomic,readonly) int distortionModel; 
@property (nonatomic,readonly) NSData * distortedRadii; 
@property (nonatomic,readonly) NSData * undistortedRadii; 
@property (nonatomic,readonly) CGPoint lensDistortionCenter; 
@property (nonatomic,readonly) JDGDCPolynomials* distortionPolynomials; 
+(id)makeWithDictionary:(id)arg1 ;
-(id)init;
-(id)dictionaryRepresentation;
-(SCD_Struct_JD24)intrinsicMatrix;
-(CGPoint)lensDistortionCenter;
-(shared_ptr<jasper::CameraCalibrationData>*)internal;
-(float)pixelSize;
-(id)initWithInternal:(shared_ptr<jasper::CameraCalibrationData>*)arg1 ;
-(SCD_Struct_JD25)cameraToPlatformTransform;
-(NSData *)distortedRadii;
-(NSData *)undistortedRadii;
-(CGSize)referenceDimensions;
-(SCD_Struct_JD25)getTransformationTo:(id)arg1 ;
-(JDGDCPolynomials*)distortionPolynomials;
-(int)distortionModel;
-(SCD_Struct_JD25)getCameraToPlatformForTransformation:(SCD_Struct_JD25)arg1 ;
@end

