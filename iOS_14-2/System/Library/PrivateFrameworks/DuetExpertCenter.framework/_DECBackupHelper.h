/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
*/


@class NSFileManager;

@interface _DECBackupHelper : NSObject {

	NSFileManager* _fm;

}
+(id)sharedInstance;
-(BOOL)restoreStart;
-(BOOL)backupNewerThanCurrentState;
-(id)backupPathForExpert:(id)arg1 ;
-(BOOL)isClassCLocked;
-(id)init;
-(BOOL)restoredAlready;
-(BOOL)canRestore;
-(void)fixupDataProtection;
-(id)restorePathForExpert:(id)arg1 ;
-(BOOL)markVersionOfBackupDirectoryAsCurrent;
-(BOOL)markRestoreAsNotDone;
-(BOOL)probePathAt:(id)arg1 ;
-(BOOL)canBackup;
-(BOOL)restoreDone;
-(id)_currentBackupVersionPath;
-(BOOL)createBackupDirectoriesIfMissing;
-(BOOL)finishBackup;
@end

