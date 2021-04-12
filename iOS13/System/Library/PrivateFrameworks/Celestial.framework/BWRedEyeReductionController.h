/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWStillImageProcessorController.h>
#import <libobjc.A.dylib/BWRedEyeReductionControllerInputDelegate.h>

@class NSDictionary, CIDualRedEyeRepairSession, NSMutableArray, NSString;

@interface BWRedEyeReductionController : BWStillImageProcessorController <BWRedEyeReductionControllerInputDelegate> {

	NSDictionary* _redEyeReductionParametersByPortType;
	CIDualRedEyeRepairSession* _redEyeRepairSession;
	opaqueCMFormatDescriptionRef _outputFormatDescription;
	NSMutableArray* _requestQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)prewarm;
+(id)_newRedEyeRepairSessionWithMetalCommandQueue:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)type;
-(id)initWithConfiguration:(id)arg1 ;
-(id)_currentRequest;
-(void)cancelProcessing;
-(int)enqueueInputForProcessing:(id)arg1 delegate:(id)arg2 ;
-(void)didReceiveFrameForInput:(id)arg1 ;
-(void)didReceiveAllFramesForInput:(id)arg1 ;
-(int)_configureRedEyeReductionSessionWithConfiguration:(id)arg1 ;
-(void)_serviceRequests;
-(id)_requestForInput:(id)arg1 ;
-(void)_processRedEyeReductionWhenNecessaryForRequest:(id)arg1 ;
-(BOOL)_receivedRequiredFramesForRequest:(id)arg1 ;
-(void)_propagateSensorInterfaceRawFromAuxImage:(opaqueCMSampleBufferRef)arg1 toPrimaryImage:(opaqueCMSampleBufferRef)arg2 ;
-(void)_clearRequest:(id)arg1 ;
@end

