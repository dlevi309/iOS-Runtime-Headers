/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@protocol EDConversationDailyCloudExporterDelegate
@required
-(long long)previousSyncAnchorForDailyExport;
-(long long)currentSyncAnchorForDailyExport;
-(id)flaggedConversationsChangedBetweenStartAnchor:(long long)arg1 endAnchor:(long long)arg2;
-(void)setNewPreviousSyncAnchorForDailyExport:(long long)arg1;

@end

