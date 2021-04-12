/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
*/

#import <AudioToolbox/AudioToolbox-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/CHHapticClientInterface.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSArray, NSString;

@interface HapticClient : NSObject <NSXPCListenerDelegate, CHHapticClientInterface> {

	NSXPCConnection* _connection;
	HapticSharedMemory* _sharedBuffer;
	unsigned long long _uniqueID;
	int _serverTimeout;
	/*^block*/id _completionCallback;
	/*^block*/id _connectionCallback;
	mutex _mapMutex;
	map<unsigned long, SequenceEntry *, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, SequenceEntry *> > >* _sequenceEntryMap;
	NSObject*<OS_dispatch_queue> _completionQueue;
	BOOL _prewarmed;
	BOOL _running;
	BOOL _connected;
	int _serverProcessID;
	unsigned long long _clientID;
	NSArray* _channelKeys;
	/*^block*/id _asyncStopCallback;

}

@property (assign) BOOL connected;                                  //@synthesize connected=_connected - In the implementation block
@property (readonly) unsigned long long clientID;                   //@synthesize clientID=_clientID - In the implementation block
@property (readonly) NSArray * channelKeys;                         //@synthesize channelKeys=_channelKeys - In the implementation block
@property (readonly) BOOL prewarmed;                                //@synthesize prewarmed=_prewarmed - In the implementation block
@property (readonly) BOOL running;                                  //@synthesize running=_running - In the implementation block
@property (assign) int serverProcessID;                             //@synthesize serverProcessID=_serverProcessID - In the implementation block
@property (readonly) double hapticLatency; 
@property (copy) id asyncStopCallback;                              //@synthesize asyncStopCallback=_asyncStopCallback - In the implementation block
@property (copy) id completionCallback;                             //@synthesize completionCallback=_completionCallback - In the implementation block
@property (copy) id connectionCallback;                             //@synthesize connectionCallback=_connectionCallback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)disconnect;
-(void)allocateResources:(/*^block*/id)arg1 ;
-(void)releaseResources;
-(BOOL)running;
-(BOOL)finish:(/*^block*/id)arg1 ;
-(void)stopPrewarm;
-(unsigned long long)clientID;
-(void)setCompletionCallback:(id)arg1 ;
-(void)setConnected:(BOOL)arg1 ;
-(BOOL)connected;
-(void)stopRunning;
-(void)sequenceFinished:(unsigned long long)arg1 error:(id)arg2 ;
-(void)clientCompletedWithError:(id)arg1 ;
-(void)clientStoppedForReason:(unsigned long long)arg1 error:(id)arg2 ;
-(id)initWithSessionID:(unsigned)arg1 isShared:(BOOL)arg2 error:(id*)arg3 ;
-(double)hapticLatency;
-(BOOL)loadHapticEvent:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)createCustomAudioEvent:(id)arg1 format:(id)arg2 frames:(unsigned long long)arg3 options:(id)arg4 reply:(/*^block*/id)arg5 ;
-(BOOL)copyCustomAudioEvent:(unsigned long long)arg1 options:(id)arg2 reply:(/*^block*/id)arg3 ;
-(BOOL)removeCustomAudioEvent:(unsigned long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)prewarm:(/*^block*/id)arg1 ;
-(void)startRunning:(/*^block*/id)arg1 ;
-(void)stopRunning:(/*^block*/id)arg1 ;
-(void)expectNotifyAfter:(double)arg1 ;
-(BOOL)setChannelEventBehavior:(unsigned long long)arg1 channel:(unsigned long long)arg2 ;
-(BOOL)resetChannel:(unsigned long long)arg1 atTime:(double)arg2 ;
-(BOOL)startEventAndReturnToken:(unsigned long long)arg1 type:(unsigned long long)arg2 atTime:(double)arg3 channel:(unsigned long long)arg4 eventToken:(unsigned long long*)arg5 ;
-(BOOL)doSendEvents:(id)arg1 atTime:(double)arg2 channel:(unsigned long long)arg3 outToken:(unsigned long long*)arg4 error:(id*)arg5 ;
-(BOOL)doScheduleParamCurve:(unsigned long long)arg1 atTime:(double)arg2 channel:(unsigned long long)arg3 paramCurve:(id)arg4 error:(id*)arg5 ;
-(BOOL)doScheduleParamCurveWithMemoryReserve:(unsigned long long)arg1 atTime:(double)arg2 channel:(unsigned long long)arg3 memoryReserve:(AddressReserve*)arg4 paramCurve:(id)arg5 error:(id*)arg6 ;
-(BOOL)sendEvents:(id)arg1 atTime:(double)arg2 channel:(unsigned long long)arg3 outToken:(unsigned long long*)arg4 error:(id*)arg5 ;
-(BOOL)stopEventWithToken:(unsigned long long)arg1 atTime:(double)arg2 channel:(unsigned long long)arg3 ;
-(BOOL)clearEventsFromTime:(double)arg1 channel:(unsigned long long)arg2 ;
-(BOOL)setParameter:(unsigned long long)arg1 atTime:(double)arg2 value:(float)arg3 channel:(unsigned long long)arg4 ;
-(BOOL)scheduleParameterCurve:(unsigned long long)arg1 curve:(id)arg2 atTime:(double)arg3 channel:(unsigned long long)arg4 error:(id*)arg5 ;
-(BOOL)loadAndPrepareHapticSequenceFromData:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)loadAndPrepareHapticSequenceFromEvents:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)loadAndPrepareHapticSequenceFromVibePattern:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)setSequenceEventBehavior:(unsigned long long)arg1 behavior:(unsigned long long)arg2 channel:(unsigned long long)arg3 ;
-(void)setSequenceFinishedHandlerForID:(unsigned long long)arg1 finishedHandler:(/*^block*/id)arg2 ;
-(/*^block*/id)getSequenceFinishedHandlerForID:(unsigned long long)arg1 ;
-(void)setRunStateForSequenceEntryWithID:(unsigned long long)arg1 running:(BOOL)arg2 ;
-(void)detachSequenceEntryforID:(unsigned long long)arg1 ;
-(BOOL)prepareHapticSequence:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)enableSequenceLooping:(unsigned long long)arg1 enable:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)setSequenceLoopLength:(unsigned long long)arg1 length:(float)arg2 error:(id*)arg3 ;
-(BOOL)setSequencePlaybackRate:(unsigned long long)arg1 rate:(float)arg2 error:(id*)arg3 ;
-(BOOL)startHapticSequence:(unsigned long long)arg1 atTime:(double)arg2 withOffset:(double)arg3 ;
-(BOOL)stopHapticSequence:(unsigned long long)arg1 atTime:(double)arg2 ;
-(BOOL)pauseHapticSequence:(unsigned long long)arg1 atTime:(double)arg2 ;
-(BOOL)resumeHapticSequence:(unsigned long long)arg1 atTime:(double)arg2 ;
-(BOOL)seekHapticSequence:(unsigned long long)arg1 toTime:(double)arg2 ;
-(BOOL)setSequenceChannelParameter:(unsigned long long)arg1 atTime:(double)arg2 value:(float)arg3 sequenceID:(unsigned long long)arg4 channel:(unsigned long long)arg5 ;
-(BOOL)clearSequenceEvents:(unsigned long long)arg1 atTime:(double)arg2 ;
-(void)detachHapticSequence:(unsigned long long)arg1 ;
-(void)doInit;
-(BOOL)setupConnectionWithSessionID:(unsigned)arg1 isShared:(BOOL)arg2 error:(id*)arg3 ;
-(id)getAsyncDelegateForMethod:(SEL)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id)getSyncDelegateForMethod:(SEL)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)setChannelKeys:(NSArray *)arg1 ;
-(BOOL)setPlayerBehavior:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)clearAssignedChannels;
-(BOOL)requestAssignedChannels:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)removeAssignedChannelID:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)handleServerConnectionInterruption;
-(void)handleServerConnectionInvalidation;
-(int)setupSharedMemory:(id)arg1 size:(unsigned)arg2 ;
-(unsigned)calculateHapticCommandParamCurveMemorySize:(unsigned)arg1 ;
-(void)destroySharedMemory;
-(NSArray *)channelKeys;
-(BOOL)prewarmed;
-(id)completionCallback;
-(id)connectionCallback;
-(void)setConnectionCallback:(id)arg1 ;
-(int)serverProcessID;
-(void)setServerProcessID:(int)arg1 ;
-(id)asyncStopCallback;
-(void)setAsyncStopCallback:(id)arg1 ;
@end

