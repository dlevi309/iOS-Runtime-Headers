/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_CL5 _has;

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
-(id)dictionaryRepresentation;
-(int)rscp;
-(int)uarfcn;
-(BOOL)hasPid;
-(BOOL)hasRscp;
-(int)pid;
-(void)setRscp:(int)arg1 ;
-(void)setRssi:(int)arg1 ;
-(int)ecn0;
-(void)setHasEcn0:(BOOL)arg1 ;
-(void)setHasUarfcn:(BOOL)arg1 ;
-(void)setHasRssi:(BOOL)arg1 ;
-(BOOL)hasEcn0;
-(BOOL)hasRssi;
-(void)setUarfcn:(int)arg1 ;
-(void)setEcn0:(int)arg1 ;
-(BOOL)hasUarfcn;
-(void)setHasPid:(BOOL)arg1 ;
-(int)rssi;
-(void)setHasRscp:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setPid:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

