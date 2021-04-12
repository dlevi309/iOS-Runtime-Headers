/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@protocol EDUbiquitousConversationManagerDelegate <NSObject>
@required
-(void)pruneConversationTables:(double)arg1;
-(void)setPersistenceConversationFlags:(unsigned long long)arg1 syncKey:(id)arg2 forConversationID:(long long)arg3 reason:(long long)arg4;
-(id)syncedConversationIDsBySyncKey;
-(unsigned long long)persistenceConversationFlagsForConversationID:(long long)arg1;
-(long long)conversationIDForMessageIDs:(id)arg1;
-(id)messageIDsForConversationID:(long long)arg1 limit:(unsigned long long)arg2;
-(void)remoteMessageIDsAdded:(id)arg1 forConversationID:(long long)arg2;
-(void)clearConversationFlagsAndSyncKeyForConversationIDs:(id)arg1;

@end

