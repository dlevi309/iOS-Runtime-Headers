/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDSymptomsNetworkAnalyticsInstant : PBCodable <NSCopying> {

	unsigned long long _bytesIn;
	unsigned long long _bytesOut;
	unsigned long long _connAttempts;
	unsigned long long _connSuccess;
	unsigned long long _cumulInternetOutageSecs;
	unsigned long long _lastReportedL2TxFail;
	unsigned long long _lastReportedL2TxFrames;
	unsigned long long _lastReportedL2TxReTry;
	unsigned long long _packetsIn;
	unsigned long long _packetsOut;
	unsigned long long _rttMinUsecs;
	unsigned long long _timestamp;
	unsigned _arpThreshold;
	unsigned _dnsServers;
	NSString* _identifier;
	int _lastReportedLQM;
	unsigned _lastReportedRSSI;
	int _networkType;
	unsigned _penalizedDnsServers;
	unsigned _rxSignalThreshold;
	BOOL _arpThresholded;
	BOOL _hasInternetConn;
	BOOL _rxSignalThresholded;
	BOOL _supportsIPv4;
	BOOL _supportsIPv6;
	SCD_Struct_AW13 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                            //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasNetworkType; 
@property (assign,nonatomic) int networkType;                                         //@synthesize networkType=_networkType - In the implementation block
@property (assign,nonatomic) BOOL hasHasInternetConn; 
@property (assign,nonatomic) BOOL hasInternetConn;                                    //@synthesize hasInternetConn=_hasInternetConn - In the implementation block
@property (assign,nonatomic) BOOL hasCumulInternetOutageSecs; 
@property (assign,nonatomic) unsigned long long cumulInternetOutageSecs;              //@synthesize cumulInternetOutageSecs=_cumulInternetOutageSecs - In the implementation block
@property (assign,nonatomic) BOOL hasConnAttempts; 
@property (assign,nonatomic) unsigned long long connAttempts;                         //@synthesize connAttempts=_connAttempts - In the implementation block
@property (assign,nonatomic) BOOL hasConnSuccess; 
@property (assign,nonatomic) unsigned long long connSuccess;                          //@synthesize connSuccess=_connSuccess - In the implementation block
@property (assign,nonatomic) BOOL hasPacketsIn; 
@property (assign,nonatomic) unsigned long long packetsIn;                            //@synthesize packetsIn=_packetsIn - In the implementation block
@property (assign,nonatomic) BOOL hasPacketsOut; 
@property (assign,nonatomic) unsigned long long packetsOut;                           //@synthesize packetsOut=_packetsOut - In the implementation block
@property (assign,nonatomic) BOOL hasBytesIn; 
@property (assign,nonatomic) unsigned long long bytesIn;                              //@synthesize bytesIn=_bytesIn - In the implementation block
@property (assign,nonatomic) BOOL hasBytesOut; 
@property (assign,nonatomic) unsigned long long bytesOut;                             //@synthesize bytesOut=_bytesOut - In the implementation block
@property (assign,nonatomic) BOOL hasRttMinUsecs; 
@property (assign,nonatomic) unsigned long long rttMinUsecs;                          //@synthesize rttMinUsecs=_rttMinUsecs - In the implementation block
@property (assign,nonatomic) BOOL hasDnsServers; 
@property (assign,nonatomic) unsigned dnsServers;                                     //@synthesize dnsServers=_dnsServers - In the implementation block
@property (assign,nonatomic) BOOL hasPenalizedDnsServers; 
@property (assign,nonatomic) unsigned penalizedDnsServers;                            //@synthesize penalizedDnsServers=_penalizedDnsServers - In the implementation block
@property (assign,nonatomic) BOOL hasRxSignalThreshold; 
@property (assign,nonatomic) unsigned rxSignalThreshold;                              //@synthesize rxSignalThreshold=_rxSignalThreshold - In the implementation block
@property (assign,nonatomic) BOOL hasRxSignalThresholded; 
@property (assign,nonatomic) BOOL rxSignalThresholded;                                //@synthesize rxSignalThresholded=_rxSignalThresholded - In the implementation block
@property (assign,nonatomic) BOOL hasArpThreshold; 
@property (assign,nonatomic) unsigned arpThreshold;                                   //@synthesize arpThreshold=_arpThreshold - In the implementation block
@property (assign,nonatomic) BOOL hasArpThresholded; 
@property (assign,nonatomic) BOOL arpThresholded;                                     //@synthesize arpThresholded=_arpThresholded - In the implementation block
@property (assign,nonatomic) BOOL hasSupportsIPv4; 
@property (assign,nonatomic) BOOL supportsIPv4;                                       //@synthesize supportsIPv4=_supportsIPv4 - In the implementation block
@property (assign,nonatomic) BOOL hasSupportsIPv6; 
@property (assign,nonatomic) BOOL supportsIPv6;                                       //@synthesize supportsIPv6=_supportsIPv6 - In the implementation block
@property (assign,nonatomic) BOOL hasLastReportedRSSI; 
@property (assign,nonatomic) unsigned lastReportedRSSI;                               //@synthesize lastReportedRSSI=_lastReportedRSSI - In the implementation block
@property (assign,nonatomic) BOOL hasLastReportedLQM; 
@property (assign,nonatomic) int lastReportedLQM;                                     //@synthesize lastReportedLQM=_lastReportedLQM - In the implementation block
@property (assign,nonatomic) BOOL hasLastReportedL2TxFrames; 
@property (assign,nonatomic) unsigned long long lastReportedL2TxFrames;               //@synthesize lastReportedL2TxFrames=_lastReportedL2TxFrames - In the implementation block
@property (assign,nonatomic) BOOL hasLastReportedL2TxReTry; 
@property (assign,nonatomic) unsigned long long lastReportedL2TxReTry;                //@synthesize lastReportedL2TxReTry=_lastReportedL2TxReTry - In the implementation block
@property (assign,nonatomic) BOOL hasLastReportedL2TxFail; 
@property (assign,nonatomic) unsigned long long lastReportedL2TxFail;                 //@synthesize lastReportedL2TxFail=_lastReportedL2TxFail - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)networkType;
-(void)setNetworkType:(int)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setBytesIn:(unsigned long long)arg1 ;
-(void)setHasBytesIn:(BOOL)arg1 ;
-(BOOL)hasBytesIn;
-(void)setBytesOut:(unsigned long long)arg1 ;
-(void)setHasBytesOut:(BOOL)arg1 ;
-(BOOL)hasBytesOut;
-(void)setPacketsIn:(unsigned long long)arg1 ;
-(void)setHasPacketsIn:(BOOL)arg1 ;
-(BOOL)hasPacketsIn;
-(void)setPacketsOut:(unsigned long long)arg1 ;
-(void)setHasPacketsOut:(BOOL)arg1 ;
-(BOOL)hasPacketsOut;
-(unsigned long long)bytesIn;
-(unsigned long long)bytesOut;
-(unsigned long long)packetsIn;
-(unsigned long long)packetsOut;
-(unsigned)dnsServers;
-(BOOL)supportsIPv4;
-(BOOL)supportsIPv6;
-(BOOL)hasIdentifier;
-(void)setHasNetworkType:(BOOL)arg1 ;
-(BOOL)hasNetworkType;
-(id)networkTypeAsString:(int)arg1 ;
-(int)StringAsNetworkType:(id)arg1 ;
-(void)setLastReportedRSSI:(unsigned)arg1 ;
-(void)setHasLastReportedRSSI:(BOOL)arg1 ;
-(BOOL)hasLastReportedRSSI;
-(unsigned)lastReportedRSSI;
-(void)setConnAttempts:(unsigned long long)arg1 ;
-(unsigned long long)connAttempts;
-(void)setHasConnAttempts:(BOOL)arg1 ;
-(BOOL)hasConnAttempts;
-(void)setConnSuccess:(unsigned long long)arg1 ;
-(void)setHasConnSuccess:(BOOL)arg1 ;
-(BOOL)hasConnSuccess;
-(unsigned long long)connSuccess;
-(void)setDnsServers:(unsigned)arg1 ;
-(void)setHasDnsServers:(BOOL)arg1 ;
-(BOOL)hasDnsServers;
-(void)setHasInternetConn:(BOOL)arg1 ;
-(void)setHasHasInternetConn:(BOOL)arg1 ;
-(BOOL)hasHasInternetConn;
-(void)setCumulInternetOutageSecs:(unsigned long long)arg1 ;
-(void)setHasCumulInternetOutageSecs:(BOOL)arg1 ;
-(BOOL)hasCumulInternetOutageSecs;
-(void)setRttMinUsecs:(unsigned long long)arg1 ;
-(void)setHasRttMinUsecs:(BOOL)arg1 ;
-(BOOL)hasRttMinUsecs;
-(void)setPenalizedDnsServers:(unsigned)arg1 ;
-(void)setHasPenalizedDnsServers:(BOOL)arg1 ;
-(BOOL)hasPenalizedDnsServers;
-(void)setRxSignalThreshold:(unsigned)arg1 ;
-(void)setHasRxSignalThreshold:(BOOL)arg1 ;
-(BOOL)hasRxSignalThreshold;
-(void)setRxSignalThresholded:(BOOL)arg1 ;
-(void)setHasRxSignalThresholded:(BOOL)arg1 ;
-(BOOL)hasRxSignalThresholded;
-(void)setArpThreshold:(unsigned)arg1 ;
-(void)setHasArpThreshold:(BOOL)arg1 ;
-(BOOL)hasArpThreshold;
-(void)setArpThresholded:(BOOL)arg1 ;
-(void)setHasArpThresholded:(BOOL)arg1 ;
-(BOOL)hasArpThresholded;
-(void)setSupportsIPv4:(BOOL)arg1 ;
-(void)setHasSupportsIPv4:(BOOL)arg1 ;
-(BOOL)hasSupportsIPv4;
-(void)setSupportsIPv6:(BOOL)arg1 ;
-(void)setHasSupportsIPv6:(BOOL)arg1 ;
-(BOOL)hasSupportsIPv6;
-(void)setLastReportedLQM:(int)arg1 ;
-(void)setHasLastReportedLQM:(BOOL)arg1 ;
-(BOOL)hasLastReportedLQM;
-(void)setLastReportedL2TxFrames:(unsigned long long)arg1 ;
-(void)setHasLastReportedL2TxFrames:(BOOL)arg1 ;
-(BOOL)hasLastReportedL2TxFrames;
-(void)setLastReportedL2TxReTry:(unsigned long long)arg1 ;
-(void)setHasLastReportedL2TxReTry:(BOOL)arg1 ;
-(BOOL)hasLastReportedL2TxReTry;
-(void)setLastReportedL2TxFail:(unsigned long long)arg1 ;
-(void)setHasLastReportedL2TxFail:(BOOL)arg1 ;
-(BOOL)hasLastReportedL2TxFail;
-(BOOL)hasInternetConn;
-(unsigned long long)cumulInternetOutageSecs;
-(unsigned long long)rttMinUsecs;
-(unsigned)penalizedDnsServers;
-(unsigned)rxSignalThreshold;
-(BOOL)rxSignalThresholded;
-(unsigned)arpThreshold;
-(BOOL)arpThresholded;
-(int)lastReportedLQM;
-(unsigned long long)lastReportedL2TxFrames;
-(unsigned long long)lastReportedL2TxReTry;
-(unsigned long long)lastReportedL2TxFail;
@end

