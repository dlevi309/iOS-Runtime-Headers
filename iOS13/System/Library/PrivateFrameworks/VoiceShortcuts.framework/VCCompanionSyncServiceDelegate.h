/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/


@protocol VCCompanionSyncServiceDelegate
@required
-(void)companionSyncService:(id)arg1 outgoingSyncSession:(id)arg2 didUpdateProgress:(double)arg3;
-(void)companionSyncService:(id)arg1 outgoingSyncSessionDidFinishSendingChanges:(id)arg2;
-(void)companionSyncService:(id)arg1 didFinishSyncSession:(id)arg2 withError:(id)arg3;
-(void)companionSyncService:(id)arg1 didRejectSessionWithError:(id)arg2;
-(BOOL)companionSyncServiceShouldStartSession:(id)arg1;
-(long long)companionSyncService:(id)arg1 typeForSession:(id)arg2;

@end

