/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/

#import <IDS/IDSTransactionLogTask.h>

@interface IDSTransactionLogSyncTask : IDSTransactionLogTask {

	/*^block*/id _batchProcessingBlock;
	/*^block*/id _knownRecordIDsFromList;
	BOOL _shouldContinueFromLastSyncPoint;

}

@property (nonatomic,copy) id batchProcessingBlock;                             //@synthesize batchProcessingBlock=_batchProcessingBlock - In the implementation block
@property (nonatomic,copy) id knownRecordIDsFromList;                           //@synthesize knownRecordIDsFromList=_knownRecordIDsFromList - In the implementation block
@property (assign,nonatomic) BOOL shouldContinueFromLastSyncPoint;              //@synthesize shouldContinueFromLastSyncPoint=_shouldContinueFromLastSyncPoint - In the implementation block
-(id)batchProcessingBlock;
-(void)setBatchProcessingBlock:(id)arg1 ;
-(id)knownRecordIDsFromList;
-(void)setKnownRecordIDsFromList:(id)arg1 ;
-(BOOL)shouldContinueFromLastSyncPoint;
-(void)setShouldContinueFromLastSyncPoint:(BOOL)arg1 ;
@end

