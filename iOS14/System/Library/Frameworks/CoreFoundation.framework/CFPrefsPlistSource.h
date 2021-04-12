/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)createRequestNewContentMessageForDaemon:(int)arg1 ;
-(BOOL)isVolatile;
-(void)setAccessRestricted:(BOOL)arg1 ;
-(void*)alreadylocked_copyValueForKey:(CFStringRef)arg1 ;
-(CFStringRef)userIdentifier;
-(CFStringRef)domainIdentifier;
-(int)alreadylocked_updateObservingRemoteChanges;
-(long long)alreadylocked_generationCount;
-(long long)generationCount;
-(id)createSynchronizeMessage;
-(CFDictionaryRef)alreadylocked_copyDictionary;
-(void*)copyValueForKey:(CFStringRef)arg1 ;
-(BOOL)isByHost;
-(void)setFileProtectionClass:(int)arg1 ;
-(BOOL)synchronize;
-(void)transitionIntoDirectModeIfNeededWithRetryBlock:(/*^block*/id)arg1 ;
-(void)alreadylocked_clearCache;
-(void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 retryCount:(int)arg4 error:(BOOL*)arg5 ;
-(id)alreadylocked_createObserverUpdateMessageWithOperation:(int)arg1 forRole:(int*)arg2 ;
-(void)setBackupDisabled:(BOOL)arg1 ;
-(void)alreadylocked_setPrecopiedValues:(const void*)arg1 forKeys:(const _CFString*)arg2 count:(long long)arg3 from:(id)arg4 ;
-(BOOL)isDirectModeEnabled;
-(CFStringRef)container;
-(CFArrayRef)alreadylocked_copyKeyList;
-(id)initWithDomain:(CFStringRef)arg1 user:(CFStringRef)arg2 byHost:(BOOL)arg3 containerPath:(CFStringRef)arg4 containingPreferences:(id)arg5 ;
-(void)dealloc;
-(void)setDaemonCacheEnabled:(BOOL)arg1 ;
@end

