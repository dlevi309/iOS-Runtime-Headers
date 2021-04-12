/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDSQLiteDatabaseProvider;
@class NSMutableArray, HDSQLiteDatabase, HDDatabaseTransactionContext;

@interface HDDatabaseTransaction : NSObject {

	id<HDSQLiteDatabaseProvider> _databaseProvider;
	NSMutableArray* _onCommitBlocks;
	NSMutableArray* _onRollbackBlocks;
	BOOL _isActive;
	BOOL _isOutermostTransactionUnprotected;
	BOOL _isHandlingTransactionEnd;
	BOOL _performingMigration;
	HDSQLiteDatabase* _unprotectedDatabase;
	HDSQLiteDatabase* _protectedDatabase;
	HDDatabaseTransactionContext* _rootContext;

}

@property (nonatomic,copy,readonly) HDDatabaseTransactionContext * rootContext;              //@synthesize rootContext=_rootContext - In the implementation block
@property (assign,nonatomic) BOOL performingMigration;                                       //@synthesize performingMigration=_performingMigration - In the implementation block
@property (nonatomic,readonly) HDSQLiteDatabase * unprotectedDatabase;                       //@synthesize unprotectedDatabase=_unprotectedDatabase - In the implementation block
@property (nonatomic,readonly) HDSQLiteDatabase * protectedDatabase;                         //@synthesize protectedDatabase=_protectedDatabase - In the implementation block
-(void)dealloc;
-(void)setPerformingMigration:(BOOL)arg1 ;
-(BOOL)performingMigration;
-(id)databaseForEntityClass:(Class)arg1 ;
-(HDSQLiteDatabase *)protectedDatabase;
-(void)onCommit:(/*^block*/id)arg1 orRollback:(/*^block*/id)arg2 ;
-(id)databaseForEntity:(id)arg1 ;
-(HDSQLiteDatabase *)unprotectedDatabase;
-(HDDatabaseTransactionContext *)rootContext;
-(id)initWithDatabaseProvider:(id)arg1 rootContext:(id)arg2 ;
-(BOOL)performWithContext:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 inaccessibilityHandler:(/*^block*/id)arg4 ;
-(void)transactionDidEndWithError:(id)arg1 ;
-(id)databaseForEntityProtectionClass:(long long)arg1 ;
@end

