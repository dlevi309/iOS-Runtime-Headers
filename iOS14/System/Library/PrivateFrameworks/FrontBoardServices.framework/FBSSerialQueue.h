/*
* Generated on Thursday, January 14, 2021 at 2:22:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSServiceDispatchingQueue.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject, NSMutableArray, NSArray, NSString;

@interface FBSSerialQueue : NSObject <BSServiceDispatchingQueue> {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _blocks;
	unsigned long long _enqueueID;
	unsigned long long _dequeueID;
	NSObject*<OS_dispatch_queue> _targetQueue;
	NSArray* _mainRunLoopModes;
	CFRunLoopSourceRef _runLoopSource;
	BOOL _callingOut;
	NSObject*<OS_dispatch_semaphore> _synchronizingEnqueueSemaphore;
	unsigned long long _lastSynchronizingWorkspaceName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)queueWithDispatchQueue:(id)arg1 ;
+(id)queueWithMainRunLoopModes:(id)arg1 ;
-(BOOL)_hasNext;
-(id)init;
-(id)_initWithDispatchQueue:(id)arg1 mainRunLoopModes:(id)arg2 ;
-(void)assertOnQueue;
-(void)_queue_performAsync:(/*^block*/id)arg1 ;
-(NSString *)description;
-(BOOL)_performNext;
-(void)_performNextFromRunLoopSource;
-(void)_setSynchronizingEnqueueSemaphore:(id)arg1 forWorkspaceWithName:(unsigned long long)arg2 ;
-(void)performAsync:(/*^block*/id)arg1 withHandoff:(id)arg2 ;
-(id)backingQueueIfExists;
-(void)assertBarrierOnQueue;
-(unsigned long long)hash;
-(BOOL)_targetQueue_performNextIfPossible;
-(void)performAsync:(/*^block*/id)arg1 ;
-(void)performAfter:(double)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

