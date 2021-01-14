/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)_open;
-(void)performTransaction:(/*^block*/id)arg1 ;
-(BOOL)_close;
-(id)initWithOptions:(id)arg1 ;
-(id)prepareStatement:(id)arg1 error:(id*)arg2 ;
-(BOOL)_resetAfterCorruptionError;
-(BOOL)_resetAfterIOError;
-(BOOL)open;
-(BOOL)executeStatement:(id)arg1 error:(id*)arg2 ;
-(id<AMSSQLiteConnectionDelegate>)delegate;
-(BOOL)close;
-(void)dispatchAfterTransaction:(/*^block*/id)arg1 ;
-(AMSSQLiteConnectionOptions *)options;
-(NSError *)currentError;
-(long long)lastChangeCount;
-(BOOL)_performResetAfterCorruptionError;
-(BOOL)_executeWithError:(id*)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<AMSSQLiteConnectionDelegate>)arg1 ;
-(id)_verifiedStatementForPreparedStatement:(id)arg1 error:(id*)arg2 ;
-(id)_prepareStatement:(id)arg1 error:(id*)arg2 ;
-(BOOL)_openAndAllowRetry:(BOOL)arg1 ;
-(BOOL)executePreparedStatement:(id)arg1 error:(id*)arg2 bindings:(/*^block*/id)arg3 ;
-(void)executeQuery:(id)arg1 withResults:(/*^block*/id)arg2 ;
-(BOOL)executePreparedStatement:(id)arg1 error:(id*)arg2 ;
-(void)_flushAfterTransactionBlocks;
-(void)_finalizeAllStatements;
-(BOOL)truncate;
-(BOOL)_executeStatement:(id)arg1 error:(id*)arg2 ;
-(BOOL)finalizePreparedStatement:(id)arg1 error:(id*)arg2 ;
-(id)_verifiedStatementForSQL:(id)arg1 error:(id*)arg2 ;
-(BOOL)executeStatement:(id)arg1 error:(id*)arg2 bindings:(/*^block*/id)arg3 ;
-(BOOL)executeWithError:(id*)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)executePreparedQuery:(id)arg1 withResults:(/*^block*/id)arg2 ;
-(id)_statementForPreparedStatement:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
@end

