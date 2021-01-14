/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@protocol EDUbiquitousConversationManagerDelegate <NSObject>
@required
-(id)syncedConversationIDsBySyncKey;
-(unsigned long long)persistenceConversationFlagsForConversationID:(long long)arg1;
-(void)pruneConversationTables:(double)arg1;
-(void)clearConversationFlagsAndSyncKeyForConversationIDs:(id)arg1;
-(void)setPersistenceConversationFlags:(unsigned long long)arg1 syncKey:(id)arg2 forConversationID:(long long)arg3 reason:(long long)arg4;
-(void)remoteMessageIDsAdded:(id)arg1 forConversationID:(long long)arg2;
-(long long)conversationIDForMessageIDs:(id)arg1;
-(id)messageIDsForConversationID:(long long)arg1 limit:(unsigned long long)arg2;

@end

