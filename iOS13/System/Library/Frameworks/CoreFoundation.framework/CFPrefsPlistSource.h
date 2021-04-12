/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/CFPrefsSource.h>

@interface CFPrefsPlistSource : CFPrefsSource {

	CFStringRef userIdentifier;
	CFStringRef domainIdentifier;
	CFStringRef container;
	A{__CFDictionary}* _locallySetDict;
	A* accessPath;
	AB _isByHost;
	AB _volatile;
	AB _readonly;
	AB _avoidsDaemonCache;
	AB _restrictedAccess;
	AB _checkedInvalidHome;
	AB _lastWriteFailed;
	AB _observing;
	AB _byteCountLimitExceeded;
	AB _directMode;
	AB _disableBackup;
	Ai _fileProtectionClass;

}
-(void)dealloc;
-(BOOL)synchronize;
-(CFStringRef)container;
-(void)setDomainIdentifier:(CFStringRef)arg1 ;
-(void)setUserIdentifier:(CFStringRef)arg1 ;
-(void)setContainer:(CFStringRef)arg1 ;
-(CFArrayRef)alreadylocked_copyKeyList;
-(CFDictionaryRef)alreadylocked_copyDictionary;
-(void)alreadylocked_clearCache;
-(long long)sendMessageSettingValues:(const void*)arg1 forKeys:(const _CFString*)arg2 count:(long long)arg3 ;
-(CFStringRef)domainIdentifier;
-(CFStringRef)userIdentifier;
-(void)writeFailedForKeys:(const _CFString*)arg1 values:(const void*)arg2 count:(long long)arg3 ;
-(BOOL)_shouldEnableDirectMode;
-(BOOL)handleErrorReply:(id)arg1 fromMessageSettingKeys:(const _CFString*)arg2 toValues:(const void*)arg3 count:(long long)arg4 retryCount:(int)arg5 retryContinuation:(/*^block*/id)arg6 ;
-(void)handlePossibleOversizedMessage:(int)arg1 ;
-(void)goVolatileAfterTryingToWriteKeys:(const _CFString*)arg1 values:(const void*)arg2 count:(long long)arg3 ;
-(BOOL)attachAccessTokenToMessage:(id)arg1 accessType:(int)arg2 ;
-(void)sendFullyPreparedMessage:(id)arg1 toConnection:(id)arg2 settingValues:(const void*)arg3 forKeys:(const _CFString*)arg4 count:(long long)arg5 retryCount:(int)arg6 ;
-(void)goReadOnlyAfterTryingToWriteKeys:(const _CFString*)arg1 values:(const void*)arg2 count:(long long)arg3 ;
-(id)createSynchronizeMessage;
-(void)addPIDImpersonationIfNecessary:(id)arg1 ;
-(id)createRequestNewContentMessageForDaemon:(int)arg1 ;
-(void)sendRequestNewDataMessage:(id)arg1 toConnection:(id)arg2 retryCount:(int)arg3 error:(BOOL*)arg4 ;
-(BOOL)volatilizeIfInvalidHomeDir;
-(BOOL)handleErrorReply:(id)arg1 retryCount:(int)arg2 retryContinuation:(/*^block*/id)arg3 ;
-(void)requestPlistValidation;
-(void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 retryCount:(int)arg4 error:(BOOL*)arg5 ;
-(BOOL)isVolatile;
-(void)_sharedCleanup;
-(BOOL)isByHost;
-(id)initWithDomain:(CFStringRef)arg1 user:(CFStringRef)arg2 byHost:(BOOL)arg3 containerPath:(CFStringRef)arg4 containingPreferences:(id)arg5 ;
-(void)setBackupDisabled:(BOOL)arg1 ;
-(void)setFileProtectionClass:(int)arg1 ;
-(void)setAccessRestricted:(BOOL)arg1 ;
-(void)setDaemonCacheEnabled:(BOOL)arg1 ;
-(void*)alreadylocked_copyValueForKey:(CFStringRef)arg1 ;
-(void*)copyValueForKey:(CFStringRef)arg1 ;
-(void)alreadylocked_setPrecopiedValues:(const void*)arg1 forKeys:(const _CFString*)arg2 count:(long long)arg3 from:(id)arg4 ;
-(void)transitionIntoDirectModeIfNeededWithRetryBlock:(/*^block*/id)arg1 ;
-(BOOL)isDirectModeEnabled;
-(BOOL)alreadylocked_requestNewData;
-(long long)alreadylocked_generationCount;
-(long long)generationCount;
-(int)alreadylocked_updateObservingRemoteChanges;
-(id)alreadylocked_createObserverUpdateMessageWithOperation:(int)arg1 forRole:(int*)arg2 ;
@end

