/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@interface REShortcutFilter : NSObject
+(unsigned long long)filterVersion;
-(id)init;
-(id)intentByFilteringIntent:(id)arg1 withLevel:(unsigned long long)arg2 ;
-(id)identifierForIntent:(id)arg1 bundleIdentifier:(id)arg2 ;
-(id)userActivityByFilteringUserActivity:(id)arg1 withLevel:(unsigned long long)arg2 ;
-(id)identifierForUserActivity:(id)arg1 bundleIdentifier:(id)arg2 ;
-(unsigned long long)_actionIdentifierForIntent:(id)arg1 ;
-(unsigned long long)_actionIdentifierForUserActivity:(id)arg1 ;
@end

