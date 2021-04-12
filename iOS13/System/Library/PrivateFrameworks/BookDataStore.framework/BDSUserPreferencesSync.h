/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
*/


@interface BDSUserPreferencesSync : NSObject
+(id)syncedPreferenceKeys;
+(void)copyChangedLocalPreferencesToGroupContainerWithAppSuiteName:(id)arg1 container:(id)arg2 groupName:(id)arg3 groupContainer:(id)arg4 ;
+(id)objectFromGroupPreferencesForKey:(id)arg1 ;
+(void)copyChangedGroupPreferencesToLocalContainer;
+(void)copyChangedLocalPreferencesToGroupContainer;
@end

