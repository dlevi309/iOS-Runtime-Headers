/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@protocol EDMessageQueryHelperDelegate <NSObject>
@required
-(void)queryHelper:(id)arg1 didFindMessages:(id)arg2;
-(void)queryHelperDidFindAllMessages:(id)arg1;
-(void)queryHelper:(id)arg1 didAddMessages:(id)arg2;
-(void)queryHelper:(id)arg1 messageFlagsDidChangeForMessages:(id)arg2;
-(void)queryHelper:(id)arg1 conversationIDDidChangeForMessages:(id)arg2 fromConversationID:(long long)arg3;
-(void)queryHelper:(id)arg1 conversationNotificationLevelDidChangeForConversation:(long long)arg2 conversationID:(long long)arg3;
-(void)queryHelper:(id)arg1 objectIDDidChangeForMessage:(id)arg2 oldObjectID:(id)arg3 oldConversationID:(long long)arg4;
-(void)queryHelper:(id)arg1 didUpdateMessages:(id)arg2 forKeyPaths:(id)arg3;
-(void)queryHelper:(id)arg1 didDeleteMessages:(id)arg2;
-(void)queryHelperDidFinishRemoteSearch:(id)arg1;
-(void)queryHelperNeedsRestart:(id)arg1;

@end

