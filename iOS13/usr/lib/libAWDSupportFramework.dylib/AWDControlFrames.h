/*
* Generated on Monday, March 1, 2021 at 2:35:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDControlFrames : PBCodable <NSCopying> {

	unsigned long long _ack;
	unsigned long long _blockAck;
	unsigned long long _blockAckRequest;
	unsigned long long _cFend;
	unsigned long long _cFendCFack;
	unsigned long long _cts;
	unsigned long long _psPoll;
	unsigned long long _rts;
	SCD_Struct_AW13 _has;

}

@property (assign,nonatomic) BOOL hasBlockAckRequest; 
@property (assign,nonatomic) unsigned long long blockAckRequest;              //@synthesize blockAckRequest=_blockAckRequest - In the implementation block
@property (assign,nonatomic) BOOL hasBlockAck; 
@property (assign,nonatomic) unsigned long long blockAck;                     //@synthesize blockAck=_blockAck - In the implementation block
@property (assign,nonatomic) BOOL hasPsPoll; 
@property (assign,nonatomic) unsigned long long psPoll;                       //@synthesize psPoll=_psPoll - In the implementation block
@property (assign,nonatomic) BOOL hasRts; 
@property (assign,nonatomic) unsigned long long rts;                          //@synthesize rts=_rts - In the implementation block
@property (assign,nonatomic) BOOL hasCts; 
@property (assign,nonatomic) unsigned long long cts;                          //@synthesize cts=_cts - In the implementation block
@property (assign,nonatomic) BOOL hasAck; 
@property (assign,nonatomic) unsigned long long ack;                          //@synthesize ack=_ack - In the implementation block
@property (assign,nonatomic) BOOL hasCFend; 
@property (assign,nonatomic) unsigned long long cFend;                        //@synthesize cFend=_cFend - In the implementation block
@property (assign,nonatomic) BOOL hasCFendCFack; 
@property (assign,nonatomic) unsigned long long cFendCFack;                   //@synthesize cFendCFack=_cFendCFack - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)ack;
-(void)setCts:(unsigned long long)arg1 ;
-(void)setHasCts:(BOOL)arg1 ;
-(BOOL)hasCts;
-(unsigned long long)cts;
-(void)setAck:(unsigned long long)arg1 ;
-(void)setBlockAckRequest:(unsigned long long)arg1 ;
-(void)setHasBlockAckRequest:(BOOL)arg1 ;
-(BOOL)hasBlockAckRequest;
-(void)setBlockAck:(unsigned long long)arg1 ;
-(void)setHasBlockAck:(BOOL)arg1 ;
-(BOOL)hasBlockAck;
-(void)setPsPoll:(unsigned long long)arg1 ;
-(void)setHasPsPoll:(BOOL)arg1 ;
-(BOOL)hasPsPoll;
-(void)setRts:(unsigned long long)arg1 ;
-(void)setHasRts:(BOOL)arg1 ;
-(BOOL)hasRts;
-(void)setHasAck:(BOOL)arg1 ;
-(BOOL)hasAck;
-(void)setCFend:(unsigned long long)arg1 ;
-(void)setHasCFend:(BOOL)arg1 ;
-(BOOL)hasCFend;
-(void)setCFendCFack:(unsigned long long)arg1 ;
-(void)setHasCFendCFack:(BOOL)arg1 ;
-(BOOL)hasCFendCFack;
-(unsigned long long)blockAckRequest;
-(unsigned long long)blockAck;
-(unsigned long long)psPoll;
-(unsigned long long)rts;
-(unsigned long long)cFend;
-(unsigned long long)cFendCFack;
@end

