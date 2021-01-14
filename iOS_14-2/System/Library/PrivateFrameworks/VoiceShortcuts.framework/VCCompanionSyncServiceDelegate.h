/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/


@protocol VCCompanionSyncServiceDelegate
@required
-(BOOL)companionSyncServiceShouldStartSession:(id)arg1;
-(void)companionSyncService:(id)arg1 didRejectSessionWithError:(id)arg2;
-(long long)companionSyncService:(id)arg1 typeForSession:(id)arg2;
-(void)companionSyncService:(id)arg1 didFinishSyncSession:(id)arg2 withError:(id)arg3;
-(void)companionSyncService:(id)arg1 outgoingSyncSessionDidFinishSendingChanges:(id)arg2;
-(void)companionSyncService:(id)arg1 outgoingSyncSession:(id)arg2 didUpdateProgress:(double)arg3;

@end

