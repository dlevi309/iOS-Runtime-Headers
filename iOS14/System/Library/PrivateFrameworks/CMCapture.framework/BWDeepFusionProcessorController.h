/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWStillImageProcessorController.h>
#import <libobjc.A.dylib/BWDeepFusionProcessorInputDelegate.h>

@protocol IBPDeepFusionProcessor, IBPDeepFusionPrepareDescriptor;
@class BWDeepFusionProcessorControllerConfiguration, NSSet, FigStateMachine, NSMutableArray, BWDeepFusionProcessorRequest, NSString;

@interface BWDeepFusionProcessorController : BWStillImageProcessorController <BWDeepFusionProcessorInputDelegate> {

	BWDeepFusionProcessorControllerConfiguration* _configuration;
	NSSet* _supportedPortTypes;
	FigStateMachine* _stateMachine;
	id<IBPDeepFusionProcessor> _deepFusionProcessor;
	id<IBPDeepFusionPrepareDescriptor> _prepareDescriptor;
	Class _deepFusionOutputClass;
	opaqueCMFormatDescriptionRef _outputFormatDescription;
	opaqueCMFormatDescriptionRef _gainMapFormatDescription;
	NSMutableArray* _requestQueue;
	BWDeepFusionProcessorRequest* _currentRequest;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)_resetProcessor;
-(void)_setupProcessor;
-(id)initWithConfiguration:(id)arg1 ;
-(void)_updateStateIfNeeded;
-(void)_serviceNextRequest;
-(unsigned long long)type;
-(int)enqueueInputForProcessing:(id)arg1 delegate:(id)arg2 ;
-(void)cancelProcessing;
-(void)input:(id)arg1 addType:(unsigned long long)arg2 ;
-(void)addInferencesForInput:(id)arg1 ;
-(int)_loadSetupAndPrepareDeepFusionProcessor;
-(void)_process;
-(void)dealloc;
@end

