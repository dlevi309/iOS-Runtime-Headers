/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
*/


@interface SDLockHandler : NSObject
+(BOOL)unlockedSinceBoot;
+(BOOL)deviceUnlocked;
+(BOOL)deviceFirstUnlockedInMKB;
+(BOOL)deviceFirstUnlockedInSB;
+(void)_deviceLockSetup;
+(void)_deviceLockSetupMKB;
+(void)_deviceLockSetupSB;
+(void)_deviceLockSetUpMigrationCheck;
+(void)setupHandlerWithIndexQueue:(id)arg1 pipelineOnly:(BOOL)arg2 indexEnabled:(BOOL)arg3 delegate:(id)arg4 ;
@end

