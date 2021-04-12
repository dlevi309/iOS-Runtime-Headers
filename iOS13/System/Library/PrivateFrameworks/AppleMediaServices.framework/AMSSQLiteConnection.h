/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@protocol AMSSQLiteConnectionDelegate;
#import <AppleMediaServices/AppleMediaServices-Structs.h>
@class NSMutableArray, NSMapTable, AMSSQLiteConnectionOptions, NSError;

@interface AMSSQLiteConnection : NSObject {

	NSMutableArray* _afterTransactionBlocks;
	sqlite3Ref _database;
	id<AMSSQLiteConnectionDelegate> _delegate;
	BOOL _didResetForCorruption;
	NSMapTable* _preparedStatements;
	long long _transactionDepth;
	BOOL _transactionWantsRollback;
	AMSSQLiteConnectionOptions* _options;

}

@property (nonatomic,copy,readonly) NSError * currentError; 
@property (nonatomic,copy,readonly) AMSSQLiteConnectionOptions * options;                  //@synthesize options=_options - In the implementation block
@property (assign,nonatomic,__weak) id<AMSSQLiteConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long lastChangeCount; 
-(void)dealloc;
-(AMSSQLiteConnectionOptions *)options;
-(id)initWithOptions:(id)arg1 ;
-(BOOL)open;
-(BOOL)close;
-(id<AMSSQLiteConnectionDelegate>)delegate;
-(void)setDelegate:(id<AMSSQLiteConnectionDelegate>)arg1 ;
-(BOOL)truncate;
-(BOOL)_open;
-(BOOL)executeStatement:(id)arg1 error:(id*)arg2 ;
-(BOOL)_close;
-(NSError *)currentError;
-(void)performTransaction:(/*^block*/id)arg1 ;
-(void)executeQuery:(id)arg1 withResults:(/*^block*/id)arg2 ;
-(BOOL)executeStatement:(id)arg1 error:(id*)arg2 bindings:(/*^block*/id)arg3 ;
-(id)prepareStatement:(id)arg1 error:(id*)arg2 ;
-(BOOL)executePreparedStatement:(id)arg1 error:(id*)arg2 bindings:(/*^block*/id)arg3 ;
-(BOOL)finalizePreparedStatement:(id)arg1 error:(id*)arg2 ;
-(id)_verifiedStatementForPreparedStatement:(id)arg1 error:(id*)arg2 ;
-(BOOL)_executeStatement:(id)arg1 error:(id*)arg2 ;
-(id)_verifiedStatementForSQL:(id)arg1 error:(id*)arg2 ;
-(void)_flushAfterTransactionBlocks;
-(id)_prepareStatement:(id)arg1 error:(id*)arg2 ;
-(BOOL)_openAndAllowRetry:(BOOL)arg1 ;
-(void)_finalizeAllStatements;
-(BOOL)_executeWithError:(id*)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)_resetAfterCorruptionError;
-(BOOL)_resetAfterIOError;
-(BOOL)_performResetAfterCorruptionError;
-(id)_statementForPreparedStatement:(id)arg1 error:(id*)arg2 ;
-(void)dispatchAfterTransaction:(/*^block*/id)arg1 ;
-(void)executePreparedQuery:(id)arg1 withResults:(/*^block*/id)arg2 ;
-(BOOL)executePreparedStatement:(id)arg1 error:(id*)arg2 ;
-(long long)lastChangeCount;
-(BOOL)executeWithError:(id*)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

