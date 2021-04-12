/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/JasperDepth.framework/JasperDepth
*/

#import <JasperDepth/JasperDepth-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class ADMutableCameraCalibration, NSData;

@interface JDCameraCalibrationData : NSObject <NSCopying, NSMutableCopying> {

	ADMutableCameraCalibration* _internal;

}

@property (nonatomic,readonly) SCD_Struct_JD22 intrinsicMatrix; 
@property (nonatomic,readonly) CGSize referenceDimensions; 
@property (nonatomic,readonly) SCD_Struct_JD23 cameraToPlatformTransform; 
@property (nonatomic,readonly) float pixelSize; 
@property (nonatomic,readonly) int distortionModel; 
@property (nonatomic,readonly) NSData * distortedRadii; 
@property (nonatomic,readonly) NSData * undistortedRadii; 
@property (nonatomic,readonly) CGPoint lensDistortionCenter; 
@property (nonatomic,readonly) const JDGDCPolynomials* distortionPolynomials; 
+(id)makeWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_JD22)intrinsicMatrix;
-(CGPoint)lensDistortionCenter;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)pixelSize;
-(int)distortionModel;
-(id)internalCalib;
-(CGSize)referenceDimensions;
-(SCD_Struct_JD23)cameraToPlatformTransform;
-(NSData *)distortedRadii;
-(NSData *)undistortedRadii;
-(const JDGDCPolynomials*)distortionPolynomials;
-(SCD_Struct_JD23)getTransformationTo:(id)arg1 ;
-(SCD_Struct_JD23)getCameraToPlatformForTransformation:(SCD_Struct_JD23)arg1 ;
-(id)getInternalCalib;
@end

