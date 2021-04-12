/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@class NSMutableArray, CKConversation, NSMutableDictionary;

@interface CKConversationList : NSObject {

	NSMutableArray* _trackedConversations;
	BOOL _loadingConversations;
	BOOL _loadedConversations;
	BOOL _remergingConversations;
	BOOL _holdingWasKnownSenderUpdates;
	CKConversation* _pendingConversation;
	NSMutableDictionary* _conversationsDictionary;
	unsigned long long _filteredConversationCount;

}

@property (assign,nonatomic) BOOL holdingWasKnownSenderUpdates;                          //@synthesize holdingWasKnownSenderUpdates=_holdingWasKnownSenderUpdates - In the implementation block
@property (assign,nonatomic) BOOL remergingConversations;                                //@synthesize remergingConversations=_remergingConversations - In the implementation block
@property (nonatomic,readonly) BOOL loadingConversations;                                //@synthesize loadingConversations=_loadingConversations - In the implementation block
@property (nonatomic,readonly) BOOL loadedConversations;                                 //@synthesize loadedConversations=_loadedConversations - In the implementation block
@property (nonatomic,retain) CKConversation * pendingConversation;                       //@synthesize pendingConversation=_pendingConversation - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * conversationsDictionary;              //@synthesize conversationsDictionary=_conversationsDictionary - In the implementation block
@property (assign,nonatomic) unsigned long long filteredConversationCount;               //@synthesize filteredConversationCount=_filteredConversationCount - In the implementation block
+(void)initialize;
+(id)sharedConversationList;
+(void)_handleRegistryDidLoadNotification:(id)arg1 ;
+(id)numberForFilterMode:(unsigned long long)arg1 ;
+(id)stringForFilterMode:(unsigned long long)arg1 ;
+(id)conversationListAlertSuppressionContextForFilterMode:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)resetCaches;
-(void)setNeedsReload;
-(id)conversations;
-(void)_chatItemsDidChange:(id)arg1 ;
-(void)_handleRegistryWillUnregisterChatNotification:(id)arg1 ;
-(void)removeConversation:(id)arg1 ;
-(id)conversationForExistingChat:(id)arg1 ;
-(id)conversationForExistingChatWithGroupID:(id)arg1 ;
-(id)conversationForHandles:(id)arg1 displayName:(id)arg2 joinedChatsOnly:(BOOL)arg3 create:(BOOL)arg4 ;
-(void)_beginTrackingAllExistingChatsIfNeeded;
-(void)_abChanged:(id)arg1 ;
-(void)_abPartialChanged:(id)arg1 ;
-(void)_handleChatParticipantsDidChange:(id)arg1 ;
-(void)_handleChatJoinStateDidChange:(id)arg1 ;
-(void)_handlePreferredServiceChangedNotification:(id)arg1 ;
-(void)_handleEngroupFinishedUpdating:(id)arg1 ;
-(void)_chatPropertiesChanged:(id)arg1 ;
-(void)_handleChatsWillRemergeNotification:(id)arg1 ;
-(void)_handleChatsDidRemergeNotification:(id)arg1 ;
-(void)_handleRegistryDidRegisterChatNotification:(id)arg1 ;
-(void)_handleMemoryWarning:(id)arg1 ;
-(id)_alreadyTrackedConversationForChat:(id)arg1 ;
-(void)beginTrackingConversation:(id)arg1 forChat:(id)arg2 ;
-(id)_beginTrackingConversationWithChat:(id)arg1 ;
-(id)_conversationForChat:(id)arg1 ;
-(void)_postConversationListChangedNotification;
-(CKConversation *)pendingConversation;
-(void)setPendingConversation:(CKConversation *)arg1 ;
-(void)stopTrackingConversation:(id)arg1 ;
-(id)conversationForHandles:(id)arg1 displayName:(id)arg2 lastAddressedHandle:(id)arg3 lastAddressedSIMID:(id)arg4 joinedChatsOnly:(BOOL)arg5 create:(BOOL)arg6 ;
-(BOOL)_messageFilteringEnabled;
-(BOOL)_shouldFilterForParticipants:(id)arg1 ;
-(BOOL)loadingConversations;
-(void)resort;
-(BOOL)_shouldBailBeginTrackingForCurrentProcess;
-(id)conversationsForFilterMode:(unsigned long long)arg1 ;
-(BOOL)_isUnreadChat:(id)arg1 ignoringMessages:(id)arg2 ;
-(void)_postConversationListUpdateVisibleConversationsNotificationForUID:(id)arg1 ;
-(void)setRemergingConversations:(BOOL)arg1 ;
-(BOOL)_shouldCleanupFilter;
-(void)_setConversations:(id)arg1 forFilterMode:(unsigned long long)arg2 ;
-(void)updateConversationFilteredFlagsAndReportSpam;
-(void)setFilteredConversationCount:(unsigned long long)arg1 ;
-(unsigned long long)filterModeForConversation:(id)arg1 ;
-(BOOL)_messageUnknownFilteringEnabled;
-(BOOL)_messageSpamFilteringEnabled;
-(BOOL)_messageIsFromFilteredSenderServiceIsSMS:(BOOL)arg1 lastMessageIsSMS:(BOOL)arg2 isContact:(BOOL)arg3 isFiltered:(BOOL)arg4 isSpam:(BOOL)arg5 unknownFilteringEnabled:(BOOL)arg6 smsSpamFilteringEnabled:(BOOL)arg7 ;
-(BOOL)_shouldShowInboxView;
-(unsigned long long)filteredConversationCount;
-(NSMutableDictionary *)conversationsDictionary;
-(void)_beginTrackingConversationWithChat:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)conversationForExistingChatWithIMChatGroupID:(id)arg1 ;
-(id)conversationForExistingChatWithIMChatPersonCentricID:(id)arg1 ;
-(id)conversationForExistingChatWithGUID:(id)arg1 ;
-(id)_copyEntitiesForAddressStrings:(id)arg1 ;
-(id)firstUnreadFilteredConversationIgnoringMessages:(id)arg1 ;
-(BOOL)hasActiveConversations;
-(id)topMostConversation;
-(void)unpendConversation;
-(long long)unreadCountForFilterMode:(unsigned long long)arg1 ;
-(long long)unreadFilteredConversationCountIgnoringMessages:(id)arg1 ;
-(id)unreadLastMessages;
-(void)deleteConversation:(id)arg1 ;
-(void)deleteConversations:(id)arg1 ;
-(id)pendingConversationCreatingIfNecessary;
-(id)_testingTrackedConversations;
-(void)updateConversationListsAndSortIfEnabled;
-(void)updateConversationsWasKnownSender;
-(BOOL)isHoldingWasKnownSenderUpdates;
-(void)beginWasKnownSenderHold;
-(void)releaseWasKnownSenderHold;
-(BOOL)loadedConversations;
-(BOOL)remergingConversations;
-(void)setConversationsDictionary:(NSMutableDictionary *)arg1 ;
-(BOOL)holdingWasKnownSenderUpdates;
-(void)setHoldingWasKnownSenderUpdates:(BOOL)arg1 ;
@end

