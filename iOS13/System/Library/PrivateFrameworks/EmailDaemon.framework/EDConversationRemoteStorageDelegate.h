/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@protocol EDConversationRemoteStorageDelegate <NSObject>
@optional
-(void)conversationRemoteStorageDidInitialize:(id)arg1;
-(void)conversationRemoteStorageWillResetData:(id)arg1;
-(void)conversationRemoteStorageDidResetData:(id)arg1;

@required
-(void)conversationRemoteStorage:(id)arg1 didChangeEntries:(id)arg2 reason:(long long)arg3;

@end

