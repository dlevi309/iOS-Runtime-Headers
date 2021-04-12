/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) unsigned long long countOfAllChats; 
+(id)sharedInstance;
-(id)existingChatWithIdentifier:(id)arg1 account:(id)arg2 ;
-(id)_siblingChatForChat:(id)arg1 usingChatGUIDToChatMap:(id)arg2 ;
-(void)_makeAllAttachmentsClassC;
-(id)_chatsContainingHandles:(id)arg1 ;
-(id)_spamMessageCreator;
-(id)existingChatForID:(id)arg1 account:(id)arg2 ;
-(NSArray *)allChats;
-(IMDMessageHistorySyncController *)messageHistorySyncController;
-(id)allExistingSupportedServiceChatsWithIdentifier:(id)arg1 style:(unsigned char)arg2 ;
-(void)_markGroupPhotosAsUnpurgeableIfNecessary;
-(BOOL)updateUnreadCountForChat:(id)arg1 ;
-(void)_updateCurrentAliasToCNIDDictionaryAndHistoryTokenWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_activeTUConversations;
-(void)updateStateForChat:(id)arg1 forcePost:(BOOL)arg2 shouldRebuildFailedMessageDate:(BOOL)arg3 setUnreadCountToZero:(BOOL)arg4 ;
-(id)init;
-(BOOL)hasDumpedLogsForNoExisitingGroup;
-(BOOL)_shouldHandleInternalPhishingAttempts;
-(BOOL)_shouldAddNewItemForConversation:(id)arg1 ;
-(void)_noteDownAttemptToMigratePersonCentricIDsOnIMDHandles;
-(void)systemDidUnlock;
-(void)updateChatUsingCKRecord:(id)arg1 ;
-(void)markChatAsDeferredForSyncingUsingCKRecord:(id)arg1 ;
-(void)_updateSyncStatisticsForMessage:(id)arg1 incrementTotalCount:(unsigned long long)arg2 ;
-(id)_initiatorForConversation:(id)arg1 chat:(id)arg2 ;
-(void)setUpInitialConversationManager;
-(id)_itemFromCKRecord:(id)arg1 ;
-(id)_chatInfoForNumberOfChats:(long long)arg1 ;
-(void)addChat:(id)arg1 ;
-(void)systemDidLeaveFirstDataProtectionLock;
-(id)_aliasToCNIDMapForAliases:(id)arg1 ;
-(BOOL)_updateDuplicateUnnamedGroupsWithNewGroupIDIfNeeded;
-(id)_chatsWithBlackholed:(BOOL)arg1 ;
-(void)invalidatePersonCentricGroupedChatsCache;
-(void)updateChatWithGUID:(id)arg1 serverChangeToken:(id)arg2 recordID:(id)arg3 ;
-(void)_fixUpChatParticipantsIfNeeded:(id)arg1 ;
-(void)setCkUtilities:(IMDCKUtilities *)arg1 ;
-(id)chatForRoom:(id)arg1 account:(id)arg2 chatIdentifier:(id)arg3 guid:(id)arg4 ;
-(id)existingSMSChatForID:(id)arg1 ;
-(id)_findChatWinnerInDuplicateChatArray:(id)arg1 fixDisplayName:(BOOL*)arg2 ;
-(void)_persistMergeIDMergedChatsIfNeeded;
-(void)updateNotificationUnreadCountForChat:(id)arg1 ;
-(void)addMessage:(id)arg1 toChat:(id)arg2 deferSpotlightIndexing:(BOOL)arg3 ;
-(id)_aliasToHandlesMap:(id)arg1 ;
-(id)existingiMessageChatForID:(id)arg1 withChatStyle:(unsigned char)arg2 ;
-(NSMutableDictionary *)idToHandlesMap;
-(void)setHasDumpedLogsForNoExisitingGroup:(BOOL)arg1 ;
-(void)_updatePCMIDForHandle:(id)arg1 ;
-(void)_setSortIDOnIncomingMessage:(id)arg1 forChat:(id)arg2 ;
-(id)_createGroupChatsArray;
-(id)_handlesThatNeedPCMIDsUpdatedGivenMap:(id)arg1 ;
-(BOOL)_shouldUpdateSyncStatsForMessage:(id)arg1 originalSyncState:(long long)arg2 ;
-(void)_fixSMSGroupChatAndStoreIfNeeded:(id)arg1 iMessageChat:(id)arg2 chatToRegenerate:(id*)arg3 ;
-(id)_reportMessageDictionaryForMessages:(id)arg1 withLastAddressedHandle:(id)arg2 maxMessageLength:(unsigned long long)arg3 isAutoReport:(BOOL)arg4 withChat:(id)arg5 maxMessagesToReport:(unsigned long long)arg6 totalMessageCount:(unsigned long long*)arg7 ;
-(BOOL)_isUsingStingRay;
-(void)updateStateForChat:(id)arg1 fromMessage:(id)arg2 toMessage:(id)arg3 forcePost:(BOOL)arg4 hintMessage:(id)arg5 shouldRebuildFailedMessageDate:(BOOL)arg6 shouldCalculateUnreadCount:(BOOL)arg7 setUnreadCountToZero:(BOOL)arg8 ;
-(id)_parentChatIDFromCKRecord:(id)arg1 ;
-(void)_updateHandleInDBWithPCMID:(id)arg1 handle:(id)arg2 ;
-(id)_personCentricIDForHandleID:(id)arg1 ;
-(id)allHandlesForID:(id)arg1 ;
-(void)updateMeCardHasUpdatedForAllChats;
-(void)addIMDHandleToRegistry:(id)arg1 ;
-(void)removeMessage:(id)arg1 fromChat:(id)arg2 ;
-(void)addChat:(id)arg1 firstLoad:(BOOL)arg2 ;
-(id)_chatInfoInRange:(NSRange)arg1 wantsBlackholed:(BOOL)arg2 ;
-(BOOL)_contactsBasedMerginEnabled;
-(void)_chatGUIDsThatNeedRemerging:(id*)arg1 chatDictionaryArray:(id*)arg2 aliasMap:(id)arg3 ;
-(void)updateLastMessageForChat:(id)arg1 hintMessage:(id)arg2 ;
-(void)processMessageUsingCKRecord:(id)arg1 updatedLastMessageCount:(int)arg2 ;
-(id)_existingiMessageChatForChatIdentifier:(id)arg1 style:(unsigned char)arg2 ;
-(BOOL)_mergeDuplicateGroupsIfNeeded;
-(id)_allChatInfo;
-(void)_addHandlesToPCMIDMapForChatParticipants:(id)arg1 pcmidToHandleMap:(id)arg2 ;
-(void)_updatePCMIDOnHandles:(id)arg1 ;
-(BOOL)doneLoadingAfterMerge;
-(id)_conversationItemForChat:(id)arg1 conversation:(id)arg2 ;
-(void)addMessage:(id)arg1 toChat:(id)arg2 ;
-(void)updateStateForChat:(id)arg1 forcePost:(BOOL)arg2 ;
-(id)allChatsWithIdentifier:(id)arg1 style:(unsigned char)arg2 serviceNames:(id)arg3 ;
-(void)_contactsChanged:(id)arg1 ;
-(void)__addChatToGroupIDChatIndex:(id)arg1 ;
-(void)checkBlackholedChatsExistAfterUpdatingChatWithAdd:(BOOL)arg1 ;
-(id)_chatForTUGroupID:(id)arg1 ;
-(void)conversationManager:(id)arg1 stateChangedForConversation:(id)arg2 ;
-(id)copyRecordIDsAndGUIDsPendingCloudKitDelete;
-(void)_addTUConversationToMessageStore:(id)arg1 shouldBroadcast:(BOOL)arg2 ;
-(void)__removeChatFromGroupIDChatIndex:(id)arg1 ;
-(void)updateStateForChat:(id)arg1 hintMessage:(id)arg2 shouldRebuildFailedMessageDate:(BOOL)arg3 setUnreadCountToZero:(BOOL)arg4 ;
-(void)repairPersonCentricIDsOnChatsIfNeeded;
-(void)refreshUIWhileSyncing;
-(id)chatIdToLastMessageMapOfOldChats;
-(id)aliasToCNIDMap;
-(void)_populateContactIDOnHandles;
-(BOOL)_ensureNoExistingGroupForCKRecord:(id)arg1 ;
-(void)processMessageUsingCKRecord:(id)arg1 ;
-(BOOL)_chat:(id)arg1 isDuplicateOfChat:(id)arg2 ;
-(TUConversationManager *)conversationManager;
-(NSMutableDictionary *)personCentricGroupedChatsCache;
-(id)_blackholedChatInfoForNumberOfChats:(long long)arg1 ;
-(id)chatsToUploadToCloudKitWithLimit:(unsigned long long)arg1 isUsingStingRay:(BOOL)arg2 ;
-(void)_addItemToParentChatIfNotLocationItem:(id)arg1 parentChat:(id)arg2 updatedLastMessageCount:(unsigned long long)arg3 ;
-(id)chatForHandles:(id)arg1 account:(id)arg2 chatIdentifier:(id)arg3 style:(unsigned char)arg4 groupID:(id)arg5 displayName:(id)arg6 guid:(id)arg7 lastAddressedHandle:(id)arg8 lastAddressedSIMID:(id)arg9 isBlackholed:(BOOL)arg10 ;
-(id)sortPersonCentricChatGroups:(id)arg1 ;
-(id)existingChatForRoom:(id)arg1 account:(id)arg2 ;
-(void)_setInitialLoadForTesting:(BOOL)arg1 ;
-(IMDMessageProcessingController *)messageProcessingController;
-(void)setCachedAliasToCNIDMap:(NSMutableDictionary *)arg1 ;
-(id)_allHandles;
-(BOOL)saveChats;
-(id)_chatInfoForConnection;
-(IMDCKUtilities *)ckUtilities;
-(id)_handlesWithChangedContactsOriginalMap:(id)arg1 newMap:(id)arg2 ;
-(id)_existingChatWithOriginalGroupID:(id)arg1 onService:(id)arg2 ;
-(id)_findLosingChatGUIDsInArrayOfChats:(id)arg1 withWinner:(id)arg2 ;
-(void)_updateCachedAliasToCNIDMap:(id)arg1 withHistoryToken:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)repairDuplicateChatsIfNeeded;
-(NSData *)historyToken;
-(id)existingChatsWithGroupID:(id)arg1 ;
-(id)personCentricGroupedChatsArrayWithMaximumNumberOfChats:(long long)arg1 skipsLastMessageLoading:(BOOL)arg2 usingChats:(id)arg3 useCachedChatGroups:(BOOL)arg4 ;
-(id)findDuplicateUnnamedGroups:(id)arg1 ;
-(void)clearPendingDeleteTable;
-(id)chatForHandle:(id)arg1 account:(id)arg2 chatIdentifier:(id)arg3 guid:(id)arg4 lastAddressedHandle:(id)arg5 lastAddressedSIMID:(id)arg6 isBlackholed:(BOOL)arg7 ;
-(NSArray *)blackholedChats;
-(IMDChatStore *)chatStore;
-(id)groupChatsBasedOnIdentityUsingCacheIfApplicable:(id)arg1 ;
-(BOOL)blackholedChatsExist;
-(id)existingChatWithGUID:(id)arg1 ;
-(void)removeItem:(id)arg1 fromChat:(id)arg2 ;
-(id)_existingChatForCKRecord:(id)arg1 ;
-(NSArray *)chats;
-(void)updateStateForChat:(id)arg1 forcePost:(BOOL)arg2 shouldRebuildFailedMessageDate:(BOOL)arg3 shouldCalculateUnreadCount:(BOOL)arg4 ;
-(id)_generateCurrentAliasToCNIDDictionary;
-(void)updateStateForChat:(id)arg1 hintMessage:(id)arg2 shouldRebuildFailedMessageDate:(BOOL)arg3 shouldCalculateUnreadCount:(BOOL)arg4 ;
-(void)_insertCurrentActiveTUConversationsIfNeeded;
-(void)updateStateForChat:(id)arg1 forcePost:(BOOL)arg2 shouldRebuildFailedMessageDate:(BOOL)arg3 ;
-(void)setHistoryToken:(NSData *)arg1 ;
-(void)updateStateForChat:(id)arg1 hintMessage:(id)arg2 shouldRebuildFailedMessageDate:(BOOL)arg3 ;
-(void)markDefferredChatsAsNeedingSync;
-(void)updateGroupIDForChat:(id)arg1 newGroupID:(id)arg2 ;
-(void)_chatGUIDsThatNeedRemergingWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)countOfAllChats;
-(id)groupChatsBasedOnIdentity:(id)arg1 ;
-(void)setPersonCentricGroupedChatsCache:(NSMutableDictionary *)arg1 ;
-(void)_reportToIDSiMessageSpam:(id)arg1 ;
-(id)_chatGUIDToChatMapForChats:(id)arg1 ;
-(BOOL)_haveInconsistentGroupPhotoGuidOnMergedChats:(id)arg1 ;
-(id)_extractHandlesFromMap:(id)arg1 usingCNID:(id)arg2 ;
-(void)updateLastMessageForChat:(id)arg1 hintMessage:(id)arg2 historyQuery:(BOOL)arg3 ;
-(id)_messageStore;
-(id)_reportMessageDictionaryForMessages:(id)arg1 withLastAddressedHandle:(id)arg2 maxMessageLength:(unsigned long long)arg3 isAutoReport:(BOOL)arg4 withChat:(id)arg5 maxMessagesToReport:(unsigned long long)arg6 totalMessageCount:(unsigned long long*)arg7 onlyReportForiMessageService:(BOOL)arg8 notifyInternalSecurity:(BOOL)arg9 ;
-(unsigned long long)markAsSpamForIDs:(id)arg1 style:(unsigned char)arg2 onServices:(id)arg3 chatID:(id)arg4 queryID:(id)arg5 autoReport:(BOOL)arg6 ;
-(void)_updateSyncStatisticsForChat:(id)arg1 incrementTotalCount:(unsigned long long)arg2 ;
-(id)_statsCollector;
-(void)_forceReloadChats:(BOOL)arg1 ;
-(id)existingSMSChatForID:(id)arg1 withChatStyle:(unsigned char)arg2 ;
-(BOOL)_existingItemRequiresUpgrade:(id)arg1 itemFromCKRecord:(id)arg2 ;
-(void)_repairInconsistentGroupPhotoGuidOnMergedChatsIfNecessary:(id)arg1 ;
-(void)_adoptUpdatedStateForExistingItem:(id)arg1 itemFromCKRecord:(id)arg2 ;
-(id)allExistingChatsWithIdentifier:(id)arg1 style:(unsigned char)arg2 ;
-(void)_markForksAsSyncedForChat:(id)arg1 ;
-(id)findDuplicateChats:(id)arg1 ;
-(id)truncateSortedChatsGroupedByPersonCentricID:(id)arg1 toMaximumNumberOfChats:(long long)arg2 ;
-(id)_handlesThatNeedPCMIDUpdatedGivenArray:(id)arg1 ;
-(void)setChatStore:(IMDChatStore *)arg1 ;
-(void)removeIMDHandleFromRegistry:(id)arg1 ;
-(void)addItem:(id)arg1 toChat:(id)arg2 ;
-(id)messagesToUploadToCloudKitWithLimit:(unsigned long long)arg1 ;
-(id)_chatInfoForSaving;
-(void)_insertChatUsingCKRecord:(id)arg1 ;
-(BOOL)_shouldUpdateSyncStatsForChat:(id)arg1 originalSyncState:(long long)arg2 ;
-(void)simulateMessageReceive:(id)arg1 serviceName:(id)arg2 groupID:(id)arg3 handles:(id)arg4 sender:(id)arg5 ;
-(id)existingOneOnOneChatsWithIdentifiers:(id)arg1 ;
-(id)_lookupChatUsingID:(id)arg1 ;
-(BOOL)_shouldMigrateIMDHandlesPersonCentricIDsOnAllChats;
-(id)existingChatWithEngramID:(id)arg1 ;
-(void)removeChat:(id)arg1 ;
-(NSMutableDictionary *)cachedAliasToCNIDMap;
-(BOOL)_saveChats;
-(void)setIdToHandlesMap:(NSMutableDictionary *)arg1 ;
-(void)_checkForContactChanges;
-(id)stringForChatStyle:(unsigned char)arg1 ;
-(BOOL)updateProperties:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 ;
-(id)_sharedMessageStore;
-(id)_pcmidToHandlesMapForChats:(id)arg1 ;
-(id)existingChatsForIDs:(id)arg1 onService:(id)arg2 style:(unsigned char)arg3 ;
-(id)existingChatForIDs:(id)arg1 account:(id)arg2 style:(unsigned char)arg3 ;
-(void)updateStateForChat:(id)arg1 hintMessage:(id)arg2 ;
-(id)existingUnnamedGroupChatsContainingHandles:(id)arg1 ;
-(void)_fixUpChatParticipantsIfNeeded:(id)arg1 usingChatGUIDToChatMap:(id)arg2 ;
-(id)existingChatForIDs:(id)arg1 account:(id)arg2 displayName:(id)arg3 groupID:(id)arg4 style:(unsigned char)arg5 ;
-(void)_updateCachedCNIDMapForHandles:(id)arg1 ;
-(void)dealloc;
-(BOOL)loadChatsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)resetChatSyncStateForRecord:(id)arg1 ;
-(id)existingiMessageChatForID:(id)arg1 ;
-(BOOL)isBeingSetup;
@end

