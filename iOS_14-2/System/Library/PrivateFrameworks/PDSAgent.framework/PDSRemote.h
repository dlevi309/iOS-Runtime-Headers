/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/PDSAgent
*/


@protocol PDSRemote
@required
-(void)storeEntries:(id)arg1 deleteEntries:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)batchUpdateEntries:(id)arg1 forClientID:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)removeAllEntriesForUser:(id)arg1 withClientID:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)entriesForUser:(id)arg1 clientID:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)activeUsersWithClientID:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)usersWithClientID:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)entriesForClientID:(id)arg1 withCompletion:(/*^block*/id)arg2;

@end

