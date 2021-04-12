/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)writersAreWaiting;
-(id)openConnectionIsWriter:(BOOL)arg1 ;
-(BOOL)performWithOptions:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(EFSQLPropertyMapper *)propertyMapper;
-(void)checkInConnection:(id)arg1 ;
-(void)reconcileJournalWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)databaseIsCorrupt;
-(BOOL)setupIsComplete;
-(EDProtectedDatabasePersistence *)protectedDatabasePersistence;
-(NSString *)fullPath;
-(id)fileProtectionForDatabaseType:(long long)arg1 ;
-(EFSQLSchema *)protectedSchema;
-(NSString *)basePath;
-(EFSQLSchema *)schema;
-(BOOL)enforceDataProtection;
-(id)init;
-(id)urlForDatabasePath:(id)arg1 type:(long long)arg2 fileProtection:(id)arg3 ;
-(void)scheduleRecurringActivity;
-(id)initWithBasePath:(id)arg1 databaseName:(id)arg2 maxConcurrentReaders:(unsigned long long)arg3 schema:(id)arg4 protectedSchema:(id)arg5 propertyMapper:(id)arg6 protectedDatabasePersistence:(id)arg7 ;
-(id)urlForDatabasePath:(id)arg1 type:(long long)arg2 ;
-(void)setSetupIsComplete:(BOOL)arg1 ;
-(BOOL)isNestedDatabaseCall;
-(void)closeAllConnections;
-(BOOL)performReadBlock:(/*^block*/id)arg1 ;
-(BOOL)performWriteBlock:(/*^block*/id)arg1 ;
-(void)performDatabaseWorkInBlockWithHighPriority:(/*^block*/id)arg1 ;
-(id)checkOutConnectionIsWriter:(BOOL)arg1 ;
-(BOOL)performDatabaseSetupUsingTransaction:(BOOL)arg1 block:(/*^block*/id)arg2 ;
-(NSString *)databaseName;
@end

