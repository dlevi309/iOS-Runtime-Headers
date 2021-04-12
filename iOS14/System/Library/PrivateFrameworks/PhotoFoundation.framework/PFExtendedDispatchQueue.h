/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/

#import <PhotoFoundation/PFDispatchQueue.h>
#import <libobjc.A.dylib/PFDispatchQueueRunBlock.h>

@class PFDispatchQueue, PFSerialQueue, PFDispatchQueueExtensionManager;

@interface PFExtendedDispatchQueue : PFDispatchQueue <PFDispatchQueueRunBlock> {

	PFDispatchQueue* _queue;
	PFSerialQueue* _requestSerializer;
	PFDispatchQueueExtensionManager* _extensionManager;
	unsigned long long _suspendCount;

}
-(id)initWithQueue:(id)arg1 ;
-(void)addExtensions:(id)arg1 ;
-(void)setTargetQueue:(id)arg1 ;
-(void)suspend;
-(id)dispatchCancellableAfterInterval:(double)arg1 block:(/*^block*/id)arg2 ;
-(id)dispatchCancellableAfterDelay:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(void)dispatchAsync:(/*^block*/id)arg1 ;
-(id)wrappedQueue;
-(void)_invoke:(/*^block*/id)arg1 extensionDataArray:(id)arg2 ;
-(void)dispatchAsyncWithQOS:(unsigned)arg1 block:(/*^block*/id)arg2 ;
-(void)setSpecific:(void*)arg1 forKey:(void*)arg2 ;
-(void)removeAllQueuedBlocks;
-(void)dispatchAfterDelay:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(void)suspendRequests;
-(BOOL)onQueue;
-(id)_dispatchQueueForSetTargetQueue;
-(BOOL)assertOnQueue;
-(void)enableExtension:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)dispatchCancellable:(/*^block*/id)arg1 ;
-(void)dispatchBarrierAsyncWithQOS:(unsigned)arg1 block:(/*^block*/id)arg2 ;
-(id)description;
-(void)_performAsyncNotify:(id)arg1 enqueueBlock:(/*^block*/id)arg2 ;
-(void)dispatchAfterInterval:(double)arg1 block:(/*^block*/id)arg2 ;
-(void)dispatchAfter:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(void)removeAllQueuedBlocksAndWait;
-(void)dispatchGroup:(id)arg1 notify:(/*^block*/id)arg2 ;
-(void)dispatchGroup:(id)arg1 async:(/*^block*/id)arg2 ;
-(void)dispatchBarrierAsync:(/*^block*/id)arg1 ;
-(void)dispatchSync:(/*^block*/id)arg1 ;
-(id)dispatchCancellableGroup:(id)arg1 notify:(/*^block*/id)arg2 ;
-(id)_extensionManager;
-(BOOL)assertNotOnQueue;
-(void)resumeRequests;
-(unsigned)qualityOfService;
-(void)dispatchBarrierSync:(/*^block*/id)arg1 ;
-(void*)getSpecific:(void*)arg1 ;
-(BOOL)assertQueueBarrier;
-(id)extensionMatching:(/*^block*/id)arg1 ;
-(void)resume;
-(void)disableExtension:(id)arg1 ;
-(const char*)label;
-(void)runBlock:(/*^block*/id)arg1 ;
-(id)_extensionsForTargetingQueue;
@end

