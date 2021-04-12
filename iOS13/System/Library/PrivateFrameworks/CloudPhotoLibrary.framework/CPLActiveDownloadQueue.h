/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/


@class NSMutableArray, NSString, NSArray;

@interface CPLActiveDownloadQueue : NSObject {

	NSMutableArray* _transferTasks;
	NSMutableArray* _transportTasks;
	BOOL _FIFOQueue;
	NSString* _name;
	unsigned long long _maximumBatchSize;
	unsigned long long _maximumConcurrentTransportTasks;

}

@property (nonatomic,readonly) NSString * name;                                                      //@synthesize name=_name - In the implementation block
@property (getter=isFIFOQueue,nonatomic,readonly) BOOL FIFOQueue;                                    //@synthesize FIFOQueue=_FIFOQueue - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumBatchSize;                                  //@synthesize maximumBatchSize=_maximumBatchSize - In the implementation block
@property (nonatomic,readonly) unsigned long long countOfTransferTasks; 
@property (nonatomic,readonly) NSArray * allTransferTasks; 
@property (nonatomic,readonly) unsigned long long maximumConcurrentTransportTasks;                   //@synthesize maximumConcurrentTransportTasks=_maximumConcurrentTransportTasks - In the implementation block
@property (nonatomic,readonly) unsigned long long countOfTransportTasks; 
@property (nonatomic,readonly) unsigned long long countOfTransferTasksInTransportTasks; 
-(NSString *)name;
-(id)status;
-(unsigned long long)maximumBatchSize;
-(id)initWithName:(id)arg1 FIFOQueue:(BOOL)arg2 maximumBatchSize:(unsigned long long)arg3 maximumConcurrentTransportTasks:(unsigned long long)arg4 ;
-(void)addTransferTask:(id)arg1 ;
-(void)removeTransferTask:(id)arg1 ;
-(unsigned long long)countOfTransferTasks;
-(id)dequeueBatchOfTransferTasksDequeuedSize:(unsigned long long*)arg1 ;
-(NSArray *)allTransferTasks;
-(void)removeAllTransferTasks;
-(void)addTransportTask:(id)arg1 ;
-(void)removeTransportTask:(id)arg1 ;
-(unsigned long long)countOfTransportTasks;
-(unsigned long long)countOfTransferTasksInTransportTasks;
-(id)dequeueLastTransportTask;
-(BOOL)isFIFOQueue;
-(unsigned long long)maximumConcurrentTransportTasks;
@end

