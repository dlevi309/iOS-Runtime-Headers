/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/


@protocol OS_dispatch_queue;
@class MLMediaLibraryService, NSObject, NSMutableArray, NSString, ML3DatabaseConnection, NSUUID;

@interface ML3StatementAccumulator : NSObject {

	MLMediaLibraryService* _xpcService;
	NSObject*<OS_dispatch_queue> _serialQueue;
	unsigned long long _statementThreshold;
	NSMutableArray* _statementQueue;
	NSString* _databasePath;
	ML3DatabaseConnection* _connection;
	NSUUID* _existingTransactionIdentifier;
	unsigned long long _priorityLevel;

}

@property (assign,nonatomic) unsigned long long statementThreshold;               //@synthesize statementThreshold=_statementThreshold - In the implementation block
@property (nonatomic,readonly) NSMutableArray * statementQueue;                   //@synthesize statementQueue=_statementQueue - In the implementation block
@property (nonatomic,readonly) NSString * databasePath;                           //@synthesize databasePath=_databasePath - In the implementation block
@property (nonatomic,readonly) ML3DatabaseConnection * connection;                //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSUUID * existingTransactionIdentifier;              //@synthesize existingTransactionIdentifier=_existingTransactionIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long priorityLevel;                    //@synthesize priorityLevel=_priorityLevel - In the implementation block
-(NSString *)databasePath;
-(id)initWithConnection:(id)arg1 ;
-(id)init;
-(ML3DatabaseConnection *)connection;
-(void)setPriorityLevel:(unsigned long long)arg1 ;
-(unsigned long long)priorityLevel;
-(void)dealloc;
-(void)setExistingTransactionIdentifier:(NSUUID *)arg1 ;
-(void)setStatementThreshold:(unsigned long long)arg1 ;
-(BOOL)enqueueStatement:(id)arg1 ;
-(BOOL)flushAndWait:(BOOL)arg1 ;
-(BOOL)_onQueueFlushAndWait:(BOOL)arg1 ;
-(unsigned long long)statementThreshold;
-(NSMutableArray *)statementQueue;
-(NSUUID *)existingTransactionIdentifier;
@end

