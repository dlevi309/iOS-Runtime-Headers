/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWStillImageProcessorController.h>
#import <libobjc.A.dylib/BWIntelligentDistortionCorrectionProcessorInputDelegate.h>

@protocol FigIntelligentDistortionCorrectionProcessor;
@class BWIntelligentDistortionCorrectionProcessorControllerConfiguration, FigStateMachine, NSMutableArray, BWIntelligentDistortionCorrectionProcessorRequest, NSString;

@interface BWIntelligentDistortionCorrectionProcessorController : BWStillImageProcessorController <BWIntelligentDistortionCorrectionProcessorInputDelegate> {

	BWIntelligentDistortionCorrectionProcessorControllerConfiguration* _configuration;
	id<FigIntelligentDistortionCorrectionProcessor> _processor;
	opaqueCMFormatDescriptionRef _outputImageFormatDescription;
	opaqueCMFormatDescriptionRef _outputImageGainMapFormatDescription;
	FigStateMachine* _stateMachine;
	NSMutableArray* _requestQueue;
	BWIntelligentDistortionCorrectionProcessorRequest* _currentRequest;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)portTypesWithIntelligentDistortionCorrectionSupportWithSensorConfigurations:(id)arg1 intelligentDistortionCorrectionVersion:(int)arg2 ;
+(id)captureTypesWithIntelligentDistortionCorrectionSupport;
-(int)_loadSetupAndPrepareProcessor;
-(int)_figErrorFromIntelligentDistortionCorrectionStatus:(int)arg1 ;
-(CGRect)_smallerOrEqualRectWithValuesMultipleOfTwo:(CGRect)arg1 ;
-(void)_resetProcessor;
-(int)_customPrepareProcessor:(id)arg1 ;
-(void)inputReceivedNewInputData:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)_updateStateIfNeeded;
-(void)_serviceNextRequest;
-(unsigned long long)type;
-(int)enqueueInputForProcessing:(id)arg1 delegate:(id)arg2 ;
-(void)cancelProcessing;
-(void)_process;
-(void)dealloc;
@end

