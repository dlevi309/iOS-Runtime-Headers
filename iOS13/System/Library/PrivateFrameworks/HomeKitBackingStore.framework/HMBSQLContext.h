/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSString, NSURL, NSOperationQueue, HMFUnfairLock;

@interface HMBSQLContext : HMFObject <HMFLogging> {

	sqlite3_stmtRef _begin;
	sqlite3_stmtRef _commit;
	sqlite3_stmtRef _rollback;
	BOOL _readOnly;
	BOOL _finalized;
	NSString* _logIdentifier;
	NSURL* _url;
	sqlite3Ref _context;
	NSOperationQueue* _queue;
	HMFUnfairLock* _lock;
	unsigned long long _mutation;

}

@property (assign,nonatomic) sqlite3Ref context;                       //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) HMFUnfairLock * lock;                     //@synthesize lock=_lock - In the implementation block
@property (assign,nonatomic) BOOL finalized;                           //@synthesize finalized=_finalized - In the implementation block
@property (nonatomic,retain) NSString * logIdentifier;                 //@synthesize logIdentifier=_logIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long mutation;              //@synthesize mutation=_mutation - In the implementation block
@property (nonatomic,readonly) NSURL * url;                            //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) BOOL readOnly;                          //@synthesize readOnly=_readOnly - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * queue;               //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(id)initialize;
-(void)finalize;
-(NSOperationQueue *)queue;
-(void)close;
-(HMFUnfairLock *)lock;
-(NSURL *)url;
-(sqlite3Ref)context;
-(id)begin;
-(void)rollback;
-(void)setContext:(sqlite3Ref)arg1 ;
-(id)commit;
-(BOOL)readOnly;
-(void)setLock:(HMFUnfairLock *)arg1 ;
-(id)prepare;
-(void)_finalize;
-(NSString *)logIdentifier;
-(BOOL)finalized;
-(void)setLogIdentifier:(NSString *)arg1 ;
-(void)setFinalized:(BOOL)arg1 ;
-(unsigned long long)mutation;
-(BOOL)fetchSQLite3:(sqlite3_stmtRef)arg1 limit:(unsigned long long)arg2 error:(id*)arg3 block:(/*^block*/id)arg4 ;
-(id)sqlBlockWithActivity:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)sqlTransactionWithActivity:(id)arg1 block:(/*^block*/id)arg2 ;
-(unsigned long long)execSQLite3:(sqlite3_stmtRef)arg1 error:(id*)arg2 ;
-(unsigned long long)insertSQLite3:(sqlite3_stmtRef)arg1 error:(id*)arg2 ;
-(BOOL)runSQLite3:(const char*)arg1 error:(id*)arg2 ;
-(id)runSQLite3:(const char*)arg1 ;
-(BOOL)fetchSQLite3One:(sqlite3_stmtRef)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)fetchSQLite3:(sqlite3_stmtRef)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(void)setMutation:(unsigned long long)arg1 ;
-(id)initWithURL:(id)arg1 readOnly:(BOOL)arg2 ;
-(long long)migrateFromSchemaVersion:(long long)arg1 error:(id*)arg2 ;
-(BOOL)updateSchemaVersionTo:(long long)arg1 error:(id*)arg2 ;
-(id)_prepareFrom:(id)arg1 ;
-(id)sqlBlock:(/*^block*/id)arg1 ;
-(id)sqlTransaction:(/*^block*/id)arg1 ;
-(id)execSQLite3:(sqlite3_stmtRef)arg1 ;
@end

