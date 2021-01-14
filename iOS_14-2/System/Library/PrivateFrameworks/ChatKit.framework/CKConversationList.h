/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@class NSMutableArray, CKConversation, NSMutableDictionary, NSArray;

@interface CKConversationList : NSObject {

	NSMutableArray* _trackedConversations;
	BOOL _loadingConversations;
	BOOL _loadedConversations;
	BOOL _remergingConversations;
	BOOL _loadedPinnedConversations;
	BOOL _holdingWasKnownSenderUpdates;
	CKConversation* _pendingConversation;
	NSMutableDictionary* _conversationsDictionary;
	NSArray* _pinnedConversations;

}

@property (nonatomic,retain) NSArray * pinnedConversations;                              //@synthesize pinnedConversations=_pinnedConversations - In the implementation block
@property (assign,nonatomic) BOOL holdingWasKnownSenderUpdates;                          //@synthesize holdingWasKnownSenderUpdates=_holdingWasKnownSenderUpdates - In the implementation block
@property (assign,nonatomic) BOOL loadedPinnedConversations;                             //@synthesize loadedPinnedConversations=_loadedPinnedConversations - In the implementation block
@property (assign,nonatomic) BOOL remergingConversations;                                //@synthesize remergingConversations=_remergingConversations - In the implementation block
@property (nonatomic,readonly) BOOL loadingConversations;                                //@synthesize loadingConversations=_loadingConversations - In the implementation block
@property (nonatomic,readonly) BOOL loadedConversations;                                 //@synthesize loadedConversations=_loadedConversations - In the implementation block
@property (nonatomic,retain) CKConversation * pendingConversation;                       //@synthesize pendingConversation=_pendingConversation - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * conversationsDictionary;              //@synthesize conversationsDictionary=_conversationsDictionary - In the implementation block
+(void)initialize;
+(void)_handleRegistryDidLoadNotification:(id)arg1 ;
+(id)numberForFilterMode:(unsigned long long)arg1 ;
+(id)stringForFilterMode:(unsigned long long)arg1 ;
+(id)conversationListAlertSuppressionContextForFilterMode:(unsigned long long)arg1 ;
+(id)sharedConversationList;
-(id)init;
-(void)resort;
-(void)setNeedsReload;
-(void)_beginTrackingAllExistingChatsIfNeeded;
-(void)_invalidateABCaches:(id)arg1 ;
-(void)_abChanged:(id)arg1 ;
-(void)_invalidatePartialABCaches:(id)arg1 ;
-(void)_abPartialChanged:(id)arg1 ;
-(void)_handleChatParticipantsDidChange:(id)arg1 ;
-(void)_chatPropertiesChanged:(id)arg1 ;
-(void)_handleChatJoinStateDidChange:(id)arg1 ;
-(void)_handlePreferredServiceChangedNotification:(id)arg1 ;
-(void)_handleEngroupFinishedUpdating:(id)arg1 ;
-(void)_handleChatsWillRemergeNotification:(id)arg1 ;
-(void)_handleChatsDidRemergeNotification:(id)arg1 ;
-(void)_handleMemoryWarning:(id)arg1 ;
-(void)_handleRegistryDidRegisterChatNotification:(id)arg1 ;
-(void)updateConversationsForNewPinnedConversations:(id)arg1 ;
-(void)_handleGroupPhotoChanged:(id)arg1 ;
-(void)_handleGroupNameChanged:(id)arg1 ;
-(id)_conversationForChat:(id)arg1 ;
-(id)_alreadyTrackedConversationForChat:(id)arg1 ;
-(void)beginTrackingConversation:(id)arg1 forChat:(id)arg2 ;
-(void)_postConversationListChangedNotification;
-(void)updatePinnedConversationsFromDataSource;
-(CKConversation *)pendingConversation;
-(void)setPendingConversation:(CKConversation *)arg1 ;
-(void)stopTrackingConversation:(id)arg1 ;
-(id)conversationForHandles:(id)arg1 displayName:(id)arg2 lastAddressedHandle:(id)arg3 lastAddressedSIMID:(id)arg4 joinedChatsOnly:(BOOL)arg5 create:(BOOL)arg6 ;
-(id)pinningIdentifierMap;
-(void)setPinnedConversations:(NSArray *)arg1 ;
-(NSArray *)pinnedConversations;
-(void)postFinishedInitalPinLoadIfNecessary;
-(BOOL)loadedPinnedConversations;
-(void)setLoadedPinnedConversations:(BOOL)arg1 ;
-(BOOL)_messageUnknownFilteringEnabled;
-(BOOL)_shouldFilterForParticipants:(id)arg1 ;
-(BOOL)loadingConversations;
-(void)logConversationsTopCount:(long long)arg1 bottomCount:(long long)arg2 ;
-(id)conversationsForFilterMode:(unsigned long long)arg1 ;
-(BOOL)_shouldBailBeginTrackingForCurrentProcess;
-(BOOL)_isUnreadChat:(id)arg1 ignoringMessages:(id)arg2 ;
-(BOOL)remergingConversations;
-(void)_postConversationListUpdateVisibleConversationsNotificationForUID:(id)arg1 ;
-(void)setRemergingConversations:(BOOL)arg1 ;
-(void)_setConversations:(id)arg1 forFilterMode:(unsigned long long)arg2 ;
-(void)updateConversationFilteredFlagsAndReportSpam;
-(unsigned long long)filterModeForConversation:(id)arg1 ;
-(BOOL)_messageSpamFilteringEnabled;
-(NSMutableDictionary *)conversationsDictionary;
-(void)performDNDMigrationIfNecessary;
-(id)_dnd_deprecated_globalIdentifierForChat:(id)arg1 ;
-(id)_copyEntitiesForAddressStrings:(id)arg1 ;
-(id)_beginTrackingConversationWithChatIndirect:(id)arg1 ;
-(void)_beginTrackingConversationWithChat:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)conversationForExistingChatWithPinningIdentifier:(id)arg1 ;
-(id)conversationForExistingChatWithDeviceIndependentID:(id)arg1 ;
-(id)conversationForExistingChatWithIMChatGroupID:(id)arg1 ;
-(id)conversationForExistingChatWithIMChatPersonCentricID:(id)arg1 ;
-(id)firstUnreadFilteredConversationIgnoringMessages:(id)arg1 ;
-(BOOL)hasActiveConversations;
-(id)topMostConversation;
-(void)unpendConversation;
-(long long)unreadCountForFilterMode:(unsigned long long)arg1 ;
-(id)unreadLastMessages;
-(long long)unreadFilteredConversationCountIgnoringMessages:(id)arg1 ;
-(id)pendingConversationCreatingIfNecessary;
-(id)_testingTrackedConversations;
-(void)updateConversationsWasKnownSender;
-(BOOL)isHoldingWasKnownSenderUpdates;
-(void)beginWasKnownSenderHold;
-(void)releaseWasKnownSenderHold;
-(void)migrateDNDInfoIfNeeded;
-(BOOL)loadedConversations;
-(void)setConversationsDictionary:(NSMutableDictionary *)arg1 ;
-(BOOL)holdingWasKnownSenderUpdates;
-(void)setHoldingWasKnownSenderUpdates:(BOOL)arg1 ;
-(void)removeConversation:(id)arg1 ;
-(void)deleteConversation:(id)arg1 ;
-(void)deleteConversations:(id)arg1 ;
-(void)updateConversationListsAndSortIfEnabled;
-(id)description;
-(void)resetCaches;
-(void)_chatItemsDidChange:(id)arg1 ;
-(void)_handleRegistryWillUnregisterChatNotification:(id)arg1 ;
-(id)conversationForExistingChat:(id)arg1 ;
-(id)conversationForExistingChatWithGroupID:(id)arg1 ;
-(id)conversationForHandles:(id)arg1 displayName:(id)arg2 joinedChatsOnly:(BOOL)arg3 create:(BOOL)arg4 ;
-(id)conversationForExistingChatWithGUID:(id)arg1 ;
-(id)conversations;
@end

