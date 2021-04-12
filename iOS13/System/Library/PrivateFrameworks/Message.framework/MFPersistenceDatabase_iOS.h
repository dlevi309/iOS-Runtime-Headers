/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <EmailDaemon/EDPersistenceDatabase.h>
#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/MFMailMessageLibraryMigratorDelegate.h>

@class NSString;

@interface MFPersistenceDatabase_iOS : EDPersistenceDatabase <EFLoggable, MFMailMessageLibraryMigratorDelegate> {

	BOOL _migrationHasRun;
	BOOL _createdTempTable;
	id _migrationLock;

}

@property (nonatomic,readonly) id migrationLock;                    //@synthesize migrationLock=_migrationLock - In the implementation block
@property (assign,nonatomic) BOOL migrationHasRun;                  //@synthesize migrationHasRun=_migrationHasRun - In the implementation block
@property (assign,nonatomic) BOOL createdTempTable;                 //@synthesize createdTempTable=_createdTempTable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(id)openConnectionIsWriter:(BOOL)arg1 ;
-(void)mailMessageLibraryMigrator:(id)arg1 isInitializingDatabaseWithConnection:(id)arg2 ;
-(void)mailMessageLibraryMigratorScheduleSpotlightReindex:(id)arg1 ;
-(BOOL)mailMessageLibraryMigrator:(id)arg1 attachProtectedDatabaseWithName:(id)arg2 connection:(id)arg3 error:(id*)arg4 ;
-(void)mailMessageLibraryMigrator:(id)arg1 detachProtectedDatabaseWithConnection:(id)arg2 ;
-(id)initWithBasePath:(id)arg1 databaseName:(id)arg2 maxConcurrentReaders:(unsigned long long)arg3 schema:(id)arg4 protectedSchema:(id)arg5 propertyMapper:(id)arg6 protectedDatabasePersistence:(id)arg7 ;
-(id)checkOutConnectionIsWriter:(BOOL)arg1 ;
-(void)checkInConnection:(id)arg1 ;
-(id)migrationLock;
-(BOOL)migrationHasRun;
-(void)setMigrationHasRun:(BOOL)arg1 ;
-(BOOL)createdTempTable;
-(void)setCreatedTempTable:(BOOL)arg1 ;
-(BOOL)enforceDataProtection;
@end

