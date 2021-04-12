/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/


@protocol CHHapticServerInterface
@required
-(void)stopPrewarm;
-(void)prewarm:(/*^block*/id)arg1;
-(void)stopRunning;
-(void)loadHapticEvent:(id)arg1 reply:(/*^block*/id)arg2;
-(void)copyCustomAudioEvent:(unsigned long long)arg1 options:(id)arg2 reply:(/*^block*/id)arg3;
-(void)startRunning:(/*^block*/id)arg1;
-(void)createCustomAudioEvent:(id)arg1 format:(id)arg2 frames:(unsigned long long)arg3 options:(id)arg4 reply:(/*^block*/id)arg5;
-(void)referenceCustomAudioEvent:(unsigned long long)arg1 reply:(/*^block*/id)arg2;
-(void)stopRunning:(/*^block*/id)arg1;
-(void)releaseCustomAudioEvent:(unsigned long long)arg1 reply:(/*^block*/id)arg2;
-(void)removeChannel:(unsigned long long)arg1 reply:(/*^block*/id)arg2;
-(void)requestChannels:(unsigned long long)arg1 reply:(/*^block*/id)arg2;
-(void)releaseChannels;
-(void)setPlayerBehavior:(unsigned long long)arg1 reply:(/*^block*/id)arg2;
-(void)configureWithOptions:(id)arg1 reply:(/*^block*/id)arg2;
-(void)allocateClientResources:(/*^block*/id)arg1;
-(void)queryCapabilities:(id)arg1 reply:(/*^block*/id)arg2;
-(void)releaseClientResources;
-(void)getHapticLatency:(/*^block*/id)arg1;
-(void)loadHapticSequenceFromData:(id)arg1 reply:(/*^block*/id)arg2;
-(void)setChannelEventBehavior:(unsigned long long)arg1 behavior:(unsigned long long)arg2 reply:(/*^block*/id)arg3;
-(void)loadHapticSequenceFromEvents:(id)arg1 reply:(/*^block*/id)arg2;
-(void)loadVibePattern:(id)arg1 reply:(/*^block*/id)arg2;
-(void)setSequenceEventBehavior:(unsigned long long)arg1 behavior:(unsigned long long)arg2 channelIndex:(unsigned long long)arg3 reply:(/*^block*/id)arg4;
-(void)prepareHapticSequence:(unsigned long long)arg1 reply:(/*^block*/id)arg2;
-(void)detachSequence:(unsigned long long)arg1;
-(void)debugExpectNotifyOnFinishAfter:(double)arg1 reply:(/*^block*/id)arg2;

@end

