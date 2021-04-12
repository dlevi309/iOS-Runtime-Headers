/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
*/


#import <PASampling/PASampling-Structs.h>
@class PAStackshotTask;

@interface PAStackshotThread : NSObject {

	thread_snapshot* thread_snap;
	PAStackshotTask* _task;
	const void* _kernelFrames;
	const void* _userFrames;
	unsigned long long _kernelFrameSize;
	unsigned long long _userFrameSize;
	unsigned long long _bytesUsed;
	unsigned long long _bytesBeforeThread;

}

@property (readonly) BOOL isFromMicrostackshot; 
-(id)initWithTask:(id)arg1 ;
-(void)iterateFrames:(/*^block*/id)arg1 ;
-(BOOL)isDarwinBG;
-(unsigned long long)dispatchQueueId;
-(BOOL)hasDispatchQueue;
-(BOOL)isFromMicrostackshot;
-(const void*)firstFrame;
-(BOOL)setBufferPosition:(const char*)arg1 withRemainingBytes:(unsigned long long)arg2 withBytesAlreadyUsed:(unsigned long long)arg3 ;
-(void)_calculateOffsets;
-(id)frameIterator;
-(unsigned long long)_frameSize:(BOOL)arg1 ;
-(unsigned)powerstatsFlags;
-(unsigned long long)kernelFrameSize;
-(unsigned long long)userFrameSize;
-(BOOL)hasKernelContinuation;
-(BOOL)setBufferPosition:(const char*)arg1 withRemainingBytes:(unsigned long long)arg2 ;
-(unsigned long long)bytesUsedInBuffer;
@end

