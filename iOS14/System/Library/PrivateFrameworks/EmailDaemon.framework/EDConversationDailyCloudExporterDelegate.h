/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@protocol EDConversationDailyCloudExporterDelegate
@required
-(long long)previousSyncAnchorForDailyExport;
-(id)flaggedConversationsChangedBetweenStartAnchor:(long long)arg1 endAnchor:(long long)arg2;
-(long long)currentSyncAnchorForDailyExport;
-(void)setNewPreviousSyncAnchorForDailyExport:(long long)arg1;

@end

