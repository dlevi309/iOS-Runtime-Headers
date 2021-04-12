/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)queueWithMainRunLoopModes:(id)arg1 ;
+(id)queueWithDispatchQueue:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)performAsync:(/*^block*/id)arg1 ;
-(void)assertOnQueue;
-(id)backingQueueIfExists;
-(void)performAsync:(/*^block*/id)arg1 withHandoff:(id)arg2 ;
-(void)_setSynchronizingEnqueueSemaphore:(id)arg1 forWorkspaceWithName:(unsigned long long)arg2 ;
-(BOOL)_hasNext;
-(BOOL)_performNext;
-(id)_initWithDispatchQueue:(id)arg1 mainRunLoopModes:(id)arg2 ;
-(void)_queue_performAsync:(/*^block*/id)arg1 ;
-(BOOL)_queue_performNextIfPossible;
-(void)performAfter:(double)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_performNextFromRunLoopSource;
@end

