/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/

#import <IMDaemonCore/IMDCKMessageSyncController.h>

@class CKServerChangeToken;

@interface IMDCKInitialMessageSyncController : IMDCKMessageSyncController {

	CKServerChangeToken* _syncToken;

}

@property (nonatomic,retain) CKServerChangeToken * syncToken;              //@synthesize syncToken=_syncToken - In the implementation block
-(void)dealloc;
-(CKServerChangeToken *)syncToken;
-(void)setSyncToken:(CKServerChangeToken *)arg1 ;
-(BOOL)_deviceConditionsAllowsMessageSyncForCurrentBatchCount:(long long)arg1 maxBatchCount:(long long)arg2 ;
-(BOOL)_kickOffWriteIfNeededForSyncType:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_deviceConditionsAllowsMessageSyncForActivity:(id)arg1 deviceConditionsToCheck:(unsigned long long)arg2 currentBatchCount:(long long)arg3 maxBatchCount:(long long)arg4 ;
-(void)setLatestSyncToken:(id)arg1 ;
-(id)latestSyncToken;
-(void)syncMessagesWithSyncType:(long long)arg1 deviceConditionsToCheck:(unsigned long long)arg2 activity:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
@end

