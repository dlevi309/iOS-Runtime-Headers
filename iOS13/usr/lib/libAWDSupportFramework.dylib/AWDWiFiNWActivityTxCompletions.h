/*
* Generated on Monday, March 1, 2021 at 2:35:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiNWActivityTxCompletions : PBCodable <NSCopying> {

	unsigned _chipmodeerror;
	unsigned _expired;
	unsigned _internalerror;
	unsigned _ioerror;
	unsigned _mbfree;
	unsigned _noack;
	unsigned _nobuf;
	unsigned _noremotepeer;
	unsigned _noresources;
	unsigned _success;
	unsigned _txfailure;
	SCD_Struct_AW14 _has;

}

@property (assign,nonatomic) BOOL hasSuccess; 
@property (assign,nonatomic) unsigned success;                    //@synthesize success=_success - In the implementation block
@property (assign,nonatomic) BOOL hasExpired; 
@property (assign,nonatomic) unsigned expired;                    //@synthesize expired=_expired - In the implementation block
@property (assign,nonatomic) BOOL hasNobuf; 
@property (assign,nonatomic) unsigned nobuf;                      //@synthesize nobuf=_nobuf - In the implementation block
@property (assign,nonatomic) BOOL hasNoack; 
@property (assign,nonatomic) unsigned noack;                      //@synthesize noack=_noack - In the implementation block
@property (assign,nonatomic) BOOL hasTxfailure; 
@property (assign,nonatomic) unsigned txfailure;                  //@synthesize txfailure=_txfailure - In the implementation block
@property (assign,nonatomic) BOOL hasNoresources; 
@property (assign,nonatomic) unsigned noresources;                //@synthesize noresources=_noresources - In the implementation block
@property (assign,nonatomic) BOOL hasIoerror; 
@property (assign,nonatomic) unsigned ioerror;                    //@synthesize ioerror=_ioerror - In the implementation block
@property (assign,nonatomic) BOOL hasMbfree; 
@property (assign,nonatomic) unsigned mbfree;                     //@synthesize mbfree=_mbfree - In the implementation block
@property (assign,nonatomic) BOOL hasChipmodeerror; 
@property (assign,nonatomic) unsigned chipmodeerror;              //@synthesize chipmodeerror=_chipmodeerror - In the implementation block
@property (assign,nonatomic) BOOL hasNoremotepeer; 
@property (assign,nonatomic) unsigned noremotepeer;               //@synthesize noremotepeer=_noremotepeer - In the implementation block
@property (assign,nonatomic) BOOL hasInternalerror; 
@property (assign,nonatomic) unsigned internalerror;              //@synthesize internalerror=_internalerror - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)success;
-(void)setSuccess:(unsigned)arg1 ;
-(BOOL)hasExpired;
-(void)setExpired:(unsigned)arg1 ;
-(unsigned)expired;
-(BOOL)hasSuccess;
-(void)setHasSuccess:(BOOL)arg1 ;
-(void)setHasExpired:(BOOL)arg1 ;
-(void)setNobuf:(unsigned)arg1 ;
-(void)setHasNobuf:(BOOL)arg1 ;
-(BOOL)hasNobuf;
-(void)setNoack:(unsigned)arg1 ;
-(void)setHasNoack:(BOOL)arg1 ;
-(BOOL)hasNoack;
-(void)setTxfailure:(unsigned)arg1 ;
-(void)setHasTxfailure:(BOOL)arg1 ;
-(BOOL)hasTxfailure;
-(void)setNoresources:(unsigned)arg1 ;
-(void)setHasNoresources:(BOOL)arg1 ;
-(BOOL)hasNoresources;
-(void)setIoerror:(unsigned)arg1 ;
-(void)setHasIoerror:(BOOL)arg1 ;
-(BOOL)hasIoerror;
-(void)setMbfree:(unsigned)arg1 ;
-(void)setHasMbfree:(BOOL)arg1 ;
-(BOOL)hasMbfree;
-(void)setChipmodeerror:(unsigned)arg1 ;
-(void)setHasChipmodeerror:(BOOL)arg1 ;
-(BOOL)hasChipmodeerror;
-(void)setNoremotepeer:(unsigned)arg1 ;
-(void)setHasNoremotepeer:(BOOL)arg1 ;
-(BOOL)hasNoremotepeer;
-(void)setInternalerror:(unsigned)arg1 ;
-(void)setHasInternalerror:(BOOL)arg1 ;
-(BOOL)hasInternalerror;
-(unsigned)nobuf;
-(unsigned)noack;
-(unsigned)txfailure;
-(unsigned)noresources;
-(unsigned)ioerror;
-(unsigned)mbfree;
-(unsigned)chipmodeerror;
-(unsigned)noremotepeer;
-(unsigned)internalerror;
@end

