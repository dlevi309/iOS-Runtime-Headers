/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@class NSDictionary;

@interface BWNoiseReducerNode : BWNode {

	NSDictionary* _cameraTuningOptions;
	NSDictionary* _noiseReductionOptions;
	opaqueCMFormatDescriptionRef _outputFormatDescription;
	NoiseReductionCtx_sRef _context;
	int _contextSynchronization;
	int _gpuPriority;
	BOOL _threaded;
	BOOL _processLuma;
	BOOL _useInPlaceAlgorithm;
	BOOL _quadraHighResStillImageCaptureEnabled;
	CVBufferRef _quadraResampledIntermediateBuffer;
	opaqueCMFormatDescriptionRef _quadraResampledIntermediaBufferFormatDescription;
	OpaqueVTPixelTransferSessionRef _quadraResampledTransferSession;

}
+(void)initialize;
-(void)setQuadraHighResStillImageCaptureEnabled:(BOOL)arg1 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeType;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(id)nodeSubType;
-(id)initWithCameraTuningDictionary:(id)arg1 sensorIDDictionary:(id)arg2 ;
-(opaqueCMSampleBufferRef)_newQuadraResampledSampleBufferFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 outputPixelBuffer:(CVBufferRef)arg2 ;
-(BOOL)quadraHighResStillImageCaptureEnabled;
-(id)_outputRequirementsForInputFormat:(id)arg1 ;
-(void)dealloc;
@end

