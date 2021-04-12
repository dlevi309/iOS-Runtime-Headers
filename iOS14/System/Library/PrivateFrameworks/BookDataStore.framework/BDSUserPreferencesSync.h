/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
*/


@interface BDSUserPreferencesSync : NSObject
+(id)syncedPreferenceKeys;
+(void)copyChangedLocalPreferencesToGroupContainerWithAppSuiteName:(id)arg1 container:(id)arg2 groupName:(id)arg3 groupContainer:(id)arg4 ;
+(id)objectFromGroupPreferencesForKey:(id)arg1 ;
+(void)copyChangedGroupPreferencesToLocalContainer;
+(void)copyChangedLocalPreferencesToGroupContainer;
@end

