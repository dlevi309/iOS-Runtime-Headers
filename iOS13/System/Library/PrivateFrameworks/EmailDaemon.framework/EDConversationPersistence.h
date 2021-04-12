/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <libobjc.A.dylib/EDUbiquitousConversationManagerDelegate.h>
#import <libobjc.A.dylib/EDConversationDailyCloudExporterDelegate.h>
#import <libobjc.A.dylib/EDPersistenceDatabaseSchemaProvider.h>
#import <libobjc.A.dylib/EDConversationSubscriptionProvider.h>

@protocol OS_dispatch_queue;
@class EDPersistenceDatabase, EDUbiquitousConversationManager, EDPersistenceHookRegistry, NSObject, NSString;

@interface EDConversationPersistence : NSObject <EDUbiquitousConversationManagerDelegate, EDConversationDailyCloudExporterDelegate, EDPersistenceDatabaseSchemaProvider, EDConversationSubscriptionProvider> {

	EDPersistenceDatabase* _database;
	EDUbiquitousConversationManager* _conversationManager;
	EDPersistenceHookRegistry* _hookRegistry;
	NSObject*<OS_dispatch_queue> _notificationQueue;

}

@property (nonatomic,__weak,readonly) EDPersistenceDatabase * database;                            //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) EDUbiquitousConversationManager * conversationManager;              //@synthesize conversationManager=_conversationManager - In the implementation block
@property (nonatomic,readonly) EDPersistenceHookRegistry * hookRegistry;                           //@synthesize hookRegistry=_hookRegistry - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> notificationQueue;                       //@synthesize notificationQueue=_notificationQueue - In the implementation block
@property (nonatomic,readonly) BOOL hasSubscribedConversations; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(long long)conversationNotificationLevelForConversationFlags:(unsigned long long)arg1 ;
+(id)tablesAndForeignKeysToResolve:(id*)arg1 associationsToResolve:(id*)arg2 ;
+(id)conversationsTableSchema;
+(id)conversationIDMessageIDTableSchema;
+(unsigned long long)conversationFlagsForConversationNotificationLevel:(long long)arg1 ;
+(id)conversationsTableName;
-(EDPersistenceDatabase *)database;
-(NSObject*<OS_dispatch_queue>)notificationQueue;
-(void)setNotificationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(EDUbiquitousConversationManager *)conversationManager;
-(EDPersistenceHookRegistry *)hookRegistry;
-(void)pruneConversationTables:(double)arg1 ;
-(id)initWithDatabase:(id)arg1 hookRegistry:(id)arg2 ;
-(long long)previousSyncAnchorForDailyExport;
-(long long)currentSyncAnchorForDailyExport;
-(id)flaggedConversationsChangedBetweenStartAnchor:(long long)arg1 endAnchor:(long long)arg2 ;
-(void)setNewPreviousSyncAnchorForDailyExport:(long long)arg1 ;
-(void)setPersistenceConversationFlags:(unsigned long long)arg1 forConversationIDs:(id)arg2 reason:(long long)arg3 ;
-(void)setPersistenceConversationFlags:(unsigned long long)arg1 syncKey:(id)arg2 forConversationID:(long long)arg3 reason:(long long)arg4 ;
-(void)_notifyOfFlagChangeForConversationID:(long long)arg1 oldFlags:(unsigned long long)arg2 newFlags:(unsigned long long)arg3 reason:(long long)arg4 generationWindow:(id)arg5 ;
-(void)updateAssociationTableForMessageID:(id)arg1 dateSent:(id)arg2 conversationID:(long long)arg3 ;
-(void)updateAssociationTableForMessageIDs:(id)arg1 conversationID:(long long)arg2 ;
-(void)_postChangeNotificationForConversationID:(long long)arg1 flags:(unsigned long long)arg2 oldFlags:(unsigned long long)arg3 reason:(long long)arg4 ;
-(BOOL)hasSubscribedConversations;
-(id)syncedConversationIDsBySyncKey;
-(unsigned long long)persistenceConversationFlagsForConversationID:(long long)arg1 ;
-(long long)conversationIDForMessageIDs:(id)arg1 ;
-(id)messageIDsForConversationID:(long long)arg1 limit:(unsigned long long)arg2 ;
-(void)remoteMessageIDsAdded:(id)arg1 forConversationID:(long long)arg2 ;
-(void)clearConversationFlagsAndSyncKeyForConversationIDs:(id)arg1 ;
-(void)initializeConversationManagerAndPerformInitialSync;
-(long long)createConversationWithFlags:(unsigned long long)arg1 ;
-(void)markConversationWithIDs:(id)arg1 mute:(BOOL)arg2 ;
-(void)markConversationWithIDs:(id)arg1 notify:(BOOL)arg2 ;
-(void)updateAssociationTableForMessagePersistentIDs:(id)arg1 conversationID:(long long)arg2 ;
-(void)updateConversationNotificationLevel:(long long)arg1 forConversationWithID:(long long)arg2 ;
@end

