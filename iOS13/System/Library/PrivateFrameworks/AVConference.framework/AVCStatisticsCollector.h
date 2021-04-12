/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@class NSMutableDictionary, VCRateControlBandwidthEstimatorMap, VCRateControlOWRDEstimator, VCStatisticsHistory, VCStatisticsCollectorQueue;

@interface AVCStatisticsCollector : NSObject {

	NSMutableDictionary* _statistics;
	tagVCStatisticsCollection* _statisticsCollection;
	NSMutableDictionary* _statisticChangeHandlerDictionary;
	VCRateControlBandwidthEstimatorMap* _bandwidthEstimatorMap;
	VCRateControlOWRDEstimator* _owrdEstimator;
	VCStatisticsHistory* _history;
	VCStatisticsCollectorQueue* _queue;
	int _forceQueueWaitTimeMs;
	unsigned _radioAccessTechnology;
	unsigned _mode;
	BOOL _useExternalThread;
	unsigned _sharedEstimatedBandwidth;
	unsigned _sharedEstimatedBandwidthUncapped;
	unsigned _sharedRemoteEstimatedBandwidth;
	unsigned _maxLocalBurstyLoss;
	unsigned _packetReceivedAudio;
	unsigned _packetReceivedVideo;
	unsigned _estimatedBandwidthCap;
	unsigned _expectedBitrate;
	opaque_pthread_rwlock_t _statisticsCollectionLock;

}

@property (assign,nonatomic) unsigned radioAccessTechnology;                           //@synthesize radioAccessTechnology=_radioAccessTechnology - In the implementation block
@property (assign,nonatomic) unsigned mode;                                            //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) unsigned sharedEstimatedBandwidth;                      //@synthesize sharedEstimatedBandwidth=_sharedEstimatedBandwidth - In the implementation block
@property (nonatomic,readonly) unsigned sharedEstimatedBandwidthUncapped;              //@synthesize sharedEstimatedBandwidthUncapped=_sharedEstimatedBandwidthUncapped - In the implementation block
@property (nonatomic,readonly) unsigned sharedRemoteEstimatedBandwidth;                //@synthesize sharedRemoteEstimatedBandwidth=_sharedRemoteEstimatedBandwidth - In the implementation block
@property (assign,nonatomic) unsigned estimatedBandwidthCap;                           //@synthesize estimatedBandwidthCap=_estimatedBandwidthCap - In the implementation block
@property (assign,nonatomic) unsigned expectedBitrate;                                 //@synthesize expectedBitrate=_expectedBitrate - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setMode:(unsigned)arg1 ;
-(void)stop;
-(void)start;
-(unsigned)mode;
-(void)setStatistics:(id)arg1 ;
-(unsigned)radioAccessTechnology;
-(void)setRadioAccessTechnology:(unsigned)arg1 ;
-(id)getStatistics:(id)arg1 ;
-(id)initForSimulation:(BOOL)arg1 useExternalThread:(BOOL)arg2 ;
-(void)registerStatisticsChangeHandlerWithType:(int)arg1 handler:(/*^block*/id)arg2 ;
-(void)setVCStatistics:(SCD_Struct_AV29)arg1 ;
-(unsigned)sharedRemoteEstimatedBandwidth;
-(unsigned)sharedEstimatedBandwidthUncapped;
-(unsigned)sharedEstimatedBandwidth;
-(void)setEstimatedBandwidthCap:(unsigned)arg1 ;
-(void)setExpectedBitrate:(unsigned)arg1 ;
-(unsigned)estimatedBandwidthCap;
-(unsigned)expectedBitrate;
-(SCD_Struct_AV29)getVCStatisticsWithType:(int)arg1 time:(double)arg2 ;
-(void)processVCStatisticsInternal:(SCD_Struct_AV29)arg1 ;
-(void)drainAndProcessVCStatistics:(SCD_Struct_AV29)arg1 ;
-(void)addStatisticsHistory:(SCD_Struct_AV29*)arg1 ;
-(void)computeOtherStatistics:(SCD_Struct_AV29*)arg1 ;
-(void)addEntriesFromStatistics:(SCD_Struct_AV29)arg1 ;
-(void)updateMaxLocalBurstyLoss:(unsigned)arg1 ;
-(void)updatePacketReceivedCount:(SCD_Struct_AV29*)arg1 ;
-(void)computeBWEstimation:(SCD_Struct_AV29*)arg1 ;
-(void)recordRemoteEstimatedBandwidthForLargeFrameInfo:(SCD_Struct_AV29*)arg1 ;
-(void)updateLocalEstimatedBandwidth;
-(void)computeOWRDEstimation:(SCD_Struct_AV29*)arg1 ;
-(void)addPacketLossInfo:(SCD_Struct_AV29*)arg1 ;
-(void)addActualBitrateInfo:(SCD_Struct_AV29*)arg1 ;
-(void)addRoundTripTimeInfo:(SCD_Struct_AV29*)arg1 ;
-(void)addMostBurstyLossInfo:(SCD_Struct_AV29*)arg1 ;
-(void)addAFRCActualBitrate:(SCD_Struct_AV29*)arg1 ;
@end

