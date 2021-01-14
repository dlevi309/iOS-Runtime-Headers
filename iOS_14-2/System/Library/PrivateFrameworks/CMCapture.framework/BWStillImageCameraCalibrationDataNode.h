/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@class NSDictionary, NSSet, BWStillImageCaptureSettings, NSMutableDictionary, FigCalibration;

@interface BWStillImageCameraCalibrationDataNode : BWNode {

	NSDictionary* _sensorConfigurationsByPortType;
	BOOL _propagatesDetectedObjects;
	NSDictionary* _baseZoomFactorsByPortType;
	NSSet* _expectedPortTypes;
	BWStillImageCaptureSettings* _captureSettings;
	int _processingMode;
	NSMutableDictionary* _inputSbufsByPortType;
	FigCalibration* _calibrationProcessor;

}
+(void)initialize;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(id)nodeType;
-(id)nodeSubType;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(id)baseZoomFactorsByPortType;
-(void)_finishPendingProcessing;
-(int)_loadAndConfigureCalibrationBundle;
-(void)_resolveProcessingMode;
-(void)_propagateDetectedObjects;
-(BOOL)_receivedExpectedInputsForCaptureRequest;
-(void)_computeCameraCalibrationDataBetweenReferenceSampleBuffer:(opaqueCMSampleBufferRef)arg1 auxiliarySampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(id)processorOptions;
-(id)_sensorConfigurationWithPortraitTuningParameters;
-(id)initWithSensorConfigurationsByPortType:(id)arg1 ;
-(void)setPropagatesDetectedObjects:(BOOL)arg1 ;
-(BOOL)propagatesDetectedObjects;
-(void)setBaseZoomFactorsByPortType:(id)arg1 ;
-(void)_clearCaptureRequestState;
-(void)dealloc;
@end

