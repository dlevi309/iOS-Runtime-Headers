/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/BWStillImageProcessorController.h>

@class NSMutableArray, BWDeferredProcessorRequest, FigStateMachine;

@interface BWDeferredProcessorController : BWStillImageProcessorController {

	NSMutableArray* _processorRequests;
	BWDeferredProcessorRequest* _currentRequest;
	FigStateMachine* _stateMachine;

}
+(void)initialize;
-(id)init;
-(void)dealloc;
-(unsigned long long)type;
-(void)_process;
-(void)cancelProcessing;
-(int)enqueueInputForProcessing:(id)arg1 delegate:(id)arg2 ;
-(void)_updateStateIfNeeded;
-(void)_serviceNextRequest;
-(void)inputReadyForProcessing:(id)arg1 ;
@end

