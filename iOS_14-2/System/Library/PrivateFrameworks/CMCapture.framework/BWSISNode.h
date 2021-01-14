/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@class NSDictionary, NSArray, FigCaptureStillImageSettings;

@interface BWSISNode : BWNode {

	/*function pointer*/void* _createSampleBufferProcessorFunction;
	OpaqueFigSampleBufferProcessorRef _sampleBufferProcessor;
	NSDictionary* _cameraTuningDictionary;
	NSDictionary* _sensorIDDictionary;
	NSDictionary* _noiseModelParamsDictionary;
	NSDictionary* _fusionParamsDictionary;
	int _fusionScheme;
	BOOL _alwaysRequestsPreBracketedEV0;
	BOOL _allowExperimentalOverrides;
	int _lensShadingCorrectionMode;
	int _maxIntegrationTimeLimitMsec;
	float _bracketGainCap;
	NSArray* _exposureValues;
	NSArray* _afWindowParamsArray;
	int _sisBracketCount;
	NSArray* _oisExposureDurationTypes;
	int _oisBracketCount;
	FigCaptureStillImageSettings* _currentCaptureSettings;
	BOOL _preBracketedFrameReceived;
	int _numberFramesReceived;
	int _lastFusionTypeUsed;
	BOOL _livePhotoSupported;
	BOOL _OISSupported;
	BOOL _allowAllocationsAtPrepareTime;

}
+(void)initialize;
-(int)_setupSampleBufferProcessor;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(id)nodeType;
-(id)nodeSubType;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(BOOL)alwaysRequestsPreBracketedEV0;
-(BOOL)allowAllocationsAtPrepareTime;
-(int)_unpackSISOptions;
-(BOOL)livePhotoSupported;
-(id)initWithCameraTuningDictionary:(id)arg1 sensorIDDictionary:(id)arg2 fusionScheme:(int)arg3 ;
-(BOOL)OISSupported;
-(void)setLivePhotoSupported:(BOOL)arg1 ;
-(void)_sampleBufferProcessorOutputReady:(int)arg1 sampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)setOISSupported:(BOOL)arg1 ;
-(id)_initWithCameraTuningDictionary:(id)arg1 sensorIDDictionary:(id)arg2 sbpCreationFunction:(/*function pointer*/void*)arg3 fusionScheme:(int)arg4 allowExperimentalOverrides:(BOOL)arg5 ;
-(void)_clearCaptureRequestState;
-(BOOL)attachesInputBracketToOutputSampleBuffer;
-(void)setAttachesInputBracketToOutputSampleBuffer:(BOOL)arg1 ;
-(void)setAlwaysRequestsPreBracketedEV0:(BOOL)arg1 ;
-(void)dealloc;
-(void)setAllowAllocationsAtPrepareTime:(BOOL)arg1 ;
@end

