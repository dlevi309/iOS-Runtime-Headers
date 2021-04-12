/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@protocol OS_dispatch_semaphore;
@class NSObject, NSMutableArray, BWLimitedGMErrorLogger;

@interface BWBackPressureNode : BWNode {

	NSObject*<OS_dispatch_semaphore> _semaphore;
	unsigned _numberOfInputs;
	NSMutableArray* _receivedPresentationTimestampByInput;
	os_unfair_lock_s _presentationTimestampLock;
	long long _initialSemaphoreValue;
	BWLimitedGMErrorLogger* _limitedGMErrorLogger;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_semaphore> semaphore;              //@synthesize semaphore=_semaphore - In the implementation block
+(void)initialize;
-(id)init;
-(void)dealloc;
-(id)nodeType;
-(NSObject*<OS_dispatch_semaphore>)semaphore;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)handleIrisReferenceMovieRequest:(id)arg1 forInput:(id)arg2 ;
-(void)_handleUpdatedPresentationTimestamp:(SCD_Struct_BW2)arg1 forIndex:(unsigned long long)arg2 ;
-(id)initWithNumberOfInputsAndOutputs:(unsigned)arg1 initialSemaphoreValue:(long long)arg2 ;
-(void)setInitialSemaphoreValue:(int)arg1 ;
-(void)setSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
@end

