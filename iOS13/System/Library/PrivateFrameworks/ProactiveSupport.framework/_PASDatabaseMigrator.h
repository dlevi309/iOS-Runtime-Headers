/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


@class _PASLock;

@interface _PASDatabaseMigrator : NSObject {

	_PASLock* _contexts;

}
-(id)init;
-(id)description;
-(id)initWithMigrationObjects:(id)arg1 ;
-(unsigned char)migrateDatabases;
-(unsigned char)migrateDatabasesToVersion:(unsigned)arg1 ;
-(unsigned char)unmigrateDatabases;
-(BOOL)migrationNeeded;
-(id)_contextForMigrationObject:(id)arg1 ;
-(unsigned char)_migrateDatabasesWithContexts:(id)arg1 toVersion:(unsigned)arg2 ;
-(unsigned char)_unmigrateDatabasesWithContexts:(id)arg1 ;
-(BOOL)_migrationNeededWithContexts:(id)arg1 toVersion:(unsigned)arg2 ;
-(BOOL)_canContinueMigratingWithContexts:(id)arg1 ;
-(unsigned char)_skipFromZeroSchemaWithContexts:(id)arg1 ;
-(BOOL)_anyContextHasFutureVersionWithContexts:(id)arg1 ;
-(BOOL)_anyContextHasMismatchedVersionWithContexts:(id)arg1 ;
-(BOOL)_allContextsAtVersionZeroWithContexts:(id)arg1 ;
-(unsigned char)_migrateOneStepToVersion:(unsigned)arg1 contexts:(id)arg2 ;
-(unsigned char)_runQueries:(id)arg1 nextVersion:(unsigned)arg2 context:(id)arg3 ;
-(unsigned char)_runQuery:(id)arg1 context:(id)arg2 database:(id)arg3 ;
-(void)_prepareContexts:(id)arg1 ;
-(unsigned char)_clearDatabase:(id)arg1 ;
@end

