/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <Foundation/NSOperation.h>

@class CKDatabase, CKOperationGroup, NSError, NSSet, NSOperationQueue;

@interface CKSyncEngineModifyRecordBatchesOperation : NSOperation {

	BOOL _isExecuting;
	BOOL _isFinished;
	CKDatabase* _database;
	CKOperationGroup* _group;
	/*^block*/id _populateNextBatchBlock;
	/*^block*/id _perRecordProgressBlock;
	/*^block*/id _perRecordSaveCompletionBlock;
	/*^block*/id _batchCompletionBlock;
	/*^block*/id _modifyRecordBatchesCompletionBlock;
	/*^block*/id _willEnqueueOperationBlock;
	NSError* _error;
	NSSet* _zoneIDs;
	NSOperationQueue* _operationQueue;

}

@property (nonatomic,retain) NSError * error;                                  //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                //@synthesize operationQueue=_operationQueue - In the implementation block
@property (assign,nonatomic) BOOL isExecuting;                                 //@synthesize isExecuting=_isExecuting - In the implementation block
@property (assign,nonatomic) BOOL isFinished;                                  //@synthesize isFinished=_isFinished - In the implementation block
@property (nonatomic,readonly) CKDatabase * database;                          //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) CKOperationGroup * group;                         //@synthesize group=_group - In the implementation block
@property (nonatomic,copy) id populateNextBatchBlock;                          //@synthesize populateNextBatchBlock=_populateNextBatchBlock - In the implementation block
@property (nonatomic,copy) id perRecordProgressBlock;                          //@synthesize perRecordProgressBlock=_perRecordProgressBlock - In the implementation block
@property (nonatomic,copy) id perRecordSaveCompletionBlock;                    //@synthesize perRecordSaveCompletionBlock=_perRecordSaveCompletionBlock - In the implementation block
@property (nonatomic,copy) id batchCompletionBlock;                            //@synthesize batchCompletionBlock=_batchCompletionBlock - In the implementation block
@property (nonatomic,copy) id modifyRecordBatchesCompletionBlock;              //@synthesize modifyRecordBatchesCompletionBlock=_modifyRecordBatchesCompletionBlock - In the implementation block
@property (nonatomic,copy) id willEnqueueOperationBlock;                       //@synthesize willEnqueueOperationBlock=_willEnqueueOperationBlock - In the implementation block
@property (nonatomic,retain) NSSet * zoneIDs;                                  //@synthesize zoneIDs=_zoneIDs - In the implementation block
-(void)setGroup:(CKOperationGroup *)arg1 ;
-(CKOperationGroup *)group;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSSet *)zoneIDs;
-(NSOperationQueue *)operationQueue;
-(id)init;
-(void)setPerRecordProgressBlock:(id)arg1 ;
-(void)start;
-(BOOL)isAsynchronous;
-(void)setError:(NSError *)arg1 ;
-(BOOL)isFinished;
-(NSError *)error;
-(id)cancelledError;
-(id)willEnqueueOperationBlock;
-(void)addNextModifyOperationOrFinishIfNoRemainingWork;
-(id)modifyRecordBatchesCompletionBlock;
-(id)populateNextBatchBlock;
-(id)operationToModifyBatch:(id)arg1 ;
-(id)perRecordSaveCompletionBlock;
-(id)batchCompletionBlock;
-(id)perRecordProgressBlock;
-(BOOL)isExecuting;
-(void)setZoneIDs:(NSSet *)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(void)setIsExecuting:(BOOL)arg1 ;
-(CKDatabase *)database;
-(void)setPopulateNextBatchBlock:(id)arg1 ;
-(void)setPerRecordSaveCompletionBlock:(id)arg1 ;
-(void)setBatchCompletionBlock:(id)arg1 ;
-(void)setModifyRecordBatchesCompletionBlock:(id)arg1 ;
-(void)setWillEnqueueOperationBlock:(id)arg1 ;
-(void)cancel;
-(id)initWithDatabase:(id)arg1 ;
-(void)setIsFinished:(BOOL)arg1 ;
@end

