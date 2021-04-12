/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <libobjc.A.dylib/NSItemProviderWriting.h>

@class NSArray, NSString, IMChat, NSSet, NSAttributedString, NSNumber, NSDate, CNGroupIdentity, CKEntity, CKComposition, IMService;

@interface CKConversation : NSObject <NSItemProviderWriting> {

	NSArray* _recipients;
	NSString* _name;
	IMChat* _chat;
	unsigned _limitToLoad;
	struct {
		unsigned ignoringTypingUpdates : 1;
	}  _conversationFlags;
	BOOL _needsReload;
	BOOL _shouldShowGroupPhotoUpdateBanner;
	BOOL _shouldShowGroupNameUpdateBanner;
	BOOL _hasLoadedAllMessages;
	BOOL _isReportedAsSpam;
	BOOL _wasKnownSender;
	BOOL _hasSetWasKnownSender;
	BOOL _holdWasKnownSenderUpdates;
	BOOL _needsUpdatedContactsForVisualIdentity;
	BOOL _needsUpdatedGroupPhotoForVisualIdentity;
	BOOL _needsUpdatedGroupNameForVisualIdentity;
	int _wasDetectedAsSMSSpam;
	int _wasDetectedAsSMSCategory;
	int _wasDetectedAsiMessageSpam;
	NSArray* _pendingHandles;
	NSString* _conversationListCollectionViewPinnedItemIdentifier;
	NSString* _conversationListCollectionViewListItemIdentifier;
	NSString* _selectedLastAddressedHandle;
	NSString* _selectedLastAddressedSIMID;
	NSSet* _pendingRecipients;
	NSAttributedString* _groupName;
	NSString* _groupIdentityUpdateHandleID;
	NSAttributedString* _previewText;
	NSNumber* _businessConversation;
	NSDate* _dateLastViewed;
	CNGroupIdentity* __conversationVisualIdentity;

}

