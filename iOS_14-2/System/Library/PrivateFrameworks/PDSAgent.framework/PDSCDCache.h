/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/PDSAgent
*/


@protocol PDSCDCache <NSObject>
@required
-(BOOL)updateEntryState:(unsigned char)arg1 forUser:(id)arg2 clientID:(id)arg3 withError:(id*)arg4;
-(BOOL)updateAllEntriesWithState:(unsigned char)arg1 toState:(unsigned char)arg2 withError:(id*)arg3;
-(BOOL)deleteEntry:(id)arg1 withError:(id*)arg2;
-(id)loadAllActiveUsers;
-(id)loadAllUsersForClientID:(id)arg1;
-(BOOL)storeEntry:(id)arg1 withError:(id*)arg2;
-(id)loadAllEntries;
-(id)loadAllUsers;
-(BOOL)storeEntries:(id)arg1 transitionBlock:(/*^block*/id)arg2 deleteEntries:(id)arg3 withError:(id*)arg4;
-(id)loadAllEntriesUser:(id)arg1 withClientID:(id)arg2;
-(id)loadAllEntriesForClientID:(id)arg1;
-(id)loadAllEntriesUser:(id)arg1;
-(id)loadPendingEntries;
-(id)loadAllActiveUsersForClientID:(id)arg1;
-(BOOL)updateEntryState:(unsigned char)arg1 forUser:(id)arg2 withError:(id*)arg3;
-(BOOL)hasPendingEntries;
-(BOOL)hasActiveEntries;
-(BOOL)storeEntry:(id)arg1 transitionBlock:(/*^block*/id)arg2 withError:(id*)arg3;

@end

