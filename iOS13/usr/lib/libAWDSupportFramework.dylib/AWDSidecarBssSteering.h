/*
* Generated on Monday, March 1, 2021 at 2:35:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDSidecarBssSteering : PBCodable <NSCopying> {

	unsigned _attemptPeerCount;
	unsigned _attemptStatus;
	unsigned _bssSyncChannel;
	unsigned _completionTime;
	unsigned _peerChannel;
	unsigned _policyCode;
	unsigned _selfInfraChannel;
	unsigned _targetChannel;
	unsigned _trafficType;
	SCD_Struct_AW12 _has;

}

@property (assign,nonatomic) BOOL hasTrafficType; 
@property (assign,nonatomic) unsigned trafficType;                   //@synthesize trafficType=_trafficType - In the implementation block
@property (assign,nonatomic) BOOL hasCompletionTime; 
@property (assign,nonatomic) unsigned completionTime;                //@synthesize completionTime=_completionTime - In the implementation block
@property (assign,nonatomic) BOOL hasAttemptStatus; 
@property (assign,nonatomic) unsigned attemptStatus;                 //@synthesize attemptStatus=_attemptStatus - In the implementation block
@property (assign,nonatomic) BOOL hasAttemptPeerCount; 
@property (assign,nonatomic) unsigned attemptPeerCount;              //@synthesize attemptPeerCount=_attemptPeerCount - In the implementation block
@property (assign,nonatomic) BOOL hasBssSyncChannel; 
@property (assign,nonatomic) unsigned bssSyncChannel;                //@synthesize bssSyncChannel=_bssSyncChannel - In the implementation block
@property (assign,nonatomic) BOOL hasPeerChannel; 
@property (assign,nonatomic) unsigned peerChannel;                   //@synthesize peerChannel=_peerChannel - In the implementation block
@property (assign,nonatomic) BOOL hasSelfInfraChannel; 
@property (assign,nonatomic) unsigned selfInfraChannel;              //@synthesize selfInfraChannel=_selfInfraChannel - In the implementation block
@property (assign,nonatomic) BOOL hasTargetChannel; 
@property (assign,nonatomic) unsigned targetChannel;                 //@synthesize targetChannel=_targetChannel - In the implementation block
@property (assign,nonatomic) BOOL hasPolicyCode; 
@property (assign,nonatomic) unsigned policyCode;                    //@synthesize policyCode=_policyCode - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTrafficType:(unsigned)arg1 ;
-(unsigned)trafficType;
-(void)setHasTrafficType:(BOOL)arg1 ;
-(BOOL)hasTrafficType;
-(unsigned)completionTime;
-(void)setCompletionTime:(unsigned)arg1 ;
-(void)setHasCompletionTime:(BOOL)arg1 ;
-(BOOL)hasCompletionTime;
-(void)setAttemptStatus:(unsigned)arg1 ;
-(void)setHasAttemptStatus:(BOOL)arg1 ;
-(BOOL)hasAttemptStatus;
-(void)setAttemptPeerCount:(unsigned)arg1 ;
-(void)setHasAttemptPeerCount:(BOOL)arg1 ;
-(BOOL)hasAttemptPeerCount;
-(void)setBssSyncChannel:(unsigned)arg1 ;
-(void)setHasBssSyncChannel:(BOOL)arg1 ;
-(BOOL)hasBssSyncChannel;
-(void)setPeerChannel:(unsigned)arg1 ;
-(void)setHasPeerChannel:(BOOL)arg1 ;
-(BOOL)hasPeerChannel;
-(void)setSelfInfraChannel:(unsigned)arg1 ;
-(void)setHasSelfInfraChannel:(BOOL)arg1 ;
-(BOOL)hasSelfInfraChannel;
-(void)setTargetChannel:(unsigned)arg1 ;
-(void)setHasTargetChannel:(BOOL)arg1 ;
-(BOOL)hasTargetChannel;
-(void)setPolicyCode:(unsigned)arg1 ;
-(void)setHasPolicyCode:(BOOL)arg1 ;
-(BOOL)hasPolicyCode;
-(unsigned)attemptStatus;
-(unsigned)attemptPeerCount;
-(unsigned)bssSyncChannel;
-(unsigned)peerChannel;
-(unsigned)selfInfraChannel;
-(unsigned)targetChannel;
-(unsigned)policyCode;
@end
