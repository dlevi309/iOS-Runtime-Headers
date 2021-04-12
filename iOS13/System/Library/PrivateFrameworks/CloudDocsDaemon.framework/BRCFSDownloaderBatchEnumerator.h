/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


@class PQLResultSet, BRCSyncContext;

@interface BRCFSDownloaderBatchEnumerator : NSObject {

	long long _now;
	long long* _retryQueueKick;
	PQLResultSet* _rs;
	BRCSyncContext* _syncContext;

}

@property (nonatomic,readonly) BRCSyncContext * syncContext;              //@synthesize syncContext=_syncContext - In the implementation block
-(void)close;
-(id)etag;
-(long long)completedUnitCount;
-(BRCSyncContext *)syncContext;
-(id)initWithSyncContext:(id)arg1 kind:(int)arg2 now:(long long)arg3 retryQueueKick:(long long*)arg4 ;
-(id)nextDocumentItem;
-(id)stageID;
@end

