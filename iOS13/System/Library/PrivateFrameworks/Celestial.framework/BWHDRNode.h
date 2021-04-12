/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

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
-(void)dealloc;
-(id)nodeType;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(id)_initWithClientPID:(int)arg1 sensorIDDictionary:(id)arg2 sbpCreationFunction:(/*function pointer*/void*)arg3 ;
-(void)_clearCaptureRequestState;
-(int)_setupSampleBufferProcessor;
-(void)_configureCaptureRequestStateWithRequestedStillImageCaptureSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 ;
-(BOOL)_receivedExpectedNumberOfInputFramesOrErrors;
-(void)_emitNodeErrorToReportFailedOutputFrame;
-(void)_hdrProcessorOutputReady:(int)arg1 sampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)_emitNodeErrorsIfNecessary;
-(id)initWithClientPID:(int)arg1 sensorIDDictionary:(id)arg2 ;
-(void)setAttachesInputBracketToOutputSampleBuffer:(BOOL)arg1 ;
-(BOOL)attachesInputBracketToOutputSampleBuffer;
-(void)setAlwaysRequestsPreBracketedEV0:(BOOL)arg1 ;
-(BOOL)alwaysRequestsPreBracketedEV0;
-(void)setSupportsStereoFusionCaptures:(BOOL)arg1 ;
-(BOOL)supportsStereoFusionCaptures;
@end

