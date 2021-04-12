/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)statementDidFinishAfterStepping:(sqlite3_stmtRef)arg1 ;
+(BOOL)statementHasRowAfterStepping:(sqlite3_stmtRef)arg1 ;
+(void)_stepStatement:(sqlite3_stmtRef)arg1 hasRow:(BOOL*)arg2 didFinish:(BOOL*)arg3 isCorrupt:(BOOL*)arg4 ;
+(void)_setTakesTaskCompletionAssertions:(BOOL)arg1 ;
-(void)dealloc;
-(long long)userVersion;
-(BOOL)executeSQL:(id)arg1 ;
-(BOOL)setUserVersion:(long long)arg1 ;
-(void)dispatchAfter:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithDatabaseURL:(id)arg1 ;
-(void)performTransactionWithBlock:(/*^block*/id)arg1 ;
-(void)_expireBackgroundTask;
-(BOOL)statementDidFinishAfterStepping:(sqlite3_stmtRef)arg1 ;
-(void)prepareStatementForSQL:(id)arg1 cache:(BOOL)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)statementHasRowAfterStepping:(sqlite3_stmtRef)arg1 ;
-(long long)countChanges;
-(void)setSetupBlock:(id)arg1 ;
-(id)initWithDatabaseURL:(id)arg1 readOnly:(BOOL)arg2 ;
-(void)dispatchBlockAsync:(/*^block*/id)arg1 ;
-(id)initWithDatabaseURL:(id)arg1 readOnly:(BOOL)arg2 protectionType:(id)arg3 ;
-(void)_beginTaskCompletionAssertion;
-(int)_openDatabase;
-(void)_endTaskCompletionAssertion;
-(void)expireBackgroundTask;
-(int)_closeDatabase;
-(void)_accessDatabaseUsingBlock:(/*^block*/id)arg1 ;
-(void)_resetCorruptDatabase;
-(sqlite3_stmtRef)_statementForSQL:(id)arg1 cache:(BOOL)arg2 ;
-(BOOL)setUserVersion:(long long)arg1 forDatabase:(id)arg2 ;
-(long long)userVersionForDatabase:(id)arg1 ;
-(int)_openFlags;
-(int)_resetAndReopenDatabaseWithPath:(id)arg1 ;
-(void)_resetDatabaseWithPath:(id)arg1 ;
-(void)accessDatabaseUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)columnName:(id)arg1 existsInTable:(id)arg2 ;
-(void)dispatchBlockSync:(/*^block*/id)arg1 ;
-(id)newDispatchSourceWithType:(dispatch_source_type_sRef)arg1 ;
-(void)beginTaskCompletionAssertion;
-(void)endTaskCompletionAssertion;
-(void)setTakesTaskCompletionAssertions:(BOOL)arg1 ;
-(BOOL)takesTaskCompletionAssertions;
-(id)setupBlock;
@end

