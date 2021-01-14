/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class AVCameraCalibrationDataInternal, NSData;

@interface AVCameraCalibrationData : NSObject {

	AVCameraCalibrationDataInternal* _internal;

}

@property (nonatomic,readonly) SCD_Struct_AV32 intrinsicMatrix; 
@property (nonatomic,readonly) CGSize intrinsicMatrixReferenceDimensions; 
@property (nonatomic,readonly) SCD_Struct_AV33 extrinsicMatrix; 
@property (nonatomic,readonly) float pixelSize; 
@property (nonatomic,readonly) NSData * lensDistortionLookupTable; 
@property (nonatomic,readonly) NSData * inverseLensDistortionLookupTable; 
@property (nonatomic,readonly) CGPoint lensDistortionCenter; 
-(void)nu_updateDigest:(id)arg1 ;
-(id)debugDescription;
-(id)_initEmpty;
-(id)description;
-(id)cameraCalibrationDataWithExifOrientation:(unsigned)arg1 ;
-(id)initWithAuxiliaryMetadata:(CGImageMetadataRef)arg1 ;
-(SCD_Struct_AV32)intrinsicMatrix;
-(SCD_Struct_AV33)extrinsicMatrix;
-(CGSize)intrinsicMatrixReferenceDimensions;
-(NSData *)lensDistortionLookupTable;
-(NSData *)inverseLensDistortionLookupTable;
-(CGPoint)lensDistortionCenter;
-(id)cameraCalibrationDataDictionary;
-(id)_distortionLookupTableFromCoefficients:(id)arg1 distortionCenter:(CGPoint)arg2 pixelSize:(float)arg3 referenceDimensions:(CGSize)arg4 lookupTableLength:(int)arg5 ;
-(id)initWithCameraCalibrationDataDictionary:(id)arg1 error:(id*)arg2 ;
-(float)pixelSize;
-(id)initWithDepthMetadataDictionary:(id)arg1 ;
-(CGImageMetadataRef)copyAuxiliaryMetadata;
-(void)dealloc;
@end

