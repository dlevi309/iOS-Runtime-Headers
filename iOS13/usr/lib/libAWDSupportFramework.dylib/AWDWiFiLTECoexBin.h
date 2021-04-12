/*
* Generated on Monday, March 1, 2021 at 2:35:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiLTECoexBin : PBCodable <NSCopying> {

	unsigned long long _ctsnotrxafterrts;
	unsigned long long _rxframe;
	unsigned long long _rxrtry;
	unsigned long long _txassocreq;
	unsigned long long _txassocrsp;
	unsigned long long _txdeauth;
	unsigned long long _txframe;
	unsigned long long _txnocts;
	unsigned long long _txreassocreq;
	unsigned long long _txreassocrsp;
	unsigned long long _txretrans;
	unsigned long long _txrts;
	SCD_Struct_AW8 _has;

}

@property (assign,nonatomic) BOOL hasRxframe; 
@property (assign,nonatomic) unsigned long long rxframe;                       //@synthesize rxframe=_rxframe - In the implementation block
@property (assign,nonatomic) BOOL hasTxframe; 
@property (assign,nonatomic) unsigned long long txframe;                       //@synthesize txframe=_txframe - In the implementation block
@property (assign,nonatomic) BOOL hasRxrtry; 
@property (assign,nonatomic) unsigned long long rxrtry;                        //@synthesize rxrtry=_rxrtry - In the implementation block
@property (assign,nonatomic) BOOL hasTxretrans; 
@property (assign,nonatomic) unsigned long long txretrans;                     //@synthesize txretrans=_txretrans - In the implementation block
@property (assign,nonatomic) BOOL hasTxnocts; 
@property (assign,nonatomic) unsigned long long txnocts;                       //@synthesize txnocts=_txnocts - In the implementation block
@property (assign,nonatomic) BOOL hasTxrts; 
@property (assign,nonatomic) unsigned long long txrts;                         //@synthesize txrts=_txrts - In the implementation block
@property (assign,nonatomic) BOOL hasTxdeauth; 
@property (assign,nonatomic) unsigned long long txdeauth;                      //@synthesize txdeauth=_txdeauth - In the implementation block
@property (assign,nonatomic) BOOL hasTxassocreq; 
@property (assign,nonatomic) unsigned long long txassocreq;                    //@synthesize txassocreq=_txassocreq - In the implementation block
@property (assign,nonatomic) BOOL hasTxassocrsp; 
@property (assign,nonatomic) unsigned long long txassocrsp;                    //@synthesize txassocrsp=_txassocrsp - In the implementation block
@property (assign,nonatomic) BOOL hasTxreassocreq; 
@property (assign,nonatomic) unsigned long long txreassocreq;                  //@synthesize txreassocreq=_txreassocreq - In the implementation block
@property (assign,nonatomic) BOOL hasTxreassocrsp; 
@property (assign,nonatomic) unsigned long long txreassocrsp;                  //@synthesize txreassocrsp=_txreassocrsp - In the implementation block
@property (assign,nonatomic) BOOL hasCtsnotrxafterrts; 
@property (assign,nonatomic) unsigned long long ctsnotrxafterrts;              //@synthesize ctsnotrxafterrts=_ctsnotrxafterrts - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRxframe:(unsigned long long)arg1 ;
-(void)setHasRxframe:(BOOL)arg1 ;
-(BOOL)hasRxframe;
-(void)setRxrtry:(unsigned long long)arg1 ;
-(void)setHasRxrtry:(BOOL)arg1 ;
-(BOOL)hasRxrtry;
-(unsigned long long)rxframe;
-(unsigned long long)rxrtry;
-(void)setTxframe:(unsigned long long)arg1 ;
-(void)setHasTxframe:(BOOL)arg1 ;
-(BOOL)hasTxframe;
-(void)setTxretrans:(unsigned long long)arg1 ;
-(void)setHasTxretrans:(BOOL)arg1 ;
-(BOOL)hasTxretrans;
-(unsigned long long)txframe;
-(unsigned long long)txretrans;
-(void)setTxnocts:(unsigned long long)arg1 ;
-(void)setHasTxnocts:(BOOL)arg1 ;
-(BOOL)hasTxnocts;
-(void)setTxrts:(unsigned long long)arg1 ;
-(void)setHasTxrts:(BOOL)arg1 ;
-(BOOL)hasTxrts;
-(void)setTxdeauth:(unsigned long long)arg1 ;
-(void)setHasTxdeauth:(BOOL)arg1 ;
-(BOOL)hasTxdeauth;
-(void)setTxassocreq:(unsigned long long)arg1 ;
-(void)setHasTxassocreq:(BOOL)arg1 ;
-(BOOL)hasTxassocreq;
-(void)setTxassocrsp:(unsigned long long)arg1 ;
-(void)setHasTxassocrsp:(BOOL)arg1 ;
-(BOOL)hasTxassocrsp;
-(void)setTxreassocreq:(unsigned long long)arg1 ;
-(void)setHasTxreassocreq:(BOOL)arg1 ;
-(BOOL)hasTxreassocreq;
-(void)setTxreassocrsp:(unsigned long long)arg1 ;
-(void)setHasTxreassocrsp:(BOOL)arg1 ;
-(BOOL)hasTxreassocrsp;
-(void)setCtsnotrxafterrts:(unsigned long long)arg1 ;
-(void)setHasCtsnotrxafterrts:(BOOL)arg1 ;
-(BOOL)hasCtsnotrxafterrts;
-(unsigned long long)txnocts;
-(unsigned long long)txrts;
-(unsigned long long)txdeauth;
-(unsigned long long)txassocreq;
-(unsigned long long)txassocrsp;
-(unsigned long long)txreassocreq;
-(unsigned long long)txreassocrsp;
-(unsigned long long)ctsnotrxafterrts;
@end

