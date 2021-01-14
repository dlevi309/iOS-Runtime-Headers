/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CLPCdmaCellNeighbor : PBCodable <NSCopying> {

	int _channel;
	int _ecn0;
	int _pilotPhase;
	int _pnoffset;
	int _rscp;
	SCD_Struct_CL5 _has;

}

@property (assign,nonatomic) BOOL hasPnoffset; 
@property (assign,nonatomic) int pnoffset;                    //@synthesize pnoffset=_pnoffset - In the implementation block
@property (assign,nonatomic) BOOL hasPilotPhase; 
@property (assign,nonatomic) int pilotPhase;                  //@synthesize pilotPhase=_pilotPhase - In the implementation block
@property (assign,nonatomic) BOOL hasEcn0; 
@property (assign,nonatomic) int ecn0;                        //@synthesize ecn0=_ecn0 - In the implementation block
@property (assign,nonatomic) BOOL hasRscp; 
@property (assign,nonatomic) int rscp;                        //@synthesize rscp=_rscp - In the implementation block
@property (assign,nonatomic) BOOL hasChannel; 
@property (assign,nonatomic) int channel;                     //@synthesize channel=_channel - In the implementation block
-(id)dictionaryRepresentation;
-(int)rscp;
-(BOOL)hasRscp;
-(void)setRscp:(int)arg1 ;
-(int)ecn0;
-(void)setHasEcn0:(BOOL)arg1 ;
-(void)setHasChannel:(BOOL)arg1 ;
-(BOOL)hasEcn0;
-(void)setEcn0:(int)arg1 ;
-(void)setHasRscp:(BOOL)arg1 ;
-(void)setChannel:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)channel;
-(id)description;
-(BOOL)hasChannel;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPnoffset:(int)arg1 ;
-(void)setHasPnoffset:(BOOL)arg1 ;
-(BOOL)hasPnoffset;
-(void)setPilotPhase:(int)arg1 ;
-(void)setHasPilotPhase:(BOOL)arg1 ;
-(BOOL)hasPilotPhase;
-(int)pnoffset;
-(int)pilotPhase;
@end

