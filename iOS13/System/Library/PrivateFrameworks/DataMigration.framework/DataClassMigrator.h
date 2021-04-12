/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
*/


@class NSDictionary, NSString;

@interface DataClassMigrator : NSObject {

	NSDictionary* _context;
	BOOL _didUpgrade;
	unsigned _userDataDisposition;
	NSString* _restoredBackupBuildVersion;
	NSString* _restoredBackupProductType;

}

@property (assign,nonatomic) unsigned userDataDisposition;                            //@synthesize userDataDisposition=_userDataDisposition - In the implementation block
@property (nonatomic,retain) NSString * restoredBackupBuildVersion;                   //@synthesize restoredBackupBuildVersion=_restoredBackupBuildVersion - In the implementation block
@property (nonatomic,retain) NSString * restoredBackupProductType;                    //@synthesize restoredBackupProductType=_restoredBackupProductType - In the implementation block
@property (nonatomic,readonly) BOOL shouldPreserveSettingsAfterRestore; 
@property (nonatomic,readonly) BOOL wasPasscodeSetInBackup; 
@property (assign,nonatomic) BOOL didUpgrade;                                         //@synthesize didUpgrade=_didUpgrade - In the implementation block
@property (nonatomic,readonly) BOOL didRestoreFromBackup; 
@property (nonatomic,readonly) BOOL didMigrateBackupFromDifferentDevice; 
@property (nonatomic,readonly) BOOL didRestoreFromCloudBackup; 
@property (nonatomic,retain) NSDictionary * context;                                  //@synthesize context=_context - In the implementation block
+(id)dataClassMigratorForBundleAtPath:(id)arg1 ;
-(NSDictionary *)context;
-(void)setContext:(NSDictionary *)arg1 ;
-(BOOL)performMigration;
-(BOOL)didRestoreFromBackup;
-(BOOL)didUpgrade;
-(BOOL)didMigrateBackupFromDifferentDevice;
-(BOOL)didRestoreFromCloudBackup;
-(BOOL)shouldPreserveSettingsAfterRestore;
-(BOOL)wasPasscodeSetInBackup;
-(unsigned)userDataDisposition;
-(void)setUserDataDisposition:(unsigned)arg1 ;
-(NSString *)restoredBackupBuildVersion;
-(void)setRestoredBackupBuildVersion:(NSString *)arg1 ;
-(NSString *)restoredBackupProductType;
-(void)setRestoredBackupProductType:(NSString *)arg1 ;
-(void)setDidUpgrade:(BOOL)arg1 ;
@end

