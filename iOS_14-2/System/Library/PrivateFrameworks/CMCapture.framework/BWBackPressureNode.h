/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@protocol OS_dispatch_semaphore;
@class NSObject, NSMutableArray, BWLimitedGMErrorLogger;

@interface BWBackPressureNode : BWNode {

	NSObject*<OS_dispatch_semaphore> _semaphore;
	unsigned _numberOfInputs;
	NSMutableArray* _receivedPresentationTimestampByInput;
	os_unfair_lock_s _presentationTimestampLock;
	long long _initialSemaphoreValue;
	BWLimitedGMErrorLogger* _limitedGMErrorLogger;
	os_unfair_lock_s _stateLock;
	int _numEODMessagesReceived;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_semaphore> semaphore;              //@synthesize semaphore=_semaphore - In the implementation block
+(void)initialize;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)semaphore;
-(id)nodeType;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(id)nodeSubType;
-(id)init;
-(void)_handleUpdatedPresentationTimestamp:(SCD_Struct_BW7)arg1 forIndex:(unsigned long long)arg2 ;
-(id)initWithNumberOfInputsAndOutputs:(unsigned)arg1 initialSemaphoreValue:(long long)arg2 ;
-(void)setSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)setInitialSemaphoreValue:(int)arg1 ;
-(void)dealloc;
@end

