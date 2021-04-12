/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@class NSDictionary, NSArray, FigCaptureStillImageSettings, BWStillImageCaptureSettings, NSMutableArray, FigCapturePixelConverter, BWPixelBufferPool;

@interface BWHDRNode : BWNode {

	/*function pointer*/void* _createSampleBufferProcessorFunction;
	int _clientPID;
	NSDictionary* _sensorIDDictionary;
	OpaqueFigSampleBufferProcessorRef _sampleBufferProcessor;
	int _bracketCount;
	NSArray* _exposureValues;
	FigCaptureStillImageSettings* _currentRequestedStillImageCaptureSettings;
	BWStillImageCaptureSettings* _currentResolvedStillImageCaptureSettings;
	opaqueCMSampleBuffer* _pendingBracketBuffers[3];
	BOOL _preBracketedFrameExpected;
	BOOL _preBracketedFrameReceived;
	NSMutableArray* _receivedNodeErrors;
	unsigned _emittedFrameOrErrorCount;
	BOOL _alwaysRequestsPreBracketedEV0;
	BOOL _supportsStereoFusionCaptures;
	FigCapturePixelConverter* _stereoFusionPixelConverter;
	BWPixelBufferPool* _telephotoHDREV0DisparityBufferPool;
	opaqueCMFormatDescriptionRef _telephotoHDREV0DisparityFormatDescription;
	OpaqueVTPixelTransferSessionRef _telephotoHDREV0DisparityCopySession;

}
+(void)initialize;
-(int)_setupSampleBufferProcessor;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)_emitNodeErrorToReportFailedOutputFrame;
-(id)nodeType;
-(id)nodeSubType;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)setSupportsStereoFusionCaptures:(BOOL)arg1 ;
-(BOOL)alwaysRequestsPreBracketedEV0;
-(BOOL)_receivedExpectedNumberOfInputFramesOrErrors;
-(BOOL)supportsStereoFusionCaptures;
-(id)initWithClientPID:(int)arg1 sensorIDDictionary:(id)arg2 ;
-(void)_emitNodeErrorsIfNecessary;
-(id)_initWithClientPID:(int)arg1 sensorIDDictionary:(id)arg2 sbpCreationFunction:(/*function pointer*/void*)arg3 ;
-(void)_hdrProcessorOutputReady:(int)arg1 sampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)_clearCaptureRequestState;
-(BOOL)attachesInputBracketToOutputSampleBuffer;
-(void)_configureCaptureRequestStateWithRequestedStillImageCaptureSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 ;
-(void)setAttachesInputBracketToOutputSampleBuffer:(BOOL)arg1 ;
-(void)setAlwaysRequestsPreBracketedEV0:(BOOL)arg1 ;
-(void)dealloc;
@end

