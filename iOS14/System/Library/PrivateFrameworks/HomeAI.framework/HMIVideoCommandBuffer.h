/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HomeAI/HMIVideoProcessingNode.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore, HMIVideoCommandBufferDelegate;
@class HMFUnfairLock, NSObject, HMITimeIntervalAverage, NSString;

@interface HMIVideoCommandBuffer : HMIVideoProcessingNode <HMFLogging> {

	HMFUnfairLock* _lock;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	long long _count;
	SCD_Struct_HM3 _duration;
	SCD_Struct_HM3 _maxDuration;
	HMITimeIntervalAverage* _delay;
	id<HMIVideoCommandBufferDelegate> _delegate;

}

@property (__weak) id<HMIVideoCommandBufferDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long videoSampleCount; 
@property (readonly) double videoDelay; 
@property (readonly) SCD_Struct_HM3 videoDuration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)flush;
-(void)finish;
-(id)initWithMaxDuration:(SCD_Struct_HM3)arg1 ;
-(id<HMIVideoCommandBufferDelegate>)delegate;
-(SCD_Struct_HM3)videoDuration;
-(void)setDelegate:(id<HMIVideoCommandBufferDelegate>)arg1 ;
-(void)flushAsync;
-(void)handleVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)handleAudioSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)handleBlock:(/*^block*/id)arg1 ;
-(unsigned long long)videoSampleCount;
-(double)videoDelay;
@end

