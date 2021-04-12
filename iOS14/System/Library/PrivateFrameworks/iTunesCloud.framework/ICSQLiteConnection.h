/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@protocol ICSQLiteConnectionDelegate;
#import <iTunesCloud/iTunesCloud-Structs.h>
@class NSMutableArray, NSMapTable, ICSQLiteConnectionOptions, NSError, NSNumber;

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
@property (nonatomic,copy,readonly) NSNumber * userVersion; 
-(BOOL)_open;
-(void)performTransaction:(/*^block*/id)arg1 ;
-(BOOL)_close;
-(id)initWithOptions:(id)arg1 ;
-(id)prepareStatement:(id)arg1 error:(id*)arg2 ;
-(BOOL)open;
-(BOOL)executeStatement:(id)arg1 error:(id*)arg2 ;
-(id<ICSQLiteConnectionDelegate>)delegate;
-(BOOL)close;
-(void)dispatchAfterTransaction:(/*^block*/id)arg1 ;
-(ICSQLiteConnectionOptions *)options;
-(NSError *)currentError;
-(long long)lastChangeCount;
-(BOOL)_performResetAfterCorruptionError;
-(void)setDelegate:(id<ICSQLiteConnectionDelegate>)arg1 ;
-(id)_verifiedStatementForPreparedStatement:(id)arg1 error:(id*)arg2 ;
-(id)_prepareStatement:(id)arg1 error:(id*)arg2 ;
-(BOOL)executePreparedStatement:(id)arg1 error:(id*)arg2 bindings:(/*^block*/id)arg3 ;
-(void)executeQuery:(id)arg1 withResults:(/*^block*/id)arg2 ;
-(NSNumber *)userVersion;
-(BOOL)executePreparedStatement:(id)arg1 error:(id*)arg2 ;
-(void)_flushAfterTransactionBlocks;
-(void)_finalizeAllStatements;
-(BOOL)truncate;
-(BOOL)setUserVersion:(NSNumber *)arg1 ;
-(BOOL)_executeStatement:(id)arg1 error:(id*)arg2 ;
-(id)_verifiedStatementForSQL:(id)arg1 error:(id*)arg2 ;
-(BOOL)executeStatement:(id)arg1 error:(id*)arg2 bindings:(/*^block*/id)arg3 ;
-(BOOL)resetAfterCorruptionError;
-(BOOL)resetAfterIOError;
-(void)executePreparedQuery:(id)arg1 withResults:(/*^block*/id)arg2 ;
-(id)_statementForPreparedStatement:(id)arg1 error:(id*)arg2 ;
@end

