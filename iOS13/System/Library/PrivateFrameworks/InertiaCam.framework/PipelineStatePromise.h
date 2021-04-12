/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/InertiaCam.framework/InertiaCam
*/


@protocol OS_dispatch_group;
@class NSMapTable, NSObject;

@interface PipelineStatePromise : NSObject {

	NSMapTable* pipelineStates;
	NSMapTable* errors;
	NSObject*<OS_dispatch_group> group;
	AB initialization_completed;

}
-(BOOL)timesOutWaitingForPipelineStates:(double)arg1 ;
-(id)initWithDispatchGroup:(id)arg1 pipelineStates:(id)arg2 errors:(id)arg3 ;
-(BOOL)groupWasSuccessful;
-(id)pipelineStateForFunction:(id)arg1 ;
-(id)errorForFunction:(id)arg1 ;
@end

