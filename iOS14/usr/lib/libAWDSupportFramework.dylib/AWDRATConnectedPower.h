/*
* Generated on Thursday, January 14, 2021 at 2:29:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDRATConnectedPower : PBCodable <NSCopying> {

	unsigned _powerConnSetupMicroWatt;
	unsigned _powerConnectedMicroWatt;
	int _rAT;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasRAT; 
@property (assign,nonatomic) int rAT;                                       //@synthesize rAT=_rAT - In the implementation block
@property (assign,nonatomic) BOOL hasPowerConnectedMicroWatt; 
@property (assign,nonatomic) unsigned powerConnectedMicroWatt;              //@synthesize powerConnectedMicroWatt=_powerConnectedMicroWatt - In the implementation block
@property (assign,nonatomic) BOOL hasPowerConnSetupMicroWatt; 
@property (assign,nonatomic) unsigned powerConnSetupMicroWatt;              //@synthesize powerConnSetupMicroWatt=_powerConnSetupMicroWatt - In the implementation block
-(id)dictionaryRepresentation;
-(int)rAT;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasRAT;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRAT:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPowerConnSetupMicroWatt:(unsigned)arg1 ;
-(void)setPowerConnectedMicroWatt:(unsigned)arg1 ;
-(void)setHasRAT:(BOOL)arg1 ;
-(id)rATAsString:(int)arg1 ;
-(int)StringAsRAT:(id)arg1 ;
-(void)setHasPowerConnectedMicroWatt:(BOOL)arg1 ;
-(BOOL)hasPowerConnectedMicroWatt;
-(void)setHasPowerConnSetupMicroWatt:(BOOL)arg1 ;
-(BOOL)hasPowerConnSetupMicroWatt;
-(unsigned)powerConnectedMicroWatt;
-(unsigned)powerConnSetupMicroWatt;
@end

