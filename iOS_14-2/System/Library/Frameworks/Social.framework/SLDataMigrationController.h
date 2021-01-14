/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

