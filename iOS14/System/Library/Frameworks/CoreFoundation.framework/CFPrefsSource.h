/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@class _CFXPreferences, __CFPrefsWeakObservers;

@interface CFPrefsSource : NSObject {

	_CFXPreferences* _containingPreferences;
	CFDictionaryRef _dict;
	__CFPrefsWeakObservers* _observers;
	Aq _generationCount;
	AAI* shmemEntry;
	AI lastKnownShmemState;
	os_unfair_lock_s _lock;
	BOOL _isSearchList;

}
-(id)createRequestNewContentMessageForDaemon:(int)arg1 ;
-(BOOL)isVolatile;
-(void)setAccessRestricted:(BOOL)arg1 ;
-(void)unlock;
-(void*)alreadylocked_copyValueForKey:(CFStringRef)arg1 ;
-(CFStringRef)userIdentifier;
-(CFStringRef)domainIdentifier;
-(int)alreadylocked_updateObservingRemoteChanges;
-(long long)alreadylocked_generationCount;
-(void)fullCloudSynchronizeWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)generationCount;
-(void)lock;
-(CFDictionaryRef)alreadylocked_copyDictionary;
-(void*)copyValueForKey:(CFStringRef)arg1 ;
-(BOOL)isByHost;
-(int)alreadylocked_removePreferencesObserver:(id)arg1 ;
-(void)setFileProtectionClass:(int)arg1 ;
-(id)description;
-(BOOL)synchronize;
-(void)transitionIntoDirectModeIfNeededWithRetryBlock:(/*^block*/id)arg1 ;
-(void)setValues:(const void*)arg1 forKeys:(const _CFString*)arg2 count:(long long)arg3 copyValues:(BOOL)arg4 removeValuesForKeys:(const _CFString*)arg5 count:(long long)arg6 from:(id)arg7 ;
-(void)alreadylocked_clearCache;
-(void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 retryCount:(int)arg4 error:(BOOL*)arg5 ;
-(id)alreadylocked_createObserverUpdateMessageWithOperation:(int)arg1 forRole:(int*)arg2 ;
-(void)setBackupDisabled:(BOOL)arg1 ;
-(void)setValue:(void*)arg1 forKey:(CFStringRef)arg2 from:(id)arg3 ;
-(void)mergeIntoDictionary:(CFDictionaryRef)arg1 sourceDictionary:(CFDictionaryRef)arg2 cloudKeyEvaluator:(/*^block*/id)arg3 ;
-(CFStringRef)copyOSLogDescription;
-(void)alreadylocked_setPrecopiedValues:(const void*)arg1 forKeys:(const _CFString*)arg2 count:(long long)arg3 from:(id)arg4 ;
-(void)_notifyObserversOfChangeFromValuesForKeys:(id)arg1 toValuesForKeys:(id)arg2 ;
-(BOOL)isDirectModeEnabled;
-(int)alreadylocked_addPreferencesObserver:(id)arg1 ;
-(void)setValues:(const void*)arg1 forKeys:(const _CFString*)arg2 count:(long long)arg3 copyValues:(BOOL)arg4 from:(id)arg5 ;
-(CFArrayRef)copyKeyList;
-(void)setConfigurationPath:(CFStringRef)arg1 ;
-(CFStringRef)container;
-(CFArrayRef)alreadylocked_copyKeyList;
-(CFDictionaryRef)copyDictionary;
-(BOOL)managed;
-(void)dealloc;
-(id)initWithContainingPreferences:(id)arg1 ;
-(void)setDaemonCacheEnabled:(BOOL)arg1 ;
@end

