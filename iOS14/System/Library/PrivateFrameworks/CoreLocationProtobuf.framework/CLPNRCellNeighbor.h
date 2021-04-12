/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CLPNRCellNeighbor : PBCodable <NSCopying> {

	int _ecn0;
	int _nrarfcn;
	int _pid;
	int _rscp;
	int _rssi;
	unsigned _saOrNsaNeighbor;
	unsigned _scs;
	SCD_Struct_CL8 _has;

}

@property (assign,nonatomic) BOOL hasNrarfcn; 
@property (assign,nonatomic) int nrarfcn;                           //@synthesize nrarfcn=_nrarfcn - In the implementation block
@property (assign,nonatomic) BOOL hasPid; 
@property (assign,nonatomic) int pid;                               //@synthesize pid=_pid - In the implementation block
@property (assign,nonatomic) BOOL hasRssi; 
@property (assign,nonatomic) int rssi;                              //@synthesize rssi=_rssi - In the implementation block
@property (assign,nonatomic) BOOL hasEcn0; 
@property (assign,nonatomic) int ecn0;                              //@synthesize ecn0=_ecn0 - In the implementation block
@property (assign,nonatomic) BOOL hasRscp; 
@property (assign,nonatomic) int rscp;                              //@synthesize rscp=_rscp - In the implementation block
@property (assign,nonatomic) BOOL hasScs; 
@property (assign,nonatomic) unsigned scs;                          //@synthesize scs=_scs - In the implementation block
@property (assign,nonatomic) BOOL hasSaOrNsaNeighbor; 
@property (assign,nonatomic) unsigned saOrNsaNeighbor;              //@synthesize saOrNsaNeighbor=_saOrNsaNeighbor - In the implementation block
-(id)dictionaryRepresentation;
-(int)rscp;
-(unsigned)scs;
-(BOOL)hasPid;
-(BOOL)hasRscp;
-(int)pid;
-(void)setRscp:(int)arg1 ;
-(void)setRssi:(int)arg1 ;
-(int)ecn0;
-(void)setHasEcn0:(BOOL)arg1 ;
-(void)setHasRssi:(BOOL)arg1 ;
-(BOOL)hasEcn0;
-(BOOL)hasRssi;
-(void)setEcn0:(int)arg1 ;
-(void)setHasPid:(BOOL)arg1 ;
-(int)rssi;
-(void)setHasRscp:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasScs;
-(id)description;
-(unsigned long long)hash;
-(void)setScs:(unsigned)arg1 ;
-(int)nrarfcn;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setPid:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setNrarfcn:(int)arg1 ;
-(void)setHasNrarfcn:(BOOL)arg1 ;
-(BOOL)hasNrarfcn;
-(void)setHasScs:(BOOL)arg1 ;
-(void)setSaOrNsaNeighbor:(unsigned)arg1 ;
-(void)setHasSaOrNsaNeighbor:(BOOL)arg1 ;
-(BOOL)hasSaOrNsaNeighbor;
-(unsigned)saOrNsaNeighbor;
@end

