/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
*/


@protocol NWUsageManagerDelegate, OS_dispatch_source, OS_dispatch_queue;
#import <SymptomNetworkUsage/SymptomNetworkUsage-Structs.h>
@class NWUsageMonitor, NSObject, NSMutableDictionary, NSMutableSet, NSMutableArray, NWPollHandler;

@interface NWUsageManager : NSObject {

	int _interfaceTraceFd;
	char* _iftracebuf;
	unsigned _continuationCount;
	unsigned long long _currentPollReference;
	unsigned long long _nextPollReference;
	AQ _pollsOutstanding;
	BOOL _configured;
	BOOL _invalidated;
	int _sockfd;
	id<NWUsageManagerDelegate> _delegate;
	NWUsageMonitor* _usageMonitor;
	NSObject*<OS_dispatch_source> _readSource;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSMutableDictionary* _internalSources;
	NSMutableSet* _interfaceSources;
	unsigned long long _currentQueryAllReference;
	unsigned long long _querySequenceNumber;
	char* _readBuffer;
	NSMutableArray* _queuedPolls;
	NWPollHandler* _activePoll;

}

@property (retain) NSObject*<OS_dispatch_source> readSource;                          //@synthesize readSource=_readSource - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> internalQueue;                        //@synthesize internalQueue=_internalQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> clientQueue;                          //@synthesize clientQueue=_clientQueue - In the implementation block
@property (assign) int sockfd;                                                        //@synthesize sockfd=_sockfd - In the implementation block
@property (retain) NSMutableDictionary * internalSources;                             //@synthesize internalSources=_internalSources - In the implementation block
@property (retain) NSMutableSet * interfaceSources;                                   //@synthesize interfaceSources=_interfaceSources - In the implementation block
@property (retain) NWUsageMonitor * usageMonitor;                                     //@synthesize usageMonitor=_usageMonitor - In the implementation block
@property (assign) unsigned long long currentQueryAllReference;                       //@synthesize currentQueryAllReference=_currentQueryAllReference - In the implementation block
@property (assign) unsigned long long querySequenceNumber;                            //@synthesize querySequenceNumber=_querySequenceNumber - In the implementation block
@property (assign) char* readBuffer;                                                  //@synthesize readBuffer=_readBuffer - In the implementation block
@property (retain) NSMutableArray * queuedPolls;                                      //@synthesize queuedPolls=_queuedPolls - In the implementation block
@property (retain) NWPollHandler * activePoll;                                        //@synthesize activePoll=_activePoll - In the implementation block
@property (assign) BOOL configured;                                                   //@synthesize configured=_configured - In the implementation block
@property (getter=isInvalidated) BOOL invalidated;                                    //@synthesize invalidated=_invalidated - In the implementation block
@property (assign,nonatomic,__weak) id<NWUsageManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(BOOL)configure:(id)arg1 ;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_sendPoll;
-(NWUsageMonitor *)usageMonitor;
-(id)initWithQueue:(id)arg1 ;
-(void)ignoreFlow:(unsigned long long)arg1 ;
-(void)_handleReadEvent;
-(int)sockfd;
-(void)_startQueuedPoll;
-(BOOL)isInvalidated;
-(BOOL)reconfigure:(id)arg1 ;
-(void)setQueuedPolls:(NSMutableArray *)arg1 ;
-(id<NWUsageManagerDelegate>)delegate;
-(void)setSockfd:(int)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)setQuerySequenceNumber:(unsigned long long)arg1 ;
-(void)setActivePoll:(NWPollHandler *)arg1 ;
-(void)_traceMemoryBuf:(char*)arg1 length:(long long)arg2 tag:(char*)arg3 ;
-(void)setReadBuffer:(char*)arg1 ;
-(void)setInvalidated:(BOOL)arg1 ;
-(id)stateDictionary;
-(int)flowEnumerationCurrentUsage;
-(void)_noteInterfaceSrcRef:(unsigned long long)arg1 forInterface:(unsigned)arg2 threshold:(unsigned long long)arg3 ;
-(unsigned long long)querySequenceNumber;
-(void)setInterfaceSources:(NSMutableSet *)arg1 ;
-(NSMutableArray *)queuedPolls;
-(unsigned long long)currentQueryAllReference;
-(void)_sendUpdateRequestMessage:(unsigned long long)arg1 ;
-(void)setDelegate:(id<NWUsageManagerDelegate>)arg1 ;
-(NSMutableSet *)interfaceSources;
-(void)_addAllForProvider:(int)arg1 filter:(unsigned long long)arg2 events:(unsigned long long)arg3 ;
-(void)setCurrentQueryAllReference:(unsigned long long)arg1 ;
-(void)_sendMessage:(nstat_msg_hdr*)arg1 length:(long long)arg2 ;
-(void)enumerateChangedFlowsUsingBlock:(/*^block*/id)arg1 ;
-(void)setReadSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSMutableDictionary *)internalSources;
-(NSObject*<OS_dispatch_source>)readSource;
-(void)setInternalSources:(NSMutableDictionary *)arg1 ;
-(char*)readBuffer;
-(void)_setThreshold:(unsigned long long)arg1 onInterface:(unsigned)arg2 ;
-(BOOL)enumerateFlowsUsingBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_restartPoll:(id)arg1 ;
-(NWPollHandler *)activePoll;
-(void)_handleMessage:(nstat_msg_hdr*)arg1 length:(long long)arg2 ;
-(void)_removeSourceInternal:(unsigned long long)arg1 ;
-(void)setClientQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)invalidate;
-(void)_handleCompletion:(unsigned long long)arg1 ;
-(void)_setInterfaceTraceFd:(int)arg1 ;
-(void)_startPoll:(id)arg1 ;
-(BOOL)initialConfigure:(id)arg1 ;
-(void)_trace:(char*)arg1 ;
-(void)setUsageMonitor:(NWUsageMonitor *)arg1 ;
-(void)enumerateFlowsUsingBlock:(/*^block*/id)arg1 ;
-(void)_handleCounts:(nstat_msg_src_counts*)arg1 ;
-(BOOL)enumerateSelectFlows:(id)arg1 deliveryBlock:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_handleRemoveForSource:(id)arg1 ;
-(BOOL)_setThresholds:(id)arg1 ;
-(id)_stage2InitWithQueue:(id)arg1 ;
-(void)enumerateSelectFlows:(id)arg1 deliveryBlock:(/*^block*/id)arg2 ;
-(void)_sendRemoveSource:(unsigned long long)arg1 ;
-(void)dealloc;
-(BOOL)configured;
-(void)setConfigured:(BOOL)arg1 ;
@end

