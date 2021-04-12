/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol OS_dispatch_workloop;
#import <CMCapture/CMCapture-Structs.h>
@class NSMapTable, NSObject;

@interface BWInferenceScheduler : NSObject {

	os_unfair_lock_s _connectionsLock;
	NSMapTable* _connectionsByIdentifier;
	NSObject*<OS_dispatch_workloop> _inferenceWorkloop;
	NSObject*<OS_dispatch_workloop> _scalingWorkloop;
	NSObject*<OS_dispatch_workloop> _submissionWorkloop;

}
+(void)initialize;
-(unsigned long long)registerInferenceConnection;
-(id)init;
-(void)_processJobsFromFramebuffer:(id)arg1 usingInputSampleBuffer:(opaqueCMSampleBufferRef)arg2 inferencePropagationHandler:(/*^block*/id)arg3 atExecutionTime:(SCD_Struct_BW8)arg4 forConnection:(id)arg5 ;
-(int)prepareForInferenceRequirements:(id)arg1 dependencyProviderSource:(id)arg2 formatProvider:(id)arg3 pixelBufferPoolProvider:(id)arg4 connection:(unsigned long long)arg5 ;
-(id)_queueForJob:(SCD_Struct_BW117*)arg1 fromConnection:(id)arg2 ;
-(int)performInferencesForConnection:(unsigned long long)arg1 usingInputSampleBuffer:(opaqueCMSampleBufferRef)arg2 attachingResultsToSampleBuffer:(opaqueCMSampleBufferRef)arg3 skippingInferencesWithTypes:(id)arg4 ;
-(void)unregisterInferenceConnection:(unsigned long long)arg1 ;
-(void)dealloc;
@end

