/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/


@interface MTRestrictionsUtil : NSObject
+(BOOL)isExplicitContentAllowed;
+(void)reloadSettings;
+(void)didDisplayExplicitRestrictionAlertOfType:(int)arg1 ;
+(id)settingsURL;
+(BOOL)_fetchIsExplicitContentAllowed;
+(id)settingsURLString;
+(BOOL)_isActiveAccountAllowedToUpdateRestrictions;
+(id)_userDefaultsKeyForExplicitRestrictionAlertType:(int)arg1 ;
+(int)explicitRestrictionAlertTypeForTypeString:(id)arg1 ;
+(BOOL)_isRestrictedByAdministrator;
+(BOOL)_mustResolveInScreenTimePreferences;
+(void)_setAllowExplicitContent;
@end

