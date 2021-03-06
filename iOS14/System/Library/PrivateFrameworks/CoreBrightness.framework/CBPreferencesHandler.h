/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
*/


#import <CoreBrightness/CoreBrightness-Structs.h>
@interface CBPreferencesHandler : NSObject
+(id)copyPreferenceForAllUsersForKey:(id)arg1 ;
+(BOOL)storePreferenceForAllUsersForKey:(id)arg1 andValue:(id)arg2 ;
+(BOOL)migrateNestedPreferenceForAllUsersWithKey1:(id)arg1 key2:(id)arg2 toKey:(id)arg3 ;
+(id)copyNestedPreferenceForKey1:(id)arg1 key2:(id)arg2 key3:(id)arg3 ;
+(BOOL)storeNestedPreferenceForAllUsersWithKey1:(id)arg1 key2:(id)arg2 key3:(id)arg3 andValue:(id)arg4 ;
+(CFDictionaryRef)copyPreferenceDictionaryForUser:(id)arg1 ;
+(BOOL)storePreferenceForUser:(id)arg1 withKey:(id)arg2 andValue:(id)arg3 ;
+(BOOL)storePreferenceForAllUsersMultiple:(id)arg1 ;
+(id)copyPreferenceForUser:(id)arg1 forKey:(id)arg2 ;
+(id)copyPreferenceForAllUsersMultiple:(id)arg1 ;
+(void)consistencyCheckForUser:(id)arg1 ;
+(id)copyNestedPreferenceForKey1:(id)arg1 key2:(id)arg2 ;
@end

