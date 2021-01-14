/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/


#import <CompanionSync/CompanionSync-Structs.h>
@class NSString, NSMutableDictionary;

@interface _SYSharedServiceDB : NSObject {

	os_unfair_lock_s _lock;
	sqlite3Ref _db;
	NSString* _name;
	NSMutableDictionary* _schemaSetupCallbacks;

}

@property (getter=_dbPath,nonatomic,readonly) NSString * dbPath; 
+(void)initialize;
+(void)pairingStorePathWasReset;
+(void)_releaseSharedInstanceForServiceName:(id)arg1 ;
+(id)sharedInstanceForServiceName:(id)arg1 ;
-(void)_LOCKED_setVersion:(long long)arg1 forClient:(id)arg2 ;
-(BOOL)_LOCKED_hasSchemaVersionForClient:(id)arg1 ;
-(void)_LOCKED_runSchemaUpdate:(/*^block*/id)arg1 forClientNamed:(id)arg2 ;
-(void)_LOCKED_ensureSchemaVersionsTableInDB:(sqlite3Ref)arg1 ;
-(id)initWithServiceName:(id)arg1 ;
-(BOOL)_runTransactionBlock:(/*^block*/id)arg1 exclusive:(BOOL)arg2 ;
-(BOOL)_addSkipBackupAttributeToItemAtPath:(id)arg1 error:(id*)arg2 ;
-(void)setSchemaVersion:(long long)arg1 forClient:(id)arg2 ;
-(long long)schemaVersionForClient:(id)arg1 ;
-(BOOL)inTransaction:(/*^block*/id)arg1 ;
-(long long)_LOCKED_getClientVersion:(id)arg1 ;
-(id)_dbPath;
-(void)_ensureSchemaVersionsTable;
-(BOOL)inExclusiveTransaction:(/*^block*/id)arg1 ;
-(BOOL)_ensureParentExists:(id)arg1 error:(id*)arg2 ;
-(void)withDBRef:(/*^block*/id)arg1 ;
-(void)updateSchemaForClient:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)_LOCKED_createOrOpenDBForServiceName:(id)arg1 error:(id*)arg2 ;
-(BOOL)_LOCKED_ensureDBExists;
-(void)dealloc;
@end

