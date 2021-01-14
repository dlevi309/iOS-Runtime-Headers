/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol OS_dispatch_queue;
#import <ChatKit/ChatKit-Structs.h>
@class NSObject, NSMutableDictionary;

@interface CKDispatchQueue : NSObject {

	unsigned long long _fifo;
	BOOL _suspended;
	BOOL _cancelled;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSObject*<OS_dispatch_queue> _lockQueue;
	CFBinaryHeapRef _heap;
	NSMutableDictionary* _dispatchQueueBlocks;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> lockQueue;                  //@synthesize lockQueue=_lockQueue - In the implementation block
@property (nonatomic,retain) CFBinaryHeapRef heap;                                    //@synthesize heap=_heap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * dispatchQueueBlocks;               //@synthesize dispatchQueueBlocks=_dispatchQueueBlocks - In the implementation block
@property (assign,getter=isCancelled,nonatomic) BOOL cancelled;                       //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,getter=isSuspended,nonatomic) BOOL suspended;                       //@synthesize suspended=_suspended - In the implementation block
+(id)serialQueueWithDispatchPriority:(long long)arg1 ;
+(id)concurrentQueueWithDispatchPriority:(long long)arg1 ;
-(CFBinaryHeapRef)heap;
-(void)setCancelled:(BOOL)arg1 ;
-(BOOL)isSuspended;
-(id)init;
-(void)setSuspended:(BOOL)arg1 ;
-(void)setLockQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)lockQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setHeap:(CFBinaryHeapRef)arg1 ;
-(void)addBlock:(/*^block*/id)arg1 withQueuePriority:(long long)arg2 ;
-(void)addBlock:(/*^block*/id)arg1 ;
-(void)removeAllOutstandingBlocks;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)_initWithDispatchAttr:(id)arg1 dispatchPriority:(long long)arg2 ;
-(void)setDispatchQueueBlocks:(NSMutableDictionary *)arg1 ;
-(void)addBlock:(/*^block*/id)arg1 withQueuePriority:(long long)arg2 forKey:(id)arg3 ;
-(NSMutableDictionary *)dispatchQueueBlocks;
-(void)removeOutstandingBlockForKey:(id)arg1 ;
-(id)allKeysOfOutstandingBlocks;
-(void)setQueuePriority:(long long)arg1 ofOutstandingBlockForKey:(id)arg2 ;
-(long long)queuePriorityOfOutstandingBlockForKey:(id)arg1 ;
-(BOOL)containsOutstandingBlockForKey:(id)arg1 ;
-(BOOL)isCancelled;
-(void)dealloc;
@end

