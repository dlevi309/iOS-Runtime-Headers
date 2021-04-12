/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXCoreUtilities.framework/AXCoreUtilities
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface AXAccessQueue : NSObject {

	NSString* _threadLocalStorageKey;
	NSObject*<OS_dispatch_queue> _concurrentQueue;
	unsigned long long _specialBehaviors;

}

@property (nonatomic,copy) NSString * threadLocalStorageKey;                            //@synthesize threadLocalStorageKey=_threadLocalStorageKey - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> concurrentQueue;              //@synthesize concurrentQueue=_concurrentQueue - In the implementation block
@property (assign,nonatomic) unsigned long long specialBehaviors;                       //@synthesize specialBehaviors=_specialBehaviors - In the implementation block
@property (nonatomic,readonly) BOOL behavesAsMainQueue; 
@property (nonatomic,readonly) BOOL behavesWithoutErrorReporting; 
@property (nonatomic,copy,readonly) NSString * label; 
+(id)backgroundAccessQueue;
+(id)mainAccessQueue;
-(NSObject*<OS_dispatch_queue>)concurrentQueue;
-(void)setThreadLocalStorageKey:(NSString *)arg1 ;
-(void)performAsynchronousReadingBlock:(/*^block*/id)arg1 ;
-(id)init;
-(NSString *)threadLocalStorageKey;
-(void)performAsynchronousWritingBlock:(/*^block*/id)arg1 ;
-(void)setConcurrentQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)description;
-(BOOL)canOnlyReadInCurrentExecutionThread;
-(unsigned long long)specialBehaviors;
-(unsigned long long)_accessQueueContextInCurrentExecutionThread;
-(void)afterDelay:(double)arg1 processWritingBlock:(/*^block*/id)arg2 ;
-(void)afterDelay:(double)arg1 processReadingBlock:(/*^block*/id)arg2 ;
-(BOOL)behavesAsMainQueue;
-(BOOL)canWriteInCurrentExecutionThread;
-(void)performSynchronousReadingBlock:(/*^block*/id)arg1 ;
-(void)performSynchronousWritingBlock:(/*^block*/id)arg1 ;
-(BOOL)behavesWithoutErrorReporting;
-(id)initWithParentClass:(Class)arg1 description:(id)arg2 appendUUIDToLabel:(BOOL)arg3 ;
-(BOOL)canReadInCurrentExecutionThread;
-(void)_performBlock:(/*^block*/id)arg1 withDispatchFunction:(/*function pointer*/void*)arg2 synchronously:(BOOL)arg3 accessQueueContext:(unsigned long long)arg4 ;
-(id)_initWithLabel:(id)arg1 appendUUIDToLabel:(BOOL)arg2 specialBehaviors:(unsigned long long)arg3 ;
-(void)setSpecialBehaviors:(unsigned long long)arg1 ;
-(NSString *)label;
-(id)initWithLabel:(id)arg1 appendUUIDToLabel:(BOOL)arg2 ;
@end

