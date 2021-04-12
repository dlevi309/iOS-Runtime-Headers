/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


@class _PASLock;

@interface _PASDatabaseMigrator : NSObject {

	_PASLock* _contexts;

}
-(BOOL)_anyContextHasMismatchedVersionWithContexts:(id)arg1 ;
-(unsigned char)_runQueries:(id)arg1 nextVersion:(unsigned)arg2 context:(id)arg3 ;
-(unsigned char)migrateDatabasesToVersion:(unsigned)arg1 ;
-(unsigned char)unmigrateDatabases;
-(void)_prepareContexts:(id)arg1 ;
-(id)init;
-(unsigned char)_migrateOneStepToVersion:(unsigned)arg1 contexts:(id)arg2 ;
-(BOOL)_anyContextHasFutureVersionWithContexts:(id)arg1 ;
-(unsigned char)_skipFromZeroSchemaWithContexts:(id)arg1 ;
-(unsigned char)_runQuery:(id)arg1 context:(id)arg2 database:(id)arg3 ;
-(BOOL)_allContextsAtVersionZeroWithContexts:(id)arg1 ;
-(BOOL)migrationNeeded;
-(id)description;
-(id)initWithMigrationObjects:(id)arg1 ;
-(unsigned char)migrateDatabases;
-(BOOL)_migrationNeededWithContexts:(id)arg1 toVersion:(unsigned)arg2 ;
-(unsigned char)_clearDatabase:(id)arg1 ;
-(BOOL)_canContinueMigratingWithContexts:(id)arg1 ;
-(id)_contextForMigrationObject:(id)arg1 ;
-(unsigned char)_migrateDatabasesWithContexts:(id)arg1 toVersion:(unsigned)arg2 ;
-(unsigned char)_unmigrateDatabasesWithContexts:(id)arg1 ;
@end

