/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@protocol OS_dispatch_queue;
#import <StoreServices/StoreServices-Structs.h>
@class NSObject, NSString, BKSProcessAssertion;

@interface SSSQLiteDatabase : NSObject {

	sqlite3Ref _db;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _databasePath;
	BOOL _readOnly;
	BOOL _isInTransaction;
	NSString* _protectionType;
	/*^block*/id _setupBlock;
	CFDictionaryRef _statementCache;
	BOOL _takesTaskCompletionAssertions;
	BKSProcessAssertion* _taskAssertion;
	long long _taskAssertionCount;

}

@property (assign) BOOL takesTaskCompletionAssertions; 
@property (nonatomic,copy) id setupBlock;                           //@synthesize setupBlock=_setupBlock - In the implementation block
+(void)_setTakesTaskCompletionAssertions:(BOOL)arg1 ;
+(BOOL)statementDidFinishAfterStepping:(sqlite3_stmtRef)arg1 ;
+(void)_stepStatement:(sqlite3_stmtRef)arg1 hasRow:(BOOL*)arg2 didFinish:(BOOL*)arg3 isCorrupt:(BOOL*)arg4 ;
+(BOOL)statementHasRowAfterStepping:(sqlite3_stmtRef)arg1 ;
-(BOOL)statementDidFinishAfterStepping:(sqlite3_stmtRef)arg1 ;
-(int)_openDatabase;
-(void)setSetupBlock:(id)arg1 ;
-(id)setupBlock;
-(id)newDispatchSourceWithType:(dispatch_source_type_sRef)arg1 ;
-(id)initWithDatabaseURL:(id)arg1 readOnly:(BOOL)arg2 protectionType:(id)arg3 ;
-(BOOL)executeSQL:(id)arg1 ;
-(void)_accessDatabaseUsingBlock:(/*^block*/id)arg1 ;
-(sqlite3_stmtRef)_statementForSQL:(id)arg1 cache:(BOOL)arg2 ;
-(id)initWithDatabaseURL:(id)arg1 ;
-(void)endTaskCompletionAssertion;
-(void)expireBackgroundTask;
-(BOOL)takesTaskCompletionAssertions;
-(int)_closeDatabase;
-(int)_resetAndReopenDatabaseWithPath:(id)arg1 ;
-(void)performTransactionWithBlock:(/*^block*/id)arg1 ;
-(void)beginTaskCompletionAssertion;
-(void)dispatchAfter:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)statementHasRowAfterStepping:(sqlite3_stmtRef)arg1 ;
-(long long)countChanges;
-(long long)userVersion;
-(void)setTakesTaskCompletionAssertions:(BOOL)arg1 ;
-(long long)userVersionForDatabase:(id)arg1 ;
-(void)_beginTaskCompletionAssertion;
-(BOOL)setUserVersion:(long long)arg1 forDatabase:(id)arg2 ;
-(BOOL)setUserVersion:(long long)arg1 ;
-(void)_endTaskCompletionAssertion;
-(void)_resetDatabaseWithPath:(id)arg1 ;
-(id)initWithDatabaseURL:(id)arg1 readOnly:(BOOL)arg2 ;
-(BOOL)columnName:(id)arg1 existsInTable:(id)arg2 ;
-(void)dispatchBlockAsync:(/*^block*/id)arg1 ;
-(void)_resetCorruptDatabase;
-(void)_expireBackgroundTask;
-(void)dispatchBlockSync:(/*^block*/id)arg1 ;
-(int)_openFlags;
-(void)accessDatabaseUsingBlock:(/*^block*/id)arg1 ;
-(void)prepareStatementForSQL:(id)arg1 cache:(BOOL)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)dealloc;
@end

