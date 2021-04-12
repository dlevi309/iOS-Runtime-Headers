/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
*/

#import <AudioToolbox/AudioToolbox-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/CHHapticClientInterface.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSArray, NSString;

@interface AVHapticClient : NSObject <NSXPCListenerDelegate, CHHapticClientInterface> {

	NSXPCConnection* _connection;
	HapticSharedMemory* _sharedBuffer;
	unsigned long long _uniqueID;
	int _serverTimeout;
	/*^block*/id _completionCallback;
	/*^block*/id _connectionCallback;
	mutex _mapMutex;
	map<unsigned long, AVHapticSequenceEntry *, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, AVHapticSequenceEntry *> > >* _sequenceEntryMap;
	NSObject*<OS_dispatch_queue> _completionQueue;
	int _state;
	BOOL _disconnecting;
	BOOL _prewarmed;
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
@property (readonly) BOOL running; 
@property (readonly) int state; 
@property (assign) int serverProcessID;                             //@synthesize serverProcessID=_serverProcessID - In the implementation block
@property (readonly) double hapticLatency; 
@property (copy) id asyncStopCallback;                              //@synthesize asyncStopCallback=_asyncStopCallback - In the implementation block
@property (copy) id completionCallback;                             //@synthesize completionCallback=_completionCallback - In the implementation block
@property (copy) id connectionCallback;                             //@synthesize connectionCallback=_connectionCallback - In the implementation block
@property (readonly) BOOL disconnecting;                            //@synthesize disconnecting=_disconnecting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)connected;
-(BOOL)finish:(/*^block*/id)arg1 ;
-(void)disconnect;
-(unsigned long long)clientID;
-(void)setConnected:(BOOL)arg1 ;
-(BOOL)running;
-(void)stopPrewarm;
-(void)doInit;
-(void)prewarm:(/*^block*/id)arg1 ;
-(void)stopRunning;
-(BOOL)prewarmed;
-(NSArray *)channelKeys;
-(void)sequenceFinished:(unsigned long long)arg1 error:(id)arg2 ;
-(void)clientCompletedWithError:(id)arg1 ;
-(void)clientStoppedForReason:(unsigned long long)arg1 error:(id)arg2 ;
-(void)clientDisconnectingForReason:(unsigned long long)arg1 error:(id)arg2 ;
-(id)initWithOptions:(id)arg1 error:(id*)arg2 ;
-(double)hapticLatency;
-(void)queryServerCapabilities:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)loadHapticEvent:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)copyCustomAudioEvent:(unsigned long long)arg1 options:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)startRunning:(/*^block*/id)arg1 ;
-(BOOL)createCustomAudioEvent:(id)arg1 format:(id)arg2 frames:(unsigned long long)arg3 options:(id)arg4 reply:(/*^block*/id)arg5 ;
-(BOOL)referenceCustomAudioEvent:(unsigned long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)stopRunning:(/*^block*/id)arg1 ;
-(BOOL)releaseCustomAudioEvent:(unsigned long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)expectNotifyAfter:(double)arg1 ;
-(BOOL)setChannelEventBehavior:(unsigned long long)arg1 channel:(unsigned long long)arg2 ;
-(BOOL)resetChannel:(unsigned long long)arg1 atTime:(double)arg2 ;
-(BOOL)startEventAndReturnToken:(unsigned long long)arg1 type:(unsigned long long)arg2 atTime:(double)arg3 channel:(unsigned long long)arg4 eventToken:(unsigned long long*)arg5 ;
-(BOOL)sendEvents:(id)arg1 atTime:(double)arg2 channel:(unsigned long long)arg3 outToken:(unsigned long long*)arg4 error:(id*)arg5 ;
-(BOOL)doSendEvents:(id)arg1 atTime:(double)arg2 channel:(unsigned long long)arg3 sorted:(BOOL)arg4 outToken:(unsigned long long*)arg5 error:(id*)arg6 ;
-(BOOL)doScheduleParamCurve:(unsigned long long)arg1 atTime:(double)arg2 channel:(unsigned long long)arg3 paramCurve:(id)arg4 error:(id*)arg5 ;
-(BOOL)doScheduleParamCurveWithMemoryReserve:(unsigned long long)arg1 atTime:(double)arg2 channel:(unsigned long long)arg3 memoryReserve:(AddressReserve*)arg4 paramCurve:(id)arg5 error:(id*)arg6 ;
-(void)destroySharedMemory;
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
-(void)callSequenceFinishedHandlersWithError:(id)arg1 ;
-(void)detachSequenceEntryforID:(unsigned long long)arg1 ;
-(void)setRunStateForSequenceEntryWithID:(unsigned long long)arg1 running:(BOOL)arg2 ;
-(BOOL)prepareHapticSequence:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)pauseHapticSequence:(unsigned long long)arg1 atTime:(double)arg2 ;
-(BOOL)enableSequenceLooping:(unsigned long long)arg1 enable:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)setSequenceLoopLength:(unsigned long long)arg1 length:(float)arg2 error:(id*)arg3 ;
-(BOOL)resumeHapticSequence:(unsigned long long)arg1 atTime:(double)arg2 ;
-(BOOL)setSequencePlaybackRate:(unsigned long long)arg1 rate:(float)arg2 error:(id*)arg3 ;
-(BOOL)startHapticSequence:(unsigned long long)arg1 atTime:(double)arg2 withOffset:(double)arg3 ;
-(BOOL)stopHapticSequence:(unsigned long long)arg1 atTime:(double)arg2 ;
-(BOOL)seekHapticSequence:(unsigned long long)arg1 toTime:(double)arg2 ;
-(BOOL)setSequenceChannelParameter:(unsigned long long)arg1 atTime:(double)arg2 value:(float)arg3 sequenceID:(unsigned long long)arg4 channel:(unsigned long long)arg5 ;
-(void)setChannelKeys:(NSArray *)arg1 ;
-(BOOL)clearSequenceEvents:(unsigned long long)arg1 atTime:(double)arg2 ;
-(void)detachHapticSequence:(unsigned long long)arg1 ;
-(BOOL)setupConnectionWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)completionCallback;
-(id)getAsyncDelegateForMethod:(SEL)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id)getSyncDelegateForMethod:(SEL)arg1 errorHandler:(/*^block*/id)arg2 ;
-(BOOL)setPlayerBehavior:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)clearAssignedChannels;
-(BOOL)requestAssignedChannels:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)removeAssignedChannelID:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)connectionCallback;
-(void)handleServerConnectionInterruption;
-(void)handleServerConnectionInvalidation;
-(int)setupSharedMemory:(object)arg1 size:(unsigned)arg2 ;
-(unsigned)calculateHapticCommandParamCurveMemorySize:(unsigned)arg1 ;
-(void)setConnectionCallback:(id)arg1 ;
-(BOOL)disconnecting;
-(int)serverProcessID;
-(void)setServerProcessID:(int)arg1 ;
-(id)asyncStopCallback;
-(void)setAsyncStopCallback:(id)arg1 ;
-(void)setState:(int)arg1 ;
-(int)state;
-(void)setCompletionCallback:(id)arg1 ;
-(void)releaseResources;
-(void)dealloc;
-(void)allocateResources:(/*^block*/id)arg1 ;
@end

