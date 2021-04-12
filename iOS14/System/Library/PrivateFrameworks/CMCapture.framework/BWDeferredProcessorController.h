/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/BWStillImageProcessorController.h>

@class NSMutableArray, BWDeferredProcessorRequest, FigStateMachine;

@interface BWDeferredProcessorController : BWStillImageProcessorController {

	NSMutableArray* _processorRequests;
	BWDeferredProcessorRequest* _currentRequest;
	FigStateMachine* _stateMachine;

}
+(void)initialize;
-(id)init;
-(void)_updateStateIfNeeded;
-(void)_serviceNextRequest;
-(void)inputReadyForProcessing:(id)arg1 ;
-(unsigned long long)type;
-(int)enqueueInputForProcessing:(id)arg1 delegate:(id)arg2 ;
-(void)cancelProcessing;
-(void)_process;
-(void)dealloc;
@end

