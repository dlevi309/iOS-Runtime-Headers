/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <libobjc.A.dylib/BRCLifeCycle.h>
#import <libobjc.A.dylib/BRCSuspendable.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class BRCAccountSession, BRCSyncContext, NSMutableDictionary, BRCDeadlineSource, NSObject, NSArray, NSString;

@interface BRCTransferStream : NSObject <BRCLifeCycle, BRCSuspendable> {

	BRCAccountSession* _session;
	BRCSyncContext* _syncContext;
	long long _nextFire;
	NSMutableDictionary* _inFlightOpByID;
	BRCDeadlineSource* _schedulingSource;
	NSObject*<OS_dispatch_queue> _transferQueue;
	unsigned long long _inFlightSize;
	NSObject*<OS_dispatch_group> _transferBatchRequestWaiter;
	BOOL _isWaitingForTransferBatch;
	BOOL _hasReachedCap;
	Ai _multipleItemsInteractiveSchedulingCount;
	BOOL _isCancelled;
	/*^block*/id _streamDidBecomeReadyToTransferRecords;
	unsigned long long _maxCountOfBatchesInFlight;

}

@property (nonatomic,copy) id streamDidBecomeReadyToTransferRecords;                    //@synthesize streamDidBecomeReadyToTransferRecords=_streamDidBecomeReadyToTransferRecords - In the implementation block
@property (assign,nonatomic) unsigned long long maxCountOfBatchesInFlight;              //@synthesize maxCountOfBatchesInFlight=_maxCountOfBatchesInFlight - In the implementation block
@property (readonly) NSArray * operations; 
@property (nonatomic,readonly) unsigned long long inFlightSize;                         //@synthesize inFlightSize=_inFlightSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isCancelled;                                        //@synthesize isCancelled=_isCancelled - In the implementation block
-(void)close;
-(void)cancel;
-(void)resume;
-(BOOL)isCancelled;
-(void)signal;
-(NSArray *)operations;
-(void)suspend;
-(void)_schedule;
-(void)signalWithDeadline:(long long)arg1 ;
-(double)progressForTransferID:(id)arg1 operationID:(id)arg2 ;
-(void)forceSchedulingPendingInteractiveTransfers;
-(void)cancelTransferID:(id)arg1 operationID:(id)arg2 ;
-(void)addAliasItem:(id)arg1 toTransferWithID:(id)arg2 operationID:(id)arg3 ;
-(void)addBatchOperation:(id)arg1 ;
-(unsigned long long)inFlightSize;
-(void)_scheduleOneBatchWithQoS:(long long)arg1 ;
-(void)_setReachedCap:(BOOL)arg1 ;
-(void)_evaluateCap;
-(void)_addBatchOperation:(id)arg1 ;
-(id)initWithSyncContext:(id)arg1 name:(id)arg2 scheduler:(id)arg3 ;
-(void)startSchedulingMultipleItemsInteractively;
-(void)endSchedulingMultipleItemsInteractively;
-(id)streamDidBecomeReadyToTransferRecords;
-(void)setStreamDidBecomeReadyToTransferRecords:(id)arg1 ;
-(unsigned long long)maxCountOfBatchesInFlight;
-(void)setMaxCountOfBatchesInFlight:(unsigned long long)arg1 ;
@end

