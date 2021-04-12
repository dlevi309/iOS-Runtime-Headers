/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(BOOL)synchronize;
-(CFStringRef)container;
-(BOOL)managed;
-(CFDictionaryRef)copyDictionary;
-(id)initWithContainingPreferences:(id)arg1 ;
-(CFArrayRef)alreadylocked_copyKeyList;
-(CFDictionaryRef)alreadylocked_copyDictionary;
-(void)alreadylocked_clearCache;
-(CFStringRef)copyOSLogDescription;
-(CFStringRef)domainIdentifier;
-(CFStringRef)userIdentifier;
-(id)createRequestNewContentMessageForDaemon:(int)arg1 ;
-(void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 retryCount:(int)arg4 error:(BOOL*)arg5 ;
-(BOOL)isVolatile;
-(BOOL)isByHost;
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
-(void)setValue:(void*)arg1 forKey:(CFStringRef)arg2 from:(id)arg3 ;
-(void)fullCloudSynchronizeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)mergeIntoDictionary:(CFDictionaryRef)arg1 sourceDictionary:(CFDictionaryRef)arg2 cloudKeyEvaluator:(/*^block*/id)arg3 ;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setConfigurationPath:(CFStringRef)arg1 ;
-(void)setStoreName:(CFStringRef)arg1 ;
-(int)alreadylocked_addPreferencesObserver:(id)arg1 ;
-(int)alreadylocked_removePreferencesObserver:(id)arg1 ;
-(void)setValues:(const void*)arg1 forKeys:(const _CFString*)arg2 count:(long long)arg3 copyValues:(BOOL)arg4 from:(id)arg5 ;
-(void)lock;
-(void)unlock;
-(void)forEachObserver:(/*^block*/id)arg1 ;
-(void)_notifyObserversOfChangeFromValuesForKeys:(id)arg1 toValuesForKeys:(id)arg2 ;
-(void)setValues:(const void*)arg1 forKeys:(const _CFString*)arg2 count:(long long)arg3 copyValues:(BOOL)arg4 removeValuesForKeys:(const _CFString*)arg5 count:(long long)arg6 from:(id)arg7 ;
-(CFArrayRef)copyKeyList;
-(void)replaceAllValuesWithValues:(const void*)arg1 forKeys:(const _CFString*)arg2 count:(long long)arg3 from:(id)arg4 ;
-(void)removeAllValues_from:(id)arg1 ;
@end

