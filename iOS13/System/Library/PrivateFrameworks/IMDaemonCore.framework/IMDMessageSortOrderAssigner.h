/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/


@interface IMDMessageSortOrderAssigner : NSObject
-(id)messageWithGUID:(id)arg1 ;
-(id)copyOfMessagesWithReplyToGUID:(id)arg1 ;
-(void)compareMessageToOtherMessagesWithSameReplyToGUIDAndAssignSortID:(id)arg1 existingMessagesWithSameReplyToGUID:(id)arg2 ;
-(void)assignSortIDToIncomingMessageWithNoExistingMessagesWithSameReplyToGUID:(id)arg1 onChat:(id)arg2 ;
-(void)assignSortIDToIncomingMessage:(id)arg1 onChat:(id)arg2 ;
-(void)persistMessage:(id)arg1 ;
-(void)assignAndPersistSortIDForIncomingMessage:(id)arg1 onChat:(id)arg2 ;
@end

