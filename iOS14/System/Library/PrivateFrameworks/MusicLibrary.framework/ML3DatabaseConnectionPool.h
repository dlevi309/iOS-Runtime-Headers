/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)databasePath;
-(void)checkInConnection:(id)arg1 ;
-(void)unlock;
-(BOOL)isLocked;
-(id)writerConnection;
-(id)init;
-(BOOL)isClosed;
-(id<ML3DatabaseConnectionPoolDelegate>)delegate;
-(void)setConnectionsProfilingLevel:(int)arg1 ;
-(void)setClosed:(BOOL)arg1 ;
-(void)lock;
-(id)initWithDatabasePath:(id)arg1 maxReaders:(unsigned long long)arg2 maxWriters:(unsigned long long)arg3 ;
-(id)_connectionForIdentifier:(id)arg1 ;
-(id)_connectionForWriting:(BOOL)arg1 useThreadConnection:(BOOL)arg2 storeThreadLocalConnection:(BOOL)arg3 ;
-(void)_setConnection:(id)arg1 forIdentifier:(id)arg2 ;
-(void)setConnectionsJournalingMode:(unsigned long long)arg1 ;
-(unsigned long long)maxReaders;
-(void)setDelegate:(id<ML3DatabaseConnectionPoolDelegate>)arg1 ;
-(unsigned long long)maxWriters;
-(id)_generateDiagnostic;
-(BOOL)isCurrentThreadConnectionInTransaction;
-(id)_localConnectionForThread:(id)arg1 ;
-(BOOL)useDistantWriterConnections;
-(void)_setLocalConnection:(id)arg1 forThread:(id)arg2 ;
-(void)closeAllConnections;
-(id)readerConnection;
-(void)setUseDistantWriterConnections:(BOOL)arg1 ;
-(id)initWithDatabasePath:(id)arg1 maxReaders:(unsigned long long)arg2 ;
-(void)lockAndCloseAllConnectionsForTermination;
-(int)connectionsProfilingLevel;
-(void)_closeAllConnectionsAndWaitForBusyConnections:(BOOL)arg1 ;
-(void)dealloc;
-(unsigned long long)connectionsJournalingMode;
@end

