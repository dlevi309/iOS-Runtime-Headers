/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@protocol EDConversationRemoteStorageDelegate <NSObject>
@optional
-(void)conversationRemoteStorageDidInitialize:(id)arg1;
-(void)conversationRemoteStorageDidResetData:(id)arg1;
-(void)conversationRemoteStorageWillResetData:(id)arg1;

@required
-(void)conversationRemoteStorage:(id)arg1 didChangeEntries:(id)arg2 reason:(long long)arg3;

@end

