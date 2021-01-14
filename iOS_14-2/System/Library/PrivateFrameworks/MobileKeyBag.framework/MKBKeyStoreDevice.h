/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileKeyBag.framework/MobileKeyBag
*/


@interface MKBKeyStoreDevice : NSObject
+(id)sharedService;
-(id)listSyncServiceSourcesForUserSession:(id)arg1 WithReturnedError:(id*)arg2 ;
-(int)Event:(int)arg1 ;
-(id)userSessionLRUInfoWithReturnedError:(id*)arg1 ;
-(int)isKeyRollingWithKeyStatus:(int*)arg1 ;
-(id)retriveUserSessionBlobWithreturnedError:(id*)arg1 ;
-(int)migrateFS;
-(BOOL)deleteUserSessionBlobWithReturnedError:(id*)arg1 ;
-(BOOL)removeAllUserSyncBubbleIDsWithReturnedError:(id*)arg1 ;
-(int)limitNumberOfUserSessionsTo:(int)arg1 WithReturnedError:(id*)arg2 ;
-(int)SeshatEnroll:(id)arg1 ;
-(BOOL)setUserSessionDeviceConfigurations:(int)arg1 WithReturnedError:(id*)arg2 ;
-(BOOL)unmountUserSessionVolumeforID:(int)arg1 WithReturnedError:(id*)arg2 ;
-(int)stashCreateWithSecret:(id)arg1 withMode:(int)arg2 withUID:(unsigned)arg3 WithFlags:(unsigned)arg4 ;
-(int)SeshatRecover:(id)arg1 ;
-(BOOL)fetchReplacementVoucherPort:(unsigned)arg1 foraccountID:(id)arg2 withTargetPort:(unsigned*)arg3 generationSet:(BOOL)arg4 withreturnedError:(id*)arg5 ;
-(int)changeSystemSecretFromOldPasscode:(id)arg1 ToNew:(id)arg2 withOpaqueData:(id)arg3 ;
-(int)passcodeUnlockSuccess;
-(id)listAllUserSessionIDSWithReturnedError:(id*)arg1 ;
-(id)getBackupkeyForInodeOrCryptoID:(unsigned long long)arg1 withreturnValue:(int*)arg2 ;
-(id)_CreateMKBServerConnection;
-(id)getFileHandleForData:(id)arg1 ;
-(BOOL)switchToLoginUIWithReturnedError:(id*)arg1 ;
-(id)setuserSessionAttributes:(id)arg1 WithReturnedError:(id*)arg2 ;
-(id)migrateUserSession:(id)arg1 fromPath:(id)arg2 withSecret:(id)arg3 withOpaqueData:(id)arg4 withreturnedError:(id*)arg5 ;
-(BOOL)addSyncServiceSource:(id)arg1 ToUserSessionWithID:(int)arg2 WithReturnedError:(id*)arg3 ;
-(BOOL)startUserSyncBubbleToSession:(int)arg1 WithReturnedError:(id*)arg2 ;
-(int)ChangeSystemSecretWithEscrow:(id)arg1 FromOldPasscode:(id)arg2 ToNew:(id)arg3 withOpaqueDats:(id)arg4 withKeepState:(int)arg5 ;
-(id)copySytemSecretBlob;
-(BOOL)MKBUserSessionSetInternalTest:(BOOL)arg1 WithReturnedError:(id*)arg2 ;
-(BOOL)mountUserSessionVolumeforID:(int)arg1 WithReturnedError:(id*)arg2 ;
-(id)createUserSession:(id)arg1 withSecret:(id)arg2 withOpaqueData:(id)arg3 withreturnedError:(id*)arg4 ;
-(BOOL)setUserSessionSecureBackupBlob:(id)arg1 WithReturnedError:(id*)arg2 ;
-(int)SeshatDebug:(int)arg1 ;
-(BOOL)isDeviceInLoginSessionWithReturnedError:(id*)arg1 ;
-(int)stopBackupSession;
-(BOOL)getDeviceLockStateForUser:(int)arg1 extendedState:(BOOL)arg2 withLockStateInfo:(int*)arg3 ;
-(int)SeshatUnlock:(id)arg1 ;
-(id)foregroundUserSessionAtrributesWithReturnedError:(id*)arg1 ;
-(int)stashCommit:(unsigned)arg1 WithFlags:(unsigned)arg2 ;
-(int)currentSyncBubbledIDWithReturnedError:(id*)arg1 ;
-(id)userSessionAttributesForSession:(id)arg1 WithReturnedError:(id*)arg2 ;
-(int)stashVerifywithValidity:(int*)arg1 WithUID:(unsigned)arg2 WithFlags:(unsigned)arg3 ;
-(BOOL)deleteUserSessionSecureBlobWithReturnedError:(id*)arg1 ;
-(int)stashDestroy;
-(int)passcodeUnlockStart;
-(id)listAllUserSyncBubbleIDsWithReturnedError:(id*)arg1 ;
-(BOOL)removeSyncServiceSource:(id)arg1 ToUserSessionWithID:(int)arg2 WithReturnedError:(id*)arg3 ;
-(int)changeClassKeysGenerationWithSecret:(id)arg1 withGenerationOption:(int)arg2 ;
-(id)loadUserSession:(id)arg1 withSecret:(id)arg2 withreturnedError:(id*)arg3 ;
-(BOOL)switchUserSession:(id)arg1 withOpaqueData:(id)arg2 withreturnedError:(id*)arg3 ;
-(BOOL)stopUserSyncBubbleToSession:(int)arg1 WithReturnedError:(id*)arg2 ;
-(int)startBackupSession;
-(id)configureLoginUI:(int)arg1 WithReturnedError:(id*)arg2 ;
-(int)registerOTABackup:(id)arg1 withSecret:(id)arg2 ;
-(BOOL)unloadUserSession:(id)arg1 withreturnedError:(id*)arg2 ;
-(id)getLockStateForUser:(int)arg1 ;
-(BOOL)removeUserSession:(id)arg1 withreturnedError:(id*)arg2 ;
-(int)passcodeUnlockFailed;
-(id)switchBlockTasksInfoWithReturnedError:(id*)arg1 ;
-(id)retriveUserSessionSecureBlobWithreturnedError:(id*)arg1 ;
@end

