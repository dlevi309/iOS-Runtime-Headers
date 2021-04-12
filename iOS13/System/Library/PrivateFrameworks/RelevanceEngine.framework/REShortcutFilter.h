/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@interface REShortcutFilter : NSObject
+(unsigned long long)filterVersion;
-(id)init;
-(unsigned long long)_actionIdentifierForIntent:(id)arg1 ;
-(unsigned long long)_actionIdentifierForUserActivity:(id)arg1 ;
-(id)intentByFilteringIntent:(id)arg1 withLevel:(unsigned long long)arg2 ;
-(id)userActivityByFilteringUserActivity:(id)arg1 withLevel:(unsigned long long)arg2 ;
-(id)identifierForIntent:(id)arg1 bundleIdentifier:(id)arg2 ;
-(id)identifierForUserActivity:(id)arg1 bundleIdentifier:(id)arg2 ;
@end

