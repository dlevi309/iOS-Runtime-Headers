/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/


@interface SLDataMigrationController : NSObject
+(id)sharedController;
-(BOOL)needsMigrationForSocialDaemonBundleID:(id)arg1 preferenceKey:(id)arg2 ;
-(void)didFinishMigrationForSocialDaemonBundleID:(id)arg1 preferenceKey:(id)arg2 ;
-(void)ensureSocialUserDataDirectory;
-(BOOL)needsFileProtectionUpgradeForProfileImagesAtPath:(id)arg1 serviceNameForLogging:(id)arg2 ;
-(void)removeAncillarySocialDatabaseFilesWithPrefix:(id)arg1 serviceNameForLogging:(id)arg2 ;
@end

