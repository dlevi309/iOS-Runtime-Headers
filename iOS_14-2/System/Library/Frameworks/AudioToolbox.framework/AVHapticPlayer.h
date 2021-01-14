/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
*/


@class AVHapticClient, NSMutableArray, NSArray;

@interface AVHapticPlayer : NSObject {

	AVHapticClient* _client;
	BOOL _resourcesAllocated;
	unsigned long long _behavior;
	NSMutableArray* _channelArray;
	/*^block*/id _connectionErrorHandler;
	/*^block*/id _stopRunningHandler;

}

@property (readonly) AVHapticClient * client;                          //@synthesize client=_client - In the implementation block
@property (readonly) BOOL resourcesAllocated;                          //@synthesize resourcesAllocated=_resourcesAllocated - In the implementation block
@property (copy) id stopRunningHandler;                                //@synthesize stopRunningHandler=_stopRunningHandler - In the implementation block
@property (assign,nonatomic) unsigned long long behavior;              //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,readonly) NSArray * channels; 
@property (readonly) double currentMediaTime; 
@property (readonly) double hapticLatency; 
@property (copy) id connectionErrorHandler; 
+(BOOL)isSupported;
-(void)setBehavior:(unsigned long long)arg1 ;
-(AVHapticClient *)client;
-(void)stopPrewarm;
-(void)prewarmWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)behavior;
-(void)stopRunning;
-(id)initWithSessionID:(unsigned)arg1 error:(id*)arg2 ;
-(void)deallocateRenderResources;
-(void)startRunningWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)allocateRenderResourcesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithOptions:(id)arg1 error:(id*)arg2 ;
-(double)hapticLatency;
-(void)queryServerCapabilities:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)loadHapticEvent:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)copyCustomAudioEvent:(unsigned long long)arg1 options:(id)arg2 reply:(/*^block*/id)arg3 ;
-(BOOL)createCustomAudioEvent:(id)arg1 format:(id)arg2 frames:(unsigned long long)arg3 options:(id)arg4 reply:(/*^block*/id)arg5 ;
-(BOOL)referenceCustomAudioEvent:(unsigned long long)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)releaseCustomAudioEvent:(unsigned long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)expectNotifyAfter:(double)arg1 ;
-(BOOL)loadAndPrepareHapticSequenceFromData:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)loadAndPrepareHapticSequenceFromEvents:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)loadAndPrepareHapticSequenceFromVibePattern:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)prepareHapticSequence:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)pauseHapticSequence:(unsigned long long)arg1 atTime:(double)arg2 ;
-(BOOL)enableSequenceLooping:(unsigned long long)arg1 enable:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)setSequenceLoopLength:(unsigned long long)arg1 length:(float)arg2 error:(id*)arg3 ;
-(BOOL)resumeHapticSequence:(unsigned long long)arg1 atTime:(double)arg2 ;
-(BOOL)setSequencePlaybackRate:(unsigned long long)arg1 rate:(float)arg2 error:(id*)arg3 ;
-(BOOL)stopHapticSequence:(unsigned long long)arg1 atTime:(double)arg2 ;
-(BOOL)seekHapticSequence:(unsigned long long)arg1 toTime:(double)arg2 ;
-(BOOL)clearSequenceEvents:(unsigned long long)arg1 atTime:(double)arg2 ;
-(void)detachHapticSequence:(unsigned long long)arg1 ;
-(void)releaseChannels;
-(unsigned long long)getBehavior;
-(id)createOptionsFromAudioSessionID:(unsigned)arg1 shared:(BOOL)arg2 ;
-(BOOL)doInitWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)initAndReturnError:(id*)arg1 ;
-(id)initWithSessionID:(unsigned)arg1 sessionIsShared:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)setNumberOfChannels:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)addChannel:(id*)arg1 ;
-(BOOL)removeChannel:(id)arg1 error:(id*)arg2 ;
-(void)setConnectionErrorHandler:(id)arg1 ;
-(id)connectionErrorHandler;
-(void)invalidateChannels;
-(void)stopRunningWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)finishWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)playHapticSequence:(unsigned long long)arg1 atTime:(double)arg2 offset:(double)arg3 ;
-(id)stopRunningHandler;
-(void)setStopRunningHandler:(id)arg1 ;
-(BOOL)setSequenceChannelParam:(unsigned long long)arg1 atTime:(double)arg2 channel:(unsigned long long)arg3 param:(unsigned long long)arg4 value:(float)arg5 error:(id*)arg6 ;
-(BOOL)resourcesAllocated;
-(double)currentMediaTime;
-(NSArray *)channels;
-(void)dealloc;
@end

