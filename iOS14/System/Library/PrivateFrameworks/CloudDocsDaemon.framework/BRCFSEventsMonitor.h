/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/BRCModule.h>
#import <libobjc.A.dylib/BRCSuspendable.h>

@protocol OS_dispatch_source, OS_dispatch_queue, OS_dispatch_semaphore, BRCFSEventsDelegate;
@class BRCAccountSession, NSString, BRCFSEventsPersistedState, NSObject, BRCFairSource, NSMutableArray, BRCVolume, BRCRelativePath, PQLConnection;

@interface BRCFSEventsMonitor : NSObject <BRCModule, BRCSuspendable> {

	BRCAccountSession* _session;
	NSString* _name;
	Ai _suspendCount;
	Ai _resetCount;
	BRCFSEventsPersistedState* _persistedState;
	NSString* _devicePath;
	NSObject*<OS_dispatch_source> _rootVnodeWatcher;
	FSEventStreamRef _stream;
	NSObject*<OS_dispatch_queue> _streamQueue;
	NSObject*<OS_dispatch_source> _historicalEventSource;
	NSObject*<OS_dispatch_queue> _processQueue;
	BRCFairSource* _fseventsProcessSource;
	NSMutableArray* _fseventsToProcess;
	unsigned long long _maxFSEventQueueSize;
	unsigned long long _fseventProcessBatchSize;
	BOOL _hasMarkSelf;
	BRCFSEventsPersistedState* _rendezVous;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	BOOL _drainEvents;
	BRCVolume* _volume;
	BOOL _isCancelled;
	BRCRelativePath* _root;
	id<BRCFSEventsDelegate> _delegate;
	PQLConnection* _db;

}

@property (__weak) id<BRCFSEventsDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (setter=setDB:,nonatomic,retain) PQLConnection * db;              //@synthesize db=_db - In the implementation block
@property (nonatomic,readonly) BRCRelativePath * root;                      //@synthesize root=_root - In the implementation block
@property (nonatomic,readonly) BOOL volumeIsCaseSensitive; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isCancelled;                            //@synthesize isCancelled=_isCancelled - In the implementation block
-(void)_close;
-(BRCRelativePath *)root;
-(PQLConnection *)db;
-(void)suspend;
-(id<BRCFSEventsDelegate>)delegate;
-(void)close;
-(void)setDB:(id)arg1 ;
-(void)setDelegate:(id<BRCFSEventsDelegate>)arg1 ;
-(NSString *)description;
-(void)_cancel;
-(void)cancel;
-(void)resume;
-(BOOL)isCancelled;
-(void)dealloc;
-(void)resetWithReason:(id)arg1 ;
-(id)initWithAccountSession:(id)arg1 ;
-(void)flushStream;
-(BOOL)openWithRoot:(id)arg1 isImmutableRoot:(BOOL)arg2 volume:(id)arg3 error:(id*)arg4 ;
-(id)initWithAccountSession:(id)arg1 name:(id)arg2 ;
-(void)signalAfterCurrentFSEvent:(id)arg1 ;
-(void)_updatePersistedStateWithState:(id)arg1 ;
-(void)fseventOnRootWithEventID:(unsigned long long)arg1 andReason:(id)arg2 ;
-(BOOL)setUpRoot:(id)arg1 isImmutableRoot:(BOOL)arg2 volume:(id)arg3 error:(id*)arg4 ;
-(BOOL)setUpStreamSynchronously:(BOOL)arg1 reason:(id)arg2 error:(id*)arg3 ;
-(BOOL)_queueEvents:(id)arg1 markSelfEncountered:(BOOL)arg2 ;
-(void)processFseventBatch;
-(void)fseventAtPath:(id)arg1 withFlags:(unsigned)arg2 andID:(unsigned long long)arg3 eventIndex:(unsigned)arg4 eventCount:(unsigned)arg5 initialScan:(BOOL)arg6 ;
-(void)resetWithReason:(id)arg1 dropFSEventID:(BOOL)arg2 ;
-(void)didProcessEventID:(unsigned long long)arg1 ;
-(void)stopWatcher;
-(BOOL)volumeIsCaseSensitive;
-(BOOL)openWithRoot:(id)arg1 volume:(id)arg2 error:(id*)arg3 ;
-(void)queueEvents:(id)arg1 markSelfEncountered:(BOOL)arg2 ;
@end

