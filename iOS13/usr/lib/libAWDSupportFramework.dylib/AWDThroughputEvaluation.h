/*
* Generated on Monday, March 1, 2021 at 2:35:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDThroughputEvaluation : PBCodable <NSCopying> {

	long long _wifiRssi;
	unsigned _actualHighBandwidth;
	unsigned _actualLowBandwidth;
	unsigned _badDecisionsCounterVIBE;
	unsigned _badDecisionsCounterVO;
	unsigned _bcnPer;
	int _btRssi;
	unsigned _bufferInterval;
	unsigned _cca;
	int _cellRsrp;
	int _cellSinr;
	unsigned _cmDataSentCount;
	unsigned _cmDataSentDuration;
	unsigned _cmEstimatedBandwidth;
	unsigned _decisionVIBE;
	unsigned _decisionVO;
	int _deviation;
	unsigned _devicePointOfInterest;
	unsigned _estimatedHighBandwidth;
	unsigned _estimatedLowBandwidth;
	unsigned _event;
	unsigned _expectedThroughputVIBE;
	unsigned _expectedThroughputVO;
	unsigned _goodDecisionsCounterVIBE;
	unsigned _goodDecisionsCounterVO;
	unsigned _invalidDecisionsCounterVIBE;
	unsigned _invalidDecisionsCounterVO;
	int _lqmScoreBT;
	int _lqmScoreWifi;
	int _lqmScorecellular;
	unsigned _maxOfActualLowBandwidth;
	unsigned _movingAvgHighBandwidth;
	unsigned _movingAvgLowBandwidth;
	unsigned _packetLifetimeVIBE;
	unsigned _packetLossRateVIBE;
	unsigned _phyRate;
	unsigned _pkgLifeTimeVO;
	unsigned _pktLifeTimeVO;
	unsigned _pktLossRateVO;
	unsigned _qbssLoad;
	NSString* _ratType;
	unsigned _rrcState;
	unsigned _rxRetransmissionRate;
	unsigned _rxRetry;
	unsigned _txRetransmissionRate;
	unsigned _txber;
	unsigned _videoStreamingStallTime;
	unsigned _weightedAveragePhyrateRx;
	unsigned _weightedAveragePhyrateTx;
	unsigned _weightedAverageRssi;
	unsigned _weightedAverageSnr;
	int _wifiSinr;
	unsigned _wrmRecommendedRAT;
	SCD_Struct_AW44 _has;

}

@property (assign,nonatomic) BOOL hasEvent; 
@property (assign,nonatomic) unsigned event;                                    //@synthesize event=_event - In the implementation block
@property (assign,nonatomic) BOOL hasBufferInterval; 
@property (assign,nonatomic) unsigned bufferInterval;                           //@synthesize bufferInterval=_bufferInterval - In the implementation block
@property (assign,nonatomic) BOOL hasWifiRssi; 
@property (assign,nonatomic) long long wifiRssi;                                //@synthesize wifiRssi=_wifiRssi - In the implementation block
@property (assign,nonatomic) BOOL hasPhyRate; 
@property (assign,nonatomic) unsigned phyRate;                                  //@synthesize phyRate=_phyRate - In the implementation block
@property (assign,nonatomic) BOOL hasQbssLoad; 
@property (assign,nonatomic) unsigned qbssLoad;                                 //@synthesize qbssLoad=_qbssLoad - In the implementation block
@property (assign,nonatomic) BOOL hasCca; 
@property (assign,nonatomic) unsigned cca;                                      //@synthesize cca=_cca - In the implementation block
@property (assign,nonatomic) BOOL hasBcnPer; 
@property (assign,nonatomic) unsigned bcnPer;                                   //@synthesize bcnPer=_bcnPer - In the implementation block
@property (assign,nonatomic) BOOL hasExpectedThroughputVO; 
@property (assign,nonatomic) unsigned expectedThroughputVO;                     //@synthesize expectedThroughputVO=_expectedThroughputVO - In the implementation block
@property (assign,nonatomic) BOOL hasWifiSinr; 
@property (assign,nonatomic) int wifiSinr;                                      //@synthesize wifiSinr=_wifiSinr - In the implementation block
@property (assign,nonatomic) BOOL hasPktLifeTimeVO; 
@property (assign,nonatomic) unsigned pktLifeTimeVO;                            //@synthesize pktLifeTimeVO=_pktLifeTimeVO - In the implementation block
@property (assign,nonatomic) BOOL hasPktLossRateVO; 
@property (assign,nonatomic) unsigned pktLossRateVO;                            //@synthesize pktLossRateVO=_pktLossRateVO - In the implementation block
@property (assign,nonatomic) BOOL hasLqmScoreWifi; 
@property (assign,nonatomic) int lqmScoreWifi;                                  //@synthesize lqmScoreWifi=_lqmScoreWifi - In the implementation block
@property (assign,nonatomic) BOOL hasPacketLossRateVIBE; 
@property (assign,nonatomic) unsigned packetLossRateVIBE;                       //@synthesize packetLossRateVIBE=_packetLossRateVIBE - In the implementation block
@property (assign,nonatomic) BOOL hasExpectedThroughputVIBE; 
@property (assign,nonatomic) unsigned expectedThroughputVIBE;                   //@synthesize expectedThroughputVIBE=_expectedThroughputVIBE - In the implementation block
@property (assign,nonatomic) BOOL hasPacketLifetimeVIBE; 
@property (assign,nonatomic) unsigned packetLifetimeVIBE;                       //@synthesize packetLifetimeVIBE=_packetLifetimeVIBE - In the implementation block
@property (assign,nonatomic) BOOL hasBadDecisionsCounterVO; 
@property (assign,nonatomic) unsigned badDecisionsCounterVO;                    //@synthesize badDecisionsCounterVO=_badDecisionsCounterVO - In the implementation block
@property (assign,nonatomic) BOOL hasGoodDecisionsCounterVO; 
@property (assign,nonatomic) unsigned goodDecisionsCounterVO;                   //@synthesize goodDecisionsCounterVO=_goodDecisionsCounterVO - In the implementation block
@property (assign,nonatomic) BOOL hasInvalidDecisionsCounterVO; 
@property (assign,nonatomic) unsigned invalidDecisionsCounterVO;                //@synthesize invalidDecisionsCounterVO=_invalidDecisionsCounterVO - In the implementation block
@property (assign,nonatomic) BOOL hasBadDecisionsCounterVIBE; 
@property (assign,nonatomic) unsigned badDecisionsCounterVIBE;                  //@synthesize badDecisionsCounterVIBE=_badDecisionsCounterVIBE - In the implementation block
@property (assign,nonatomic) BOOL hasGoodDecisionsCounterVIBE; 
@property (assign,nonatomic) unsigned goodDecisionsCounterVIBE;                 //@synthesize goodDecisionsCounterVIBE=_goodDecisionsCounterVIBE - In the implementation block
@property (assign,nonatomic) BOOL hasInvalidDecisionsCounterVIBE; 
@property (assign,nonatomic) unsigned invalidDecisionsCounterVIBE;              //@synthesize invalidDecisionsCounterVIBE=_invalidDecisionsCounterVIBE - In the implementation block
@property (assign,nonatomic) BOOL hasLqmScorecellular; 
@property (assign,nonatomic) int lqmScorecellular;                              //@synthesize lqmScorecellular=_lqmScorecellular - In the implementation block
@property (nonatomic,readonly) BOOL hasRatType; 
@property (nonatomic,retain) NSString * ratType;                                //@synthesize ratType=_ratType - In the implementation block
@property (assign,nonatomic) BOOL hasCellRsrp; 
@property (assign,nonatomic) int cellRsrp;                                      //@synthesize cellRsrp=_cellRsrp - In the implementation block
@property (assign,nonatomic) BOOL hasCellSinr; 
@property (assign,nonatomic) int cellSinr;                                      //@synthesize cellSinr=_cellSinr - In the implementation block
@property (assign,nonatomic) BOOL hasBtRssi; 
@property (assign,nonatomic) int btRssi;                                        //@synthesize btRssi=_btRssi - In the implementation block
@property (assign,nonatomic) BOOL hasTxRetransmissionRate; 
@property (assign,nonatomic) unsigned txRetransmissionRate;                     //@synthesize txRetransmissionRate=_txRetransmissionRate - In the implementation block
@property (assign,nonatomic) BOOL hasRxRetransmissionRate; 
@property (assign,nonatomic) unsigned rxRetransmissionRate;                     //@synthesize rxRetransmissionRate=_rxRetransmissionRate - In the implementation block
@property (assign,nonatomic) BOOL hasLqmScoreBT; 
@property (assign,nonatomic) int lqmScoreBT;                                    //@synthesize lqmScoreBT=_lqmScoreBT - In the implementation block
@property (assign,nonatomic) BOOL hasWrmRecommendedRAT; 
@property (assign,nonatomic) unsigned wrmRecommendedRAT;                        //@synthesize wrmRecommendedRAT=_wrmRecommendedRAT - In the implementation block
@property (assign,nonatomic) BOOL hasActualLowBandwidth; 
@property (assign,nonatomic) unsigned actualLowBandwidth;                       //@synthesize actualLowBandwidth=_actualLowBandwidth - In the implementation block
@property (assign,nonatomic) BOOL hasActualHighBandwidth; 
@property (assign,nonatomic) unsigned actualHighBandwidth;                      //@synthesize actualHighBandwidth=_actualHighBandwidth - In the implementation block
@property (assign,nonatomic) BOOL hasEstimatedLowBandwidth; 
@property (assign,nonatomic) unsigned estimatedLowBandwidth;                    //@synthesize estimatedLowBandwidth=_estimatedLowBandwidth - In the implementation block
@property (assign,nonatomic) BOOL hasEstimatedHighBandwidth; 
@property (assign,nonatomic) unsigned estimatedHighBandwidth;                   //@synthesize estimatedHighBandwidth=_estimatedHighBandwidth - In the implementation block
@property (assign,nonatomic) BOOL hasMovingAvgLowBandwidth; 
@property (assign,nonatomic) unsigned movingAvgLowBandwidth;                    //@synthesize movingAvgLowBandwidth=_movingAvgLowBandwidth - In the implementation block
@property (assign,nonatomic) BOOL hasMovingAvgHighBandwidth; 
@property (assign,nonatomic) unsigned movingAvgHighBandwidth;                   //@synthesize movingAvgHighBandwidth=_movingAvgHighBandwidth - In the implementation block
@property (assign,nonatomic) BOOL hasDeviation; 
@property (assign,nonatomic) int deviation;                                     //@synthesize deviation=_deviation - In the implementation block
@property (assign,nonatomic) BOOL hasMaxOfActualLowBandwidth; 
@property (assign,nonatomic) unsigned maxOfActualLowBandwidth;                  //@synthesize maxOfActualLowBandwidth=_maxOfActualLowBandwidth - In the implementation block
@property (assign,nonatomic) BOOL hasPkgLifeTimeVO; 
@property (assign,nonatomic) unsigned pkgLifeTimeVO;                            //@synthesize pkgLifeTimeVO=_pkgLifeTimeVO - In the implementation block
@property (assign,nonatomic) BOOL hasDecisionVO; 
@property (assign,nonatomic) unsigned decisionVO;                               //@synthesize decisionVO=_decisionVO - In the implementation block
@property (assign,nonatomic) BOOL hasDecisionVIBE; 
@property (assign,nonatomic) unsigned decisionVIBE;                             //@synthesize decisionVIBE=_decisionVIBE - In the implementation block
@property (assign,nonatomic) BOOL hasVideoStreamingStallTime; 
@property (assign,nonatomic) unsigned videoStreamingStallTime;                  //@synthesize videoStreamingStallTime=_videoStreamingStallTime - In the implementation block
@property (assign,nonatomic) BOOL hasTxber; 
@property (assign,nonatomic) unsigned txber;                                    //@synthesize txber=_txber - In the implementation block
@property (assign,nonatomic) BOOL hasRxRetry; 
@property (assign,nonatomic) unsigned rxRetry;                                  //@synthesize rxRetry=_rxRetry - In the implementation block
@property (assign,nonatomic) BOOL hasWeightedAveragePhyrateTx; 
@property (assign,nonatomic) unsigned weightedAveragePhyrateTx;                 //@synthesize weightedAveragePhyrateTx=_weightedAveragePhyrateTx - In the implementation block
@property (assign,nonatomic) BOOL hasWeightedAveragePhyrateRx; 
@property (assign,nonatomic) unsigned weightedAveragePhyrateRx;                 //@synthesize weightedAveragePhyrateRx=_weightedAveragePhyrateRx - In the implementation block
@property (assign,nonatomic) BOOL hasWeightedAverageRssi; 
@property (assign,nonatomic) unsigned weightedAverageRssi;                      //@synthesize weightedAverageRssi=_weightedAverageRssi - In the implementation block
@property (assign,nonatomic) BOOL hasWeightedAverageSnr; 
@property (assign,nonatomic) unsigned weightedAverageSnr;                       //@synthesize weightedAverageSnr=_weightedAverageSnr - In the implementation block
@property (assign,nonatomic) BOOL hasCmDataSentCount; 
@property (assign,nonatomic) unsigned cmDataSentCount;                          //@synthesize cmDataSentCount=_cmDataSentCount - In the implementation block
@property (assign,nonatomic) BOOL hasCmDataSentDuration; 
@property (assign,nonatomic) unsigned cmDataSentDuration;                       //@synthesize cmDataSentDuration=_cmDataSentDuration - In the implementation block
@property (assign,nonatomic) BOOL hasCmEstimatedBandwidth; 
@property (assign,nonatomic) unsigned cmEstimatedBandwidth;                     //@synthesize cmEstimatedBandwidth=_cmEstimatedBandwidth - In the implementation block
@property (assign,nonatomic) BOOL hasDevicePointOfInterest; 
@property (assign,nonatomic) unsigned devicePointOfInterest;                    //@synthesize devicePointOfInterest=_devicePointOfInterest - In the implementation block
@property (assign,nonatomic) BOOL hasRrcState; 
@property (assign,nonatomic) unsigned rrcState;                                 //@synthesize rrcState=_rrcState - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(unsigned)event;
-(void)setEvent:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setWifiRssi:(long long)arg1 ;
-(void)setHasWifiRssi:(BOOL)arg1 ;
-(BOOL)hasWifiRssi;
-(long long)wifiRssi;
-(unsigned)cca;
-(void)setCca:(unsigned)arg1 ;
-(void)setHasCca:(BOOL)arg1 ;
-(BOOL)hasCca;
-(BOOL)hasEvent;
-(void)setHasEvent:(BOOL)arg1 ;
-(int)deviation;
-(unsigned)rrcState;
-(void)setRrcState:(unsigned)arg1 ;
-(void)setHasRrcState:(BOOL)arg1 ;
-(BOOL)hasRrcState;
-(void)setExpectedThroughputVIBE:(unsigned)arg1 ;
-(void)setPacketLifetimeVIBE:(unsigned)arg1 ;
-(void)setPacketLossRateVIBE:(unsigned)arg1 ;
-(unsigned)expectedThroughputVIBE;
-(unsigned)packetLifetimeVIBE;
-(unsigned)packetLossRateVIBE;
-(void)setHasExpectedThroughputVIBE:(BOOL)arg1 ;
-(BOOL)hasExpectedThroughputVIBE;
-(void)setHasPacketLifetimeVIBE:(BOOL)arg1 ;
-(BOOL)hasPacketLifetimeVIBE;
-(void)setHasPacketLossRateVIBE:(BOOL)arg1 ;
-(BOOL)hasPacketLossRateVIBE;
-(void)setBtRssi:(int)arg1 ;
-(void)setHasBtRssi:(BOOL)arg1 ;
-(BOOL)hasBtRssi;
-(int)btRssi;
-(void)setRatType:(NSString *)arg1 ;
-(void)setBufferInterval:(unsigned)arg1 ;
-(void)setHasBufferInterval:(BOOL)arg1 ;
-(BOOL)hasBufferInterval;
-(void)setPhyRate:(unsigned)arg1 ;
-(void)setHasPhyRate:(BOOL)arg1 ;
-(BOOL)hasPhyRate;
-(void)setQbssLoad:(unsigned)arg1 ;
-(void)setHasQbssLoad:(BOOL)arg1 ;
-(BOOL)hasQbssLoad;
-(void)setBcnPer:(unsigned)arg1 ;
-(void)setHasBcnPer:(BOOL)arg1 ;
-(BOOL)hasBcnPer;
-(void)setExpectedThroughputVO:(unsigned)arg1 ;
-(void)setHasExpectedThroughputVO:(BOOL)arg1 ;
-(BOOL)hasExpectedThroughputVO;
-(void)setWifiSinr:(int)arg1 ;
-(void)setHasWifiSinr:(BOOL)arg1 ;
-(BOOL)hasWifiSinr;
-(void)setPktLifeTimeVO:(unsigned)arg1 ;
-(void)setHasPktLifeTimeVO:(BOOL)arg1 ;
-(BOOL)hasPktLifeTimeVO;
-(void)setPktLossRateVO:(unsigned)arg1 ;
-(void)setHasPktLossRateVO:(BOOL)arg1 ;
-(BOOL)hasPktLossRateVO;
-(void)setLqmScoreWifi:(int)arg1 ;
-(void)setHasLqmScoreWifi:(BOOL)arg1 ;
-(BOOL)hasLqmScoreWifi;
-(void)setBadDecisionsCounterVO:(unsigned)arg1 ;
-(void)setHasBadDecisionsCounterVO:(BOOL)arg1 ;
-(BOOL)hasBadDecisionsCounterVO;
-(void)setGoodDecisionsCounterVO:(unsigned)arg1 ;
-(void)setHasGoodDecisionsCounterVO:(BOOL)arg1 ;
-(BOOL)hasGoodDecisionsCounterVO;
-(void)setInvalidDecisionsCounterVO:(unsigned)arg1 ;
-(void)setHasInvalidDecisionsCounterVO:(BOOL)arg1 ;
-(BOOL)hasInvalidDecisionsCounterVO;
-(void)setBadDecisionsCounterVIBE:(unsigned)arg1 ;
-(void)setHasBadDecisionsCounterVIBE:(BOOL)arg1 ;
-(BOOL)hasBadDecisionsCounterVIBE;
-(void)setGoodDecisionsCounterVIBE:(unsigned)arg1 ;
-(void)setHasGoodDecisionsCounterVIBE:(BOOL)arg1 ;
-(BOOL)hasGoodDecisionsCounterVIBE;
-(void)setInvalidDecisionsCounterVIBE:(unsigned)arg1 ;
-(void)setHasInvalidDecisionsCounterVIBE:(BOOL)arg1 ;
-(BOOL)hasInvalidDecisionsCounterVIBE;
-(void)setLqmScorecellular:(int)arg1 ;
-(void)setHasLqmScorecellular:(BOOL)arg1 ;
-(BOOL)hasLqmScorecellular;
-(BOOL)hasRatType;
-(void)setCellRsrp:(int)arg1 ;
-(void)setHasCellRsrp:(BOOL)arg1 ;
-(BOOL)hasCellRsrp;
-(void)setCellSinr:(int)arg1 ;
-(void)setHasCellSinr:(BOOL)arg1 ;
-(BOOL)hasCellSinr;
-(void)setTxRetransmissionRate:(unsigned)arg1 ;
-(void)setHasTxRetransmissionRate:(BOOL)arg1 ;
-(BOOL)hasTxRetransmissionRate;
-(void)setRxRetransmissionRate:(unsigned)arg1 ;
-(void)setHasRxRetransmissionRate:(BOOL)arg1 ;
-(BOOL)hasRxRetransmissionRate;
-(void)setLqmScoreBT:(int)arg1 ;
-(void)setHasLqmScoreBT:(BOOL)arg1 ;
-(BOOL)hasLqmScoreBT;
-(void)setWrmRecommendedRAT:(unsigned)arg1 ;
-(void)setHasWrmRecommendedRAT:(BOOL)arg1 ;
-(BOOL)hasWrmRecommendedRAT;
-(void)setActualLowBandwidth:(unsigned)arg1 ;
-(void)setHasActualLowBandwidth:(BOOL)arg1 ;
-(BOOL)hasActualLowBandwidth;
-(void)setActualHighBandwidth:(unsigned)arg1 ;
-(void)setHasActualHighBandwidth:(BOOL)arg1 ;
-(BOOL)hasActualHighBandwidth;
-(void)setEstimatedLowBandwidth:(unsigned)arg1 ;
-(void)setHasEstimatedLowBandwidth:(BOOL)arg1 ;
-(BOOL)hasEstimatedLowBandwidth;
-(void)setEstimatedHighBandwidth:(unsigned)arg1 ;
-(void)setHasEstimatedHighBandwidth:(BOOL)arg1 ;
-(BOOL)hasEstimatedHighBandwidth;
-(void)setMovingAvgLowBandwidth:(unsigned)arg1 ;
-(void)setHasMovingAvgLowBandwidth:(BOOL)arg1 ;
-(BOOL)hasMovingAvgLowBandwidth;
-(void)setMovingAvgHighBandwidth:(unsigned)arg1 ;
-(void)setHasMovingAvgHighBandwidth:(BOOL)arg1 ;
-(BOOL)hasMovingAvgHighBandwidth;
-(void)setDeviation:(int)arg1 ;
-(void)setHasDeviation:(BOOL)arg1 ;
-(BOOL)hasDeviation;
-(void)setMaxOfActualLowBandwidth:(unsigned)arg1 ;
-(void)setHasMaxOfActualLowBandwidth:(BOOL)arg1 ;
-(BOOL)hasMaxOfActualLowBandwidth;
-(void)setPkgLifeTimeVO:(unsigned)arg1 ;
-(void)setHasPkgLifeTimeVO:(BOOL)arg1 ;
-(BOOL)hasPkgLifeTimeVO;
-(void)setDecisionVO:(unsigned)arg1 ;
-(void)setHasDecisionVO:(BOOL)arg1 ;
-(BOOL)hasDecisionVO;
-(void)setDecisionVIBE:(unsigned)arg1 ;
-(void)setHasDecisionVIBE:(BOOL)arg1 ;
-(BOOL)hasDecisionVIBE;
-(void)setVideoStreamingStallTime:(unsigned)arg1 ;
-(void)setHasVideoStreamingStallTime:(BOOL)arg1 ;
-(BOOL)hasVideoStreamingStallTime;
-(void)setTxber:(unsigned)arg1 ;
-(void)setHasTxber:(BOOL)arg1 ;
-(BOOL)hasTxber;
-(void)setRxRetry:(unsigned)arg1 ;
-(void)setHasRxRetry:(BOOL)arg1 ;
-(BOOL)hasRxRetry;
-(void)setWeightedAveragePhyrateTx:(unsigned)arg1 ;
-(void)setHasWeightedAveragePhyrateTx:(BOOL)arg1 ;
-(BOOL)hasWeightedAveragePhyrateTx;
-(void)setWeightedAveragePhyrateRx:(unsigned)arg1 ;
-(void)setHasWeightedAveragePhyrateRx:(BOOL)arg1 ;
-(BOOL)hasWeightedAveragePhyrateRx;
-(void)setWeightedAverageRssi:(unsigned)arg1 ;
-(void)setHasWeightedAverageRssi:(BOOL)arg1 ;
-(BOOL)hasWeightedAverageRssi;
-(void)setWeightedAverageSnr:(unsigned)arg1 ;
-(void)setHasWeightedAverageSnr:(BOOL)arg1 ;
-(BOOL)hasWeightedAverageSnr;
-(void)setCmDataSentCount:(unsigned)arg1 ;
-(void)setHasCmDataSentCount:(BOOL)arg1 ;
-(BOOL)hasCmDataSentCount;
-(void)setCmDataSentDuration:(unsigned)arg1 ;
-(void)setHasCmDataSentDuration:(BOOL)arg1 ;
-(BOOL)hasCmDataSentDuration;
-(void)setCmEstimatedBandwidth:(unsigned)arg1 ;
-(void)setHasCmEstimatedBandwidth:(BOOL)arg1 ;
-(BOOL)hasCmEstimatedBandwidth;
-(void)setDevicePointOfInterest:(unsigned)arg1 ;
-(void)setHasDevicePointOfInterest:(BOOL)arg1 ;
-(BOOL)hasDevicePointOfInterest;
-(unsigned)bufferInterval;
-(unsigned)phyRate;
-(unsigned)qbssLoad;
-(unsigned)bcnPer;
-(unsigned)expectedThroughputVO;
-(int)wifiSinr;
-(unsigned)pktLifeTimeVO;
-(unsigned)pktLossRateVO;
-(int)lqmScoreWifi;
-(unsigned)badDecisionsCounterVO;
-(unsigned)goodDecisionsCounterVO;
-(unsigned)invalidDecisionsCounterVO;
-(unsigned)badDecisionsCounterVIBE;
-(unsigned)goodDecisionsCounterVIBE;
-(unsigned)invalidDecisionsCounterVIBE;
-(int)lqmScorecellular;
-(NSString *)ratType;
-(int)cellRsrp;
-(int)cellSinr;
-(unsigned)txRetransmissionRate;
-(unsigned)rxRetransmissionRate;
-(int)lqmScoreBT;
-(unsigned)wrmRecommendedRAT;
-(unsigned)actualLowBandwidth;
-(unsigned)actualHighBandwidth;
-(unsigned)estimatedLowBandwidth;
-(unsigned)estimatedHighBandwidth;
-(unsigned)movingAvgLowBandwidth;
-(unsigned)movingAvgHighBandwidth;
-(unsigned)maxOfActualLowBandwidth;
-(unsigned)pkgLifeTimeVO;
-(unsigned)decisionVO;
-(unsigned)decisionVIBE;
-(unsigned)videoStreamingStallTime;
-(unsigned)txber;
-(unsigned)rxRetry;
-(unsigned)weightedAveragePhyrateTx;
-(unsigned)weightedAveragePhyrateRx;
-(unsigned)weightedAverageRssi;
-(unsigned)weightedAverageSnr;
-(unsigned)cmDataSentCount;
-(unsigned)cmDataSentDuration;
-(unsigned)cmEstimatedBandwidth;
-(unsigned)devicePointOfInterest;
@end

