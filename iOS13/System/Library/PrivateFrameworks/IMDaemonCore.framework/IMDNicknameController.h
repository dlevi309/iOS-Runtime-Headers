/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/

#import <IMDaemonCore/IMSystemMonitorListener.h>

@class IMNickname, IDSKVStore, NSMutableDictionary, NSMutableSet, NSMutableArray, NSSet;

@interface IMDNicknameController : NSObject <IMSystemMonitorListener> {

	BOOL _needToLoadMapsInfoFromDisk;
	BOOL _nicknameIsUploadingToCK;
	IMNickname* _personalNickname;
	IDSKVStore* _kvStore;
	double _lastMeContactStoreSync;
	IDSKVStore* _handledNicknamesKVStore;
	IDSKVStore* _pendingNicknameUpdatesKVStore;
	IDSKVStore* _handleSharingKVStore;
	NSMutableDictionary* _handledNicknames;
	NSMutableDictionary* _pendingNicknameUpdates;
	NSMutableSet* _handleWhitelist;
	NSMutableSet* _handleBlacklist;
	NSMutableArray* _chatsToSendNicknameInfoTo;

}

@property (nonatomic,retain) IDSKVStore * kvStore;                                      //@synthesize kvStore=_kvStore - In the implementation block
@property (assign,nonatomic) double lastMeContactStoreSync;                             //@synthesize lastMeContactStoreSync=_lastMeContactStoreSync - In the implementation block
@property (nonatomic,retain) IDSKVStore * handledNicknamesKVStore;                      //@synthesize handledNicknamesKVStore=_handledNicknamesKVStore - In the implementation block
@property (nonatomic,retain) IDSKVStore * pendingNicknameUpdatesKVStore;                //@synthesize pendingNicknameUpdatesKVStore=_pendingNicknameUpdatesKVStore - In the implementation block
@property (nonatomic,retain) IDSKVStore * handleSharingKVStore;                         //@synthesize handleSharingKVStore=_handleSharingKVStore - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * handledNicknames;                    //@synthesize handledNicknames=_handledNicknames - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingNicknameUpdates;              //@synthesize pendingNicknameUpdates=_pendingNicknameUpdates - In the implementation block
@property (nonatomic,retain) NSMutableSet * handleWhitelist;                            //@synthesize handleWhitelist=_handleWhitelist - In the implementation block
@property (nonatomic,retain) NSMutableSet * handleBlacklist;                            //@synthesize handleBlacklist=_handleBlacklist - In the implementation block
@property (nonatomic,retain) IMNickname * personalNickname;                             //@synthesize personalNickname=_personalNickname - In the implementation block
@property (assign,nonatomic) BOOL needToLoadMapsInfoFromDisk;                           //@synthesize needToLoadMapsInfoFromDisk=_needToLoadMapsInfoFromDisk - In the implementation block
@property (nonatomic,retain) NSMutableArray * chatsToSendNicknameInfoTo;                //@synthesize chatsToSendNicknameInfoTo=_chatsToSendNicknameInfoTo - In the implementation block
@property (assign,nonatomic) BOOL nicknameIsUploadingToCK;                              //@synthesize nicknameIsUploadingToCK=_nicknameIsUploadingToCK - In the implementation block
@property (nonatomic,readonly) NSSet * whitelistedHandlesForSharing; 
@property (nonatomic,readonly) NSSet * blacklistedHandlesForSharing; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)defaults;
-(void)systemDidLeaveFirstDataProtectionLock;
-(double)lastMeContactStoreSync;
-(void)setLastMeContactStoreSync:(double)arg1 ;
-(IMNickname *)personalNickname;
-(id)nicknameForHandle:(id)arg1 ;
-(BOOL)_nicknameFeatureEnabled;
-(NSMutableDictionary *)pendingNicknameUpdates;
-(NSMutableDictionary *)handledNicknames;
-(NSSet *)whitelistedHandlesForSharing;
-(NSSet *)blacklistedHandlesForSharing;
-(void)setPendingNicknameUpdates:(NSMutableDictionary *)arg1 ;
-(void)setHandledNicknames:(NSMutableDictionary *)arg1 ;
-(void)setPersonalNickname:(IMNickname *)arg1 ;
-(IDSKVStore *)kvStore;
-(void)setKvStore:(IDSKVStore *)arg1 ;
-(void)newDeviceDidSignIntoiMessage;
-(void)deviceSignedOutOfiMessage;
-(void)_ckAccountChanged:(id)arg1 ;
-(void)_loadAllInfoFromDiskIfAble;
-(void)evaluateAccountStateForFeatureEligibility;
-(void)aliasesDidChange:(BOOL)arg1 ;
-(void)_tryToReuploadPersonalNicknameWithRetryCount:(unsigned long long)arg1 reuploadVersion:(unsigned long long)arg2 ;
-(void)setPersonalNickname:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(unsigned long long)_reuploadLocalProfileVersionNumber;
-(void)_newDeviceDidSignIntoiMessageWithRetryCount:(unsigned long long)arg1 ;
-(BOOL)_sendMessageDictionary:(id)arg1 toDevice:(id)arg2 ;
-(void)_retryPeerRequestWithRetry:(unsigned long long)arg1 ;
-(void)_deletePublicNicknameLocationAndKey;
-(id)substringRecordIDForNickname:(id)arg1 ;
-(void)_storePendingNicknameForUpload:(id)arg1 ;
-(void)_deletePendingNicknameForUpload;
-(NSMutableArray *)chatsToSendNicknameInfoTo;
-(void)sendPersonalNicknameToChat:(id)arg1 ;
-(BOOL)_isNicknamesSharingEnabled;
-(id)transferServicesController;
-(void)_beginNicknameUpload:(id)arg1 ;
-(id)nickNameRecordID;
-(void)_resetHandleSharingList;
-(void)_storePublicNickname:(id)arg1 nicknameLocation:(id)arg2 encryptionKey:(id)arg3 ;
-(void)_endNicknameUpload;
-(void)sendPersonalNicknameRecordIDAndVersionToAllPeers;
-(id)_getPendingNicknameForUpload;
-(NSMutableSet *)handleWhitelist;
-(NSMutableSet *)handleBlacklist;
-(IDSKVStore *)handleSharingKVStore;
-(void)_updateWhitelistBlacklistHandlesVersion;
-(void)_syncHandleWhitelistBlacklistToOtherDevices;
-(id)nickNameDecryptionKey;
-(void)currentPersonalNicknameWithRecordID:(id)arg1 decryptionKey:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)getNicknameWithRecordID:(id)arg1 decryptionKey:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)nicknameForRecordID:(id)arg1 handle:(id)arg2 ;
-(void)saveNicknameForRecordID:(id)arg1 handleID:(id)arg2 userNickname:(id)arg3 ;
-(void)_markNicknameAsUpdated:(id)arg1 incrementPendingNicknameVersion:(BOOL)arg2 ;
-(void)_markNicknameAsUpdatedForHandleID:(id)arg1 ;
-(void)_updateHandleList:(id)arg1 withHandles:(id)arg2 forKey:(id)arg3 broadcastUpdates:(BOOL)arg4 ;
-(BOOL)_requestingToSendLocalNicknameInfo:(id)arg1 ;
-(void)sendPersonalNicknameRecordIDAndVersionRequestedByDevice:(id)arg1 ;
-(void)_updateSharingPreferencesIfNeededFromMadridMessage:(id)arg1 ;
-(void)_updateCloudKitRecordIDAndDecryptionKeyIfNeededFromMadridMessage:(id)arg1 ;
-(void)_updateHandledNicknamesIfNeeded:(id)arg1 ;
-(void)_updateHandleBlacklistWhitelistIfNeeded:(id)arg1 ;
-(void)_updateMessageDictionaryWithPendingNicknameUpdates:(id)arg1 ;
-(id)storedPersonalNickname;
-(void)deleteAllPersonalNicknames:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)messageDictionaryWithPersonalRecordIDAndVersion;
-(BOOL)nicknameIsUploadingToCK;
-(void)broadcastHandlesSharingNicknamesDidChange;
-(BOOL)replacedNicknameForHandleIDInHandledMapIfNeeded:(id)arg1 nickname:(id)arg2 ;
-(void)addNicknameToPendingUpdates:(id)arg1 ;
-(void)markNicknameAsUpdated:(id)arg1 ;
-(void)_updatePendingNicknameVersion;
-(void)sendPendingNicknameUpdatesDidChange;
-(IDSKVStore *)handledNicknamesKVStore;
-(void)_writeNicknameToKVStore:(id)arg1 nickname:(id)arg2 ;
-(IDSKVStore *)pendingNicknameUpdatesKVStore;
-(void)_broadcastPendingMapChanged;
-(void)_updateNicknameInHandledMap:(id)arg1 ;
-(void)_deleteNicknameFromPendingMap:(id)arg1 ;
-(void)_deleteHandleIDFromPendingMap:(id)arg1 ;
-(void)_deleteHandleIDFromHandledMap:(id)arg1 ;
-(BOOL)_isUnderScrutiny;
-(BOOL)_deviceUnderFirstUnlock;
-(void)loadPersonalNicknameIfNeeded;
-(void)reuploadProfileIfNeeded;
-(void)loadHandledNicknamesAndPendingUpdates;
-(void)loadSharingHandlesPrefs;
-(void)_evaluateIfAccountHasMultiplePhoneNumbers;
-(void)_uploadPendingNicknameIfNecessary;
-(void)currentPersonalNicknamewithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_setUnderScrutiny:(BOOL)arg1 ;
-(BOOL)_populateNicknameDictionary:(id)arg1 forKVStore:(id)arg2 limitToLoad:(unsigned long long)arg3 ;
-(id)allNicknames;
-(id)nicknameForRecordID:(id)arg1 ;
-(void)verifyTruncatedRecordIDMatchesPersonalNickname:(id)arg1 forChat:(id)arg2 ;
-(void)NicknameWithRecordID:(id)arg1 URI:(id)arg2 decryptionKey:(id)arg3 withCompletionBlock:(/*^block*/id)arg4 ;
-(void)handleNicknameUpdatesFromPeerDevice:(id)arg1 fromPeerDevice:(id)arg2 ;
-(void)sendNicknamePreferencesDidChange;
-(void)queueChatToSendNicknamePostUploadIfNeeded:(id)arg1 ;
-(void)whitelistHandlesForSharing:(id)arg1 onChatGUIDs:(id)arg2 ;
-(void)blacklistHandlesForSharing:(id)arg1 ;
-(void)clearPendingNicknameForHandleID:(id)arg1 ;
-(void)ignorePendingNicknameForHandleID:(id)arg1 ;
-(void)cleanUpNicknameForID:(id)arg1 ;
-(id)pendingPersonalNickname;
-(void)_deleteAvatarForNickname:(id)arg1 ;
-(id)nicknameForHandleURI:(id)arg1 ;
-(void)setHandledNicknamesKVStore:(IDSKVStore *)arg1 ;
-(void)setPendingNicknameUpdatesKVStore:(IDSKVStore *)arg1 ;
-(void)setHandleSharingKVStore:(IDSKVStore *)arg1 ;
-(void)setHandleWhitelist:(NSMutableSet *)arg1 ;
-(void)setHandleBlacklist:(NSMutableSet *)arg1 ;
-(BOOL)needToLoadMapsInfoFromDisk;
-(void)setNeedToLoadMapsInfoFromDisk:(BOOL)arg1 ;
-(void)setChatsToSendNicknameInfoTo:(NSMutableArray *)arg1 ;
-(void)setNicknameIsUploadingToCK:(BOOL)arg1 ;
@end

