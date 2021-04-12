/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Messages/PlugIns/iMessage.imservice/iMessage
*/


@interface MessageGroupController : NSObject
+(id)sharedInstance;
+(id)chatForGroupMessagePayload:(id)arg1 fromIdentifier:(id)arg2 toIdentifier:(id)arg3 ;
+(id)newGroupMessagePayloadForChat:(id)arg1 fromID:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(double)_messageRetryTimeout;
-(BOOL)_shouldAdjustTimestampOfResentMessages;
-(id)findChatWithMessageData:(id)arg1 account:(id)arg2 session:(id)arg3 toIdentifier:(id)arg4 fromIdentifier:(id)arg5 timestamp:(id)arg6 ;
-(void)receiveMessageData:(id)arg1 account:(id)arg2 session:(id)arg3 toIdentifier:(id)arg4 fromIdentifier:(id)arg5 incomingEngroup:(id)arg6 service:(id)arg7 timestamp:(id)arg8 fromStorage:(BOOL)arg9 completionBlock:(/*^block*/id)arg10 ;
-(void)handler:(id)arg1 account:(id)arg2 groupMessagePayload:(id)arg3 toIdentifier:(id)arg4 fromIdentifier:(id)arg5 idsService:(id)arg6 fromToken:(id)arg7 timeStamp:(id)arg8 storageContext:(id)arg9 ;
-(void)engroupForChat:(id)arg1 service:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)addParticipants:(id)arg1 toChat:(id)arg2 fromID:(id)arg3 fromAccount:(id)arg4 session:(id)arg5 service:(id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)removeParticipants:(id)arg1 toChat:(id)arg2 fromID:(id)arg3 fromAccount:(id)arg4 session:(id)arg5 service:(id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)leaveChat:(id)arg1 fromID:(id)arg2 fromAccount:(id)arg3 session:(id)arg4 service:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)sendMessage:(id)arg1 toChat:(id)arg2 fromID:(id)arg3 fromAccount:(id)arg4 session:(id)arg5 service:(id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)setName:(id)arg1 fromName:(id)arg2 forChat:(id)arg3 fromID:(id)arg4 fromAccount:(id)arg5 session:(id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(id)IDSServerBagiMessageSharedInstance;
-(id)lockDownManager;
-(id)engramControllerSharedInstance;
-(BOOL)_serverAllowsMessageSend;
-(long long)currentMessageSendServerVersion;
-(void)_addOriginalTimestampIfNecessary:(id)arg1 context:(id)arg2 ;
-(BOOL)_canSendMessagesWithEngram;
-(BOOL)_shouldDropMessageGroupID:(id)arg1 participants:(id)arg2 fromIdentifier:(id)arg3 toIdentifier:(id)arg4 ;
-(void)receiveGroupUpdate:(id)arg1 chat:(id)arg2 service:(id)arg3 ;
-(BOOL)_checkForParticipantLeaveOnENGroup:(id)arg1 groupMessagePayload:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 service:(id)arg5 ;
-(void)_checkAndPerformLegacyAddRemove:(id)arg1 participantsToAdd:(id)arg2 participantsToRemove:(id)arg3 service:(id)arg4 fromIdentifier:(id)arg5 ;
-(BOOL)shouldDropDueToGroupSize:(id)arg1 ;
-(BOOL)_participantsContainBizID:(id)arg1 ;
-(void)receiveMessageData:(id)arg1 session:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 timestamp:(id)arg5 fromStorage:(BOOL)arg6 completionBlock:(/*^block*/id)arg7 ;
@end

