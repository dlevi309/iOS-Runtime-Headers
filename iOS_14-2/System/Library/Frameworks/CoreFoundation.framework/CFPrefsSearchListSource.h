/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)createRequestNewContentMessageForDaemon:(int)arg1 ;
-(void)unlock;
-(void*)alreadylocked_copyValueForKey:(CFStringRef)arg1 ;
-(CFStringRef)domainIdentifier;
-(void)deferredNotifyCausedByLoadingOfChangesFromDictionary:(CFDictionaryRef)arg1 toDictionary:(CFDictionaryRef)arg2 ;
-(void)fullCloudSynchronizeWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)generationCount;
-(void)lock;
-(CFDictionaryRef)alreadylocked_copyDictionary;
-(id)description;
-(void)handleChangeNotificationForDomainIdentifier:(CFStringRef)arg1 isRemote:(BOOL)arg2 ;
-(BOOL)synchronize;
-(void)transitionIntoDirectModeIfNeededWithRetryBlock:(/*^block*/id)arg1 ;
-(void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 retryCount:(int)arg4 error:(BOOL*)arg5 ;
-(CFStringRef)copyOSLogDescription;
-(void)alreadylocked_setPrecopiedValues:(const void*)arg1 forKeys:(const _CFString*)arg2 count:(long long)arg3 from:(id)arg4 ;
-(id)initWithIdentifier:(CFStringRef)arg1 containingPreferences:(id)arg2 ;
-(void)deferredNotifyCausedByLocalWriteOfChangesToKey:(CFStringRef)arg1 fromValue:(void*)arg2 toValue:(void*)arg3 ;
-(BOOL)isDirectModeEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CFArrayRef)alreadylocked_copyKeyList;
-(void)dealloc;
@end

