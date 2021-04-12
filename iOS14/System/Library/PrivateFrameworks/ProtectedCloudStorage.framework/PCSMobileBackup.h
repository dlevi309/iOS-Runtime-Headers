/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setBackupManager:(MBManager *)arg1 ;
-(BOOL)isBackupEnabled;
-(MBManager *)backupManager;
@end