@property (nonatomic,copy,readonly) NSArray * writableTypeIdentifiersForItemProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) IMChat * chat;                                                                //@synthesize chat=_chat - In the implementation block
@property (nonatomic,retain) NSArray * recipients;                                                         //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,copy) NSAttributedString * previewText;                                               //@synthesize previewText=_previewText - In the implementation block
@property (nonatomic,retain) NSSet * pendingRecipients;                                                    //@synthesize pendingRecipients=_pendingRecipients - In the implementation block
@property (assign,nonatomic) unsigned limitToLoad;                                                         //@synthesize limitToLoad=_limitToLoad - In the implementation block
@property (assign,nonatomic) BOOL hasLoadedAllMessages;                                                    //@synthesize hasLoadedAllMessages=_hasLoadedAllMessages - In the implementation block
@property (assign,nonatomic) BOOL isReportedAsSpam;                                                        //@synthesize isReportedAsSpam=_isReportedAsSpam - In the implementation block
@property (nonatomic,retain) NSNumber * businessConversation;                                              //@synthesize businessConversation=_businessConversation - In the implementation block
@property (nonatomic,retain) NSDate * dateLastViewed;                                                      //@synthesize dateLastViewed=_dateLastViewed - In the implementation block
@property (assign,nonatomic) BOOL wasKnownSender;                                                          //@synthesize wasKnownSender=_wasKnownSender - In the implementation block
@property (assign,nonatomic) BOOL hasSetWasKnownSender;                                                    //@synthesize hasSetWasKnownSender=_hasSetWasKnownSender - In the implementation block
@property (assign,nonatomic) BOOL holdWasKnownSenderUpdates;                                               //@synthesize holdWasKnownSenderUpdates=_holdWasKnownSenderUpdates - In the implementation block
@property (nonatomic,retain) CNGroupIdentity * _conversationVisualIdentity;                                //@synthesize _conversationVisualIdentity=__conversationVisualIdentity - In the implementation block
@property (assign,nonatomic) BOOL needsUpdatedContactsForVisualIdentity;                                   //@synthesize needsUpdatedContactsForVisualIdentity=_needsUpdatedContactsForVisualIdentity - In the implementation block
@property (assign,nonatomic) BOOL needsUpdatedGroupPhotoForVisualIdentity;                                 //@synthesize needsUpdatedGroupPhotoForVisualIdentity=_needsUpdatedGroupPhotoForVisualIdentity - In the implementation block
@property (assign,nonatomic) BOOL needsUpdatedGroupNameForVisualIdentity;                                  //@synthesize needsUpdatedGroupNameForVisualIdentity=_needsUpdatedGroupNameForVisualIdentity - In the implementation block
@property (nonatomic,readonly) NSArray * frequentReplies; 
@property (nonatomic,retain) NSString * selectedLastAddressedHandle;                                       //@synthesize selectedLastAddressedHandle=_selectedLastAddressedHandle - In the implementation block
@property (nonatomic,retain) NSString * selectedLastAddressedSIMID;                                        //@synthesize selectedLastAddressedSIMID=_selectedLastAddressedSIMID - In the implementation block
@property (nonatomic,readonly) NSString * lastAddressedHandle; 
@property (nonatomic,readonly) NSString * lastAddressedSIMID; 
@property (nonatomic,readonly) CKEntity * recipient; 
@property (nonatomic,copy,readonly) NSArray * recipientStrings; 
@property (nonatomic,readonly) unsigned long long recipientCount; 
@property (nonatomic,readonly) BOOL isToEmailAddress; 
@property (nonatomic,readonly) NSString * rawAddressedName; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) BOOL hasDisplayName; 
@property (assign,nonatomic) NSString * displayName; 
@property (nonatomic,readonly) NSAttributedString * groupName;                                             //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,readonly) NSString * serviceDisplayName; 
@property (nonatomic,readonly) char buttonColor; 
@property (nonatomic,readonly) BOOL isPreviewTextForAttachment; 
@property (nonatomic,readonly) NSSet * mergedPinningIdentifiers; 
@property (nonatomic,readonly) BOOL isPinned; 
@property (nonatomic,copy,readonly) NSString * senderIdentifier; 
@property (nonatomic,retain) CKComposition * unsentComposition; 
@property (nonatomic,readonly) unsigned long long unreadCount; 
@property (nonatomic,readonly) BOOL hasUnreadMessages; 
@property (getter=isMuted,nonatomic,readonly) BOOL muted; 
@property (getter=shouldSendReadReceipts,nonatomic,readonly) BOOL sendReadReceipts; 
@property (nonatomic,readonly) BOOL needsReload;                                                           //@synthesize needsReload=_needsReload - In the implementation block
@property (nonatomic,readonly) NSString * groupID; 
@property (nonatomic,readonly) NSString * deviceIndependentID; 
@property (nonatomic,readonly) NSString * pinningIdentifier; 
@property (nonatomic,readonly) int wasDetectedAsSMSSpam;                                                   //@synthesize wasDetectedAsSMSSpam=_wasDetectedAsSMSSpam - In the implementation block
@property (nonatomic,readonly) int wasDetectedAsSMSCategory;                                               //@synthesize wasDetectedAsSMSCategory=_wasDetectedAsSMSCategory - In the implementation block
@property (nonatomic,readonly) int wasDetectedAsiMessageSpam;                                              //@synthesize wasDetectedAsiMessageSpam=_wasDetectedAsiMessageSpam - In the implementation block
@property (nonatomic,readonly) int wasDetectedAsSpam; 
@property (nonatomic,readonly) long long spamCategory; 
@property (nonatomic,readonly) IMService * sendingService; 
@property (assign,nonatomic) BOOL forceMMS; 
@property (getter=isGroupConversation,nonatomic,readonly) BOOL groupConversation; 
@property (nonatomic,readonly) BOOL canLeave; 
@property (getter=hasLeft,nonatomic,readonly) BOOL left; 
@property (nonatomic,readonly) BOOL supportsMutatingGroupMembers; 
@property (getter=hasLeftGroupChat,nonatomic,readonly) BOOL leftGroupChat; 
@property (assign,nonatomic) BOOL shouldShowGroupPhotoUpdateBanner;                                        //@synthesize shouldShowGroupPhotoUpdateBanner=_shouldShowGroupPhotoUpdateBanner - In the implementation block
@property (assign,nonatomic) BOOL shouldShowGroupNameUpdateBanner;                                         //@synthesize shouldShowGroupNameUpdateBanner=_shouldShowGroupNameUpdateBanner - In the implementation block
@property (nonatomic,retain) NSString * groupIdentityUpdateHandleID;                                       //@synthesize groupIdentityUpdateHandleID=_groupIdentityUpdateHandleID - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowCharacterCount; 
@property (assign,nonatomic) BOOL localUserIsTyping; 
@property (assign,nonatomic) BOOL localUserIsRecording; 
@property (nonatomic,copy) NSString * localUserIsComposing; 
@property (getter=isPending,nonatomic,readonly) BOOL pending; 
@property (nonatomic,copy,readonly) NSArray * pendingEntities; 
@property (nonatomic,copy) NSArray * pendingHandles;                                                       //@synthesize pendingHandles=_pendingHandles - In the implementation block
@property (nonatomic,readonly) NSArray * handles; 
@property (nonatomic,readonly) unsigned long long disclosureAtomStyle; 
@property (assign,getter=isIgnoringTypingUpdates,nonatomic) BOOL ignoringTypingUpdates; 
@property (nonatomic,readonly) NSString * conversationListCollectionViewPinnedItemIdentifier;              //@synthesize conversationListCollectionViewPinnedItemIdentifier=_conversationListCollectionViewPinnedItemIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * conversationListCollectionViewListItemIdentifier;                //@synthesize conversationListCollectionViewListItemIdentifier=_conversationListCollectionViewListItemIdentifier - In the implementation block
+(id)newPendingConversation;
+(id)writableTypeIdentifiersForItemProvider;
+(BOOL)isSMSSpamFilteringEnabled;
+(long long)_iMessage_maxAttachmentCount;
+(BOOL)_iMessage_canSendMessageWithMediaObjectTypes:(int*)arg1 errorCode:(long long*)arg2 ;
+(id)_iMessage_localizedErrorForReason:(long long)arg1 ;
+(unsigned long long)_iMessage_maxTransferFileSizeForWiFi:(BOOL)arg1 ;
+(BOOL)_sms_mediaObjectPassesRestriction:(id)arg1 ;
+(long long)_sms_maxAttachmentCountForPhoneNumber:(id)arg1 simID:(id)arg2 ;
+(BOOL)_sms_canSendMessageWithMediaObjectTypes:(int*)arg1 phoneNumber:(id)arg2 simID:(id)arg3 errorCode:(long long*)arg4 ;
+(BOOL)_sms_mediaObjectPassesDurationCheck:(id)arg1 ;
+(id)_sms_localizedErrorForReason:(long long)arg1 ;
+(BOOL)_iMessage_canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2 ;
+(BOOL)_sms_canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2 phoneNumber:(id)arg3 simID:(id)arg4 ;
+(BOOL)_sms_canSendComposition:(id)arg1 lastAddressedHandle:(id)arg2 lastAddressedSIMID:(id)arg3 error:(id*)arg4 ;
+(BOOL)_iMessage_canSendComposition:(id)arg1 lastAddressedHandle:(id)arg2 lastAddressedSIMID:(id)arg3 currentService:(id)arg4 forceSMS:(BOOL)arg5 error:(id*)arg6 ;
+(id)conversationForContacts:(id)arg1 candidateConversation:(id)arg2 ;
+(id)conversationForAddresses:(id)arg1 allowRetargeting:(BOOL)arg2 candidateConversation:(id)arg3 ;
+(BOOL)_iMessage_canSendMessageWithMediaObjectTypes:(int*)arg1 ;
+(double)_iMessage_maxTrimDurationForMediaType:(int)arg1 ;
+(BOOL)_sms_canSendMessageWithMediaObjectTypes:(int*)arg1 phoneNumber:(id)arg2 simID:(id)arg3 ;
+(double)_sms_maxTrimDurationForMediaType:(int)arg1 ;
-(NSArray *)recipients;
-(unsigned long long)unreadCount;
-(IMChat *)chat;
-(void)acceptTransfer:(id)arg1 ;
-(BOOL)isPinned;
-(NSArray *)handles;
-(id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)canLeave;
-(void)reloadIfNeeded;
-(void)setGroupIdentityUpdateHandleID:(NSString *)arg1 ;
-(void)setNeedsUpdatedGroupPhotoForVisualIdentity;
-(void)setNeedsUpdatedGroupNameForVisualIdentity;
-(BOOL)shouldSendReadReceipts;
-(BOOL)isMakoConversation;
-(void)addRecipientHandles:(id)arg1 ;
-(void)setSendReadReceipts:(BOOL)arg1 ;
-(void)removeRecipientHandles:(id)arg1 ;
-(char)buttonColor;
-(BOOL)isPlaceholder;
-(id)init;
-(NSString *)deviceIndependentID;
-(void)setRecipients:(NSArray *)arg1 ;
-(BOOL)isDowngraded;
-(NSAttributedString *)groupName;
-(void)setNeedsReload;
-(id)initWithChat:(id)arg1 ;
-(void)_handleChatParticipantsDidChange:(id)arg1 ;
-(void)_chatPropertiesChanged:(id)arg1 ;
-(void)_handleChatJoinStateDidChange:(id)arg1 ;
-(void)_handlePreferredServiceChangedNotification:(id)arg1 ;
-(void)_handleEngroupFinishedUpdating:(id)arg1 ;
-(NSArray *)pendingHandles;
-(void)setPendingHandles:(NSArray *)arg1 ;
-(NSString *)pinningIdentifier;
-(NSSet *)mergedPinningIdentifiers;
-(BOOL)supportsSurf;
-(void)updateConversationVisualIdentityGroupPhotoWithSender:(id)arg1 ;
-(void)setShouldShowGroupPhotoUpdateBanner:(BOOL)arg1 ;
-(void)updateConversationVisualIdentityDisplayNameWithSender:(id)arg1 ;
-(void)setShouldShowGroupNameUpdateBanner:(BOOL)arg1 ;
-(long long)compareBySequenceNumberAndDateDescending:(id)arg1 ;
-(BOOL)isKnownSender;
-(void)deleteAllMessagesAndRemoveGroup;
-(BOOL)containsHandleWithUID:(id)arg1 ;
-(int)wasDetectedAsSpam;
-(long long)spamCategory;
-(int)wasDetectedAsSMSCategory;
-(BOOL)wasKnownSender;
-(void)updateWasKnownSender;
-(BOOL)isPending;
-(NSString *)groupID;
-(void)updateLastViewedDate;
-(BOOL)supportsMutatingGroupMembers;
-(id)shortDescription;
-(id)contactNameByHandle;
-(id)uniqueIdentifier;
-(void)markAllMessagesAsRead;
-(CKComposition *)unsentComposition;
-(void)sendMessage:(id)arg1 newComposition:(BOOL)arg2 ;
-(BOOL)canSendToRecipients:(id)arg1 alertIfUnable:(BOOL)arg2 ;
-(void)setUnsentComposition:(CKComposition *)arg1 ;
-(id)messagesFromComposition:(id)arg1 ;
-(void)setIgnoringTypingUpdates:(BOOL)arg1 ;
-(double)maxTrimDurationForMediaType:(int)arg1 ;
-(void)setChat:(IMChat *)arg1 ;
-(int)wasDetectedAsSMSSpam;
-(void)loadAllMessages;
-(BOOL)hasLeftGroupChat;
-(BOOL)hasReplyEnabled;
-(BOOL)needsReload;
-(BOOL)hasLeft;
-(void)setLocalUserIsComposing:(id)arg1 typingIndicatorIcon:(id)arg2 ;
-(void)setLocalUserIsComposing:(NSString *)arg1 ;
-(void)setLocalUserIsRecording:(BOOL)arg1 ;
-(void)setLocalUserIsTyping:(BOOL)arg1 ;
-(NSString *)name;
-(void)deleteAllMessages;
-(id)_conversationList;
-(NSString *)groupIdentityUpdateHandleID;
-(BOOL)shouldShowGroupPhotoUpdateBanner;
-(BOOL)shouldShowGroupNameUpdateBanner;
-(BOOL)_sms_willSendMMSByDefaultForAddresses:(id)arg1 ;
-(NSString *)description;
-(id)_contactsForVisualIdentityWithKeys:(id)arg1 numberOfContacts:(unsigned long long)arg2 ;
-(id)groupPhotoData;
-(BOOL)needsUpdatedContactsForVisualIdentity;
-(void)_createConversationVisualIdentityWithKeys:(id)arg1 numberOfContacts:(unsigned long long)arg2 ;
-(void)setNeedsUpdatedContactsForVisualIdentity:(BOOL)arg1 ;
-(void)setNeedsUpdatedGroupPhotoForVisualIdentity:(BOOL)arg1 ;
-(void)setNeedsUpdatedGroupNameForVisualIdentity:(BOOL)arg1 ;
-(id)_groupPhotoFileURL;
-(BOOL)_contactsForVisualIdentityHaveKeys:(id)arg1 ;
-(void)_updateContactsForVisualIdentityWithKeys:(id)arg1 numberOfContacts:(unsigned long long)arg2 ;
-(BOOL)needsUpdatedGroupPhotoForVisualIdentity;
-(void)_updateGroupPhotoForVisualIdentity;
-(BOOL)needsUpdatedGroupNameForVisualIdentity;
-(void)_updateGroupNameForVisualIdentity;
-(void)setLimitToLoad:(unsigned)arg1 ;
-(id)orderedContactsWithMaxCount:(unsigned long long)arg1 keysToFetch:(id)arg2 ;
-(NSString *)selectedLastAddressedHandle;
-(NSString *)selectedLastAddressedSIMID;
-(void)refreshServiceForSending;
-(void)clearConversationLoadFromSpotlight;
-(long long)maximumRecipientsForSendingService;
-(void)setPendingRecipients:(NSSet *)arg1 ;
-(BOOL)hasLoadedAllMessages;
-(void)enumerateMessagesWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(NSArray *)frequentReplies;
-(void)_clearTypingIndicatorsIfNecessary;
-(int)wasDetectedAsiMessageSpam;
-(void)resetCaches;
-(void)_deleteAllMessagesAndRemoveGroup:(BOOL)arg1 ;
-(BOOL)_earlyReturnHistoryLoad;
-(void)setDateLastViewed:(NSDate *)arg1 ;
-(void)setHasLoadedAllMessages:(BOOL)arg1 ;
-(BOOL)hasLoadedFromSpotlight;
-(void)loadMoreMessagesBeforeFirstMessage;
-(void)setLoadedMessageCount:(unsigned long long)arg1 loadImmediately:(BOOL)arg2 ;
-(BOOL)_sms_canSendToRecipients:(id)arg1 alertIfUnable:(BOOL)arg2 ;
-(NSDate *)dateLastViewed;
-(BOOL)_iMessage_canSendToRecipients:(id)arg1 alertIfUnable:(BOOL)arg2 ;
-(BOOL)_chatSupportsTypingIndicators;
-(NSString *)localUserIsComposing;
-(BOOL)localUserIsTyping;
-(BOOL)localUserIsRecording;
-(BOOL)_sms_supportsCharacterCountForAddresses:(id)arg1 ;
-(id)nameWithRawAddresses:(BOOL)arg1 ;
-(BOOL)_iMessage_supportsCharacterCountForAddresses:(id)arg1 ;
-(id)_nameForHandle:(id)arg1 ;
-(id)_headerTitleForPendingMediaObjects:(id)arg1 subject:(id)arg2 onService:(id)arg3 ;
-(BOOL)_unknownFilteringEnabled;
-(id)_headerTitleForService:(id)arg1 shouldListParticipants:(BOOL)arg2 ;
-(void)willBecomeInactive;
-(BOOL)isIgnoringTypingUpdates;
-(id)entityMatchingHandle:(id)arg1 ;
-(id)orderedContactsForAvatarView;
-(id)orderedContactsForAvatar3DTouchUIWithKeysToFetch:(id)arg1 ;
-(BOOL)_handleIsForThisConversation:(id)arg1 ;
-(BOOL)noAvailableServices;
-(void)loadAllUnreadMessagesUpToMessageGUID:(id)arg1 ;
-(void)loadFrequentReplies;
-(void)loadMoreMessagesAfterLastMessage;
-(void)loadMoreMessages;
-(id)ensureMessageWithGUIDIsLoaded:(id)arg1 ;
-(NSArray *)pendingEntities;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setPendingComposeRecipients:(id)arg1 ;
-(void)resortMessagesIfNecessary;
-(void)updateUserActivity;
-(unsigned long long)disclosureAtomStyle;
-(NSString *)rawAddressedName;
-(BOOL)isPreviewTextForAttachment;
-(char)outgoingBubbleColor;
-(NSString *)serviceDisplayName;
-(NSSet *)pendingRecipients;
-(NSString *)conversationListCollectionViewPinnedItemIdentifier;
-(NSString *)conversationListCollectionViewListItemIdentifier;
-(void)setSelectedLastAddressedHandle:(NSString *)arg1 ;
-(void)setSelectedLastAddressedSIMID:(NSString *)arg1 ;
-(void)setPreviewText:(NSAttributedString *)arg1 ;
-(BOOL)isReportedAsSpam;
-(void)setIsReportedAsSpam:(BOOL)arg1 ;
-(NSNumber *)businessConversation;
-(void)setBusinessConversation:(NSNumber *)arg1 ;
-(void)setWasKnownSender:(BOOL)arg1 ;
-(BOOL)hasSetWasKnownSender;
-(void)setHasSetWasKnownSender:(BOOL)arg1 ;
-(BOOL)holdWasKnownSenderUpdates;
-(void)setHoldWasKnownSenderUpdates:(BOOL)arg1 ;
-(CNGroupIdentity *)_conversationVisualIdentity;
-(void)set_conversationVisualIdentity:(CNGroupIdentity *)arg1 ;
-(void)didBecomeActive;
-(id)pinnedConversationDisplayNamePreferringShortName:(BOOL)arg1 ;
-(BOOL)isGroupConversation;
-(BOOL)canSendComposition:(id)arg1 error:(id*)arg2 ;
-(BOOL)isToEmailAddress;
-(void)sendMessage:(id)arg1 onService:(id)arg2 newComposition:(BOOL)arg3 ;
-(BOOL)forceMMS;
-(void)_chatItemsDidChange:(id)arg1 ;
-(BOOL)isBusinessConversation;
-(void)fetchSuggestedNameIfNecessary;
-(BOOL)hasVerifiedBusiness;
-(id)fastPreviewTextIgnoringPluginContent;
-(BOOL)hasUnreadMessages;
-(IMService *)sendingService;
-(unsigned)limitToLoad;
-(id)copyForPendingConversation;
-(CKEntity *)recipient;
-(void)setForceMMS:(BOOL)arg1 ;
-(NSString *)lastAddressedSIMID;
-(BOOL)canInsertMoreRecipients;
-(NSString *)lastAddressedHandle;
-(id)conversationVisualIdentityWithKeys:(id)arg1 requestedNumberOfContactsToFetch:(unsigned long long)arg2 ;
-(void)setNeedsUpdatedContactOrderForVisualIdentity;
-(BOOL)isAdHocGroupConversation;
-(NSString *)senderIdentifier;
-(void)updateDisplayNameIfSMSSpam;
-(void)resetNameCaches;
-(void)updateUnsentCompositionByAppendingComposition:(id)arg1 ;
-(BOOL)_allowedByScreenTime;
-(void)setLoadedMessageCount:(unsigned long long)arg1 ;
-(id)messageWithComposition:(id)arg1 ;
-(id)date;
-(BOOL)isBlockedByCommunicationLimits;
-(BOOL)isAppleConversation;
-(void)setMutedUntilDate:(id)arg1 ;
-(id)activityForNewScene;
-(NSAttributedString *)previewText;
-(BOOL)isMuted;
-(id)displayNameForMediaObjects:(id)arg1 subject:(id)arg2 shouldListParticipants:(BOOL)arg3 ;
-(BOOL)shouldShowCharacterCount;
-(NSArray *)recipientStrings;
-(NSString *)displayName;
-(unsigned long long)recipientCount;
-(char)sendButtonColor;
-(BOOL)canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2 ;
-(void)unmute;
-(void)dealloc;
-(BOOL)hasDisplayName;
@end

