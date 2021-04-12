/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
*/


@protocol NWStatisticsManagerDelegate, OS_dispatch_source, OS_dispatch_queue;
#import <NetworkStatistics/NetworkStatistics-Structs.h>
@class NSObject, NSMutableDictionary, NSSet;

@interface NWStatisticsManager : NSObject {

	BOOL _systemInformationSubscribed;
	unsigned _filter;
	unsigned _continuationCount;
	unsigned long long _providerFilters[9];
	char* _iftracebuf;
	unsigned _id;
	unsigned long long _numUpdatesDispatched;
	unsigned long long _numUpdatesSkipped;
	unsigned long long _numUpdatesLazyDispatched;
	unsigned long long _numUpdatesLazySkipped;
	unsigned long long _numSourceAddsReceived;
	unsigned long long _numSourceAddsSkipped;
	unsigned long long _numSourcesInserted;
	unsigned long long _numSourcesRemoved;
	unsigned long long _numSourcesQueried;
	BOOL _reading;
	BOOL _invalidated;
	unsigned _mgrflags;
	int _interfaceTraceFd;
	int _interfaceSourceFd;
	int _sockfd;
	id<NWStatisticsManagerDelegate> _delegate;
	NSObject*<OS_dispatch_source> _readSource;
	NSMutableDictionary* __internalSources;
	NSMutableDictionary* _currentQueries;
	NSMutableDictionary* _queuedQueryAlls;
	unsigned long long _currentQueryAllReference;
	unsigned long long _querySequenceNumber;
	char* _readBuffer;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _clientQueue;
	id _strongDelegate;

}

