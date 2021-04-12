/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@protocol EDPersistenceDatabaseConnectionPoolDelegate;
@class NSLock, NSMutableSet, NSMapTable, _EDPersistenceDatabaseConnectionWrapper, EFResourcePool;

@interface EDPersistenceDatabaseConnectionPool : NSObject {

	NSLock* _cacheLock;
	NSMutableSet* _cache;
	unsigned long long _cacheSize;
	unsigned long long _cacheGeneration;
	NSLock* _checkoutLock;
	NSMapTable* _checkoutMap;
	NSLock* _writerLock;
	_EDPersistenceDatabaseConnectionWrapper* _writerConnection;
	int _writersWaiting;
	unsigned long long _maxConcurrentBackgroundReaders;
	int _backgroundReadersWaiting;
	EFResourcePool* _backgroundReaderResources;
	id<EDPersistenceDatabaseConnectionPoolDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<EDPersistenceDatabaseConnectionPoolDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long cacheSize; 
@property (nonatomic,readonly) unsigned long long maxConcurrentBackgroundReaders;                          //@synthesize maxConcurrentBackgroundReaders=_maxConcurrentBackgroundReaders - In the implementation block
@property (nonatomic,readonly) unsigned long long backgroundReadersWaiting; 
@property (nonatomic,readonly) unsigned long long writersWaiting; 
-(void)checkInConnection:(id)arg1 ;
-(void)flush;
-(id)backgroundReaderConnection;
-(id)initWithDelegate:(id)arg1 maxConcurrentBackgroundReaders:(unsigned long long)arg2 ;
-(id)writerConnection;
-(id)init;
-(unsigned long long)writersWaiting;
-(unsigned long long)backgroundReadersWaiting;
-(unsigned long long)cacheSize;
-(id<EDPersistenceDatabaseConnectionPoolDelegate>)delegate;
-(unsigned long long)maxConcurrentBackgroundReaders;
-(void)_unlockForConnectionType:(unsigned long long)arg1 resource:(id)arg2 ;
-(BOOL)_lockForConnectionType:(unsigned long long)arg1 resource:(id*)arg2 ;
-(id)_connectionWithType:(unsigned long long)arg1 ;
-(void)setDelegate:(id<EDPersistenceDatabaseConnectionPoolDelegate>)arg1 ;
-(unsigned long long)maxConcurrentReaders;
-(void)setCacheSize:(unsigned long long)arg1 ;
-(id)readerConnection;
-(void)dealloc;
@end

