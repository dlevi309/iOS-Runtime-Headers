/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWStillImageProcessorController.h>
#import <libobjc.A.dylib/BWStereoDisparityProcessorInputDelegate.h>
#import <libobjc.A.dylib/DisparityProcessorInferenceDelegate.h>
#import <libobjc.A.dylib/BWInferenceFormatProvider.h>

@class BWStereoDisparityProcessorControllerConfiguration, FigStateMachine, FigDisparityGenerator, NSMutableArray, BWStereoDisparityRequest, BWInferenceEngine, NSDictionary, NSString;

@interface BWStereoDisparityProcessorController : BWStillImageProcessorController <BWStereoDisparityProcessorInputDelegate, DisparityProcessorInferenceDelegate, BWInferenceFormatProvider> {

	BWStereoDisparityProcessorControllerConfiguration* _configuration;
	FigStateMachine* _stateMachine;
	FigDisparityGenerator* _disparityProcessor;
	opaqueCMFormatDescriptionRef _disparityFormatDescription;
	NSMutableArray* _requestQueue;
	BWStereoDisparityRequest* _currentRequest;
	BWInferenceEngine* _inferenceEngine;
	opaqueCMFormatDescriptionRef _refFormatDescription;
	opaqueCMFormatDescriptionRef _auxFormatDescription;
	opaqueCMFormatDescriptionRef _shiftMapFormatDescription;
	NSDictionary* _videoFormatByAttachedMediaKey;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)outputVideoFormatForAttachedMediaKey:(id)arg1 ;
-(BOOL)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)arg1 ;
-(void)_resetProcessor;
-(void)inputReceivedNewInputData:(id)arg1 ;
-(unsigned long long)_fastStereoDisparityOrientationForConfiguration:(id)arg1 ;
-(int)_loadSetupAndPrepareDisparityProcessor;
-(int)_OSStatusFromDisparityResult:(int)arg1 ;
-(SCD_Struct_BW14)_convertRowMajorArrayToSimdMatrix:(const float*)arg1 ;
-(unsigned long long)_angleToFSDNetNetworkOrientation:(float)arg1 ;
-(int)processDisparityInferenceWithReferenceBuffer:(CVBufferRef)arg1 auxBuffer:(CVBufferRef)arg2 outputDisparityBuffer:(CVBufferRef)arg3 ;
-(id)initWithConfiguration:(id)arg1 ;
-(id)inputVideoFormatForAttachedMediaKey:(id)arg1 ;
-(id)inputFormatForAttachedMediaKey:(id)arg1 ;
-(void)_updateStateIfNeeded;
-(void)_serviceNextRequest;
-(unsigned long long)type;
-(int)enqueueInputForProcessing:(id)arg1 delegate:(id)arg2 ;
-(void)cancelProcessing;
-(id)inputInferenceVideoFormatForAttachedMediaKey:(id)arg1 ;
-(void)_process;
-(id)outputFormatForAttachedMediaKey:(id)arg1 ;
-(void)dealloc;
@end

