/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


#import <ChatKit/ChatKit-Structs.h>
@class NSArray, NSString, IMChat, NSSet, NSAttributedString, NSNumber, NSDate, CKEntity, CKComposition, IMService;

@interface CKConversation : NSObject {

	NSArray* _recipients;
	NSString* _name;
	IMChat* _chat;
	unsigned _limitToLoad;
	struct {
		unsigned ignoringTypingUpdates : 1;
	}  _conversationFlags;
	BOOL _needsReload;
	BOOL _hasLoadedAllMessages;
	BOOL _isReportedAsSpam;
	BOOL _wasKnownSender;
	BOOL _hasSetWasKnownSender;
	BOOL _holdWasKnownSenderUpdates;
	int _wasDetectedAsSMSSpam;
	int _wasDetectedAsiMessageSpam;
	NSArray* _pendingHandles;
	NSString* _selectedLastAddressedHandle;
	NSString* _selectedLastAddressedSIMID;
	NSSet* _pendingRecipients;
	NSAttributedString* _groupName;
	NSString* _previewText;
	NSNumber* _businessConversation;
	NSDate* _dateLastViewed;

}

@property (nonatomic,retain) IMChat * chat;                                                          //@synthesize chat=_chat - In the implementation block
@property (nonatomic,retain) NSArray * recipients;                                                   //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,copy) NSString * previewText;                                                   //@synthesize previewText=_previewText - In the implementation block
@property (nonatomic,retain) NSSet * pendingRecipients;                                              //@synthesize pendingRecipients=_pendingRecipients - In the implementation block
@property (assign,nonatomic) unsigned limitToLoad;                                                   //@synthesize limitToLoad=_limitToLoad - In the implementation block
@property (assign,nonatomic) BOOL hasLoadedAllMessages;                                              //@synthesize hasLoadedAllMessages=_hasLoadedAllMessages - In the implementation block
@property (assign,nonatomic) BOOL isReportedAsSpam;                                                  //@synthesize isReportedAsSpam=_isReportedAsSpam - In the implementation block
@property (nonatomic,retain) NSNumber * businessConversation;                                        //@synthesize businessConversation=_businessConversation - In the implementation block
@property (nonatomic,retain) NSDate * dateLastViewed;                                                //@synthesize dateLastViewed=_dateLastViewed - In the implementation block
@property (assign,nonatomic) BOOL wasKnownSender;                                                    //@synthesize wasKnownSender=_wasKnownSender - In the implementation block
@property (assign,nonatomic) BOOL hasSetWasKnownSender;                                              //@synthesize hasSetWasKnownSender=_hasSetWasKnownSender - In the implementation block
@property (assign,nonatomic) BOOL holdWasKnownSenderUpdates;                                         //@synthesize holdWasKnownSenderUpdates=_holdWasKnownSenderUpdates - In the implementation block
@property (nonatomic,readonly) NSArray * frequentReplies; 
@property (nonatomic,retain) NSString * selectedLastAddressedHandle;                                 //@synthesize selectedLastAddressedHandle=_selectedLastAddressedHandle - In the implementation block
@property (nonatomic,retain) NSString * selectedLastAddressedSIMID;                                  //@synthesize selectedLastAddressedSIMID=_selectedLastAddressedSIMID - In the implementation block
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
@property (nonatomic,readonly) NSAttributedString * groupName;                                       //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,readonly) NSString * serviceDisplayName; 
@property (nonatomic,readonly) char buttonColor; 
@property (nonatomic,readonly) BOOL isPreviewTextForAttachment; 
@property (assign,getter=isPinned,nonatomic) BOOL pinned; 
@property (nonatomic,copy,readonly) NSString * senderIdentifier; 
@property (nonatomic,retain) CKComposition * unsentComposition; 
@property (nonatomic,readonly) unsigned long long unreadCount; 
@property (nonatomic,readonly) BOOL hasUnreadMessages; 
@property (getter=isMuted,nonatomic,readonly) BOOL muted; 
@property (getter=shouldSendReadReceipts,nonatomic,readonly) BOOL sendReadReceipts; 
@property (nonatomic,readonly) BOOL needsReload;                                                     //@synthesize needsReload=_needsReload - In the implementation block
@property (nonatomic,readonly) NSString * groupID; 
@property (nonatomic,readonly) NSString * deviceIndependentID; 
@property (nonatomic,readonly) int wasDetectedAsSMSSpam;                                             //@synthesize wasDetectedAsSMSSpam=_wasDetectedAsSMSSpam - In the implementation block
@property (nonatomic,readonly) int wasDetectedAsiMessageSpam;                                        //@synthesize wasDetectedAsiMessageSpam=_wasDetectedAsiMessageSpam - In the implementation block
@property (nonatomic,readonly) int wasDetectedAsSpam; 
@property (nonatomic,readonly) IMService * sendingService; 
@property (assign,nonatomic) BOOL forceMMS; 
@property (getter=isGroupConversation,nonatomic,readonly) BOOL groupConversation; 
@property (nonatomic,readonly) BOOL canLeave; 
@property (getter=hasLeft,nonatomic,readonly) BOOL left; 
@property (nonatomic,readonly) BOOL supportsMutatingGroupMembers; 
@property (getter=hasLeftGroupChat,nonatomic,readonly) BOOL leftGroupChat; 
@property (nonatomic,readonly) BOOL shouldShowCharacterCount; 
@property (assign,nonatomic) BOOL localUserIsTyping; 
@property (assign,nonatomic) BOOL localUserIsRecording; 
@property (nonatomic,copy) NSString * localUserIsComposing; 
@property (getter=isPending,nonatomic,readonly) BOOL pending; 
@property (nonatomic,copy,readonly) NSArray * pendingEntities; 
@property (nonatomic,copy) NSArray * pendingHandles;                                                 //@synthesize pendingHandles=_pendingHandles - In the implementation block
@property (nonatomic,readonly) NSArray * handles; 
@property (nonatomic,readonly) unsigned long long disclosureAtomStyle; 
@property (assign,getter=isIgnoringTypingUpdates,nonatomic) BOOL ignoringTypingUpdates; 
+(id)newPendingConversation;
+(BOOL)isSMSSpamFilteringEnabled;
+(BOOL)pinnedConversationsEnabled;
+(BOOL)_iMessage_canSendMessageWithMediaObjectTypes:(int*)arg1 ;
+(BOOL)_sms_canSendMessageWithMediaObjectTypes:(int*)arg1 phoneNumber:(id)arg2 simID:(id)arg3 ;
+(double)_sms_maxTrimDurationForMediaType:(int)arg1 ;
+(double)_iMessage_maxTrimDurationForMediaType:(int)arg1 ;
+(BOOL)_sms_canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2 phoneNumber:(id)arg3 simID:(id)arg4 ;
+(BOOL)_iMessage_canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2 ;
+(BOOL)_sms_canSendComposition:(id)arg1 lastAddressedHandle:(id)arg2 lastAddressedSIMID:(id)arg3 error:(id*)arg4 ;
+(BOOL)_iMessage_canSendComposition:(id)arg1 lastAddressedHandle:(id)arg2 lastAddressedSIMID:(id)arg3 currentService:(id)arg4 forceSMS:(BOOL)arg5 error:(id*)arg6 ;
+(id)conversationForAddresses:(id)arg1 allowRetargeting:(BOOL)arg2 candidateConversation:(id)arg3 ;
+(long long)_iMessage_maxAttachmentCount;
+(BOOL)_iMessage_canSendMessageWithMediaObjectTypes:(int*)arg1 errorCode:(long long*)arg2 ;
+(id)_iMessage_localizedErrorForReason:(long long)arg1 ;
+(unsigned long long)_iMessage_maxTransferFileSizeForWiFi:(BOOL)arg1 ;
+(long long)_sms_maxAttachmentCountForPhoneNumber:(id)arg1 simID:(id)arg2 ;
+(BOOL)_sms_canSendMessageWithMediaObjectTypes:(int*)arg1 phoneNumber:(id)arg2 simID:(id)arg3 errorCode:(long long*)arg4 ;
+(BOOL)_sms_mediaObjectPassesRestriction:(id)arg1 ;
+(BOOL)_sms_mediaObjectPassesDurationCheck:(id)arg1 ;
+(id)_sms_localizedErrorForReason:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(id)date;
-(id)uniqueIdentifier;
-(NSString *)displayName;
-(BOOL)isPlaceholder;
-(BOOL)isDowngraded;
-(BOOL)isPending;
-(NSAttributedString *)groupName;
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
-(NSString *)groupID;
-(NSArray *)handles;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)shortDescription;
-(BOOL)isPinned;
-(void)setPinned:(BOOL)arg1 ;
-(void)didBecomeActive;
-(NSString *)senderIdentifier;
-(void)resetCaches;
-(BOOL)hasDisplayName;
-(void)reloadIfNeeded;
-(BOOL)isMuted;
-(BOOL)needsReload;
-(void)setNeedsReload;
-(CKEntity *)recipient;
-(id)contactNameByHandle;
-(unsigned long long)unreadCount;
-(void)setChat:(IMChat *)arg1 ;
-(IMChat *)chat;
-(BOOL)isGroupConversation;
-(BOOL)canSendComposition:(id)arg1 error:(id*)arg2 ;
-(BOOL)isToEmailAddress;
-(void)sendMessage:(id)arg1 onService:(id)arg2 newComposition:(BOOL)arg3 ;
-(void)_chatItemsDidChange:(id)arg1 ;
-(BOOL)isBusinessConversation;
-(BOOL)hasLeft;
-(IMService *)sendingService;
-(id)copyForPendingConversation;
-(NSString *)lastAddressedSIMID;
-(BOOL)forceMMS;
-(BOOL)canInsertMoreRecipients;
-(NSString *)lastAddressedHandle;
-(void)setForceMMS:(BOOL)arg1 ;
-(BOOL)_allowedByScreenTime;
-(BOOL)isBlockedByCommunicationLimits;
-(NSString *)previewText;
-(id)displayNameForMediaObjects:(id)arg1 subject:(id)arg2 ;
-(BOOL)shouldShowCharacterCount;
-(NSArray *)recipientStrings;
-(unsigned long long)recipientCount;
-(char)sendButtonColor;
-(BOOL)canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2 ;
-(NSString *)deviceIndependentID;
-(void)_handleChatParticipantsDidChange:(id)arg1 ;
-(void)_handleChatJoinStateDidChange:(id)arg1 ;
-(void)_handlePreferredServiceChangedNotification:(id)arg1 ;
-(void)_handleEngroupFinishedUpdating:(id)arg1 ;
-(void)_chatPropertiesChanged:(id)arg1 ;
-(id)initWithChat:(id)arg1 ;
-(NSArray *)pendingHandles;
-(void)setPendingHandles:(NSArray *)arg1 ;
-(long long)compareBySequenceNumberAndDateDescending:(id)arg1 ;
-(void)deleteAllMessagesAndRemoveGroup;
-(int)wasDetectedAsSpam;
-(BOOL)isKnownSender;
-(BOOL)wasKnownSender;
-(void)updateWasKnownSender;
-(void)updateLastViewedDate;
-(CKComposition *)unsentComposition;
-(void)markAllMessagesAsRead;
-(BOOL)canSendToRecipients:(id)arg1 alertIfUnable:(BOOL)arg2 ;
-(void)setUnsentComposition:(CKComposition *)arg1 ;
-(id)messagesFromComposition:(id)arg1 ;
-(void)sendMessage:(id)arg1 newComposition:(BOOL)arg2 ;
-(void)setIgnoringTypingUpdates:(BOOL)arg1 ;
-(double)maxTrimDurationForMediaType:(int)arg1 ;
-(void)acceptTransfer:(id)arg1 ;
-(int)wasDetectedAsSMSSpam;
-(void)loadAllMessages;
-(BOOL)hasLeftGroupChat;
-(BOOL)hasReplyEnabled;
-(void)setLocalUserIsComposing:(id)arg1 typingIndicatorIcon:(id)arg2 ;
-(void)setLocalUserIsComposing:(NSString *)arg1 ;
-(void)setLocalUserIsRecording:(BOOL)arg1 ;
-(void)setLocalUserIsTyping:(BOOL)arg1 ;
-(void)deleteAllMessages;
-(BOOL)hasUnreadMessages;
-(void)fetchSuggestedNameIfNecessary;
-(BOOL)hasVerifiedBusiness;
-(id)fastPreviewTextIgnoringPluginContent;
-(void)updateDisplayNameIfSMSSpam;
-(void)resetNameCaches;
-(BOOL)containsHandleWithUID:(id)arg1 ;
-(unsigned)limitToLoad;
-(void)setLoadedMessageCount:(unsigned long long)arg1 ;
-(id)messageWithComposition:(id)arg1 ;
-(BOOL)isAppleConversation;
-(void)setMutedUntilDate:(id)arg1 ;
-(void)unmute;
-(BOOL)canLeave;
-(BOOL)shouldSendReadReceipts;
-(BOOL)isMakoConversation;
-(BOOL)supportsMutatingGroupMembers;
-(void)addRecipientHandles:(id)arg1 ;
-(void)setSendReadReceipts:(BOOL)arg1 ;
-(void)removeRecipientHandles:(id)arg1 ;
-(NSString *)selectedLastAddressedHandle;
-(NSString *)selectedLastAddressedSIMID;
-(void)refreshServiceForSending;
-(void)clearConversationLoadFromSpotlight;
-(long long)maximumRecipientsForSendingService;
-(void)setPendingRecipients:(NSSet *)arg1 ;
-(id)orderedContactsWithMaxCount:(unsigned long long)arg1 keysToFetch:(id)arg2 ;
-(BOOL)hasLoadedAllMessages;
-(void)enumerateMessagesWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_clearTypingIndicatorsIfNecessary;
-(int)wasDetectedAsiMessageSpam;
-(void)_deleteAllMessagesAndRemoveGroup:(BOOL)arg1 ;
-(BOOL)_earlyReturnHistoryLoad;
-(void)setHasLoadedAllMessages:(BOOL)arg1 ;
-(void)setLimitToLoad:(unsigned)arg1 ;
-(NSArray *)frequentReplies;
-(BOOL)hasLoadedFromSpotlight;
-(void)loadMoreMessagesBeforeFirstMessage;
-(void)setLoadedMessageCount:(unsigned long long)arg1 loadImmediately:(BOOL)arg2 ;
-(void)setDateLastViewed:(NSDate *)arg1 ;
-(BOOL)_sms_canSendToRecipients:(id)arg1 alertIfUnable:(BOOL)arg2 ;
-(BOOL)_iMessage_canSendToRecipients:(id)arg1 alertIfUnable:(BOOL)arg2 ;
-(NSDate *)dateLastViewed;
-(BOOL)_chatSupportsTypingIndicators;
-(NSString *)localUserIsComposing;
-(BOOL)localUserIsTyping;
-(BOOL)localUserIsRecording;
-(BOOL)_sms_supportsCharacterCountForAddresses:(id)arg1 ;
-(BOOL)_iMessage_supportsCharacterCountForAddresses:(id)arg1 ;
-(id)nameWithRawAddresses:(BOOL)arg1 ;
-(id)_nameForHandle:(id)arg1 ;
-(id)_headerTitleForPendingMediaObjects:(id)arg1 subject:(id)arg2 onService:(id)arg3 ;
-(id)_headerTitleForService:(id)arg1 ;
-(BOOL)_unknownFilteringEnabled;
-(void)willBecomeInactive;
-(BOOL)isIgnoringTypingUpdates;
-(id)orderedContactsForAvatarView;
-(id)orderedContactsForAvatar3DTouchUIWithKeysToFetch:(id)arg1 ;
-(BOOL)_handleIsForThisConversation:(id)arg1 ;
-(BOOL)noAvailableServices;
-(void)loadAllUnreadMessagesUpToMessageGUID:(id)arg1 ;
-(void)loadMoreMessagesAfterLastMessage;
-(void)loadFrequentReplies;
-(void)loadMoreMessages;
-(id)ensureMessageWithGUIDIsLoaded:(id)arg1 ;
-(void)setPendingComposeRecipients:(id)arg1 ;
-(NSArray *)pendingEntities;
-(void)resortMessagesIfNecessary;
-(void)updateUserActivity;
-(unsigned long long)disclosureAtomStyle;
-(NSString *)rawAddressedName;
-(BOOL)isPreviewTextForAttachment;
-(char)buttonColor;
-(char)outgoingBubbleColor;
-(NSString *)serviceDisplayName;
-(void)setSelectedLastAddressedHandle:(NSString *)arg1 ;
-(void)setSelectedLastAddressedSIMID:(NSString *)arg1 ;
-(NSSet *)pendingRecipients;
-(void)setPreviewText:(NSString *)arg1 ;
-(BOOL)isReportedAsSpam;
-(void)setIsReportedAsSpam:(BOOL)arg1 ;
-(NSNumber *)businessConversation;
-(void)setBusinessConversation:(NSNumber *)arg1 ;
-(void)setWasKnownSender:(BOOL)arg1 ;
-(BOOL)hasSetWasKnownSender;
-(void)setHasSetWasKnownSender:(BOOL)arg1 ;
-(BOOL)holdWasKnownSenderUpdates;
-(void)setHoldWasKnownSenderUpdates:(BOOL)arg1 ;
-(BOOL)_sms_willSendMMSByDefaultForAddresses:(id)arg1 ;
-(BOOL)supportsSurf;
@end

