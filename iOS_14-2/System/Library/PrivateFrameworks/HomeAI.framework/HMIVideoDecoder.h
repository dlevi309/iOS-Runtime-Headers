/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HomeAI/HMIVideoProcessingNode.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore, HMIVideoDecoderDelegate;
@class NSObject, NSString;

@interface HMIVideoDecoder : HMIVideoProcessingNode <HMFLogging> {

	SCD_Struct_HM3 _lastSampleBufferPTS;
	SCD_Struct_HM3 _lastSampleBufferDTS;
	OpaqueVTDecompressionSessionRef _session;
	NSObject*<OS_dispatch_queue> _queue;
	opaqueCMBufferQueueRef _buffer;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	id<HMIVideoDecoderDelegate> _delegate;

}

@property (__weak) id<HMIVideoDecoderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)flush;
-(id)init;
-(id<HMIVideoDecoderDelegate>)delegate;
-(void)setDelegate:(id<HMIVideoDecoderDelegate>)arg1 ;
-(void)dealloc;
-(void)_invalidateSession:(BOOL)arg1 ;
-(void)handleSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_drainBuffer:(BOOL)arg1 ;
-(void)_failWithDescription:(id)arg1 ;
-(BOOL)handleSampleBuffer:(opaqueCMSampleBufferRef)arg1 outputFrame:(BOOL)arg2 ;
-(BOOL)_createSessionWithFormatDescription:(const opaqueCMFormatDescriptionRef)arg1 ;
-(void)_didDecodeSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_reorderBufferDidBecomeFull;
@end

