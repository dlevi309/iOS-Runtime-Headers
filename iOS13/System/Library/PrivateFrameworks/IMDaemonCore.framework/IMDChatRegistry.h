/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/

#import <IMDaemonCore/IMDaemonCore-Structs.h>
#import <libobjc.A.dylib/TUConversationManagerDelegate.h>

@class NSRecursiveLock, NSMutableDictionary, NSData, IMDCKUtilities, IMDChatStore, IMDMessageProcessingController, IMDMessageHistorySyncController, TUConversationManager, NSString, NSArray;

@interface IMDChatRegistry : NSObject <TUConversationManagerDelegate> {

	NSRecursiveLock* _chatsLock;
	NSRecursiveLock* _handlesLock;
	NSMutableDictionary* _chats;
	BOOL _isLoading;
	BOOL _doneLoadingAfterMerge;
	BOOL _blackholedChatsExistCache;
	NSMutableDictionary* _chatsByGroupID;
	BOOL _hasDumpedLogsForNoExisitingGroup;
	NSMutableDictionary* _idToHandlesMap;
	NSData* _historyToken;
	IMDCKUtilities* _ckUtilities;
	IMDChatStore* _chatStore;
	IMDMessageProcessingController* _messageProcessingController;
	IMDMessageHistorySyncController* _messageHistorySyncController;
	NSMutableDictionary* _personCentricGroupedChatsCache;
	NSMutableDictionary* _cachedAliasToCNIDMap;
	TUConversationManager* _conversationManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSMutableDictionary * idToHandlesMap;                                          //@synthesize idToHandlesMap=_idToHandlesMap - In the implementation block
@property (nonatomic,readonly) NSData * historyToken;                                                       //@synthesize historyToken=_historyToken - In the implementation block
@property (nonatomic,retain) IMDCKUtilities * ckUtilities;                                                  //@synthesize ckUtilities=_ckUtilities - In the implementation block
@property (nonatomic,retain) IMDChatStore * chatStore;                                                      //@synthesize chatStore=_chatStore - In the implementation block
@property (assign,nonatomic) BOOL hasDumpedLogsForNoExisitingGroup;                                         //@synthesize hasDumpedLogsForNoExisitingGroup=_hasDumpedLogsForNoExisitingGroup - In the implementation block
@property (nonatomic,readonly) IMDMessageProcessingController * messageProcessingController;                //@synthesize messageProcessingController=_messageProcessingController - In the implementation block
@property (nonatomic,readonly) IMDMessageHistorySyncController * messageHistorySyncController;              //@synthesize messageHistorySyncController=_messageHistorySyncController - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * personCentricGroupedChatsCache;                          //@synthesize personCentricGroupedChatsCache=_personCentricGroupedChatsCache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedAliasToCNIDMap;                                    //@synthesize cachedAliasToCNIDMap=_cachedAliasToCNIDMap - In the implementation block
@property (nonatomic,readonly) TUConversationManager * conversationManager;                                 //@synthesize conversationManager=_conversationManager - In the implementation block
@property (nonatomic,readonly) NSArray * chats; 
@property (nonatomic,readonly) NSArray * allChats; 
@property (nonatomic,readonly) NSArray * blackholedChats; 
@property (nonatomic,readonly) BOOL blackholedChatsExist; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)systemDidUnlock;
-(void)systemDidLeaveFirstDataProtectionLock;
-(id)aliasToCNIDMap;
-(NSData *)historyToken;
-(void)setHistoryToken:(NSData *)arg1 ;
-(void)conversationManager:(id)arg1 stateChangedForConversation:(id)arg2 ;
-(TUConversationManager *)conversationManager;
-(id)existingChatWithGUID:(id)arg1 ;
-(BOOL)blackholedChatsExist;
-(unsigned long long)markAsSpamForIDs:(id)arg1 style:(unsigned char)arg2 onServices:(id)arg3 chatID:(id)arg4 queryID:(id)arg5 autoReport:(BOOL)arg6 ;
-(void)removeChat:(id)arg1 ;
-(void)simulateMessageReceive:(id)arg1 serviceName:(id)arg2 groupID:(id)arg3 handles:(id)arg4 sender:(id)arg5 ;
-(id)_activeTUConversations;
-(id)_messageStore;
-(void)_contactsChanged:(id)arg1 ;
-(NSArray *)chats;
-(BOOL)updateProperties:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 ;
-(IMDCKUtilities *)ckUtilities;
-(BOOL)doneLoadingAfterMerge;
-(id)_statsCollector;
-(void)updateLastMessageForChat:(id)arg1 hintMessage:(id)arg2 ;
-(void)updateStateForChat:(id)arg1 fromMessage:(id)arg2 toMessage:(id)arg3 forcePost:(BOOL)arg4 hintMessage:(id)arg5 shouldRebuildFailedMessageDate:(BOOL)arg6 shouldCalculateUnreadCount:(BOOL)arg7 setUnreadCountToZero:(BOOL)arg8 ;
-(id)existingChatsForIDs:(id)arg1 onService:(id)arg2 style:(unsigned char)arg3 ;
-(void)removeMessage:(id)arg1 fromChat:(id)arg2 ;
-(BOOL)_isUsingStingRay;
-(void)invalidatePersonCentricGroupedChatsCache;
-(void)checkBlackholedChatsExistAfterUpdatingChatWithAdd:(BOOL)arg1 ;
-(id)existingChatsWithGroupID:(id)arg1 ;
-(void)_forceReloadChats:(BOOL)arg1 ;
-(void)updateMeCardHasUpdatedForAllChats;
-(id)_chatsWithBlackholed:(BOOL)arg1 ;
-(NSArray *)blackholedChats;
-(id)existingChatForID:(id)arg1 account:(id)arg2 ;
-(void)addChat:(id)arg1 ;
-(id)existingSMSChatForID:(id)arg1 withChatStyle:(unsigned char)arg2 ;
-(void)addIMDHandleToRegistry:(id)arg1 ;
-(id)existingChatWithIdentifier:(id)arg1 account:(id)arg2 ;
-(id)existingChatForRoom:(id)arg1 account:(id)arg2 ;
-(id)existingiMessageChatForID:(id)arg1 withChatStyle:(unsigned char)arg2 ;
-(NSArray *)allChats;
-(id)existingChatForIDs:(id)arg1 account:(id)arg2 displayName:(id)arg3 groupID:(id)arg4 style:(unsigned char)arg5 ;
-(id)allChatsWithIdentifier:(id)arg1 style:(unsigned char)arg2 serviceNames:(id)arg3 ;
-(void)updateLastMessageForChat:(id)arg1 hintMessage:(id)arg2 historyQuery:(BOOL)arg3 ;
-(BOOL)isBeingSetup;
-(BOOL)updateUnreadCountForChat:(id)arg1 ;
-(id)_sharedMessageStore;
-(void)updateStateForChat:(id)arg1 hintMessage:(id)arg2 shouldRebuildFailedMessageDate:(BOOL)arg3 ;
-(void)updateStateForChat:(id)arg1 forcePost:(BOOL)arg2 shouldRebuildFailedMessageDate:(BOOL)arg3 ;
-(void)updateStateForChat:(id)arg1 forcePost:(BOOL)arg2 shouldRebuildFailedMessageDate:(BOOL)arg3 shouldCalculateUnreadCount:(BOOL)arg4 ;
-(void)__removeChatFromGroupIDChatIndex:(id)arg1 ;
-(void)__addChatToGroupIDChatIndex:(id)arg1 ;
-(id)_reportMessageDictionaryForMessages:(id)arg1 withLastAddressedHandle:(id)arg2 maxMessageLength:(unsigned long long)arg3 isAutoReport:(BOOL)arg4 withChat:(id)arg5 maxMessagesToReport:(unsigned long long)arg6 totalMessageCount:(unsigned long long*)arg7 ;
-(void)_reportToIDSiMessageSpam:(id)arg1 ;
-(BOOL)_shouldHandleInternalPhishingAttempts;
-(id)_reportMessageDictionaryForMessages:(id)arg1 withLastAddressedHandle:(id)arg2 maxMessageLength:(unsigned long long)arg3 isAutoReport:(BOOL)arg4 withChat:(id)arg5 maxMessagesToReport:(unsigned long long)arg6 totalMessageCount:(unsigned long long*)arg7 onlyReportForiMessageService:(BOOL)arg8 notifyInternalSecurity:(BOOL)arg9 ;
-(id)_spamMessageCreator;
-(void)addChat:(id)arg1 firstLoad:(BOOL)arg2 ;
-(NSMutableDictionary *)personCentricGroupedChatsCache;
-(BOOL)_contactsBasedMerginEnabled;
-(void)_updateCachedCNIDMapForHandles:(id)arg1 ;
-(NSMutableDictionary *)cachedAliasToCNIDMap;
-(void)removeIMDHandleFromRegistry:(id)arg1 ;
-(void)updateStateForChat:(id)arg1 hintMessage:(id)arg2 ;
-(void)addMessage:(id)arg1 toChat:(id)arg2 deferSpotlightIndexing:(BOOL)arg3 ;
-(IMDChatStore *)chatStore;
-(id)stringForChatStyle:(unsigned char)arg1 ;
-(void)_fixSMSGroupChatAndStoreIfNeeded:(id)arg1 iMessageChat:(id)arg2 ;
-(id)_chatInfoInRange:(NSRange)arg1 wantsBlackholed:(BOOL)arg2 ;
-(BOOL)loadChatsWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)_saveChats;
-(BOOL)repairDuplicateChatsIfNeeded;
-(void)repairPersonCentricIDsOnChatsIfNeeded;
-(void)_populateContactIDOnHandles;
-(void)_persistMergeIDMergedChatsIfNeeded;
-(void)setUpInitialConversationManager;
-(id)_allHandles;
-(id)allExistingChatsWithIdentifier:(id)arg1 style:(unsigned char)arg2 ;
-(void)_makeAllAttachmentsClassC;
-(id)_createGroupChatsArray;
-(id)findDuplicateUnnamedGroups:(id)arg1 ;
-(void)updateGroupIDForChat:(id)arg1 newGroupID:(id)arg2 ;
-(BOOL)_chat:(id)arg1 isDuplicateOfChat:(id)arg2 ;
-(id)findDuplicateChats:(id)arg1 ;
-(id)_findChatWinnerInDuplicateChatArray:(id)arg1 fixDisplayName:(BOOL*)arg2 ;
-(id)_findLosingChatGUIDsInArrayOfChats:(id)arg1 withWinner:(id)arg2 ;
-(BOOL)_mergeDuplicateGroupsIfNeeded;
-(id)groupChatsBasedOnIdentity:(id)arg1 ;
-(void)setPersonCentricGroupedChatsCache:(NSMutableDictionary *)arg1 ;
-(void)_fixUpChatParticipantsIfNeeded:(id)arg1 ;
-(id)groupChatsBasedOnIdentityUsingCacheIfApplicable:(id)arg1 ;
-(id)sortPersonCentricChatGroups:(id)arg1 ;
-(id)truncateSortedChatsGroupedByPersonCentricID:(id)arg1 toMaximumNumberOfChats:(long long)arg2 ;
-(void)_updateSyncStatisticsForChat:(id)arg1 incrementTotalCount:(unsigned long long)arg2 ;
-(id)_existingChatWithOriginalGroupID:(id)arg1 onService:(id)arg2 ;
-(BOOL)hasDumpedLogsForNoExisitingGroup;
-(void)setHasDumpedLogsForNoExisitingGroup:(BOOL)arg1 ;
-(id)_existingChatForCKRecord:(id)arg1 ;
-(void)_markForksAsSyncedForChat:(id)arg1 ;
-(BOOL)_shouldUpdateSyncStatsForChat:(id)arg1 originalSyncState:(long long)arg2 ;
-(BOOL)_ensureNoExistingGroupForCKRecord:(id)arg1 ;
-(void)_insertChatUsingCKRecord:(id)arg1 ;
-(BOOL)_shouldMigrateIMDHandlesPersonCentricIDsOnAllChats;
-(void)_noteDownAttemptToMigratePersonCentricIDsOnIMDHandles;
-(id)_pcmidToHandlesMapForChats:(id)arg1 ;
-(id)_handlesThatNeedPCMIDsUpdatedGivenMap:(id)arg1 ;
-(void)_updatePCMIDOnHandles:(id)arg1 ;
-(void)_addHandlesToPCMIDMapForChatParticipants:(id)arg1 pcmidToHandleMap:(id)arg2 ;
-(id)_handlesThatNeedPCMIDUpdatedGivenArray:(id)arg1 ;
-(void)_updatePCMIDForHandle:(id)arg1 ;
-(id)_personCentricIDForHandleID:(id)arg1 ;
-(void)_updateHandleInDBWithPCMID:(id)arg1 handle:(id)arg2 ;
-(void)addItem:(id)arg1 toChat:(id)arg2 ;
-(void)processMessageUsingCKRecord:(id)arg1 updatedLastMessageCount:(int)arg2 ;
-(id)_itemFromCKRecord:(id)arg1 ;
-(id)_parentChatIDFromCKRecord:(id)arg1 ;
-(id)_lookupChatUsingID:(id)arg1 ;
-(BOOL)_shouldUpdateSyncStatsForMessage:(id)arg1 originalSyncState:(long long)arg2 ;
-(void)_updateSyncStatisticsForMessage:(id)arg1 incrementTotalCount:(unsigned long long)arg2 ;
-(void)_setSortIDOnIncomingMessage:(id)arg1 forChat:(id)arg2 ;
-(void)_addItemToParentChatIfNotLocationItem:(id)arg1 parentChat:(id)arg2 updatedLastMessageCount:(unsigned long long)arg3 ;
-(void)_updateCachedAliasToCNIDMap:(id)arg1 withHistoryToken:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSMutableDictionary *)idToHandlesMap;
-(id)_aliasToCNIDMapForAliases:(id)arg1 ;
-(id)_generateCurrentAliasToCNIDDictionary;
-(void)setCachedAliasToCNIDMap:(NSMutableDictionary *)arg1 ;
-(id)_extractHandlesFromMap:(id)arg1 usingCNID:(id)arg2 ;
-(id)existingOneOnOneChatsWithIdentifiers:(id)arg1 ;
-(id)existingUnnamedGroupChatsContainingHandles:(id)arg1 ;
-(void)_checkForContactChanges;
-(void)_chatGUIDsThatNeedRemergingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_chatGUIDsThatNeedRemerging:(id*)arg1 chatDictionaryArray:(id*)arg2 aliasMap:(id)arg3 ;
-(void)_updateCurrentAliasToCNIDDictionaryAndHistoryTokenWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_handlesWithChangedContactsOriginalMap:(id)arg1 newMap:(id)arg2 ;
-(id)_chatsContainingHandles:(id)arg1 ;
-(id)personCentricGroupedChatsArrayWithMaximumNumberOfChats:(long long)arg1 skipsLastMessageLoading:(BOOL)arg2 usingChats:(id)arg3 useCachedChatGroups:(BOOL)arg4 ;
-(id)chatForHandle:(id)arg1 account:(id)arg2 chatIdentifier:(id)arg3 guid:(id)arg4 lastAddressedHandle:(id)arg5 lastAddressedSIMID:(id)arg6 isBlackholed:(BOOL)arg7 ;
-(id)chatForHandles:(id)arg1 account:(id)arg2 chatIdentifier:(id)arg3 style:(unsigned char)arg4 groupID:(id)arg5 displayName:(id)arg6 guid:(id)arg7 lastAddressedHandle:(id)arg8 lastAddressedSIMID:(id)arg9 isBlackholed:(BOOL)arg10 ;
-(id)chatForRoom:(id)arg1 account:(id)arg2 chatIdentifier:(id)arg3 guid:(id)arg4 ;
-(id)existingiMessageChatForID:(id)arg1 ;
-(id)existingSMSChatForID:(id)arg1 ;
-(id)existingChatWithEngramID:(id)arg1 ;
-(id)existingChatForIDs:(id)arg1 account:(id)arg2 style:(unsigned char)arg3 ;
-(id)allExistingSupportedServiceChatsWithIdentifier:(id)arg1 style:(unsigned char)arg2 ;
-(void)updateStateForChat:(id)arg1 hintMessage:(id)arg2 shouldRebuildFailedMessageDate:(BOOL)arg3 shouldCalculateUnreadCount:(BOOL)arg4 ;
-(void)updateStateForChat:(id)arg1 hintMessage:(id)arg2 shouldRebuildFailedMessageDate:(BOOL)arg3 setUnreadCountToZero:(BOOL)arg4 ;
-(void)updateStateForChat:(id)arg1 forcePost:(BOOL)arg2 ;
-(void)updateStateForChat:(id)arg1 forcePost:(BOOL)arg2 shouldRebuildFailedMessageDate:(BOOL)arg3 setUnreadCountToZero:(BOOL)arg4 ;
-(void)removeItem:(id)arg1 fromChat:(id)arg2 ;
-(void)addMessage:(id)arg1 toChat:(id)arg2 ;
-(id)_chatInfoForConnection;
-(id)_allChatInfo;
-(id)_chatInfoForNumberOfChats:(long long)arg1 ;
-(id)_blackholedChatInfoForNumberOfChats:(long long)arg1 ;
-(id)_chatInfoForSaving;
-(void)_setInitialLoadForTesting:(BOOL)arg1 ;
-(void)refreshUIWhileSyncing;
-(BOOL)saveChats;
-(id)allHandlesForID:(id)arg1 ;
-(BOOL)_updateDuplicateUnnamedGroupsWithNewGroupIDIfNeeded;
-(id)_aliasToHandlesMap:(id)arg1 ;
-(id)chatIdToLastMessageMapOfOldChats;
-(id)chatsToUploadToCloudKitWithLimit:(unsigned long long)arg1 isUsingStingRay:(BOOL)arg2 ;
-(void)updateChatWithGUID:(id)arg1 serverChangeToken:(id)arg2 recordID:(id)arg3 ;
-(void)updateChatUsingCKRecord:(id)arg1 ;
-(void)markChatAsDeferredForSyncingUsingCKRecord:(id)arg1 ;
-(void)markDefferredChatsAsNeedingSync;
-(void)resetChatSyncStateForRecord:(id)arg1 ;
-(id)messagesToUploadToCloudKitWithLimit:(unsigned long long)arg1 ;
-(void)processMessageUsingCKRecord:(id)arg1 ;
-(id)copyRecordIDsAndGUIDsPendingCloudKitDelete;
-(void)clearPendingDeleteTable;
-(id)_existingiMessageChatForChatIdentifier:(id)arg1 style:(unsigned char)arg2 ;
-(void)setIdToHandlesMap:(NSMutableDictionary *)arg1 ;
-(void)setCkUtilities:(IMDCKUtilities *)arg1 ;
-(void)setChatStore:(IMDChatStore *)arg1 ;
-(IMDMessageProcessingController *)messageProcessingController;
-(IMDMessageHistorySyncController *)messageHistorySyncController;
-(void)_insertCurrentActiveTUConversationsIfNeeded;
-(void)_addTUConversationToMessageStore:(id)arg1 shouldBroadcast:(BOOL)arg2 ;
-(id)_chatForTUGroupID:(id)arg1 ;
-(id)_conversationItemForChat:(id)arg1 conversation:(id)arg2 ;
-(id)_initiatorForConversation:(id)arg1 chat:(id)arg2 ;
-(BOOL)_shouldAddNewItemForConversation:(id)arg1 ;
@end

