/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
*/


#import <ToneLibrary/ToneLibrary-Structs.h>
@interface TLPreferencesUtilities : NSObject
+(void)migratePerTopicPreferencesInDomain:(CFStringRef)arg1 withRegularPreferenceKeys:(const id*)arg2 regularPreferenceKeysCount:(unsigned long long)arg3 intoSinglePerTopicPreferenceWithSuffix:(id)arg4 usingPreferencesScope:(int)arg5 ;
+(id)perWatchPreferencesDomain;
+(id)_existingPerTopicPreferenceKeyPrefixesWithRegularPreferenceKeys:(const id*)arg1 regularPreferenceKeysCount:(unsigned long long)arg2 ;
+(CFDictionaryRef)_copyAllKeysAndValuesFromDomain:(CFStringRef)arg1 usingPreferencesScope:(int)arg2 ;
+(CFStringRef)preferencesDomain;
+(void)_setValue:(void*)arg1 forKey:(CFStringRef)arg2 inDomain:(CFStringRef)arg3 usingPreferencesScope:(int)arg4 ;
+(void)_enumerateKeysAndValuesWithEligibleKeyPrefixes:(id)arg1 inDomain:(CFStringRef)arg2 usingPreferencesScope:(int)arg3 withBlock:(/*^block*/id)arg4 ;
+(CFStringRef)copySharedResourcesPreferencesDomainForDomain:(CFStringRef)arg1 ;
+(CFStringRef)copySharedResourcesPreferencesDomain;
+(void)_synchronizeDomain:(CFStringRef)arg1 usingPreferencesScope:(int)arg2 ;
@end

