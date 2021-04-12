/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class CKDClientContext, NSObject, NSOperationQueue, NSMutableArray;

@interface CKDPCSFetchAggregator : NSObject {

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
-(id)init;
-(void)dealloc;
-(void)setQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)queue;
-(void)cancelAllOperations;
-(CKDClientContext *)context;
-(void)setContext:(CKDClientContext *)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)opQueue;
-(void)setTimerSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)timerSource;
-(BOOL)fetchRequestForExistingOperation:(id)arg1 isDependentOnOperation:(id)arg2 ;
-(void)requestFetchOfZoneWithID:(id)arg1 forOperation:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setOpQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_source>)fetchSource;
-(void)setFetchSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)requestFetchOfRecordWithID:(id)arg1 forOperation:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)requestFetchOfShareWithID:(id)arg1 forOperation:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_lockedFetchesAreReady;
-(NSMutableArray *)runningFetches;
-(NSMutableArray *)queuedFetches;
-(void)_lockedRescheduleFetchTimer;
-(void)_lockedTearDownFetchTimer;
-(id)_lockedGetQueuedFetchForOperation:(id)arg1 ofClass:(Class)arg2 ;
-(void)setQueuedFetches:(NSMutableArray *)arg1 ;
-(void)setRunningFetches:(NSMutableArray *)arg1 ;
@end

