/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/

#import <libobjc.A.dylib/INSpeakable.h>

@class NSString, NSArray, NSRecursiveLock, NSDictionary, IMMessageItem, NSMutableDictionary, NSDate, IMDServiceSession, IMDAccount, IMDService;

@interface IMDChat : NSObject <INSpeakable> {

	NSRecursiveLock* _lock;
	NSString* _accountID;
	NSString* _serviceName;
	NSDictionary* _properties;
	NSString* _chatIdentifier;
	NSString* _guid;
	NSString* _groupID;
	NSString* _engramID;
	NSString* _roomName;
	NSString* _displayName;
	NSString* _lastAddressedLocalHandle;
	NSString* _lastAddressedSIMID;
	NSArray* _participants;
	IMMessageItem* _lastMessage;
	NSMutableDictionary* _chatInfo;
	long long _state;
	unsigned long long _unreadCount;
	long long _rowID;
	long long _cloudKitSyncState;
	NSString* _originalGroupID;
	NSString* _serverChangeToken;
	long long _lastReadMessageTimeStamp;
	NSDate* _lastSentMessageDate;
	long long _lastMessageTimeStampOnLoad;
	unsigned char _style;
	BOOL _createEngramGroupOnMessageSend;
	BOOL _pendingENGroupParticipantUpdate;
	BOOL _isArchived;
	BOOL _isFiltered;
	BOOL _isBlackholed;
	BOOL _hasHadSuccessfulQuery;
	BOOL _wasReportedAsJunk;
	BOOL _meCardUpdated;
	NSString* _cloudKitRecordID;
	NSString* _srCloudKitRecordID;
	NSString* _lastSeenMessageGuid;
	NSString* _srServerChangeToken;
	long long _srCloudKitSyncState;
	NSDictionary* _nicknamesForParticipants;
	unsigned long long _numMessagesSent;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * spokenPhrase; 
@property (nonatomic,readonly) NSString * pronunciationHint; 
@property (nonatomic,readonly) NSString * vocabularyIdentifier; 
@property (nonatomic,readonly) NSArray * alternativeSpeakableMatches; 
@property (nonatomic,readonly) NSString * identifier; 
@property (copy) NSString * guid; 
@property (assign) unsigned char style; 
@property (setter=setGroupID:,copy) NSString * groupID; 
@property (setter=setEngramID:,copy) NSString * engramID; 
@property (copy) NSString * roomName; 
@property (copy) NSString * displayName; 
@property (retain) IMMessageItem * lastMessage; 
@property (retain) NSDictionary * properties; 
@property (copy) NSString * accountID; 
@property (setter=_setUnreadCount:) unsigned long long unreadCount; 
@property (setter=_setRowID:) long long rowID; 
@property (copy) NSArray * participants; 
@property (assign) BOOL isFiltered; 
@property (assign) BOOL isBlackholed; 
@property (assign) BOOL hasHadSuccessfulQuery; 
@property (nonatomic,readonly) BOOL isUnnamedChat; 
@property (assign) unsigned long long numMessagesSent;                               //@synthesize numMessagesSent=_numMessagesSent - In the implementation block
@property (assign) BOOL meCardUpdated;                                               //@synthesize meCardUpdated=_meCardUpdated - In the implementation block
@property (nonatomic,copy) NSString * serverChangeToken; 
@property (assign) long long lastMessageTimeStampOnLoad; 
@property (copy) NSString * chatIdentifier; 
@property (copy) NSString * serviceName; 
@property (assign) long long state; 
@property (copy) NSString * cloudKitRecordID;                                        //@synthesize cloudKitRecordID=_cloudKitRecordID - In the implementation block
@property (copy) NSString * srCloudKitRecordID;                                      //@synthesize srCloudKitRecordID=_srCloudKitRecordID - In the implementation block
@property (assign) long long cloudKitSyncState; 
@property (copy,readonly) NSString * originalGroupID; 
@property (assign,nonatomic) long long lastReadMessageTimeStamp; 
@property (copy,readonly) NSString * lastSeenMessageGuid;                            //@synthesize lastSeenMessageGuid=_lastSeenMessageGuid - In the implementation block
@property (copy) NSString * srServerChangeToken;                                     //@synthesize srServerChangeToken=_srServerChangeToken - In the implementation block
@property (assign) long long srCloudKitSyncState;                                    //@synthesize srCloudKitSyncState=_srCloudKitSyncState - In the implementation block
@property (retain,readonly) IMDServiceSession * serviceSession; 
@property (retain,readonly) IMDAccount * account; 
@property (retain,readonly) IMDService * service; 
@property (copy) NSString * lastAddressedLocalHandle; 
@property (copy) NSString * lastAddressedSIMID; 
@property (retain,readonly) NSDate * lastSentMessageDate; 
@property (retain,readonly) NSDictionary * dictionaryRepresentation; 
@property (retain,readonly) NSDictionary * chatProperties; 
@property (readonly) BOOL isArchived; 
@property (assign) BOOL createEngramGroupOnMessageSend;                              //@synthesize createEngramGroupOnMessageSend=_createEngramGroupOnMessageSend - In the implementation block
@property (assign) BOOL pendingENGroupParticipantUpdate;                             //@synthesize pendingENGroupParticipantUpdate=_pendingENGroupParticipantUpdate - In the implementation block
@property (nonatomic,readonly) NSString * personCentricID; 
@property (nonatomic,readonly) NSDictionary * nicknamesForParticipants;              //@synthesize nicknamesForParticipants=_nicknamesForParticipants - In the implementation block
@property (assign) BOOL wasReportedAsJunk;                                           //@synthesize wasReportedAsJunk=_wasReportedAsJunk - In the implementation block
+(id)_recordType;
-(void)dealloc;
-(NSString *)description;
-(NSDictionary *)dictionaryRepresentation;
-(long long)state;
-(NSString *)displayName;
-(NSString *)serviceName;
-(unsigned char)style;
-(void)setStyle:(unsigned char)arg1 ;
-(void)setState:(long long)arg1 ;
-(NSDictionary *)properties;
-(IMDAccount *)account;
-(id)recordName;
-(NSString *)groupID;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setProperties:(NSDictionary *)arg1 ;
-(void)setGroupID:(NSString *)arg1 ;
-(NSString *)spokenPhrase;
-(IMDService *)service;
-(void)setServiceName:(NSString *)arg1 ;
-(void)updateProperties:(id)arg1 ;
-(NSArray *)participants;
-(NSString *)accountID;
-(void)setAccountID:(NSString *)arg1 ;
-(NSString *)serverChangeToken;
-(void)setServerChangeToken:(NSString *)arg1 ;
-(void)addParticipant:(id)arg1 ;
-(void)removeParticipant:(id)arg1 ;
-(BOOL)isFiltered;
-(void)setGuid:(NSString *)arg1 ;
-(NSString *)guid;
-(long long)cloudKitSyncState;
-(NSString *)cloudKitRecordID;
-(void)setRoomName:(NSString *)arg1 ;
-(void)setCloudKitSyncState:(long long)arg1 ;
-(void)setCloudKitRecordID:(NSString *)arg1 ;
-(void)setSrCloudKitSyncState:(long long)arg1 ;
-(void)setSrCloudKitRecordID:(NSString *)arg1 ;
-(NSString *)roomName;
-(NSString *)srCloudKitRecordID;
-(NSString *)personCentricID;
-(long long)srCloudKitSyncState;
-(void)setParticipants:(NSArray *)arg1 ;
-(void)addParticipants:(id)arg1 ;
-(NSString *)pronunciationHint;
-(NSString *)vocabularyIdentifier;
-(NSArray *)alternativeSpeakableMatches;
-(BOOL)isOlderThan:(id)arg1 ;
-(NSString *)chatIdentifier;
-(void)setChatIdentifier:(NSString *)arg1 ;
-(long long)rowID;
-(unsigned long long)unreadCount;
-(IMMessageItem *)lastMessage;
-(NSString *)lastAddressedSIMID;
-(long long)compareBySequenceNumberAndDateDescending:(id)arg1 ;
-(void)updateIsFiltered:(BOOL)arg1 ;
-(NSString *)lastSeenMessageGuid;
-(void)setLastAddressedSIMID:(NSString *)arg1 ;
-(BOOL)isBusinessChat;
-(long long)lastMessageTimeStampOnLoad;
-(void)updateIsBlackholed:(BOOL)arg1 ;
-(BOOL)isBlackholed;
-(NSString *)engramID;
-(BOOL)isArchived;
-(BOOL)isNewerThan:(id)arg1 ;
-(void)setHasHadSuccessfulQuery:(BOOL)arg1 ;
-(BOOL)hasHadSuccessfulQuery;
-(void)setIsFiltered:(BOOL)arg1 ;
-(NSDate *)lastSentMessageDate;
-(void)updateShouldForceToSMS:(BOOL)arg1 ;
-(void)removeParticipants:(id)arg1 ;
-(void)updateServerChangeToken:(id)arg1 ;
-(void)setLastMessage:(IMMessageItem *)arg1 ;
-(id)_chatRegistry;
-(void)meCardHasUpdated;
-(void)setEngramID:(NSString *)arg1 ;
-(void)setLastAddressedLocalHandle:(NSString *)arg1 ;
-(void)setCreateEngramGroupOnMessageSend:(BOOL)arg1 ;
-(void)setPendingENGroupParticipantUpdate:(BOOL)arg1 ;
-(void)_updateCachedParticipants;
-(void)setOriginalGroupID:(NSString *)arg1 ;
-(void)setLastReadMessageTimeStamp:(long long)arg1 ;
-(void)setLastSentMessageDate:(NSDate *)arg1 ;
-(void)setLastMessageTimeStampOnLoad:(long long)arg1 ;
-(void)setSrServerChangeToken:(NSString *)arg1 ;
-(void)setIsBlackholed:(BOOL)arg1 ;
-(void)setWasReportedAsJunk:(BOOL)arg1 ;
-(NSString *)originalGroupID;
-(NSString *)lastAddressedLocalHandle;
-(long long)lastReadMessageTimeStamp;
-(long long)engroupCreationDate;
-(id)copyDictionaryRepresentation:(BOOL)arg1 ;
-(void)storeAndBroadcastChatChanges;
-(NSString *)srServerChangeToken;
-(void)updateLastAddressedHandle:(id)arg1 forceUpdate:(BOOL)arg2 ;
-(id)dictionaryRepresentationIncludingLastMessage;
-(int)getNumberOfTimesRespondedToThread;
-(id)_personIdentity;
-(id)_ckUniqueID;
-(void)setMeCardUpdated:(BOOL)arg1 ;
-(id)initWithAccountID:(id)arg1 service:(id)arg2 guid:(id)arg3 groupID:(id)arg4 chatIdentifier:(id)arg5 participants:(id)arg6 roomName:(id)arg7 displayName:(id)arg8 lastAddressedLocalHandle:(id)arg9 lastAddressedSIMID:(id)arg10 properties:(id)arg11 state:(long long)arg12 style:(unsigned char)arg13 isFiltered:(BOOL)arg14 hasHadSuccessfulQuery:(BOOL)arg15 engramID:(id)arg16 serverChangeToken:(id)arg17 cloudKitSyncState:(long long)arg18 originalGroupID:(id)arg19 lastReadMessageTimeStamp:(long long)arg20 lastMessageTimeStampOnLoad:(long long)arg21 srServerChangeToken:(id)arg22 srCloudKitSyncState:(long long)arg23 cloudKitRecordID:(id)arg24 srCloudKitRecordID:(id)arg25 isBlackholed:(BOOL)arg26 ;
-(void)_setUnreadCount:(unsigned long long)arg1 ;
-(void)_setRowID:(long long)arg1 ;
-(IMDServiceSession *)serviceSession;
-(NSDictionary *)chatProperties;
-(void)_updateLastMessage:(id)arg1 ;
-(id)generateNewGroupID;
-(BOOL)isUnnamedChat;
-(void)updateGroupID:(id)arg1 ;
-(void)updateEngramID:(id)arg1 ;
-(void)updateEngroupCreationDate:(long long)arg1 ;
-(void)updateLastReadMessageTimeStampIfNeeded:(long long)arg1 ;
-(void)updateSRServerChangeToken:(id)arg1 ;
-(void)updateCloudKitSyncState:(long long)arg1 ;
-(void)updateSRCloudKitSyncState:(long long)arg1 ;
-(void)updateOriginalGroupID:(id)arg1 ;
-(void)updateCloudKitRecordID:(id)arg1 ;
-(void)updateSrCloudKitRecordID:(id)arg1 ;
-(void)resetCKSyncState;
-(void)updateLastAddressedHandle:(id)arg1 ;
-(void)updateLastAddressedSIMID:(id)arg1 ;
-(void)updateDisplayName:(id)arg1 ;
-(void)updateNumberOfTimesRespondedToThread;
-(void)updateIsiMessageSpam:(BOOL)arg1 ;
-(void)updateIsSMSSpamChatProperty:(BOOL)arg1 ;
-(void)updateSMSSpamExtensionNameChatProperty:(id)arg1 ;
-(void)updateReceivedBlackholeError:(BOOL)arg1 ;
-(void)updateSMSHandshakeState:(int)arg1 ;
-(void)updateMessageHandshakeState:(int)arg1 ;
-(BOOL)isiMessageSpam;
-(BOOL)isSMSSpam;
-(BOOL)receivedBlackholeError;
-(int)smsHandshakeState;
-(int)messageHandshakeState;
-(id)lastSeenMessageGUID;
-(void)updateLastSeenMessageGuidIfNeeded:(id)arg1 ;
-(void)updateHasHadSuccessfulQuery:(BOOL)arg1 ;
-(void)_persistMergedIDMergedChatsIfNeeded:(id)arg1 ;
-(id)cloudKitChatID;
-(id)cloudKitDebugDescription;
-(void)tearDownToneNotificationSessionIfNeeded;
-(void)updateNicknamesForParticipants:(id)arg1 ;
-(BOOL)createEngramGroupOnMessageSend;
-(BOOL)pendingENGroupParticipantUpdate;
-(NSDictionary *)nicknamesForParticipants;
-(BOOL)wasReportedAsJunk;
-(unsigned long long)numMessagesSent;
-(void)setNumMessagesSent:(unsigned long long)arg1 ;
-(BOOL)meCardUpdated;
-(id)initWithCKRecord:(id)arg1 isUsingStingRay:(BOOL)arg2 ;
-(BOOL)applyChangesUsingCKRecord:(id)arg1 isUsingStingRay:(BOOL)arg2 ;
-(id)copyCKRecordRepresentationWithZoneID:(id)arg1 salt:(id)arg2 isUsingStingRay:(BOOL)arg3 ;
-(id)_copyCKRecordFromExistingCKMetadataIsUsingStringRay:(BOOL)arg1 zoneID:(id)arg2 salt:(id)arg3 ;
@end

