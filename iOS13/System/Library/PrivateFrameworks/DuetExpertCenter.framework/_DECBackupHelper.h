/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
*/


@class NSFileManager;

@interface _DECBackupHelper : NSObject {

	NSFileManager* _fm;

}
+(id)sharedInstance;
-(id)init;
-(BOOL)isClassCLocked;
-(BOOL)canBackup;
-(BOOL)backupNewerThanCurrentState;
-(BOOL)markRestoreAsNotDone;
-(BOOL)finishBackup;
-(void)fixupDataProtection;
-(BOOL)canRestore;
-(BOOL)restoredAlready;
-(BOOL)restoreStart;
-(BOOL)restoreDone;
-(id)backupPathForExpert:(id)arg1 ;
-(id)restorePathForExpert:(id)arg1 ;
-(BOOL)createBackupDirectoriesIfMissing;
-(BOOL)probePathAt:(id)arg1 ;
-(id)_currentBackupVersionPath;
-(BOOL)markVersionOfBackupDirectoryAsCurrent;
@end

