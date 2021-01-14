/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/


@class SYBatchSyncChunk;

@interface _SYIncomingBatch : NSObject {

	SYBatchSyncChunk* _batch;
	/*^block*/id _completion;

}

@property (nonatomic,retain) SYBatchSyncChunk * batch;              //@synthesize batch=_batch - In the implementation block
@property (nonatomic,copy) id completion;                           //@synthesize completion=_completion - In the implementation block
-(SYBatchSyncChunk *)batch;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)setBatch:(SYBatchSyncChunk *)arg1 ;
@end

