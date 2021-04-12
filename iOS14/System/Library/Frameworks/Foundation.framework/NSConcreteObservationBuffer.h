/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithMaximumObjectCount:(unsigned long long)arg1 fullPolicy:(long long)arg2 outputQueue:(id)arg3 ;
-(void)_receiveBox:(id)arg1 ;
-(void)emitObject;
-(void)_alreadyOnQueueEmitAllObjects;
-(void)setAutomaticallyEmitsObjects:(BOOL)arg1 ;
-(void)_mergeChanges;
-(void)setMemoryPressureSensitive:(BOOL)arg1 ;
-(void)_alreadyOnQueueEmitObject;
-(/*^block*/id)bufferFullHandler;
-(BOOL)automaticallyEmitsObjects;
-(BOOL)isMemoryPressureSensitive;
-(void)emitAllObjects;
-(void)setBufferFullHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

