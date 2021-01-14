/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/MediaCapture/H10ISP.mediacapture
*/

#import <H10ISP.mediacapture/H10ISP.mediacapture-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDImageSignalProcessorProjectorUsage : PBCodable <NSCopying> {

	unsigned long long _denseHighPower;
	unsigned long long _denseLowPower;
	unsigned long long _flood;
	unsigned long long _probeA;
	unsigned long long _probeB;
	unsigned long long _sparseHighPower;
	unsigned long long _sparseLowPower;
	unsigned long long _standby;
	unsigned long long _timestamp;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDenseHighPower; 
@property (assign,nonatomic) unsigned long long denseHighPower;               //@synthesize denseHighPower=_denseHighPower - In the implementation block
@property (assign,nonatomic) BOOL hasDenseLowPower; 
@property (assign,nonatomic) unsigned long long denseLowPower;                //@synthesize denseLowPower=_denseLowPower - In the implementation block
@property (assign,nonatomic) BOOL hasSparseHighPower; 
@property (assign,nonatomic) unsigned long long sparseHighPower;              //@synthesize sparseHighPower=_sparseHighPower - In the implementation block
@property (assign,nonatomic) BOOL hasSparseLowPower; 
@property (assign,nonatomic) unsigned long long sparseLowPower;               //@synthesize sparseLowPower=_sparseLowPower - In the implementation block
@property (assign,nonatomic) BOOL hasFlood; 
@property (assign,nonatomic) unsigned long long flood;                        //@synthesize flood=_flood - In the implementation block
@property (assign,nonatomic) BOOL hasProbeA; 
@property (assign,nonatomic) unsigned long long probeA;                       //@synthesize probeA=_probeA - In the implementation block
@property (assign,nonatomic) BOOL hasProbeB; 
@property (assign,nonatomic) unsigned long long probeB;                       //@synthesize probeB=_probeB - In the implementation block
@property (assign,nonatomic) BOOL hasStandby; 
@property (assign,nonatomic) unsigned long long standby;                      //@synthesize standby=_standby - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)flood;
-(id)description;
-(unsigned long long)standby;
-(unsigned long long)probeA;
-(unsigned long long)probeB;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setStandby:(unsigned long long)arg1 ;
-(void)setDenseHighPower:(unsigned long long)arg1 ;
-(void)setHasDenseHighPower:(BOOL)arg1 ;
-(BOOL)hasDenseHighPower;
-(void)setDenseLowPower:(unsigned long long)arg1 ;
-(void)setHasDenseLowPower:(BOOL)arg1 ;
-(BOOL)hasDenseLowPower;
-(void)setSparseHighPower:(unsigned long long)arg1 ;
-(void)setHasSparseHighPower:(BOOL)arg1 ;
-(BOOL)hasSparseHighPower;
-(void)setSparseLowPower:(unsigned long long)arg1 ;
-(void)setHasSparseLowPower:(BOOL)arg1 ;
-(BOOL)hasSparseLowPower;
-(void)setFlood:(unsigned long long)arg1 ;
-(void)setHasFlood:(BOOL)arg1 ;
-(BOOL)hasFlood;
-(void)setProbeA:(unsigned long long)arg1 ;
-(void)setHasProbeA:(BOOL)arg1 ;
-(BOOL)hasProbeA;
-(void)setProbeB:(unsigned long long)arg1 ;
-(void)setHasProbeB:(BOOL)arg1 ;
-(BOOL)hasProbeB;
-(void)setHasStandby:(BOOL)arg1 ;
-(BOOL)hasStandby;
-(unsigned long long)denseHighPower;
-(unsigned long long)denseLowPower;
-(unsigned long long)sparseHighPower;
-(unsigned long long)sparseLowPower;
@end

