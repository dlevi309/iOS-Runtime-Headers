/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
*/


@class NSDictionary, NSString;

@interface DataClassMigrator : NSObject {

	NSDictionary* _context;
	BOOL _didUpgrade;
	unsigned _userDataDisposition;
	NSString* _restoredBackupBuildVersion;
	NSString* _restoredBackupProductType;
	NSString* _dmBundleIdentifier;

}

@property (assign,nonatomic) unsigned userDataDisposition;                            //@synthesize userDataDisposition=_userDataDisposition - In the implementation block
@property (nonatomic,retain) NSString * restoredBackupBuildVersion;                   //@synthesize restoredBackupBuildVersion=_restoredBackupBuildVersion - In the implementation block
@property (nonatomic,retain) NSString * restoredBackupProductType;                    //@synthesize restoredBackupProductType=_restoredBackupProductType - In the implementation block
@property (nonatomic,copy) NSString * dmBundleIdentifier;                             //@synthesize dmBundleIdentifier=_dmBundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL shouldPreserveSettingsAfterRestore; 
@property (nonatomic,readonly) BOOL wasPasscodeSetInBackup; 
@property (assign,nonatomic) BOOL didUpgrade;                                         //@synthesize didUpgrade=_didUpgrade - In the implementation block
@property (nonatomic,readonly) BOOL didRestoreFromBackup; 
@property (nonatomic,readonly) BOOL didMigrateBackupFromDifferentDevice; 
@property (nonatomic,readonly) BOOL didRestoreFromCloudBackup; 
@property (nonatomic,retain) NSDictionary * context;                                  //@synthesize context=_context - In the implementation block
+(id)dataClassMigratorForBundleAtPath:(id)arg1 ;
-(BOOL)performMigration;
-(NSDictionary *)context;
-(unsigned)userDataDisposition;
-(BOOL)didUpgrade;
-(void)setDmBundleIdentifier:(NSString *)arg1 ;
-(BOOL)didRestoreFromBackup;
-(BOOL)didMigrateBackupFromDifferentDevice;
-(BOOL)didRestoreFromCloudBackup;
-(void)setDidUpgrade:(BOOL)arg1 ;
-(BOOL)shouldPreserveSettingsAfterRestore;
-(BOOL)wasPasscodeSetInBackup;
-(void)setUserDataDisposition:(unsigned)arg1 ;
-(NSString *)restoredBackupBuildVersion;
-(void)setRestoredBackupBuildVersion:(NSString *)arg1 ;
-(NSString *)restoredBackupProductType;
-(void)setRestoredBackupProductType:(NSString *)arg1 ;
-(NSString *)dmBundleIdentifier;
-(void)setContext:(NSDictionary *)arg1 ;
@end

