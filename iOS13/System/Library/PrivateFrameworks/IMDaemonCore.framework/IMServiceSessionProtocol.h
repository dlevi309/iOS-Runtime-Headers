/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/


@protocol IMServiceSessionProtocol
@optional
-(void)authenticateAccount:(id)arg1;
-(void)registerAccount:(id)arg1;
-(void)unregisterAccount:(id)arg1;
-(void)enrollSelfDeviceInSMSRelay;
-(void)eagerUploadCancel:(id)arg1;
-(void)eagerUploadTransfer:(id)arg1;
-(void)login;
-(void)logout;
-(void)setBlockIdleStatus:(BOOL)arg1;
-(void)setBlockList:(id)arg1;
-(void)setBlockingMode:(unsigned)arg1;
-(void)setAllowList:(id)arg1;
-(void)requestGroups;
-(void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2 account:(id)arg3;
-(void)addAliases:(id)arg1 account:(id)arg2;
-(void)removeAliases:(id)arg1 account:(id)arg2;
-(void)unvalidateAliases:(id)arg1 account:(id)arg2;
-(void)validateAliases:(id)arg1 account:(id)arg2;
-(void)autoLogin;
-(void)renameGroup:(id)arg1 to:(id)arg2;
-(void)holdBuddyUpdates;
-(void)resumeBuddyUpdates;
-(void)enrollDeviceInSMSRelay:(id)arg1;
-(void)unEnrollDeviceInSMSRelay:(id)arg1;
-(void)importMessage:(id)arg1 isRead:(BOOL)arg2;
-(void)loginWithAccount:(id)arg1;
-(void)sendLogDumpMessageAtFilePath:(id)arg1 toRecipient:(id)arg2 shouldDeleteFile:(BOOL)arg3 withCompletion:(/*^block*/id)arg4;
-(void)autoReconnectWithAccount:(id)arg1;
-(void)autoReconnect;
-(void)logoutWithAccount:(id)arg1;
-(void)changeGroups:(id)arg1;
-(void)changeGroup:(id)arg1 changes:(id)arg2;
-(void)acceptSubscriptionRequest:(BOOL)arg1 from:(id)arg2;
-(void)requestSubscriptionTo:(id)arg1;
-(void)startWatchingBuddy:(id)arg1;
-(void)stopWatchingBuddy:(id)arg1;
-(void)requestProperty:(id)arg1 ofPerson:(id)arg2;
-(void)setValue:(id)arg1 ofProperty:(id)arg2 ofPerson:(id)arg3;
-(void)joinChatID:(id)arg1 handleInfo:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 joinProperties:(id)arg5;
-(void)joinChatID:(id)arg1 handleInfo:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 groupID:(id)arg5 lastAddressedHandle:(id)arg6 lastAddressedSIMID:(id)arg7 joinProperties:(id)arg8;
-(void)leaveChatID:(id)arg1 identifier:(id)arg2 style:(unsigned char)arg3;
-(void)leaveiMessageChatID:(id)arg1 identifier:(id)arg2 style:(unsigned char)arg3;
-(void)removeChatID:(id)arg1 identifier:(id)arg2 style:(unsigned char)arg3;
-(void)invitePersonInfo:(id)arg1 withMessage:(id)arg2 toChatID:(id)arg3 identifier:(id)arg4 style:(unsigned char)arg5;
-(void)invitePersonInfoToiMessageChat:(id)arg1 withMessage:(id)arg2 toChatID:(id)arg3 identifier:(id)arg4 style:(unsigned char)arg5;
-(void)removePersonInfo:(id)arg1 chatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4;
-(void)removePersonInfoFromiMessageChat:(id)arg1 chatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4;
-(void)declineInvitationToChatID:(id)arg1 identifier:(id)arg2 style:(unsigned char)arg3;
-(void)updateDisplayName:(id)arg1 fromDisplayName:(id)arg2 forChatID:(id)arg3 identifier:(id)arg4 style:(unsigned char)arg5;
-(void)sendMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4;
-(void)sendReadReceiptForMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4;
-(void)sendPlayedReceiptForMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4;
-(void)sendSavedReceiptForMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4;
-(void)noteMessagesMarkedAsReadForChatWithGUID:(id)arg1;
-(void)setProperties:(id)arg1 ofParticipant:(id)arg2 inChatID:(id)arg3 identifier:(id)arg4 style:(unsigned char)arg5;
-(void)passwordUpdatedWithAccount:(id)arg1;
-(void)sendFileTransfer:(id)arg1 toPerson:(id)arg2;
-(void)sendCommand:(id)arg1 withProperties:(id)arg2 toPerson:(id)arg3;
-(void)sendCommand:(id)arg1 withProperties:(id)arg2 toPerson:(id)arg3 toChatID:(id)arg4 identifier:(id)arg5 style:(unsigned char)arg6;
-(void)sendDeleteCommand:(id)arg1 forChatGUID:(id)arg2;
-(void)requestVCWithPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3;
-(void)respondToVCInvitationWithPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3;
-(void)cancelVCRequestWithPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3 reason:(id)arg4;
-(void)sendCounterProposalToPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3;
-(void)sendVCUpdate:(id)arg1 toPerson:(id)arg2 conference:(id)arg3;
-(void)sendAVMessageToPerson:(id)arg1 sessionID:(unsigned)arg2 type:(unsigned)arg3 userInfo:(id)arg4 conference:(id)arg5;
-(void)relay:(id)arg1 sendInitateRequest:(id)arg2 toPerson:(id)arg3;
-(void)relay:(id)arg1 sendUpdate:(id)arg2 toPerson:(id)arg3;
-(void)relay:(id)arg1 sendCancel:(id)arg2 toPerson:(id)arg3;
-(void)validateProfileWithAccount:(id)arg1;
-(void)closeSessionChatID:(id)arg1 identifier:(id)arg2 style:(unsigned char)arg3;
-(BOOL)sendNicknameUpdatesToPeerDevices:(id)arg1 toDestinations:(id)arg2;
-(void)sendNicknameInfoToChatID:(id)arg1;

@end

