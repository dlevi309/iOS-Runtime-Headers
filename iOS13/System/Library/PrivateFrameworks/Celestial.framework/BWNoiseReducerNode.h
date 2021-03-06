/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

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
-(void)dealloc;
-(id)nodeType;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)setQuadraHighResStillImageCaptureEnabled:(BOOL)arg1 ;
-(BOOL)quadraHighResStillImageCaptureEnabled;
-(id)_outputRequirementsForInputFormat:(id)arg1 ;
-(opaqueCMSampleBufferRef)_newQuadraResampledSampleBufferFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 outputPixelBuffer:(CVBufferRef)arg2 ;
-(id)initWithCameraTuningDictionary:(id)arg1 sensorIDDictionary:(id)arg2 ;
@end

