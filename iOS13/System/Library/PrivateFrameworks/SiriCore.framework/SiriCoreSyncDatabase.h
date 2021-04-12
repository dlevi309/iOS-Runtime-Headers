/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
*/


@class NSString, SiriCoreSQLiteDatabase;

@interface SiriCoreSyncDatabase : NSObject {

	NSString* _path;
	SiriCoreSQLiteDatabase* _db;
	BOOL _inTransaction;
	BOOL _debugMode;

}

@property (assign,nonatomic) BOOL inTransaction;              //@synthesize inTransaction=_inTransaction - In the implementation block
@property (assign,nonatomic) BOOL debugMode;                  //@synthesize debugMode=_debugMode - In the implementation block
+(id)currentSyncDatabase;
+(void)removeCurrentSyncDatabase;
-(id)initWithPath:(id)arg1 ;
-(BOOL)openWithError:(id*)arg1 ;
-(BOOL)prepare;
-(BOOL)debugMode;
-(void)setDebugMode:(BOOL)arg1 ;
-(BOOL)inTransaction;
-(BOOL)_executeStatement:(id)arg1 error:(id*)arg2 ;
-(BOOL)closeWithError:(id*)arg1 ;
-(BOOL)beginTransactionWithError:(id*)arg1 ;
-(BOOL)rollbackTransactionWithError:(id*)arg1 ;
-(BOOL)commitTransactionWithError:(id*)arg1 ;
-(void)setInTransaction:(BOOL)arg1 ;
-(BOOL)_insertSyncRec:(id)arg1 intoTable:(id)arg2 error:(id*)arg3 ;
-(int)_countKey:(id)arg1 fromTable:(id)arg2 updatedAfter:(id)arg3 error:(id*)arg4 ;
-(BOOL)_enumerateKey:(id)arg1 updatedAfter:(id)arg2 fromTable:(id)arg3 usingBlock:(/*^block*/id)arg4 error:(id*)arg5 ;
-(BOOL)succeedOrRollbackOnFail:(id)arg1 error:(id*)arg2 whileExecuting:(/*^block*/id)arg3 ;
-(BOOL)donate:(id)arg1 error:(id*)arg2 ;
-(BOOL)remove:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeAllItemsOfKey:(id)arg1 error:(id*)arg2 ;
-(BOOL)markAsSent:(id)arg1 error:(id*)arg2 ;
-(int)countRemovalsOfKey:(id)arg1 updatedAfter:(id)arg2 error:(id*)arg3 ;
-(int)countItemsOfKey:(id)arg1 updatedAfter:(id)arg2 error:(id*)arg3 ;
-(int)countSentItemsOfKey:(id)arg1 updatedAfter:(id)arg2 error:(id*)arg3 ;
-(BOOL)enumerateItemsOfKey:(id)arg1 updatedAfter:(id)arg2 error:(id*)arg3 usingBlock:(/*^block*/id)arg4 ;
-(BOOL)enumerateRemovalsOfKey:(id)arg1 updatedAfter:(id)arg2 error:(id*)arg3 usingBlock:(/*^block*/id)arg4 ;
-(BOOL)enumerateSentItemsOfKey:(id)arg1 updatedAfter:(id)arg2 error:(id*)arg3 usingBlock:(/*^block*/id)arg4 ;
@end

