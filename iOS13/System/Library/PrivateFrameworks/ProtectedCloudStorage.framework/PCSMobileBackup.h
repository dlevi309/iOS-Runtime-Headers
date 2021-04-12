/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
*/

#import <libobjc.A.dylib/MBManagerDelegate.h>

@class MBManager;

@interface PCSMobileBackup : NSObject <MBManagerDelegate> {

	MBManager* _backupManager;

}

@property (retain) MBManager * backupManager;              //@synthesize backupManager=_backupManager - In the implementation block
+(id)defaultMobileBackup;
-(id)init;
-(BOOL)isBackupEnabled;
-(MBManager *)backupManager;
-(void)setBackupManager:(MBManager *)arg1 ;
@end

