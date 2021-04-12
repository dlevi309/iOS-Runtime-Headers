/*
* Generated on Monday, March 1, 2021 at 2:35:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AWDWiFiMetricsManagerRoamStatus : PBCodable <NSCopying> {

	unsigned long long _associatedDur;
	unsigned long long _originBcnPer;
	unsigned long long _originFwTxPer;
	unsigned long long _originTxPer;
	unsigned long long _timestamp;
	unsigned _ccaInt;
	unsigned _ccaOthers;
	unsigned _ccaSelf;
	unsigned _ccaTotal;
	unsigned _flags;
	unsigned _hostReason;
	unsigned _latency;
	unsigned _motionState;
	unsigned _offChannelDt;
	unsigned _originAKMs;
	unsigned _originChannel;
	unsigned _originEnhancedSecurityType;
	NSData* _originOui;
	unsigned _originPhyMode;
	int _originRssi;
	unsigned _profileType;
	unsigned _reason;
	unsigned _roamScanDuration;
	unsigned _securityType;
	unsigned _status;
	unsigned _targetAKMs;
	unsigned _targetChannel;
	unsigned _targetEnhancedSecurityType;
	NSData* _targetOui;
	unsigned _targetPhyMode;
	int _targetRssi;
	BOOL _lateRoam;
	BOOL _voipActive;
	SCD_Struct_AW41 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasLatency; 
@property (assign,nonatomic) unsigned latency;                                 //@synthesize latency=_latency - In the implementation block
@property (assign,nonatomic) BOOL hasProfileType; 
@property (assign,nonatomic) unsigned profileType;                             //@synthesize profileType=_profileType - In the implementation block
@property (assign,nonatomic) BOOL hasSecurityType; 
@property (assign,nonatomic) unsigned securityType;                            //@synthesize securityType=_securityType - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) unsigned status;                                  //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL hasReason; 
@property (assign,nonatomic) unsigned reason;                                  //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) BOOL hasOriginRssi; 
@property (assign,nonatomic) int originRssi;                                   //@synthesize originRssi=_originRssi - In the implementation block
@property (assign,nonatomic) BOOL hasTargetRssi; 
@property (assign,nonatomic) int targetRssi;                                   //@synthesize targetRssi=_targetRssi - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginOui; 
@property (nonatomic,retain) NSData * originOui;                               //@synthesize originOui=_originOui - In the implementation block
@property (nonatomic,readonly) BOOL hasTargetOui; 
@property (nonatomic,retain) NSData * targetOui;                               //@synthesize targetOui=_targetOui - In the implementation block
@property (assign,nonatomic) BOOL hasFlags; 
@property (assign,nonatomic) unsigned flags;                                   //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) BOOL hasOriginChannel; 
@property (assign,nonatomic) unsigned originChannel;                           //@synthesize originChannel=_originChannel - In the implementation block
@property (assign,nonatomic) BOOL hasTargetChannel; 
@property (assign,nonatomic) unsigned targetChannel;                           //@synthesize targetChannel=_targetChannel - In the implementation block
@property (assign,nonatomic) BOOL hasCcaTotal; 
@property (assign,nonatomic) unsigned ccaTotal;                                //@synthesize ccaTotal=_ccaTotal - In the implementation block
@property (assign,nonatomic) BOOL hasCcaSelf; 
@property (assign,nonatomic) unsigned ccaSelf;                                 //@synthesize ccaSelf=_ccaSelf - In the implementation block
@property (assign,nonatomic) BOOL hasCcaOthers; 
@property (assign,nonatomic) unsigned ccaOthers;                               //@synthesize ccaOthers=_ccaOthers - In the implementation block
@property (assign,nonatomic) BOOL hasCcaInt; 
@property (assign,nonatomic) unsigned ccaInt;                                  //@synthesize ccaInt=_ccaInt - In the implementation block
@property (assign,nonatomic) BOOL hasOriginTxPer; 
@property (assign,nonatomic) unsigned long long originTxPer;                   //@synthesize originTxPer=_originTxPer - In the implementation block
@property (assign,nonatomic) BOOL hasOffChannelDt; 
@property (assign,nonatomic) unsigned offChannelDt;                            //@synthesize offChannelDt=_offChannelDt - In the implementation block
@property (assign,nonatomic) BOOL hasRoamScanDuration; 
@property (assign,nonatomic) unsigned roamScanDuration;                        //@synthesize roamScanDuration=_roamScanDuration - In the implementation block
@property (assign,nonatomic) BOOL hasAssociatedDur; 
@property (assign,nonatomic) unsigned long long associatedDur;                 //@synthesize associatedDur=_associatedDur - In the implementation block
@property (assign,nonatomic) BOOL hasHostReason; 
@property (assign,nonatomic) unsigned hostReason;                              //@synthesize hostReason=_hostReason - In the implementation block
@property (assign,nonatomic) BOOL hasMotionState; 
@property (assign,nonatomic) unsigned motionState;                             //@synthesize motionState=_motionState - In the implementation block
@property (assign,nonatomic) BOOL hasVoipActive; 
@property (assign,nonatomic) BOOL voipActive;                                  //@synthesize voipActive=_voipActive - In the implementation block
@property (assign,nonatomic) BOOL hasLateRoam; 
@property (assign,nonatomic) BOOL lateRoam;                                    //@synthesize lateRoam=_lateRoam - In the implementation block
@property (assign,nonatomic) BOOL hasOriginBcnPer; 
@property (assign,nonatomic) unsigned long long originBcnPer;                  //@synthesize originBcnPer=_originBcnPer - In the implementation block
@property (assign,nonatomic) BOOL hasOriginFwTxPer; 
@property (assign,nonatomic) unsigned long long originFwTxPer;                 //@synthesize originFwTxPer=_originFwTxPer - In the implementation block
@property (assign,nonatomic) BOOL hasOriginEnhancedSecurityType; 
@property (assign,nonatomic) unsigned originEnhancedSecurityType;              //@synthesize originEnhancedSecurityType=_originEnhancedSecurityType - In the implementation block
@property (assign,nonatomic) BOOL hasTargetEnhancedSecurityType; 
@property (assign,nonatomic) unsigned targetEnhancedSecurityType;              //@synthesize targetEnhancedSecurityType=_targetEnhancedSecurityType - In the implementation block
@property (assign,nonatomic) BOOL hasOriginAKMs; 
@property (assign,nonatomic) unsigned originAKMs;                              //@synthesize originAKMs=_originAKMs - In the implementation block
@property (assign,nonatomic) BOOL hasTargetAKMs; 
@property (assign,nonatomic) unsigned targetAKMs;                              //@synthesize targetAKMs=_targetAKMs - In the implementation block
@property (assign,nonatomic) BOOL hasOriginPhyMode; 
@property (assign,nonatomic) unsigned originPhyMode;                           //@synthesize originPhyMode=_originPhyMode - In the implementation block
@property (assign,nonatomic) BOOL hasTargetPhyMode; 
@property (assign,nonatomic) unsigned targetPhyMode;                           //@synthesize targetPhyMode=_targetPhyMode - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)reason;
-(unsigned)flags;
-(id)dictionaryRepresentation;
-(unsigned)status;
-(unsigned long long)timestamp;
-(unsigned)latency;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setStatus:(unsigned)arg1 ;
-(void)setSecurityType:(unsigned)arg1 ;
-(unsigned)securityType;
-(void)setReason:(unsigned)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(void)setLatency:(unsigned)arg1 ;
-(void)setHasLatency:(BOOL)arg1 ;
-(BOOL)hasLatency;
-(BOOL)hasReason;
-(void)setHasReason:(BOOL)arg1 ;
-(unsigned)profileType;
-(void)setProfileType:(unsigned)arg1 ;
-(void)setHasSecurityType:(BOOL)arg1 ;
-(BOOL)hasSecurityType;
-(void)setMotionState:(unsigned)arg1 ;
-(unsigned)motionState;
-(void)setHasFlags:(BOOL)arg1 ;
-(BOOL)hasFlags;
-(void)setTargetChannel:(unsigned)arg1 ;
-(void)setHasTargetChannel:(BOOL)arg1 ;
-(BOOL)hasTargetChannel;
-(unsigned)targetChannel;
-(void)setOriginOui:(NSData *)arg1 ;
-(void)setTargetOui:(NSData *)arg1 ;
-(void)setHasProfileType:(BOOL)arg1 ;
-(BOOL)hasProfileType;
-(void)setOriginRssi:(int)arg1 ;
-(void)setHasOriginRssi:(BOOL)arg1 ;
-(BOOL)hasOriginRssi;
-(void)setTargetRssi:(int)arg1 ;
-(void)setHasTargetRssi:(BOOL)arg1 ;
-(BOOL)hasTargetRssi;
-(BOOL)hasOriginOui;
-(BOOL)hasTargetOui;
-(void)setOriginChannel:(unsigned)arg1 ;
-(void)setHasOriginChannel:(BOOL)arg1 ;
-(BOOL)hasOriginChannel;
-(void)setCcaTotal:(unsigned)arg1 ;
-(void)setHasCcaTotal:(BOOL)arg1 ;
-(BOOL)hasCcaTotal;
-(void)setCcaSelf:(unsigned)arg1 ;
-(void)setHasCcaSelf:(BOOL)arg1 ;
-(BOOL)hasCcaSelf;
-(void)setCcaOthers:(unsigned)arg1 ;
-(void)setHasCcaOthers:(BOOL)arg1 ;
-(BOOL)hasCcaOthers;
-(void)setCcaInt:(unsigned)arg1 ;
-(void)setHasCcaInt:(BOOL)arg1 ;
-(BOOL)hasCcaInt;
-(void)setOriginTxPer:(unsigned long long)arg1 ;
-(void)setHasOriginTxPer:(BOOL)arg1 ;
-(BOOL)hasOriginTxPer;
-(void)setOffChannelDt:(unsigned)arg1 ;
-(void)setHasOffChannelDt:(BOOL)arg1 ;
-(BOOL)hasOffChannelDt;
-(void)setRoamScanDuration:(unsigned)arg1 ;
-(void)setHasRoamScanDuration:(BOOL)arg1 ;
-(BOOL)hasRoamScanDuration;
-(void)setAssociatedDur:(unsigned long long)arg1 ;
-(void)setHasAssociatedDur:(BOOL)arg1 ;
-(BOOL)hasAssociatedDur;
-(void)setHostReason:(unsigned)arg1 ;
-(void)setHasHostReason:(BOOL)arg1 ;
-(BOOL)hasHostReason;
-(void)setHasMotionState:(BOOL)arg1 ;
-(BOOL)hasMotionState;
-(void)setVoipActive:(BOOL)arg1 ;
-(void)setHasVoipActive:(BOOL)arg1 ;
-(BOOL)hasVoipActive;
-(void)setLateRoam:(BOOL)arg1 ;
-(void)setHasLateRoam:(BOOL)arg1 ;
-(BOOL)hasLateRoam;
-(void)setOriginBcnPer:(unsigned long long)arg1 ;
-(void)setHasOriginBcnPer:(BOOL)arg1 ;
-(BOOL)hasOriginBcnPer;
-(void)setOriginFwTxPer:(unsigned long long)arg1 ;
-(void)setHasOriginFwTxPer:(BOOL)arg1 ;
-(BOOL)hasOriginFwTxPer;
-(void)setOriginEnhancedSecurityType:(unsigned)arg1 ;
-(void)setHasOriginEnhancedSecurityType:(BOOL)arg1 ;
-(BOOL)hasOriginEnhancedSecurityType;
-(void)setTargetEnhancedSecurityType:(unsigned)arg1 ;
-(void)setHasTargetEnhancedSecurityType:(BOOL)arg1 ;
-(BOOL)hasTargetEnhancedSecurityType;
-(void)setOriginAKMs:(unsigned)arg1 ;
-(void)setHasOriginAKMs:(BOOL)arg1 ;
-(BOOL)hasOriginAKMs;
-(void)setTargetAKMs:(unsigned)arg1 ;
-(void)setHasTargetAKMs:(BOOL)arg1 ;
-(BOOL)hasTargetAKMs;
-(void)setOriginPhyMode:(unsigned)arg1 ;
-(void)setHasOriginPhyMode:(BOOL)arg1 ;
-(BOOL)hasOriginPhyMode;
-(void)setTargetPhyMode:(unsigned)arg1 ;
-(void)setHasTargetPhyMode:(BOOL)arg1 ;
-(BOOL)hasTargetPhyMode;
-(int)originRssi;
-(int)targetRssi;
-(NSData *)originOui;
-(NSData *)targetOui;
-(unsigned)originChannel;
-(unsigned)ccaTotal;
-(unsigned)ccaSelf;
-(unsigned)ccaOthers;
-(unsigned)ccaInt;
-(unsigned long long)originTxPer;
-(unsigned)offChannelDt;
-(unsigned)roamScanDuration;
-(unsigned long long)associatedDur;
-(unsigned)hostReason;
-(BOOL)voipActive;
-(BOOL)lateRoam;
-(unsigned long long)originBcnPer;
-(unsigned long long)originFwTxPer;
-(unsigned)originEnhancedSecurityType;
-(unsigned)targetEnhancedSecurityType;
-(unsigned)originAKMs;
-(unsigned)targetAKMs;
-(unsigned)originPhyMode;
-(unsigned)targetPhyMode;
@end

