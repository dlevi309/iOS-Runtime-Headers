/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

