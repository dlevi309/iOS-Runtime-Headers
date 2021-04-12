/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
*/


@class BYBuddyDaemonMigrationSourceClient;

@interface BYMigrationSourceController : NSObject {

	BYBuddyDaemonMigrationSourceClient* _migrationSourceClient;

}

@property (nonatomic,retain) BYBuddyDaemonMigrationSourceClient * migrationSourceClient;              //@synthesize migrationSourceClient=_migrationSourceClient - In the implementation block
-(id)init;
-(BYBuddyDaemonMigrationSourceClient *)migrationSourceClient;
-(void)launchSetupForMigration:(id)arg1 ;
-(void)setFileTransferSession:(id)arg1 ;
-(void)setMigrationSourceClient:(BYBuddyDaemonMigrationSourceClient *)arg1 ;
@end

