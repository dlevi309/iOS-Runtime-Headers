/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class HDSQLiteDatabase;

@interface HDDatabaseMigrationTransaction : NSObject {

	HDSQLiteDatabase* _unprotectedDatabase;
	HDSQLiteDatabase* _protectedDatabase;

}

@property (nonatomic,readonly) HDSQLiteDatabase * unprotectedDatabase;              //@synthesize unprotectedDatabase=_unprotectedDatabase - In the implementation block
@property (nonatomic,readonly) HDSQLiteDatabase * protectedDatabase;                //@synthesize protectedDatabase=_protectedDatabase - In the implementation block
@property (nonatomic,readonly) BOOL isProtectedMigration; 
+(id)unprotectedMigrationTransactionForMigrationTransaction:(id)arg1 ;
-(HDSQLiteDatabase *)protectedDatabase;
-(HDSQLiteDatabase *)unprotectedDatabase;
-(BOOL)isProtectedMigration;
-(id)initWithUnprotectedDatabase:(id)arg1 protectedDatabase:(id)arg2 ;
-(id)databaseNameForProtectionClass:(long long)arg1 ;
@end

