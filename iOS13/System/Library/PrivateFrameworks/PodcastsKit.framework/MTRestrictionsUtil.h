/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/


@interface MTRestrictionsUtil : NSObject
+(BOOL)_calculateIsRestrictionsPasscodeSet;
+(void)didDisplayExplicitRestrictionAlertOfType:(int)arg1 ;
+(BOOL)isExplicitContentAllowed;
+(void)reloadSettings;
+(BOOL)_fetchIsExplicitContentAllowed;
+(BOOL)_isActiveAccountAllowedToUpdateRestrictions;
+(id)_userDefaultsKeyForExplicitRestrictionAlertType:(int)arg1 ;
+(int)explicitRestrictionAlertTypeForTypeString:(id)arg1 ;
+(BOOL)_isRestrictedByAdministrator;
+(void)_setAllowExplicitContent;
@end

