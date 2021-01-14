/*
* Generated on Thursday, January 14, 2021 at 2:25:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

@class VCRateControlMediaController;


@protocol VCRateControlAlgorithm <NSObject>
@property (nonatomic,retain) VCRateControlMediaController * mediaController; 
@property (nonatomic,readonly) unsigned targetBitrate; 
@property (nonatomic,readonly) unsigned rateChangeCounter; 
@property (nonatomic,readonly) BOOL isCongested; 
@property (nonatomic,readonly) unsigned mostBurstLoss; 
@property (nonatomic,readonly) double packetLossRate; 
@property (nonatomic,readonly) double packetLossRateAudio; 
@property (nonatomic,readonly) double packetLossRateVideo; 
@property (nonatomic,readonly) unsigned totalPacketReceived; 
@property (nonatomic,readonly) double roundTripTime; 
@property (nonatomic,readonly) double worstRecentRoundTripTime; 
@property (nonatomic,readonly) unsigned worstRecentBurstLoss; 
@property (nonatomic,readonly) double owrd; 
@property (nonatomic,readonly) BOOL isNewRateSentOut; 
@property (assign,nonatomic) unsigned localBandwidthEstimation; 
@property (assign,getter=isPaused,nonatomic) BOOL paused; 
@property (nonatomic,readonly) unsigned actualBitrate; 
@property (assign,nonatomic) BOOL didMBLRampDown; 
@property (nonatomic,readonly) BOOL isSendBitrateLimited; 
@property (nonatomic,readonly) BOOL isFirstInitialRampUpDone; 
@required
-(double)owrd;
-(void)setPaused:(BOOL)arg1;
-(VCRateControlMediaController *)mediaController;
-(double)roundTripTime;
-(double)packetLossRate;
-(BOOL)isPaused;
-(void)setMediaController:(id)arg1;
-(double)worstRecentRoundTripTime;
-(unsigned)worstRecentBurstLoss;
-(BOOL)isSendBitrateLimited;
-(BOOL)didMBLRampDown;
-(void)setDidMBLRampDown:(BOOL)arg1;
-(void)configure:(VCRateControlAlgorithmConfig*)arg1 restartRequired:(BOOL)arg2;
-(void)enableBasebandDump:(void*)arg1;
-(unsigned)targetBitrate;
-(unsigned)rateChangeCounter;
-(BOOL)doRateControlWithStatistics:(SCD_Struct_AV33)arg1;
-(void)enableLogDump:(void*)arg1 enablePeriodicLogging:(BOOL)arg2;
-(unsigned)actualBitrate;
-(BOOL)isNewRateSentOut;
-(void)setLocalBandwidthEstimation:(unsigned)arg1;
-(BOOL)isFirstInitialRampUpDone;
-(double)packetLossRateAudio;
-(double)packetLossRateVideo;
-(unsigned)mostBurstLoss;
-(BOOL)isCongested;
-(unsigned)totalPacketReceived;
-(unsigned)localBandwidthEstimation;

@end

