/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@interface ICQuickNoteSessionSettings : NSObject
+(void)initialize;
+(BOOL)hasAccountSupportingLockScreen;
+(long long)showOnLockScreenSettingValue;
+(void)setShowOnLockScreen:(long long)arg1 ;
+(void)disableNotesOnLockScreenIfNecessary;
+(void)updateNotesOnLockScreenWhenAccountSupportingLockScreenAdded;
+(void)setSessionDuration:(long long)arg1 ;
+(long long)sessionDuration;
+(long long)showOnLockScreen;
@end

