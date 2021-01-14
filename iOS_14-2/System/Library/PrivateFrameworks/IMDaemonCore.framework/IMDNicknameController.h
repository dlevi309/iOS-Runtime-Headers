/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setPendingNicknameUpdates:(NSMutableDictionary *)arg1 ;
-(id)defaults;
-(void)setHandleSharingKVStore:(IDSKVStore *)arg1 ;
-(void)_beginNicknameUpload:(id)arg1 ;
-(id)nickNameDecryptionKey;
-(id)init;
-(BOOL)_isNicknamesSharingEnabled;
-(void)sendNicknamePreferencesDidChange;
-(void)_updateHandledNicknamesIfNeeded:(id)arg1 ;
-(void)_uploadPendingNicknameIfNecessary;
-(void)NicknameWithRecordID:(id)arg1 URI:(id)arg2 decryptionKey:(id)arg3 withCompletionBlock:(/*^block*/id)arg4 ;
-(void)systemDidLeaveFirstDataProtectionLock;
-(void)_ckAccountChanged:(id)arg1 ;
-(NSMutableSet *)handleBlacklist;
-(BOOL)needToLoadMapsInfoFromDisk;
-(id)storedPersonalNickname;
-(void)sendPendingNicknameUpdatesDidChange;
-(id)transferServicesController;
-(BOOL)_isUnderScrutiny;
-(BOOL)_nicknameFeatureEnabled;
-(double)lastMeContactStoreSync;
-(void)setHandledNicknamesKVStore:(IDSKVStore *)arg1 ;
-(void)_markNicknameAsUpdated:(id)arg1 incrementPendingNicknameVersion:(BOOL)arg2 ;
-(void)saveNicknameForRecordID:(id)arg1 handleID:(id)arg2 userNickname:(id)arg3 ;
-(void)setPersonalNickname:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)pendingNicknameUpdates;
-(void)setLastMeContactStoreSync:(double)arg1 ;
-(IDSKVStore *)handledNicknamesKVStore;
-(void)evaluateAccountStateForFeatureEligibility;
-(void)_updateSharingPreferencesIfNeededFromMadridMessage:(id)arg1 ;
-(void)_deletePublicNicknameLocationAndKey;
-(void)setPendingNicknameUpdatesKVStore:(IDSKVStore *)arg1 ;
-(void)reuploadProfileIfNeeded;
-(id)_getPendingNicknameForUpload;
-(void)_storePublicNickname:(id)arg1 nicknameLocation:(id)arg2 encryptionKey:(id)arg3 ;
-(void)loadPersonalNicknameIfNeeded;
-(void)ignorePendingNicknameForHandleID:(id)arg1 ;
-(void)sendPersonalNicknameRecordIDAndVersionToAllPeers;
-(void)_updateCloudKitRecordIDAndDecryptionKeyIfNeededFromMadridMessage:(id)arg1 ;
-(IMNickname *)personalNickname;
-(void)deleteAllPersonalNicknames:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_deletePendingNicknameForUpload;
-(void)loadSharingHandlesPrefs;
-(void)whitelistHandlesForSharing:(id)arg1 onChatGUIDs:(id)arg2 ;
-(void)_loadAllInfoFromDiskIfAble;
-(void)_deleteAvatarForNickname:(id)arg1 ;
-(IDSKVStore *)pendingNicknameUpdatesKVStore;
-(void)_deleteNicknameFromPendingMap:(id)arg1 ;
-(void)setHandledNicknames:(NSMutableDictionary *)arg1 ;
-(BOOL)nicknameIsUploadingToCK;
-(void)setNicknameIsUploadingToCK:(BOOL)arg1 ;
-(id)nickNameRecordID;
-(void)_broadcastPendingMapChanged;
-(id)pendingPersonalNickname;
-(void)setKvStore:(IDSKVStore *)arg1 ;
-(void)currentPersonalNicknamewithCompletionBlock:(/*^block*/id)arg1 ;
-(void)getNicknameWithRecordID:(id)arg1 decryptionKey:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_updateWhitelistBlacklistHandlesVersion;
-(void)_writeNicknameToKVStore:(id)arg1 nickname:(id)arg2 ;
-(void)_setUnderScrutiny:(BOOL)arg1 ;
-(id)nicknameForHandle:(id)arg1 ;
-(void)setChatsToSendNicknameInfoTo:(NSMutableArray *)arg1 ;
-(BOOL)_deviceUnderFirstUnlock;
-(void)handleNicknameUpdatesFromPeerDevice:(id)arg1 fromPeerDevice:(id)arg2 ;
-(void)_updatePendingNicknameVersion;
-(NSMutableSet *)handleWhitelist;
-(id)messageDictionaryWithPersonalRecordIDAndVersion;
-(void)markAllNicknamesAsPending;
-(void)_deleteHandleIDFromHandledMap:(id)arg1 ;
-(void)_updateMessageDictionaryWithPendingNicknameUpdates:(id)arg1 ;
-(void)_showDebugAlertWithHeader:(id)arg1 message:(id)arg2 ;
-(void)_syncHandleWhitelistBlacklistToOtherDevices;
-(void)_tryToReuploadPersonalNicknameWithRetryCount:(unsigned long long)arg1 reuploadVersion:(unsigned long long)arg2 ;
-(id)nicknameForHandleURI:(id)arg1 ;
-(IDSKVStore *)handleSharingKVStore;
-(id)nicknameForRecordID:(id)arg1 handle:(id)arg2 ;
-(void)currentPersonalNicknameWithRecordID:(id)arg1 decryptionKey:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)clearPendingNicknameForHandleID:(id)arg1 ;
-(id)nicknameForRecordID:(id)arg1 ;
-(void)setHandleWhitelist:(NSMutableSet *)arg1 ;
-(void)queueChatToSendNicknamePostUploadIfNeeded:(id)arg1 ;
-(void)sendPersonalNicknameToChat:(id)arg1 ;
-(id)substringRecordIDForNickname:(id)arg1 ;
-(NSMutableArray *)chatsToSendNicknameInfoTo;
-(unsigned long long)_reuploadLocalProfileVersionNumber;
-(void)addNicknameToPendingUpdates:(id)arg1 ;
-(void)_resetHandleSharingList;
-(void)sendPersonalNicknameRecordIDAndVersionRequestedByDevice:(id)arg1 ;
-(void)verifyTruncatedRecordIDMatchesPersonalNickname:(id)arg1 forChat:(id)arg2 ;
-(void)blacklistHandlesForSharing:(id)arg1 ;
-(NSMutableDictionary *)handledNicknames;
-(void)setNeedToLoadMapsInfoFromDisk:(BOOL)arg1 ;
-(void)cleanUpNicknameForID:(id)arg1 ;
-(void)_markNicknameAsUpdatedForHandleID:(id)arg1 ;
-(void)markNicknameAsUpdated:(id)arg1 ;
-(IDSKVStore *)kvStore;
-(void)_updateHandleList:(id)arg1 withHandles:(id)arg2 forKey:(id)arg3 broadcastUpdates:(BOOL)arg4 ;
-(void)deviceSignedOutOfiMessage;
-(BOOL)_sendMessageDictionary:(id)arg1 toDevice:(id)arg2 ;
-(void)broadcastHandlesSharingNicknamesDidChange;
-(void)aliasesDidChange:(BOOL)arg1 ;
-(void)_updateHandleBlacklistWhitelistIfNeeded:(id)arg1 ;
-(void)_updateNicknameInHandledMap:(id)arg1 ;
-(void)_deleteHandleIDFromPendingMap:(id)arg1 ;
-(BOOL)_populateNicknameDictionary:(id)arg1 forKVStore:(id)arg2 limitToLoad:(unsigned long long)arg3 ;
-(void)loadHandledNicknamesAndPendingUpdates;
-(NSSet *)blacklistedHandlesForSharing;
-(BOOL)_requestingToSendLocalNicknameInfo:(id)arg1 ;
-(void)setHandleBlacklist:(NSMutableSet *)arg1 ;
-(void)newDeviceDidSignIntoiMessage;
-(NSSet *)whitelistedHandlesForSharing;
-(void)_endNicknameUpload;
-(BOOL)replacedNicknameForHandleIDInHandledMapIfNeeded:(id)arg1 nickname:(id)arg2 ;
-(void)_retryPeerRequestWithRetry:(unsigned long long)arg1 ;
-(void)_newDeviceDidSignIntoiMessageWithRetryCount:(unsigned long long)arg1 ;
-(void)_storePendingNicknameForUpload:(id)arg1 ;
-(void)_clearSharingLists;
-(void)dealloc;
-(void)_evaluateIfAccountHasMultiplePhoneNumbers;
-(void)setPersonalNickname:(IMNickname *)arg1 ;
-(id)allNicknames;
@end

