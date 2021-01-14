/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class CKDClientContext, NSObject, NSOperationQueue, NSMutableArray;

@interface CKDPCSFetchAggregator : NSObject {

	BOOL _skipQueuedFetchCycleDetection;
	CKDClientContext* _context;
	NSObject*<OS_dispatch_queue> _opQueue;
	NSOperationQueue* _queue;
	NSMutableArray* _queuedFetches;
	NSMutableArray* _runningFetches;
	NSObject*<OS_dispatch_source> _fetchSource;
	NSObject*<OS_dispatch_source> _timerSource;

}

@property (assign,nonatomic,__weak) CKDClientContext * context;                      //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> opQueue;                   //@synthesize opQueue=_opQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * queue;                               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableArray * queuedFetches;                         //@synthesize queuedFetches=_queuedFetches - In the implementation block
@property (nonatomic,retain) NSMutableArray * runningFetches;                        //@synthesize runningFetches=_runningFetches - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> fetchSource;              //@synthesize fetchSource=_fetchSource - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timerSource;              //@synthesize timerSource=_timerSource - In the implementation block
@property (assign,nonatomic) BOOL skipQueuedFetchCycleDetection;                     //@synthesize skipQueuedFetchCycleDetection=_skipQueuedFetchCycleDetection - In the implementation block
-(NSObject*<OS_dispatch_source>)timerSource;
-(void)cancelAllOperations;
-(void)requestFetchOfShareWithID:(id)arg1 forOperation:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setFetchSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)_lockedFetchesAreReady;
-(BOOL)skipQueuedFetchCycleDetection;
-(id)init;
-(void)setRunningFetches:(NSMutableArray *)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(void)setOpQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableArray *)runningFetches;
-(id)_lockedGetQueuedFetchForOperation:(id)arg1 ofClass:(Class)arg2 ;
-(void)setSkipQueuedFetchCycleDetection:(BOOL)arg1 ;
-(void)setTimerSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setQueuedFetches:(NSMutableArray *)arg1 ;
-(CKDClientContext *)context;
-(void)_lockedTearDownFetchTimer;
-(NSMutableArray *)queuedFetches;
-(NSObject*<OS_dispatch_source>)fetchSource;
-(void)requestFetchOfRecordWithID:(id)arg1 forOperation:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(NSOperationQueue *)queue;
-(NSObject*<OS_dispatch_queue>)opQueue;
-(void)requestFetchOfZoneWithID:(id)arg1 forOperation:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setQueue:(NSOperationQueue *)arg1 ;
-(BOOL)fetchRequestForExistingOperation:(id)arg1 isDependentOnOperation:(id)arg2 ;
-(void)dealloc;
-(void)setContext:(CKDClientContext *)arg1 ;
-(void)_lockedRescheduleFetchTimer;
@end

