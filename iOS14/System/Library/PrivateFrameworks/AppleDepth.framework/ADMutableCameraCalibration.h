/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/

#import <AppleDepth/AppleDepth-Structs.h>
#import <AppleDepth/ADCameraCalibration.h>

@interface ADMutableCameraCalibration : ADCameraCalibration

@property (assign,nonatomic) SCD_Struct_AD22 intrinsicMatrix; 
@property (assign,nonatomic) CGSize referenceDimensions; 
@property (assign,nonatomic) SCD_Struct_AD1 cameraToPlatformTransform; 
@property (assign,nonatomic) float pixelSize; 
@property (nonatomic,retain) id<ADLensDistortionModel> distortionModel; 
-(BOOL)scale:(CGSize)arg1 ;
-(void)crop:(CGRect)arg1 ;
-(void)setPixelSize:(float)arg1 ;
-(void)setIntrinsicMatrix:(SCD_Struct_AD22)arg1 ;
-(void)setReferenceDimensions:(CGSize)arg1 ;
-(void)setCameraToPlatformTransform:(SCD_Struct_AD1)arg1 ;
-(void)setDistortionModel:(id<ADLensDistortionModel>)arg1 ;
-(void)centerCrop:(CGSize)arg1 ;
-(BOOL)adjustForImageRotation:(long long)arg1 ;
@end

