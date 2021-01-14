/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/

#import <IMDaemonCore/IMDCKAttachmentSyncController.h>

@class CKServerChangeToken;

@interface IMDCKInitialAttachmentSyncController : IMDCKAttachmentSyncController {

	CKServerChangeToken* _syncToken;

}

@property (nonatomic,retain) CKServerChangeToken * syncToken;              //@synthesize syncToken=_syncToken - In the implementation block
-(void)setSyncToken:(CKServerChangeToken *)arg1 ;
-(id)ckUtilities;
-(CKServerChangeToken *)syncToken;
-(void)dealloc;
-(void)setLatestSyncToken:(id)arg1 forSyncType:(id)arg2 ;
-(BOOL)_deviceConditionsAllowsMessageSyncIgnoreFeatureEnabled:(BOOL)arg1 ;
-(BOOL)_deviceConditionsAllowsMessageSync;
-(BOOL)_deviceConditionsAllowsMessageSyncForCurrentBatchCount:(long long)arg1 maxBatchCount:(long long)arg2 ;
-(BOOL)_kickOffWriteIfNeededForSyncType:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)setLatestSyncToken:(id)arg1 ;
-(id)latestSyncToken;
@end

