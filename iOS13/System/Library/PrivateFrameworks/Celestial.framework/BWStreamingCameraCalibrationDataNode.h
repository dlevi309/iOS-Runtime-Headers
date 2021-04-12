/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@class NSDictionary;

@interface BWStreamingCameraCalibrationDataNode : BWNode {

	NSDictionary* _cameraInfoByPortType;
	float _pixelSizeInMicrons;
	SCD_Struct_BW21 _lensDistortionCorrectionBasePolynomial;
	SCD_Struct_BW21 _lensDistortionCorrectionDynamicPolynomial;
	int _horizontalSensorBinningFactor;
	int _verticalSensorBinningFactor;
	int _rotationDegrees;
	BOOL _mirroringEnabled;

}

@property (assign,nonatomic) int rotationDegrees;                            //@synthesize rotationDegrees=_rotationDegrees - In the implementation block
@property (assign,nonatomic) BOOL mirroringEnabled;                          //@synthesize mirroringEnabled=_mirroringEnabled - In the implementation block
@property (assign,nonatomic) int horizontalSensorBinningFactor;              //@synthesize horizontalSensorBinningFactor=_horizontalSensorBinningFactor - In the implementation block
@property (assign,nonatomic) int verticalSensorBinningFactor;                //@synthesize verticalSensorBinningFactor=_verticalSensorBinningFactor - In the implementation block
+(void)initialize;
-(void)dealloc;
-(id)nodeType;
-(void)setMirroringEnabled:(BOOL)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(int)_getLensDistortionCenterWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 referenceDimensions:(CGSize)arg2 distortionCenterOut:(CGPoint*)arg3 ;
-(int)_getDistortionCoefficientsWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 lensDistortionCoefficientsOut:(id*)arg2 inverseLensDistortionCoefficientsOut:(id*)arg3 ;
-(id)_cameraCalibrationDataDictionaryFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 portType:(id)arg2 ;
-(id)initWithCameraInfoByPortType:(id)arg1 ;
-(int)rotationDegrees;
-(void)setRotationDegrees:(int)arg1 ;
-(BOOL)mirroringEnabled;
-(int)horizontalSensorBinningFactor;
-(void)setHorizontalSensorBinningFactor:(int)arg1 ;
-(int)verticalSensorBinningFactor;
-(void)setVerticalSensorBinningFactor:(int)arg1 ;
@end

