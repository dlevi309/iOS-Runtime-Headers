/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDDatabaseMigrationTransactionDelegate;
@class HDSQLiteDatabase, HDHFDataStore, _HKBehavior, NSArray, NSString;

@interface HDDatabaseMigrationTransaction : NSObject {

	HDSQLiteDatabase* _unprotectedDatabase;
	HDSQLiteDatabase* _protectedDatabase;
	HDHFDataStore* _HFDataStore;
	_HKBehavior* _behavior;
	NSArray* _schemaProviders;
	id<HDDatabaseMigrationTransactionDelegate> _delegate;

}

@property (nonatomic,readonly) _HKBehavior * behavior;                                                //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,copy,readonly) NSArray * schemaProviders;                                        //@synthesize schemaProviders=_schemaProviders - In the implementation block
@property (assign,nonatomic,__weak) id<HDDatabaseMigrationTransactionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) HDSQLiteDatabase * defaultDatabase; 
@property (nonatomic,copy,readonly) NSString * defaultDatabaseName; 
@property (nonatomic,readonly) long long defaultProtectionClass; 
@property (nonatomic,readonly) HDSQLiteDatabase * unprotectedDatabase;                                //@synthesize unprotectedDatabase=_unprotectedDatabase - In the implementation block
@property (nonatomic,readonly) HDSQLiteDatabase * protectedDatabase;                                  //@synthesize protectedDatabase=_protectedDatabase - In the implementation block
@property (nonatomic,readonly) HDHFDataStore * HFDataStore;                                           //@synthesize HFDataStore=_HFDataStore - In the implementation block
@property (nonatomic,readonly) BOOL isProtectedMigration; 
+(id)unprotectedMigrationTransactionForMigrationTransaction:(id)arg1 ;
-(long long)_migrateFromUserVersion:(long long)arg1 didRequireMigration:(BOOL*)arg2 error:(id*)arg3 ;
-(NSString *)defaultDatabaseName;
-(HDSQLiteDatabase *)protectedDatabase;
-(id<HDDatabaseMigrationTransactionDelegate>)delegate;
-(_HKBehavior *)behavior;
-(BOOL)isProtectedMigration;
-(void)_presentRollbackAlertForSchema:(id)arg1 protectionClass:(long long)arg2 foundVersion:(long long)arg3 currentVersion:(long long)arg4 ;
-(BOOL)_createEntitiesOrAddMigrationStepsForProtectionClass:(long long)arg1 schemaProviders:(id)arg2 migrator:(id)arg3 error:(id*)arg4 ;
-(void)_enableIncrementalAutovacuumIfNeeded;
-(BOOL)_createDataTablesInDatabase:(id)arg1 entityClasses:(id)arg2 requiredPrefix:(id)arg3 error:(id*)arg4 ;
-(long long)_migrateOrCreateSchemaWithEntityClasses:(id)arg1 error:(id*)arg2 ;
-(id)initWithUnprotectedDatabase:(id)arg1 protectedDatabase:(id)arg2 HFDataStore:(id)arg3 schemaProviders:(id)arg4 behavior:(id)arg5 ;
-(BOOL)_insertDatabaseIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)setDelegate:(id<HDDatabaseMigrationTransactionDelegate>)arg1 ;
-(NSArray *)schemaProviders;
-(HDHFDataStore *)HFDataStore;
-(HDSQLiteDatabase *)unprotectedDatabase;
-(long long)_verifyDatabaseIdentifiersAreValidWithError:(id*)arg1 ;
-(long long)defaultProtectionClass;
-(long long)migrateOrCreateSchemaWithError:(id*)arg1 ;
-(BOOL)_migrationRequiredForProtectionClass:(long long)arg1 migrator:(id)arg2 schemaProviders:(id)arg3 error:(id*)arg4 ;
-(long long)_createEntitiesWithEntityClasses:(id)arg1 error:(id*)arg2 ;
-(HDSQLiteDatabase *)defaultDatabase;
-(id)databaseNameForProtectionClass:(long long)arg1 ;
-(BOOL)_createEntitiesForSchemaProvider:(id)arg1 protectionClass:(long long)arg2 migrator:(id)arg3 error:(id*)arg4 ;
@end

