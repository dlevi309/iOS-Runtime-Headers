/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@protocol ICSQLiteConnectionDelegate;
#import <iTunesCloud/iTunesCloud-Structs.h>
@class NSMutableArray, NSMapTable, ICSQLiteConnectionOptions, NSError;

@interface ICSQLiteConnection : NSObject {

	NSMutableArray* _afterTransactionBlocks;
	sqlite3Ref _database;
	id<ICSQLiteConnectionDelegate> _delegate;
	BOOL _didResetForCorruption;
	NSMapTable* _preparedStatements;
	long long _transactionDepth;
	BOOL _transactionWantsRollback;
	ICSQLiteConnectionOptions* _options;

}

@property (nonatomic,copy,readonly) NSError * currentError; 
@property (nonatomic,copy,readonly) ICSQLiteConnectionOptions * options;                  //@synthesize options=_options - In the implementation block
@property (assign,nonatomic,__weak) id<ICSQLiteConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long lastChangeCount; 
-(ICSQLiteConnectionOptions *)options;
-(id)initWithOptions:(id)arg1 ;
-(BOOL)open;
-(BOOL)close;
-(id<ICSQLiteConnectionDelegate>)delegate;
-(void)setDelegate:(id<ICSQLiteConnectionDelegate>)arg1 ;
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
-(id)_verifiedStatementForPreparedStatement:(id)arg1 error:(id*)arg2 ;
-(BOOL)_executeStatement:(id)arg1 error:(id*)arg2 ;
-(id)_verifiedStatementForSQL:(id)arg1 error:(id*)arg2 ;
-(void)_flushAfterTransactionBlocks;
-(id)_prepareStatement:(id)arg1 error:(id*)arg2 ;
-(void)_finalizeAllStatements;
-(BOOL)_performResetAfterCorruptionError;
-(id)_statementForPreparedStatement:(id)arg1 error:(id*)arg2 ;
-(void)dispatchAfterTransaction:(/*^block*/id)arg1 ;
-(void)executePreparedQuery:(id)arg1 withResults:(/*^block*/id)arg2 ;
-(BOOL)executePreparedStatement:(id)arg1 error:(id*)arg2 ;
-(long long)lastChangeCount;
-(BOOL)resetAfterCorruptionError;
-(BOOL)resetAfterIOError;
@end

