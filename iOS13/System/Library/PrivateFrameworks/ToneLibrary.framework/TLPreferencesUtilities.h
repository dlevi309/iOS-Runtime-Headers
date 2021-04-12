/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
*/


#import <ToneLibrary/ToneLibrary-Structs.h>
@interface TLPreferencesUtilities : NSObject
+(CFStringRef)copySharedResourcesPreferencesDomain;
+(id)perWatchPreferencesDomain;
+(CFStringRef)preferencesDomain;
+(CFStringRef)copySharedResourcesPreferencesDomainForDomain:(CFStringRef)arg1 ;
+(void)migratePerTopicPreferencesInDomain:(CFStringRef)arg1 withRegularPreferenceKeys:(const id*)arg2 regularPreferenceKeysCount:(unsigned long long)arg3 intoSinglePerTopicPreferenceWithSuffix:(id)arg4 usingPreferencesScope:(int)arg5 ;
+(id)_existingPerTopicPreferenceKeyPrefixesWithRegularPreferenceKeys:(const id*)arg1 regularPreferenceKeysCount:(unsigned long long)arg2 ;
+(void)_setValue:(void*)arg1 forKey:(CFStringRef)arg2 inDomain:(CFStringRef)arg3 usingPreferencesScope:(int)arg4 ;
+(void)_enumerateKeysAndValuesWithEligibleKeyPrefixes:(id)arg1 inDomain:(CFStringRef)arg2 usingPreferencesScope:(int)arg3 withBlock:(/*^block*/id)arg4 ;
+(void)_synchronizeDomain:(CFStringRef)arg1 usingPreferencesScope:(int)arg2 ;
+(CFDictionaryRef)_copyAllKeysAndValuesFromDomain:(CFStringRef)arg1 usingPreferencesScope:(int)arg2 ;
@end

