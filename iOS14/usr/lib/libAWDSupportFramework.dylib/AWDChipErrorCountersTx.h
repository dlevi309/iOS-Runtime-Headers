/*
* Generated on Thursday, January 14, 2021 at 2:29:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDChipErrorCountersTx : PBCodable <NSCopying> {

	unsigned long long _txchanrej;
	unsigned long long _txexptime;
	unsigned long long _txphycrs;
	unsigned long long _txphyerr;
	unsigned long long _txuflo;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTxuflo; 
@property (assign,nonatomic) unsigned long long txuflo;                 //@synthesize txuflo=_txuflo - In the implementation block
@property (assign,nonatomic) BOOL hasTxphyerr; 
@property (assign,nonatomic) unsigned long long txphyerr;               //@synthesize txphyerr=_txphyerr - In the implementation block
@property (assign,nonatomic) BOOL hasTxphycrs; 
@property (assign,nonatomic) unsigned long long txphycrs;               //@synthesize txphycrs=_txphycrs - In the implementation block
@property (assign,nonatomic) BOOL hasTxchanrej; 
@property (assign,nonatomic) unsigned long long txchanrej;              //@synthesize txchanrej=_txchanrej - In the implementation block
@property (assign,nonatomic) BOOL hasTxexptime; 
@property (assign,nonatomic) unsigned long long txexptime;              //@synthesize txexptime=_txexptime - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)txuflo;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTxuflo:(unsigned long long)arg1 ;
-(void)setHasTxuflo:(BOOL)arg1 ;
-(BOOL)hasTxuflo;
-(void)setTxphyerr:(unsigned long long)arg1 ;
-(void)setHasTxphyerr:(BOOL)arg1 ;
-(BOOL)hasTxphyerr;
-(void)setTxphycrs:(unsigned long long)arg1 ;
-(void)setHasTxphycrs:(BOOL)arg1 ;
-(BOOL)hasTxphycrs;
-(void)setTxchanrej:(unsigned long long)arg1 ;
-(void)setHasTxchanrej:(BOOL)arg1 ;
-(BOOL)hasTxchanrej;
-(void)setTxexptime:(unsigned long long)arg1 ;
-(void)setHasTxexptime:(BOOL)arg1 ;
-(BOOL)hasTxexptime;
-(unsigned long long)txphyerr;
-(unsigned long long)txphycrs;
-(unsigned long long)txchanrej;
-(unsigned long long)txexptime;
@end

