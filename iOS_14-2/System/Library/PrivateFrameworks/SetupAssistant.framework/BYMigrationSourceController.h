/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setMigrationSourceClient:(BYBuddyDaemonMigrationSourceClient *)arg1 ;
-(void)setFileTransferSession:(id)arg1 ;
@end

