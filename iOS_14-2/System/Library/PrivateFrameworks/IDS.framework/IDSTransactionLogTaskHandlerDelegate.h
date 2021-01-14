/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


@protocol IDSTransactionLogTaskHandlerDelegate
@required
-(void)taskHandler:(id)arg1 messagesFromToken:(id)arg2 completion:(/*^block*/id)arg3;
-(void)taskHandler:(id)arg1 accountInfoForAliases:(id)arg2 completion:(/*^block*/id)arg3;
-(void)persistedTokenForTaskHandler:(id)arg1 completion:(/*^block*/id)arg2;
-(void)taskHandler:(id)arg1 participantsWithDestinations:(id)arg2 completion:(/*^block*/id)arg3;
-(void)taskHandler:(id)arg1 groupsWithGroupIDs:(id)arg2 completion:(/*^block*/id)arg3;
-(void)taskHandler:(id)arg1 persistToken:(id)arg2 completion:(/*^block*/id)arg3;

@end

