/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@protocol OS_dispatch_queue;
@class PQLConnection, NSHashTable, NSObject, NSString, NSArray;

@interface CKDPQLCache : NSObject {

	PQLConnection* _pdb;
	NSHashTable* _contexts;
	NSObject*<OS_dispatch_queue> _dbQueue;
	unsigned long long _openHandles;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dbQueue;              //@synthesize dbQueue=_dbQueue - In the implementation block
@property (assign,nonatomic) unsigned long long openHandles;                    //@synthesize openHandles=_openHandles - In the implementation block
@property (nonatomic,readonly) NSHashTable * contexts;                          //@synthesize contexts=_contexts - In the implementation block
@property (nonatomic,readonly) PQLConnection * database;                        //@synthesize pdb=_pdb - In the implementation block
@property (nonatomic,readonly) BOOL isOpen; 
@property (nonatomic,readonly) NSString * path; 
@property (nonatomic,readonly) NSArray * createInitialTablesSQL; 
-(NSString *)path;
-(PQLConnection *)database;
-(BOOL)isOpen;
-(BOOL)openWithError:(id*)arg1 ;
-(NSHashTable *)contexts;
-(BOOL)closeWithError:(id*)arg1 ;
-(id)initWithClientContext:(id)arg1 ;
-(BOOL)resetWithError:(id*)arg1 ;
-(NSObject*<OS_dispatch_queue>)dbQueue;
-(NSArray *)createInitialTablesSQL;
-(id)infoToUpgradeFromVersion:(unsigned long long)arg1 ;
-(BOOL)_setupConnectionWithError:(id*)arg1 ;
-(BOOL)_truncateAndReconnectToDatabaseWithError:(id*)arg1 ;
-(BOOL)removeCorruptDatabaseWithError:(id*)arg1 ;
-(id)_newConnection:(id)arg1 ;
-(BOOL)_setupCacheWithError:(id*)arg1 ;
-(unsigned long long)openHandles;
-(void)setOpenHandles:(unsigned long long)arg1 ;
-(BOOL)_lockedOpenDatabase:(id*)arg1 ;
-(BOOL)removeDatabaseFilesWithError:(id*)arg1 ;
-(void)performOnDBQueue:(/*^block*/id)arg1 ;
-(BOOL)_closeWithError:(id*)arg1 force:(BOOL)arg2 ;
-(BOOL)forceCloseWithError:(id*)arg1 ;
-(void)setDbQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