@property (retain) NSObject*<OS_dispatch_source> readSource;                               //@synthesize readSource=_readSource - In the implementation block
@property (assign) int sockfd;                                                             //@synthesize sockfd=_sockfd - In the implementation block
@property (getter=isReading) BOOL reading;                                                 //@synthesize reading=_reading - In the implementation block
@property (retain) NSMutableDictionary * _internalSources;                                 //@synthesize _internalSources=__internalSources - In the implementation block
@property (retain) NSMutableDictionary * currentQueries;                                   //@synthesize currentQueries=_currentQueries - In the implementation block
@property (retain) NSMutableDictionary * queuedQueryAlls;                                  //@synthesize queuedQueryAlls=_queuedQueryAlls - In the implementation block
@property (assign) unsigned long long currentQueryAllReference;                            //@synthesize currentQueryAllReference=_currentQueryAllReference - In the implementation block
@property (assign) unsigned long long querySequenceNumber;                                 //@synthesize querySequenceNumber=_querySequenceNumber - In the implementation block
@property (assign) char* readBuffer;                                                       //@synthesize readBuffer=_readBuffer - In the implementation block
@property (getter=isInvalidated) BOOL invalidated;                                         //@synthesize invalidated=_invalidated - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> internalQueue;                           //@synthesize internalQueue=_internalQueue - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> clientQueue;                             //@synthesize clientQueue=_clientQueue - In the implementation block
@property (retain) id strongDelegate;                                                      //@synthesize strongDelegate=_strongDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<NWStatisticsManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned filter; 
@property (assign,nonatomic) unsigned mgrflags;                                            //@synthesize mgrflags=_mgrflags - In the implementation block
@property (readonly) NSSet * sources; 
@property (assign,nonatomic) int interfaceTraceFd;                                         //@synthesize interfaceTraceFd=_interfaceTraceFd - In the implementation block
@property (assign,nonatomic) int interfaceSourceFd;                                        //@synthesize interfaceSourceFd=_interfaceSourceFd - In the implementation block
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id<NWStatisticsManagerDelegate>)delegate;
-(void)setDelegate:(id<NWStatisticsManagerDelegate>)arg1 ;
-(void)removeSource:(id)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(void)setQueuePriority:(long long)arg1 ;
-(BOOL)isInvalidated;
-(NSSet *)sources;
-(void)setFilter:(unsigned)arg1 ;
-(unsigned)filter;
-(void)performAllCompletions:(id)arg1 ;
-(void)setInvalidated:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)trace:(char*)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(NSObject*<OS_dispatch_source>)readSource;
-(void)setReadSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setStrongDelegate:(id)arg1 ;
-(id)strongDelegate;
-(void)setReading:(BOOL)arg1 ;
-(int)sockfd;
-(char*)readBuffer;
-(void)setSockfd:(int)arg1 ;
-(unsigned long long)currentQueryAllReference;
-(void)setCurrentQueryAllReference:(unsigned long long)arg1 ;
-(unsigned long long)querySequenceNumber;
-(void)setQuerySequenceNumber:(unsigned long long)arg1 ;
-(void)setReadBuffer:(char*)arg1 ;
-(NSMutableDictionary *)_internalSources;
-(void)queryAllCounts:(/*^block*/id)arg1 ;
-(void)queryAllDescriptions:(/*^block*/id)arg1 ;
-(BOOL)queryAll:(/*^block*/id)arg1 ;
-(BOOL)addAllTCP:(unsigned long long)arg1 events:(unsigned long long)arg2 pid:(int)arg3 uuid:(unsigned char*)arg4 ;
-(BOOL)addAllUDP:(unsigned long long)arg1 events:(unsigned long long)arg2 pid:(int)arg3 uuid:(unsigned char*)arg4 ;
-(BOOL)addAllRoute:(unsigned long long)arg1 ;
-(void)setMgrflags:(unsigned)arg1 ;
-(void)setInterfaceTraceFd:(int)arg1 ;
-(void)setInterfaceSourceFd:(int)arg1 ;
-(unsigned)mgrflags;
-(void)traceMemoryBuf:(char*)arg1 length:(long long)arg2 tag:(char*)arg3 ;
-(BOOL)handleCompletion:(unsigned long long)arg1 message:(nstat_msg_hdr*)arg2 length:(unsigned)arg3 ;
-(void)dispatchDidReceiveDescription:(id)arg1 ;
-(void)dispatchDidReceiveCounts:(id)arg1 fromUpdate:(BOOL)arg2 ;
-(BOOL)sendMessage:(nstat_msg_hdr*)arg1 length:(long long)arg2 ;
-(void)sendRequestMessage:(int)arg1 sourceRef:(unsigned long long)arg2 ;
-(void)dispatchDidAddSource:(id)arg1 ;
-(void)sendRemoveSourceInternal:(unsigned long long)arg1 ;
-(void)reportInternalCounts;
-(void)handleSystemInformationCounts:(nstat_sysinfo_counts*)arg1 ;
-(void)removeSourceInternal:(unsigned long long)arg1 isFromClient:(BOOL)arg2 ;
-(void)handleMessage:(nstat_msg_hdr*)arg1 length:(long long)arg2 ;
-(void)dispatchDidReceiveType:(unsigned)arg1 source:(id)arg2 ;
-(BOOL)handleCompletionMessage:(nstat_msg_hdr*)arg1 length:(unsigned)arg2 ;
-(unsigned)commandFromReference:(unsigned long long)arg1 ;
-(void)startQueuedQuery;
-(unsigned long long)_nextReferenceForTarget:(unsigned long long)arg1 command:(unsigned)arg2 ;
-(BOOL)addAllForProvider:(int)arg1 filter:(unsigned long long)arg2 events:(unsigned long long)arg3 pid:(int)arg4 uuid:(unsigned char*)arg5 ;
-(BOOL)performQuery:(unsigned)arg1 sourceRef:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)subscribeToSystemInformation;
-(NSMutableDictionary *)currentQueries;
-(void)setCurrentQueries:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)queuedQueryAlls;
-(void)setQueuedQueryAlls:(NSMutableDictionary *)arg1 ;
-(void)set_internalSources:(NSMutableDictionary *)arg1 ;
-(void)handleReadEvent;
-(BOOL)addSource:(id)arg1 request:(nstat_msg_add_src*)arg2 length:(unsigned long long)arg3 ;
-(BOOL)addAllTCP:(unsigned long long)arg1 ;
-(BOOL)addAllUDP:(unsigned long long)arg1 ;
-(BOOL)addAllRoute;
-(void)querySource:(id)arg1 completion:(/*^block*/id)arg2 ;
-(int)interfaceTraceFd;
-(int)interfaceSourceFd;
-(BOOL)isReading;
@end

