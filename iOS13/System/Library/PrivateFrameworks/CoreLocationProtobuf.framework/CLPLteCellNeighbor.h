/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CLPLteCellNeighbor : PBCodable <NSCopying> {

	int _ecn0;
	int _pid;
	int _rscp;
	int _rssi;
	int _uarfcn;
	SCD_Struct_CL4 _has;

}

@property (assign,nonatomic) BOOL hasUarfcn; 
@property (assign,nonatomic) int uarfcn;                  //@synthesize uarfcn=_uarfcn - In the implementation block
@property (assign,nonatomic) BOOL hasPid; 
@property (assign,nonatomic) int pid;                     //@synthesize pid=_pid - In the implementation block
@property (assign,nonatomic) BOOL hasRssi; 
@property (assign,nonatomic) int rssi;                    //@synthesize rssi=_rssi - In the implementation block
@property (assign,nonatomic) BOOL hasEcn0; 
@property (assign,nonatomic) int ecn0;                    //@synthesize ecn0=_ecn0 - In the implementation block
@property (assign,nonatomic) BOOL hasRscp; 
@property (assign,nonatomic) int rscp;                    //@synthesize rscp=_rscp - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setPid:(int)arg1 ;
-(int)pid;
-(int)rssi;
-(int)rscp;
-(int)ecn0;
-(void)setRssi:(int)arg1 ;
-(void)setRscp:(int)arg1 ;
-(void)setEcn0:(int)arg1 ;
-(void)setHasRssi:(BOOL)arg1 ;
-(BOOL)hasRssi;
-(void)setHasPid:(BOOL)arg1 ;
-(BOOL)hasPid;
-(void)setHasEcn0:(BOOL)arg1 ;
-(BOOL)hasEcn0;
-(void)setHasRscp:(BOOL)arg1 ;
-(BOOL)hasRscp;
-(void)setUarfcn:(int)arg1 ;
-(void)setHasUarfcn:(BOOL)arg1 ;
-(BOOL)hasUarfcn;
-(int)uarfcn;
@end

