/*
* Generated on Thursday, January 14, 2021 at 2:29:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDWiFiMetricsManagerStateMachine;

@interface AWDWiFiMetricsManagerBTCoexStats : PBCodable <NSCopying> {

	SCD_Struct_AW24* _rxMPDUCountPerMCSs;
	SCD_Struct_AW24* _txMPDUCountPerMCSs;
	unsigned long long _antennaGrants;
	unsigned long long _antennaRequests;
	unsigned long long _beaconLostCnt;
	unsigned long long _envelopeLowToHighAccumulatedMsec;
	unsigned long long _guardTimeMicroseconds;
	unsigned long long _highUcodeLatency;
	unsigned long long _psRequestTxCnt;
	unsigned long long _psnullExceeded;
	unsigned long long _requestsA2DP;
	unsigned long long _requestsACL;
	unsigned long long _requestsBLE;
	unsigned long long _requestsBLEScan;
	unsigned long long _requestsInquiry;
	unsigned long long _requestsInquiryScan;
	unsigned long long _requestsMSS;
	unsigned long long _requestsOther;
	unsigned long long _requestsPARK;
	unsigned long long _requestsPage;
	unsigned long long _requestsPageScan;
	unsigned long long _requestsSCO;
	unsigned long long _requestsSniff;
	unsigned long long _requestseSCO;
	unsigned long long _resumeTimeAccumulatedMsec;
	unsigned long long _scoReservedSlotDenyCount;
	unsigned long long _scoRetransmission1DenyCount;
	unsigned long long _scoRetransmission2DenyCount;
	unsigned long long _timeTillResumeAccumulatedMsec;
	unsigned long long _timestamp;
	unsigned long long _txCTS2Self;
	unsigned long long _wlanPreempted;
	AWDWiFiMetricsManagerStateMachine* _antennaOwnership2BT;
	AWDWiFiMetricsManagerStateMachine* _antennaOwnership2WLAN;
	AWDWiFiMetricsManagerStateMachine* _enbledStateOff;
	AWDWiFiMetricsManagerStateMachine* _enbledStateOn;
	AWDWiFiMetricsManagerStateMachine* _hybridStateOff;
	AWDWiFiMetricsManagerStateMachine* _hybridStateOn;
	AWDWiFiMetricsManagerStateMachine* _tdmStateOff;
	AWDWiFiMetricsManagerStateMachine* _tdmStateOn;
	SCD_Struct_AW26 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                           //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasAntennaRequests; 
@property (assign,nonatomic) unsigned long long antennaRequests;                                     //@synthesize antennaRequests=_antennaRequests - In the implementation block
@property (assign,nonatomic) BOOL hasAntennaGrants; 
@property (assign,nonatomic) unsigned long long antennaGrants;                                       //@synthesize antennaGrants=_antennaGrants - In the implementation block
@property (assign,nonatomic) BOOL hasWlanPreempted; 
@property (assign,nonatomic) unsigned long long wlanPreempted;                                       //@synthesize wlanPreempted=_wlanPreempted - In the implementation block
@property (assign,nonatomic) BOOL hasPsnullExceeded; 
@property (assign,nonatomic) unsigned long long psnullExceeded;                                      //@synthesize psnullExceeded=_psnullExceeded - In the implementation block
@property (assign,nonatomic) BOOL hasHighUcodeLatency; 
@property (assign,nonatomic) unsigned long long highUcodeLatency;                                    //@synthesize highUcodeLatency=_highUcodeLatency - In the implementation block
@property (nonatomic,readonly) BOOL hasAntennaOwnership2BT; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * antennaOwnership2BT;                //@synthesize antennaOwnership2BT=_antennaOwnership2BT - In the implementation block
@property (nonatomic,readonly) BOOL hasAntennaOwnership2WLAN; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * antennaOwnership2WLAN;              //@synthesize antennaOwnership2WLAN=_antennaOwnership2WLAN - In the implementation block
@property (nonatomic,readonly) BOOL hasEnbledStateOn; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * enbledStateOn;                      //@synthesize enbledStateOn=_enbledStateOn - In the implementation block
@property (nonatomic,readonly) BOOL hasEnbledStateOff; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * enbledStateOff;                     //@synthesize enbledStateOff=_enbledStateOff - In the implementation block
@property (nonatomic,readonly) BOOL hasHybridStateOn; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * hybridStateOn;                      //@synthesize hybridStateOn=_hybridStateOn - In the implementation block
@property (nonatomic,readonly) BOOL hasHybridStateOff; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * hybridStateOff;                     //@synthesize hybridStateOff=_hybridStateOff - In the implementation block
@property (nonatomic,readonly) BOOL hasTdmStateOn; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * tdmStateOn;                         //@synthesize tdmStateOn=_tdmStateOn - In the implementation block
@property (nonatomic,readonly) BOOL hasTdmStateOff; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * tdmStateOff;                        //@synthesize tdmStateOff=_tdmStateOff - In the implementation block
@property (assign,nonatomic) BOOL hasRequestsACL; 
@property (assign,nonatomic) unsigned long long requestsACL;                                         //@synthesize requestsACL=_requestsACL - In the implementation block
@property (assign,nonatomic) BOOL hasRequestsSCO; 
@property (assign,nonatomic) unsigned long long requestsSCO;                                         //@synthesize requestsSCO=_requestsSCO - In the implementation block
@property (assign,nonatomic) BOOL hasRequestseSCO; 
@property (assign,nonatomic) unsigned long long requestseSCO;                                        //@synthesize requestseSCO=_requestseSCO - In the implementation block
@property (assign,nonatomic) BOOL hasRequestsA2DP; 
@property (assign,nonatomic) unsigned long long requestsA2DP;                                        //@synthesize requestsA2DP=_requestsA2DP - In the implementation block
@property (assign,nonatomic) BOOL hasRequestsSniff; 
@property (assign,nonatomic) unsigned long long requestsSniff;                                       //@synthesize requestsSniff=_requestsSniff - In the implementation block
@property (assign,nonatomic) BOOL hasRequestsPageScan; 
@property (assign,nonatomic) unsigned long long requestsPageScan;                                    //@synthesize requestsPageScan=_requestsPageScan - In the implementation block
@property (assign,nonatomic) BOOL hasRequestsInquiryScan; 
@property (assign,nonatomic) unsigned long long requestsInquiryScan;                                 //@synthesize requestsInquiryScan=_requestsInquiryScan - In the implementation block
@property (assign,nonatomic) BOOL hasRequestsPage; 
@property (assign,nonatomic) unsigned long long requestsPage;                                        //@synthesize requestsPage=_requestsPage - In the implementation block
@property (assign,nonatomic) BOOL hasRequestsInquiry; 
@property (assign,nonatomic) unsigned long long requestsInquiry;                                     //@synthesize requestsInquiry=_requestsInquiry - In the implementation block
@property (assign,nonatomic) BOOL hasRequestsBLE; 
@property (assign,nonatomic) unsigned long long requestsBLE;                                         //@synthesize requestsBLE=_requestsBLE - In the implementation block
@property (assign,nonatomic) BOOL hasRequestsOther; 
@property (assign,nonatomic) unsigned long long requestsOther;                                       //@synthesize requestsOther=_requestsOther - In the implementation block
@property (assign,nonatomic) BOOL hasRequestsBLEScan; 
@property (assign,nonatomic) unsigned long long requestsBLEScan;                                     //@synthesize requestsBLEScan=_requestsBLEScan - In the implementation block
@property (assign,nonatomic) BOOL hasRequestsMSS; 
@property (assign,nonatomic) unsigned long long requestsMSS;                                         //@synthesize requestsMSS=_requestsMSS - In the implementation block
@property (assign,nonatomic) BOOL hasRequestsPARK; 
@property (assign,nonatomic) unsigned long long requestsPARK;                                        //@synthesize requestsPARK=_requestsPARK - In the implementation block
@property (assign,nonatomic) BOOL hasBeaconLostCnt; 
@property (assign,nonatomic) unsigned long long beaconLostCnt;                                       //@synthesize beaconLostCnt=_beaconLostCnt - In the implementation block
@property (nonatomic,readonly) unsigned long long rxMPDUCountPerMCSsCount; 
@property (nonatomic,readonly) unsigned long long* rxMPDUCountPerMCSs; 
@property (nonatomic,readonly) unsigned long long txMPDUCountPerMCSsCount; 
@property (nonatomic,readonly) unsigned long long* txMPDUCountPerMCSs; 
@property (assign,nonatomic) BOOL hasTimeTillResumeAccumulatedMsec; 
@property (assign,nonatomic) unsigned long long timeTillResumeAccumulatedMsec;                       //@synthesize timeTillResumeAccumulatedMsec=_timeTillResumeAccumulatedMsec - In the implementation block
@property (assign,nonatomic) BOOL hasResumeTimeAccumulatedMsec; 
@property (assign,nonatomic) unsigned long long resumeTimeAccumulatedMsec;                           //@synthesize resumeTimeAccumulatedMsec=_resumeTimeAccumulatedMsec - In the implementation block
@property (assign,nonatomic) BOOL hasEnvelopeLowToHighAccumulatedMsec; 
@property (assign,nonatomic) unsigned long long envelopeLowToHighAccumulatedMsec;                    //@synthesize envelopeLowToHighAccumulatedMsec=_envelopeLowToHighAccumulatedMsec - In the implementation block
@property (assign,nonatomic) BOOL hasScoReservedSlotDenyCount; 
@property (assign,nonatomic) unsigned long long scoReservedSlotDenyCount;                            //@synthesize scoReservedSlotDenyCount=_scoReservedSlotDenyCount - In the implementation block
@property (assign,nonatomic) BOOL hasScoRetransmission1DenyCount; 
@property (assign,nonatomic) unsigned long long scoRetransmission1DenyCount;                         //@synthesize scoRetransmission1DenyCount=_scoRetransmission1DenyCount - In the implementation block
@property (assign,nonatomic) BOOL hasScoRetransmission2DenyCount; 
@property (assign,nonatomic) unsigned long long scoRetransmission2DenyCount;                         //@synthesize scoRetransmission2DenyCount=_scoRetransmission2DenyCount - In the implementation block
@property (assign,nonatomic) BOOL hasGuardTimeMicroseconds; 
@property (assign,nonatomic) unsigned long long guardTimeMicroseconds;                               //@synthesize guardTimeMicroseconds=_guardTimeMicroseconds - In the implementation block
@property (assign,nonatomic) BOOL hasPsRequestTxCnt; 
@property (assign,nonatomic) unsigned long long psRequestTxCnt;                                      //@synthesize psRequestTxCnt=_psRequestTxCnt - In the implementation block
@property (assign,nonatomic) BOOL hasTxCTS2Self; 
@property (assign,nonatomic) unsigned long long txCTS2Self;                                          //@synthesize txCTS2Self=_txCTS2Self - In the implementation block
-(id)dictionaryRepresentation;
-(void)setHasRequestsInquiry:(BOOL)arg1 ;
-(unsigned long long)requestsPageScan;
-(AWDWiFiMetricsManagerStateMachine *)hybridStateOn;
-(AWDWiFiMetricsManagerStateMachine *)enbledStateOff;
-(void)setHasRequestseSCO:(BOOL)arg1 ;
-(void)setHasRequestsBLE:(BOOL)arg1 ;
-(unsigned long long)rxMPDUCountPerMCSsCount;
-(unsigned long long)psRequestTxCnt;
-(BOOL)hasPsRequestTxCnt;
-(BOOL)hasRequestsACL;
-(BOOL)hasRequestsInquiryScan;
-(AWDWiFiMetricsManagerStateMachine *)enbledStateOn;
-(void)setHasRequestsSCO:(BOOL)arg1 ;
-(void)setHasWlanPreempted:(BOOL)arg1 ;
-(void)setRequestsPage:(unsigned long long)arg1 ;
-(void)setRequestseSCO:(unsigned long long)arg1 ;
-(BOOL)hasRequestsSCO;
-(void)setHasScoReservedSlotDenyCount:(BOOL)arg1 ;
-(void)setAntennaOwnership2WLAN:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setHasTimeTillResumeAccumulatedMsec:(BOOL)arg1 ;
-(unsigned long long)requestsA2DP;
-(void)setHasRequestsBLEScan:(BOOL)arg1 ;
-(AWDWiFiMetricsManagerStateMachine *)antennaOwnership2WLAN;
-(unsigned long long)timestamp;
-(void)setTdmStateOn:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(BOOL)hasTdmStateOn;
-(void)setTimeTillResumeAccumulatedMsec:(unsigned long long)arg1 ;
-(void)setRequestsBLE:(unsigned long long)arg1 ;
-(BOOL)hasGuardTimeMicroseconds;
-(unsigned long long)highUcodeLatency;
-(BOOL)hasHighUcodeLatency;
-(unsigned long long)scoReservedSlotDenyCount;
-(BOOL)hasAntennaGrants;
-(void)setHasRequestsInquiryScan:(BOOL)arg1 ;
-(unsigned long long)psnullExceeded;
-(unsigned long long*)rxMPDUCountPerMCSs;
-(unsigned long long)guardTimeMicroseconds;
-(void)setHybridStateOn:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setRequestsPageScan:(unsigned long long)arg1 ;
-(AWDWiFiMetricsManagerStateMachine *)tdmStateOff;
-(BOOL)hasScoRetransmission2DenyCount;
-(void)setWlanPreempted:(unsigned long long)arg1 ;
-(unsigned long long)requestsInquiry;
-(void)setTdmStateOff:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setHasScoRetransmission1DenyCount:(BOOL)arg1 ;
-(void)setHasGuardTimeMicroseconds:(BOOL)arg1 ;
-(BOOL)hasEnvelopeLowToHighAccumulatedMsec;
-(unsigned long long)txCTS2Self;
-(void)setHasRequestsSniff:(BOOL)arg1 ;
-(BOOL)hasResumeTimeAccumulatedMsec;
-(void)setTxMPDUCountPerMCSs:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(void)setHasScoRetransmission2DenyCount:(BOOL)arg1 ;
-(void)setRequestsSniff:(unsigned long long)arg1 ;
-(unsigned long long)requestsBLE;
-(BOOL)hasScoRetransmission1DenyCount;
-(AWDWiFiMetricsManagerStateMachine *)antennaOwnership2BT;
-(void)setRequestsA2DP:(unsigned long long)arg1 ;
-(id)description;
-(AWDWiFiMetricsManagerStateMachine *)tdmStateOn;
-(void)setScoReservedSlotDenyCount:(unsigned long long)arg1 ;
-(void)setRequestsBLEScan:(unsigned long long)arg1 ;
-(void)setScoRetransmission2DenyCount:(unsigned long long)arg1 ;
-(void)setBeaconLostCnt:(unsigned long long)arg1 ;
-(void)setRequestsSCO:(unsigned long long)arg1 ;
-(void)setHasRequestsACL:(BOOL)arg1 ;
-(BOOL)hasAntennaOwnership2WLAN;
-(void)setAntennaOwnership2BT:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setHasRequestsOther:(BOOL)arg1 ;
-(void)setHasRequestsPage:(BOOL)arg1 ;
-(BOOL)hasHybridStateOff;
-(void)setRequestsOther:(unsigned long long)arg1 ;
-(unsigned long long)beaconLostCnt;
-(BOOL)hasTdmStateOff;
-(unsigned long long)requestsMSS;
-(void)addRxMPDUCountPerMCS:(unsigned long long)arg1 ;
-(void)clearTxMPDUCountPerMCSs;
-(BOOL)hasRequestsSniff;
-(unsigned long long)requestsPage;
-(BOOL)hasRequestsPARK;
-(void)setEnvelopeLowToHighAccumulatedMsec:(unsigned long long)arg1 ;
-(unsigned long long)envelopeLowToHighAccumulatedMsec;
-(BOOL)hasHybridStateOn;
-(void)setAntennaRequests:(unsigned long long)arg1 ;
-(BOOL)hasRequestsA2DP;
-(void)setRequestsInquiryScan:(unsigned long long)arg1 ;
-(unsigned long long)requestsACL;
-(BOOL)hasRequestsBLEScan;
-(unsigned long long)antennaGrants;
-(void)setTxCTS2Self:(unsigned long long)arg1 ;
-(void)setScoRetransmission1DenyCount:(unsigned long long)arg1 ;
-(void)setPsRequestTxCnt:(unsigned long long)arg1 ;
-(unsigned long long)antennaRequests;
-(unsigned long long)rxMPDUCountPerMCSAtIndex:(unsigned long long)arg1 ;
-(void)setRxMPDUCountPerMCSs:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)requestsSCO;
-(void)setHasRequestsPARK:(BOOL)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasEnbledStateOff;
-(void)setHasPsnullExceeded:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)clearRxMPDUCountPerMCSs;
-(void)setAntennaGrants:(unsigned long long)arg1 ;
-(BOOL)hasScoReservedSlotDenyCount;
-(void)setHasPsRequestTxCnt:(BOOL)arg1 ;
-(BOOL)hasBeaconLostCnt;
-(unsigned long long)requestsBLEScan;
-(BOOL)hasTimestamp;
-(void)setHasEnvelopeLowToHighAccumulatedMsec:(BOOL)arg1 ;
-(void)setPsnullExceeded:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasAntennaRequests:(BOOL)arg1 ;
-(BOOL)hasRequestsOther;
-(unsigned long long)timeTillResumeAccumulatedMsec;
-(void)setRequestsInquiry:(unsigned long long)arg1 ;
-(BOOL)hasRequestsBLE;
-(unsigned long long*)txMPDUCountPerMCSs;
-(BOOL)hasAntennaRequests;
-(unsigned long long)txMPDUCountPerMCSsCount;
-(BOOL)hasRequestseSCO;
-(void)setHasResumeTimeAccumulatedMsec:(BOOL)arg1 ;
-(unsigned long long)requestsPARK;
-(void)setHasAntennaGrants:(BOOL)arg1 ;
-(unsigned long long)requestsSniff;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasPsnullExceeded;
-(void)writeTo:(id)arg1 ;
-(void)setRequestsPARK:(unsigned long long)arg1 ;
-(void)setHasRequestsPageScan:(BOOL)arg1 ;
-(void)setHasRequestsMSS:(BOOL)arg1 ;
-(unsigned long long)scoRetransmission1DenyCount;
-(unsigned long long)requestsInquiryScan;
-(void)setEnbledStateOff:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(unsigned long long)wlanPreempted;
-(void)setEnbledStateOn:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setHasBeaconLostCnt:(BOOL)arg1 ;
-(unsigned long long)scoRetransmission2DenyCount;
-(unsigned long long)requestseSCO;
-(void)setGuardTimeMicroseconds:(unsigned long long)arg1 ;
-(unsigned long long)txMPDUCountPerMCSAtIndex:(unsigned long long)arg1 ;
-(AWDWiFiMetricsManagerStateMachine *)hybridStateOff;
-(void)setHybridStateOff:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(BOOL)hasRequestsPageScan;
-(unsigned long long)requestsOther;
-(BOOL)hasRequestsInquiry;
-(BOOL)hasWlanPreempted;
-(BOOL)hasTxCTS2Self;
-(void)addTxMPDUCountPerMCS:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)hasAntennaOwnership2BT;
-(BOOL)hasEnbledStateOn;
-(void)setResumeTimeAccumulatedMsec:(unsigned long long)arg1 ;
-(void)setHasRequestsA2DP:(BOOL)arg1 ;
-(unsigned long long)resumeTimeAccumulatedMsec;
-(BOOL)hasRequestsPage;
-(void)setHighUcodeLatency:(unsigned long long)arg1 ;
-(void)setRequestsMSS:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setRequestsACL:(unsigned long long)arg1 ;
-(void)setHasTxCTS2Self:(BOOL)arg1 ;
-(BOOL)hasRequestsMSS;
-(BOOL)hasTimeTillResumeAccumulatedMsec;
-(void)setHasHighUcodeLatency:(BOOL)arg1 ;
@end

