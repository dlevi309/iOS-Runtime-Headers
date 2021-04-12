/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/


@class SYBatchSyncChunk;

@interface _SYIncomingBatch : NSObject {

	SYBatchSyncChunk* _batch;
	/*^block*/id _completion;

}

@property (nonatomic,retain) SYBatchSyncChunk * batch;              //@synthesize batch=_batch - In the implementation block
@property (nonatomic,copy) id completion;                           //@synthesize completion=_completion - In the implementation block
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(SYBatchSyncChunk *)batch;
-(void)setBatch:(SYBatchSyncChunk *)arg1 ;
@end

