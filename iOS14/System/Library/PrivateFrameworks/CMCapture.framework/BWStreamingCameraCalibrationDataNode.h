/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@class NSDictionary;

@interface BWStreamingCameraCalibrationDataNode : BWNode {

	NSDictionary* _cameraInfoByPortType;
	float _pixelSizeInMicrons;
	SCD_Struct_BW97 _lensDistortionCorrectionBasePolynomial;
	SCD_Struct_BW97 _lensDistortionCorrectionDynamicPolynomial;
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
-(int)rotationDegrees;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)setMirroringEnabled:(BOOL)arg1 ;
-(id)nodeType;
-(id)nodeSubType;
-(BOOL)mirroringEnabled;
-(int)verticalSensorBinningFactor;
-(void)setHorizontalSensorBinningFactor:(int)arg1 ;
-(void)setVerticalSensorBinningFactor:(int)arg1 ;
-(void)setRotationDegrees:(int)arg1 ;
-(int)horizontalSensorBinningFactor;
-(id)initWithCameraInfoByPortType:(id)arg1 ;
-(void)dealloc;
-(int)_getLensDistortionCenterWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 referenceDimensions:(CGSize)arg2 distortionCenterOut:(CGPoint*)arg3 ;
-(int)_getDistortionCoefficientsWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 lensDistortionCoefficientsOut:(id*)arg2 inverseLensDistortionCoefficientsOut:(id*)arg3 ;
-(id)_cameraCalibrationDataDictionaryFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 portType:(id)arg2 ;
@end

