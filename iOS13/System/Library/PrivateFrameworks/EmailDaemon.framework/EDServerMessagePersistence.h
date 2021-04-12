/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <libobjc.A.dylib/EFLoggable.h>

@class EDPersistenceDatabase, EDGmailLabelPersistence, NSString;

@interface EDServerMessagePersistence : NSObject <EFLoggable> {

	BOOL _supportsLabels;
	BOOL _useNumericSearch;
	EDPersistenceDatabase* _database;
	EDGmailLabelPersistence* _gmailLabelPersistence;
	long long _mailboxID;

}

@property (nonatomic,readonly) EDPersistenceDatabase * database;                             //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) EDGmailLabelPersistence * gmailLabelPersistence;              //@synthesize gmailLabelPersistence=_gmailLabelPersistence - In the implementation block
@property (nonatomic,readonly) long long mailboxID;                                          //@synthesize mailboxID=_mailboxID - In the implementation block
@property (nonatomic,readonly) BOOL useNumericSearch;                                        //@synthesize useNumericSearch=_useNumericSearch - In the implementation block
@property (nonatomic,readonly) unsigned long long messageCount; 
@property (nonatomic,readonly) unsigned long long unreadMessageCount; 
@property (nonatomic,readonly) unsigned long long undeletedMessageCount; 
@property (nonatomic,readonly) unsigned maximumIMAPUID; 
@property (nonatomic,readonly) unsigned minimumIMAPUID; 
@property (nonatomic,readonly) BOOL supportsLabels;                                          //@synthesize supportsLabels=_supportsLabels - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(id)serverMessagesTableSchema;
+(id)serverLabelsTableSchema;
+(id)tablesAndForeignKeysToResolve:(id*)arg1 associationsToResolve:(id*)arg2 ;
-(id)init;
-(EDPersistenceDatabase *)database;
-(unsigned long long)messageCount;
-(long long)mailboxID;
-(EDGmailLabelPersistence *)gmailLabelPersistence;
-(unsigned long long)unreadMessageCount;
-(id)serverMessagesForIMAPUIDs:(id)arg1 limit:(unsigned long long)arg2 returnLastEntries:(BOOL)arg3 ;
-(unsigned)minimumIMAPUID;
-(unsigned)maximumIMAPUID;
-(BOOL)deleteAllServerMessagesInMailbox;
-(BOOL)supportsLabels;
-(BOOL)addServerMessage:(id)arg1 invalidMessage:(BOOL*)arg2 duplicateRemoteID:(BOOL*)arg3 ;
-(BOOL)deleteServerMessagesWithRemoteIDs:(id)arg1 ;
-(BOOL)applyFlagChange:(id)arg1 toMessagesWithRemoteIDs:(id)arg2 ;
-(BOOL)addLabels:(id)arg1 removeLabels:(id)arg2 toMessagesWithRemoteIDs:(id)arg3 ;
-(id)serverMessagesForRemoteIDs:(id)arg1 ;
-(BOOL)attachMessage:(long long)arg1 toServerMessageWithRemoteID:(id)arg2 ;
-(id)initWithDatabase:(id)arg1 gmailLabelPersistence:(id)arg2 mailboxID:(long long)arg3 useNumericSearch:(BOOL)arg4 supportsLabels:(BOOL)arg5 ;
-(id)_remoteIDStringForRemoteIDArray:(id)arg1 ;
-(id)_serverMessagesWithWhereClause:(id)arg1 limitClause:(id)arg2 returnLastEntries:(BOOL)arg3 ;
-(id)_nextBatchForUIDs:(id)arg1 limit:(unsigned long long)arg2 returnLastEntries:(BOOL)arg3 isContiguous:(BOOL*)arg4 ;
-(id)_uidExpressionForUIDs:(id)arg1 isContiguous:(BOOL)arg2 ;
-(id)_serverMessageForRow:(id)arg1 connection:(id)arg2 ;
-(BOOL)_addLabels:(id)arg1 removeLabels:(id)arg2 forUID:(unsigned)arg3 connection:(id)arg4 ;
-(BOOL)useNumericSearch;
-(unsigned long long)undeletedMessageCount;
-(BOOL)_uidsAreContiguous:(id)arg1 ;
@end

