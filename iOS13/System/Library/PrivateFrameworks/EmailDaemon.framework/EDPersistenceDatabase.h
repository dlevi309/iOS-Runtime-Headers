/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <libobjc.A.dylib/EDPersistenceDatabaseConnectionPoolDelegate.h>
#import <libobjc.A.dylib/EDPersistenceDatabaseConnectionDelegate.h>

@class EFSQLSchema, EFSQLPropertyMapper, EDPersistenceDatabaseConnectionPool, EDProtectedDatabasePersistence, NSString;

@interface EDPersistenceDatabase : NSObject <EDPersistenceDatabaseConnectionPoolDelegate, EDPersistenceDatabaseConnectionDelegate> {

	BOOL _setupIsComplete;
	EFSQLSchema* _schema;
	EFSQLSchema* _protectedSchema;
	EFSQLPropertyMapper* _propertyMapper;
	EDPersistenceDatabaseConnectionPool* _connectionPool;
	EDProtectedDatabasePersistence* _protectedDatabasePersistence;
	NSString* _basePath;
	NSString* _databaseName;
	NSString* _fullPath;

}

@property (nonatomic,readonly) EDPersistenceDatabaseConnectionPool * connectionPool;                       //@synthesize connectionPool=_connectionPool - In the implementation block
@property (nonatomic,readonly) EDProtectedDatabasePersistence * protectedDatabasePersistence;              //@synthesize protectedDatabasePersistence=_protectedDatabasePersistence - In the implementation block
@property (nonatomic,readonly) NSString * basePath;                                                        //@synthesize basePath=_basePath - In the implementation block
@property (nonatomic,readonly) NSString * databaseName;                                                    //@synthesize databaseName=_databaseName - In the implementation block
@property (nonatomic,readonly) NSString * fullPath;                                                        //@synthesize fullPath=_fullPath - In the implementation block
@property (nonatomic,readonly) BOOL databaseIsCorrupt; 
@property (nonatomic,readonly) BOOL enforceDataProtection; 
@property (assign) BOOL setupIsComplete;                                                                   //@synthesize setupIsComplete=_setupIsComplete - In the implementation block
@property (nonatomic,readonly) BOOL isNestedDatabaseCall; 
@property (nonatomic,readonly) BOOL writersAreWaiting; 
@property (nonatomic,readonly) EFSQLSchema * schema;                                                       //@synthesize schema=_schema - In the implementation block
@property (nonatomic,readonly) EFSQLSchema * protectedSchema;                                              //@synthesize protectedSchema=_protectedSchema - In the implementation block
@property (nonatomic,readonly) EFSQLPropertyMapper * propertyMapper;                                       //@synthesize propertyMapper=_propertyMapper - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(id)init;
-(EFSQLSchema *)schema;
-(NSString *)databaseName;
-(NSString *)fullPath;
-(EFSQLPropertyMapper *)propertyMapper;
-(void)setSetupIsComplete:(BOOL)arg1 ;
-(void)reconcileJournalWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)performWriteBlock:(/*^block*/id)arg1 ;
-(BOOL)performReadBlock:(/*^block*/id)arg1 ;
-(BOOL)writersAreWaiting;
-(EFSQLSchema *)protectedSchema;
-(id)openConnectionIsWriter:(BOOL)arg1 ;
-(void)closeAllConnections;
-(void)scheduleRecurringActivity;
-(void)performDatabaseWorkInBlockWithHighPriority:(/*^block*/id)arg1 ;
-(id)initWithBasePath:(id)arg1 databaseName:(id)arg2 maxConcurrentReaders:(unsigned long long)arg3 schema:(id)arg4 protectedSchema:(id)arg5 propertyMapper:(id)arg6 protectedDatabasePersistence:(id)arg7 ;
-(id)checkOutConnectionIsWriter:(BOOL)arg1 ;
-(void)checkInConnection:(id)arg1 ;
-(NSString *)basePath;
-(id)fileProtectionForDatabaseType:(long long)arg1 ;
-(id)urlForDatabasePath:(id)arg1 type:(long long)arg2 fileProtection:(id)arg3 ;
-(id)urlForDatabasePath:(id)arg1 type:(long long)arg2 ;
-(BOOL)enforceDataProtection;
-(EDPersistenceDatabaseConnectionPool *)connectionPool;
-(BOOL)setupIsComplete;
-(BOOL)isNestedDatabaseCall;
-(BOOL)performBlock:(/*^block*/id)arg1 isWriter:(BOOL)arg2 useTransaction:(BOOL)arg3 ;
-(EDProtectedDatabasePersistence *)protectedDatabasePersistence;
-(BOOL)performDatabaseSetupUsingTransaction:(BOOL)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)databaseIsCorrupt;
@end

