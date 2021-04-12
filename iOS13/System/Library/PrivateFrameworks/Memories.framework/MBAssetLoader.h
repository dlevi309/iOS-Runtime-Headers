/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@class NSArray, NSOperationQueue, NSRecursiveLock, NSMutableArray;

@interface MBAssetLoader : NSObject {

	unsigned long long _maxConcurrentOperationCount;
	NSArray* _prefetchKeys;
	NSOperationQueue* _operationQueue;
	NSRecursiveLock* _queuedOperationsLock;
	NSMutableArray* _queuedOperations;

}

@property (nonatomic,retain) NSOperationQueue * operationQueue;                   //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) NSRecursiveLock * queuedOperationsLock;              //@synthesize queuedOperationsLock=_queuedOperationsLock - In the implementation block
@property (nonatomic,retain) NSMutableArray * queuedOperations;                   //@synthesize queuedOperations=_queuedOperations - In the implementation block
@property (assign) unsigned long long maxConcurrentOperationCount;                //@synthesize maxConcurrentOperationCount=_maxConcurrentOperationCount - In the implementation block
@property (nonatomic,retain) NSArray * prefetchKeys;                              //@synthesize prefetchKeys=_prefetchKeys - In the implementation block
+(id)sharedLoader;
-(id)init;
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(unsigned long long)maxConcurrentOperationCount;
-(void)setMaxConcurrentOperationCount:(unsigned long long)arg1 ;
-(NSMutableArray *)queuedOperations;
-(void)setQueuedOperations:(NSMutableArray *)arg1 ;
-(void)loadAssetsFromURLs:(id)arg1 withResultHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setQueuedOperationsLock:(NSRecursiveLock *)arg1 ;
-(void)setPrefetchKeys:(NSArray *)arg1 ;
-(void)suspendOperationQueue:(id)arg1 ;
-(void)resumeOperationQueue:(id)arg1 ;
-(void)_loadAssetsFromURLs:(id)arg1 withResultHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSArray *)prefetchKeys;
-(NSRecursiveLock *)queuedOperationsLock;
@end

