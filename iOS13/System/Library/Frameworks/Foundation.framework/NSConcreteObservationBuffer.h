/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSObservationBuffer.h>

@protocol OS_dispatch_queue;
@class NSObject, NSOperationQueue, NSMutableArray;

@interface NSConcreteObservationBuffer : NSObservationBuffer {

	NSObject*<OS_dispatch_queue> _inputQueue;
	NSOperationQueue* _outputQueue;
	long long _policy;
	int _state;
	opaque_pthread_mutex_t _lock;
	NSMutableArray* _dequeue;
	unsigned long long _maxCount;
	/*^block*/id _bufferFullHandler;
	BOOL _memoryPressureSensitive;
	BOOL _automaticallyEmitsObjects;

}
-(void)dealloc;
-(id)initWithMaximumObjectCount:(unsigned long long)arg1 fullPolicy:(long long)arg2 outputQueue:(id)arg3 ;
-(void)_receiveBox:(id)arg1 ;
-(void)_alreadyOnQueueEmitObject;
-(void)_alreadyOnQueueEmitAllObjects;
-(void)_mergeChanges;
-(/*^block*/id)bufferFullHandler;
-(void)emitObject;
-(void)emitAllObjects;
-(void)setBufferFullHandler:(/*^block*/id)arg1 ;
-(BOOL)automaticallyEmitsObjects;
-(void)setAutomaticallyEmitsObjects:(BOOL)arg1 ;
-(BOOL)isMemoryPressureSensitive;
-(void)setMemoryPressureSensitive:(BOOL)arg1 ;
@end

