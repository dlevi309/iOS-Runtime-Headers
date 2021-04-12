/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
*/


@interface SDLockHandler : NSObject
+(BOOL)deviceUnlocked;
+(void)_deviceLockSetup;
+(BOOL)unlockedSinceBoot;
+(void)setupHandlerWithIndexQueue:(id)arg1 pipelineOnly:(BOOL)arg2 indexEnabled:(BOOL)arg3 delegate:(id)arg4 ;
+(BOOL)deviceFirstUnlockedInMKB;
+(BOOL)deviceFirstUnlockedInSB;
+(void)_deviceLockSetupSB;
+(void)_deviceLockSetUpMigrationCheck;
+(void)_deviceLockSetupMKB;
@end

