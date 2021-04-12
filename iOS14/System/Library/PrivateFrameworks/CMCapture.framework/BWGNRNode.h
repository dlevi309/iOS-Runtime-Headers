/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@class BWNodeOutput, NSString, NSDictionary, FigCaptureStillImageSettings, BWStillImageCaptureSettings, NSMutableDictionary, FigCapturePixelConverter;

@interface BWGNRNode : BWNode {

	BOOL _sisEnabled;
	BOOL _oisEnabled;
	BOOL _hdrEnabled;
	BOOL _processingLTMHDRFusion;
	BWNodeOutput* _bravoHDRDisparityOutput;
	/*function pointer*/void* _createSampleBufferProcessorFunction;
	OpaqueFigSampleBufferProcessorRef _sampleBufferProcessor;
	NSString* _portType;
	NSString* _sensorID;
	NSDictionary* _sensorIDDictionary;
	NSString* _telephotoPortType;
	NSString* _telephotoSensorID;
	NSDictionary* _telephotoSensorIDDictionary;
	FigCaptureStillImageSettings* _currentRequestedStillImageCaptureSettings;
	BWStillImageCaptureSettings* _currentResolvedStillImageCaptureSettings;
	int _processingType;
	BOOL _clientExpectsPreBracketFrame;
	BOOL _expectsPreBracketFrame;
	BOOL _receivedPreBracketFrame;
	unsigned _expectedFrameCount;
	unsigned _receivedFrameCount;
	BOOL _receivedAllFrames;
	int _receivedReferenceFrameBracketedCaptureSequenceNumber;
	int _gnrFusionReferenceFrameBracketedCaptureSequenceNumber;
	BOOL _processingHDREV0BracketFrame;
	int _hdrEV0BracketCaptureIdentifier;
	int _hdrDisparityBracketedCaptureSequenceNumber;
	NSMutableDictionary* _inputAttachedMedia;
	opaqueCMSampleBufferRef _collectedUnprocessedPreBracketHDR;
	FigCapturePixelConverter* _stereoFusedGNRHDRPixelConverter;
	long long _previouslyCompletedFusionSettingsID;
	BOOL _usesHDRPreBracketFrameForErrorRecoveryDownstream;
	BOOL _allowedToModifyInputBuffers;

}
+(void)initialize;
-(int)_setupSampleBufferProcessor;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(id)nodeType;
-(id)nodeSubType;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)arg1 forInput:(id)arg2 ;
-(void)_sampleBufferProcessorOutputReady:(int)arg1 sampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(id)_initWithSISEnabled:(BOOL)arg1 OISEnabled:(BOOL)arg2 LTMHDREnabled:(BOOL)arg3 processingLTMHDRFusion:(BOOL)arg4 portType:(id)arg5 sensorID:(id)arg6 sensorIDDictionary:(id)arg7 telephotoPortType:(id)arg8 telephotoSensorID:(id)arg9 telephotoSensorIDDictionary:(id)arg10 sbpCreationFunction:(/*function pointer*/void*)arg11 treatSoftErrorsAsHardErrors:(BOOL)arg12 ;
-(unsigned)_worstCaseFrameRetainCount;
-(void)_setExpectedFrameCountForPortType:(id)arg1 ;
-(int)_gnrProcessingTypeWithMetadataDictionary:(id)arg1 ;
-(int)_setPropertyOnSampleBufferProcessorWithKey:(CFStringRef)arg1 value:(void*)arg2 ;
-(void)_processSequenceInSampleBufferProcessor;
-(opaqueCMSampleBufferRef)_copyAndZoomSampleBuffer:(opaqueCMSampleBufferRef)arg1 usingNormalizedZoomRectangle:(CGRect)arg2 ;
-(BOOL)_isBravoHDRDepthDataCapture;
-(BOOL)_receivedExpectedAmountOfFrames;
-(BOOL)_isBravoTelephotoHDRDepthDataCapture;
-(void)_detectMissingPreBracketedFrameAndEmitBWNodeError;
-(id)sbpOptionsDictionary;
-(void)_setReferenceFrameBracketedCaptureSequenceNumberOnSampleBufferProcessor:(int)arg1 ;
-(id)_tuningDictionaryWithOnlyGNRParameters;
-(void)_handleSBPReferenceFrame:(int)arg1 ;
-(BOOL)_isBravoDepthDataCapture;
-(void)setUsesHDRPreBracketFrameForErrorRecoveryDownstream:(BOOL)arg1 ;
-(BOOL)usesHDRPreBracketFrameForErrorRecoveryDownstream;
-(id)initWithSISEnabled:(BOOL)arg1 OISEnabled:(BOOL)arg2 LTMHDREnabled:(BOOL)arg3 processingLTMHDRFusion:(BOOL)arg4 portType:(id)arg5 sensorID:(id)arg6 sensorIDDictionary:(id)arg7 telephotoPortType:(id)arg8 telephotoSensorID:(id)arg9 telephotoSensorIDDictionary:(id)arg10 ;
-(void)_clearCaptureRequestState;
-(BOOL)attachesInputBracketToOutputSampleBuffer;
-(BOOL)allowedToModifyInputBuffers;
-(void)setAllowedToModifyInputBuffers:(BOOL)arg1 ;
-(void)setAttachesInputBracketToOutputSampleBuffer:(BOOL)arg1 ;
-(void)dealloc;
@end

