/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/CFPrefsSource.h>

@class CFPrefsPlistSource, CFPrefsCloudSource;

@interface CFPrefsSearchListSource : CFPrefsSource {

	CFDictionaryRef _keysToSources;
	CFStringRef _identifier;
	CFArrayRef _sourceList;
	CFSetRef _cloudKeys;
	CFArrayRef _cloudPrefixKeys;
	CFPrefsPlistSource* _standardSetTarget;
	CFPrefsCloudSource* _cloudSetTarget;
	BOOL initialized;

}
+(void)preloadDomainsForIdentifiers:(const _CFString*)arg1 containers:(const _CFString*)arg2 cloudConfigurationURLs:(const _CFURL*)arg3 count:(long long)arg4 containingPreferences:(id)arg5 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)synchronize;
-(CFArrayRef)alreadylocked_copyKeyList;
-(CFDictionaryRef)alreadylocked_copyDictionary;
-(CFStringRef)copyOSLogDescription;
-(CFStringRef)domainIdentifier;
-(id)createRequestNewContentMessageForDaemon:(int)arg1 ;
-(void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 retryCount:(int)arg4 error:(BOOL*)arg5 ;
-(void*)alreadylocked_copyValueForKey:(CFStringRef)arg1 ;
-(void)alreadylocked_setPrecopiedValues:(const void*)arg1 forKeys:(const _CFString*)arg2 count:(long long)arg3 from:(id)arg4 ;
-(void)transitionIntoDirectModeIfNeededWithRetryBlock:(/*^block*/id)arg1 ;
-(BOOL)isDirectModeEnabled;
-(BOOL)alreadylocked_requestNewData;
-(long long)generationCount;
-(void)fullCloudSynchronizeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setCloudEnabled:(BOOL)arg1 forKeyPrefix:(CFStringRef)arg2 ;
-(void)setCloudEnabled:(BOOL)arg1 forKey:(CFStringRef)arg2 ;
-(id)createMultiMessageWithContainedMessages:(id)arg1 ;
-(void)synchronouslySendDaemonMessage:(id)arg1 andAgentMessage:(id)arg2 andDirectMessage:(id)arg3 replyHandler:(/*^block*/id)arg4 ;
-(void)alreadylocked_reloadCacheIfStale;
-(void)alreadylocked_setObservingContents:(BOOL)arg1 ;
-(id)initWithIdentifier:(CFStringRef)arg1 containingPreferences:(id)arg2 ;
-(void)addSource:(id)arg1 ;
-(void)alreadylocked_getDictionary:(/*^block*/id)arg1 ;
-(BOOL)alreadylocked_useCloudForKey:(CFStringRef)arg1 ;
-(void)deferredNotifyCausedByLocalWriteOfChangesToKey:(CFStringRef)arg1 fromValue:(void*)arg2 toValue:(void*)arg3 ;
-(long long)alreadylocked_generationCountFromListOfSources:(id*)arg1 count:(long long)arg2 ;
-(void)deferredNotifyCausedByLoadingOfChangesFromDictionary:(CFDictionaryRef)arg1 toDictionary:(CFDictionaryRef)arg2 ;
-(CFArrayRef)_getPendingNotifications;
-(void*)alreadylocked_copyManagedValueForKey:(CFStringRef)arg1 ;
-(CFStringRef)copyCloudConfigurationWithURL:(CFURLRef)arg1 outConfigFileSource:(id*)arg2 outStoreName:(const _CFString*)arg3 ;
-(void)addPreferencesObserver:(id)arg1 ;
-(void)removePreferencesObserver:(id)arg1 ;
-(void)lock;
-(void)unlock;
-(void)addManagedSourceForIdentifier:(CFStringRef)arg1 user:(CFStringRef)arg2 ;
-(void)addSourceForIdentifier:(CFStringRef)arg1 user:(CFStringRef)arg2 byHost:(BOOL)arg3 container:(CFStringRef)arg4 ;
-(void)addCloudSourceForIdentifier:(CFStringRef)arg1 configurationPath:(CFStringRef)arg2 storeName:(CFStringRef)arg3 container:(CFStringRef)arg4 ;
-(void)addSuiteSourceForIdentifier:(CFStringRef)arg1 user:(CFStringRef)arg2 ;
-(void)addNamedVolatileSourceForIdentifier:(CFStringRef)arg1 ;
-(BOOL)alreadylocked_hasCloudValueForKey:(CFStringRef)arg1 ;
-(BOOL)alreadylocked_hasNonRegisteredValueForKey:(CFStringRef)arg1 ;
-(void)handleChangeNotificationForDomainIdentifier:(CFStringRef)arg1 isRemote:(BOOL)arg2 ;
-(CFDictionaryRef)alreadylocked_copyManagedDictionary;
-(void)freeze;
-(void)removeSource:(id)arg1 ;
-(void)replaceSource:(id)arg1 withSource:(id)arg2 ;
@end

