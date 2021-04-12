/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@class BWFigCaptureStream;

@interface BWDeferredMetadataCache : NSObject {

	OpaqueFigSimpleMutexRef _lock;
	BWFigCaptureStream* _stream;
	int _numberOfExpectedSampleBuffersForEachPTS;
	BWDeferredMetadataCacheEntry* _cache[5];

}

@property (assign,nonatomic) int numberOfExpectedSampleBuffersForEachPTS; 
-(void)flush;
-(void)addMetadataAttachmentToSampleBuffer:(opaqueCMSampleBufferRef)arg1 withDutyCycleMetadataCache:(id)arg2 ;
-(id)initWithCaptureStream:(id)arg1 atomicTransactions:(BOOL)arg2 ;
-(void)setNumberOfExpectedSampleBuffersForEachPTS:(int)arg1 ;
-(int)numberOfExpectedSampleBuffersForEachPTS;
-(void)dealloc;
@end

