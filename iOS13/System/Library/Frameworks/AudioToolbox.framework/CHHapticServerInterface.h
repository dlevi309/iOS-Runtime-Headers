/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
*/


@protocol CHHapticServerInterface
@required
-(void)stopPrewarm;
-(void)stopRunning;
-(void)loadHapticEvent:(id)arg1 reply:(/*^block*/id)arg2;
-(void)createCustomAudioEvent:(id)arg1 format:(id)arg2 frames:(unsigned long long)arg3 options:(id)arg4 reply:(/*^block*/id)arg5;
-(void)copyCustomAudioEvent:(unsigned long long)arg1 options:(id)arg2 reply:(/*^block*/id)arg3;
-(void)removeCustomAudioEvent:(unsigned long long)arg1 reply:(/*^block*/id)arg2;
-(void)prewarm:(/*^block*/id)arg1;
-(void)startRunning:(/*^block*/id)arg1;
-(void)stopRunning:(/*^block*/id)arg1;
-(void)removeChannel:(unsigned long long)arg1 reply:(/*^block*/id)arg2;
-(void)requestChannels:(unsigned long long)arg1 reply:(/*^block*/id)arg2;
-(void)releaseChannels;
-(void)setPlayerBehavior:(unsigned long long)arg1 reply:(/*^block*/id)arg2;
-(void)setSessionID:(unsigned)arg1 isShared:(BOOL)arg2 reply:(/*^block*/id)arg3;
-(void)allocateClientResources:(/*^block*/id)arg1;
-(void)releaseClientResources;
-(void)getHapticLatency:(/*^block*/id)arg1;
-(void)setChannelEventBehavior:(unsigned long long)arg1 behavior:(unsigned long long)arg2 reply:(/*^block*/id)arg3;
-(void)loadHapticSequenceFromData:(id)arg1 reply:(/*^block*/id)arg2;
-(void)loadHapticSequenceFromEvents:(id)arg1 reply:(/*^block*/id)arg2;
-(void)loadVibePattern:(id)arg1 reply:(/*^block*/id)arg2;
-(void)setSequenceEventBehavior:(unsigned long long)arg1 behavior:(unsigned long long)arg2 channelIndex:(unsigned long long)arg3 reply:(/*^block*/id)arg4;
-(void)prepareHapticSequence:(unsigned long long)arg1 reply:(/*^block*/id)arg2;
-(void)detachSequence:(unsigned long long)arg1;
-(void)debugExpectNotifyOnFinishAfter:(double)arg1 reply:(/*^block*/id)arg2;

@end

