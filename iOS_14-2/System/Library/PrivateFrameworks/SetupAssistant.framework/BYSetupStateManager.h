/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
*/


@interface BYSetupStateManager : NSObject
+(id)sharedManager;
-(id)buddyPrefsValueForKey:(id)arg1 ;
-(long long)restoreType;
-(void)clearRestoreType;
-(BOOL)didSetupUsingiTunes;
-(void)recordSetupUsingBuddy;
-(BOOL)didRestoreFromBackup;
@end

