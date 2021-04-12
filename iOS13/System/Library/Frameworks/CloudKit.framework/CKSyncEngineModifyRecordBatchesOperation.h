/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <Foundation/NSOperation.h>

@class CKDatabase, CKOperationGroup, NSError, NSOperationQueue;

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
-(id)init;
-(void)setGroup:(CKOperationGroup *)arg1 ;
-(NSError *)error;
-(void)cancel;
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)start;
-(void)setError:(NSError *)arg1 ;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isAsynchronous;
-(CKDatabase *)database;
-(void)finishWithError:(id)arg1 ;
-(CKOperationGroup *)group;
-(void)setIsFinished:(BOOL)arg1 ;
-(void)setPerRecordProgressBlock:(id)arg1 ;
-(id)initWithDatabase:(id)arg1 ;
-(void)setPopulateNextBatchBlock:(id)arg1 ;
-(void)setPerRecordSaveCompletionBlock:(id)arg1 ;
-(void)setBatchCompletionBlock:(id)arg1 ;
-(void)setModifyRecordBatchesCompletionBlock:(id)arg1 ;
-(void)setWillEnqueueOperationBlock:(id)arg1 ;
-(void)setIsExecuting:(BOOL)arg1 ;
-(id)cancelledError;
-(id)willEnqueueOperationBlock;
-(void)addNextModifyOperationOrFinishIfNoRemainingWork;
-(id)modifyRecordBatchesCompletionBlock;
-(id)populateNextBatchBlock;
-(id)operationToModifyBatch:(id)arg1 ;
-(id)perRecordProgressBlock;
-(id)perRecordSaveCompletionBlock;
-(id)batchCompletionBlock;
@end

