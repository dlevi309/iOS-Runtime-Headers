/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/


@protocol OS_dispatch_queue, ML3DatabaseConnectionPoolDelegate;
#import <MusicLibrary/MusicLibrary-Structs.h>
@class _ML3DatabaseConnectionSubPool, NSMutableDictionary, NSObject, NSUUID, NSString;

@interface ML3DatabaseConnectionPool : NSObject {

	_ML3DatabaseConnectionSubPool* _readersSubPool;
	_ML3DatabaseConnectionSubPool* _writersSubPool;
	NSMutableDictionary* _identifiersConnectionsMap;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSUUID* _poolStorageKey;
	int _connectionsProfilingLevel;
	BOOL _useDistantWriterConnections;
	opaque_pthread_cond_t _poolLockCondition;
	opaque_pthread_mutex_t _poolLockMutex;
	BOOL _closed;
	BOOL _locked;
	NSString* _databasePath;
	id<ML3DatabaseConnectionPoolDelegate> _delegate;
	unsigned long long _maxReaders;
	unsigned long long _maxWriters;
	unsigned long long _connectionsJournalingMode;

}

@property (assign,getter=isClosed,nonatomic) BOOL closed;                                        //@synthesize closed=_closed - In the implementation block
@property (nonatomic,readonly) NSString * databasePath;                                          //@synthesize databasePath=_databasePath - In the implementation block
@property (assign,nonatomic,__weak) id<ML3DatabaseConnectionPoolDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long maxReaders;                                    //@synthesize maxReaders=_maxReaders - In the implementation block
@property (nonatomic,readonly) unsigned long long maxWriters;                                    //@synthesize maxWriters=_maxWriters - In the implementation block
@property (assign,nonatomic) unsigned long long connectionsJournalingMode;                       //@synthesize connectionsJournalingMode=_connectionsJournalingMode - In the implementation block
@property (assign,nonatomic) int connectionsProfilingLevel; 
@property (assign,nonatomic) BOOL useDistantWriterConnections; 
@property (getter=isLocked,nonatomic,readonly) BOOL locked;                                      //@synthesize locked=_locked - In the implementation block
@property (readonly) BOOL isCurrentThreadConnectionInTransaction; 
-(id)init;
-(void)dealloc;
-(id<ML3DatabaseConnectionPoolDelegate>)delegate;
-(void)setDelegate:(id<ML3DatabaseConnectionPoolDelegate>)arg1 ;
-(void)lock;
-(void)unlock;
-(NSString *)databasePath;
-(BOOL)isLocked;
-(void)setClosed:(BOOL)arg1 ;
-(BOOL)isClosed;
-(void)closeAllConnections;
-(void)checkInConnection:(id)arg1 ;
-(id)initWithDatabasePath:(id)arg1 maxReaders:(unsigned long long)arg2 maxWriters:(unsigned long long)arg3 ;
-(void)setUseDistantWriterConnections:(BOOL)arg1 ;
-(id)readerConnection;
-(id)writerConnection;
-(void)_closeAllConnectionsAndWaitForBusyConnections:(BOOL)arg1 ;
-(BOOL)isCurrentThreadConnectionInTransaction;
-(void)lockAndCloseAllConnectionsForTermination;
-(void)setConnectionsProfilingLevel:(int)arg1 ;
-(id)_connectionForWriting:(BOOL)arg1 useThreadConnection:(BOOL)arg2 storeThreadLocalConnection:(BOOL)arg3 ;
-(void)setConnectionsJournalingMode:(unsigned long long)arg1 ;
-(id)_localConnectionForThread:(id)arg1 ;
-(void)_setLocalConnection:(id)arg1 forThread:(id)arg2 ;
-(void)_setConnection:(id)arg1 forIdentifier:(id)arg2 ;
-(id)_connectionForIdentifier:(id)arg1 ;
-(id)initWithDatabasePath:(id)arg1 maxReaders:(unsigned long long)arg2 ;
-(int)connectionsProfilingLevel;
-(BOOL)useDistantWriterConnections;
-(id)_generateDiagnostic;
-(unsigned long long)maxReaders;
-(unsigned long long)maxWriters;
-(unsigned long long)connectionsJournalingMode;
@end

