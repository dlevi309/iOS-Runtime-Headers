/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVCameraCalibrationDataInternal, NSData;

@interface AVCameraCalibrationData : NSObject {

	AVCameraCalibrationDataInternal* _internal;

}

@property (nonatomic,readonly) SCD_Struct_AV67 intrinsicMatrix; 
@property (nonatomic,readonly) CGSize intrinsicMatrixReferenceDimensions; 
@property (nonatomic,readonly) SCD_Struct_AV68 extrinsicMatrix; 
@property (nonatomic,readonly) float pixelSize; 
@property (nonatomic,readonly) NSData * lensDistortionLookupTable; 
@property (nonatomic,readonly) NSData * inverseLensDistortionLookupTable; 
@property (nonatomic,readonly) CGPoint lensDistortionCenter; 
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(SCD_Struct_AV67)intrinsicMatrix;
-(CGSize)intrinsicMatrixReferenceDimensions;
-(NSData *)lensDistortionLookupTable;
-(NSData *)inverseLensDistortionLookupTable;
-(CGPoint)lensDistortionCenter;
-(float)pixelSize;
-(CGImageMetadataRef)copyAuxiliaryMetadata;
-(SCD_Struct_AV68)extrinsicMatrix;
-(id)cameraCalibrationDataDictionary;
-(id)_distortionLookupTableFromCoefficients:(id)arg1 distortionCenter:(CGPoint)arg2 pixelSize:(float)arg3 referenceDimensions:(CGSize)arg4 lookupTableLength:(int)arg5 ;
-(id)initWithDepthMetadataDictionary:(id)arg1 ;
-(id)_initEmpty;
-(id)initWithCameraCalibrationDataDictionary:(id)arg1 error:(id*)arg2 ;
-(id)initWithAuxiliaryMetadata:(CGImageMetadataRef)arg1 ;
-(id)cameraCalibrationDataWithExifOrientation:(unsigned)arg1 ;
@end

