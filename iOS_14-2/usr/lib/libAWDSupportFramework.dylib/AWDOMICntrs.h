/*
* Generated on Thursday, January 14, 2021 at 2:29:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDOMICntrs : PBCodable <NSCopying> {

	unsigned _heOmitxDlmursdrec;
	unsigned _heOmitxDlmursdrecAck;
	unsigned _heOmitxDur;
	unsigned _heOmitxRetries;
	unsigned _heOmitxSched;
	unsigned _heOmitxSuccess;
	unsigned _heOmitxTxnsts;
	unsigned _heOmitxTxnstsAck;
	unsigned _heOmitxUlmucfg;
	unsigned _heOmitxUlmucfgAck;
	SCD_Struct_AW14 _has;

}

@property (assign,nonatomic) BOOL hasHeOmitxSched; 
@property (assign,nonatomic) unsigned heOmitxSched;                      //@synthesize heOmitxSched=_heOmitxSched - In the implementation block
@property (assign,nonatomic) BOOL hasHeOmitxSuccess; 
@property (assign,nonatomic) unsigned heOmitxSuccess;                    //@synthesize heOmitxSuccess=_heOmitxSuccess - In the implementation block
@property (assign,nonatomic) BOOL hasHeOmitxRetries; 
@property (assign,nonatomic) unsigned heOmitxRetries;                    //@synthesize heOmitxRetries=_heOmitxRetries - In the implementation block
@property (assign,nonatomic) BOOL hasHeOmitxDur; 
@property (assign,nonatomic) unsigned heOmitxDur;                        //@synthesize heOmitxDur=_heOmitxDur - In the implementation block
@property (assign,nonatomic) BOOL hasHeOmitxUlmucfg; 
@property (assign,nonatomic) unsigned heOmitxUlmucfg;                    //@synthesize heOmitxUlmucfg=_heOmitxUlmucfg - In the implementation block
@property (assign,nonatomic) BOOL hasHeOmitxUlmucfgAck; 
@property (assign,nonatomic) unsigned heOmitxUlmucfgAck;                 //@synthesize heOmitxUlmucfgAck=_heOmitxUlmucfgAck - In the implementation block
@property (assign,nonatomic) BOOL hasHeOmitxTxnsts; 
@property (assign,nonatomic) unsigned heOmitxTxnsts;                     //@synthesize heOmitxTxnsts=_heOmitxTxnsts - In the implementation block
@property (assign,nonatomic) BOOL hasHeOmitxTxnstsAck; 
@property (assign,nonatomic) unsigned heOmitxTxnstsAck;                  //@synthesize heOmitxTxnstsAck=_heOmitxTxnstsAck - In the implementation block
@property (assign,nonatomic) BOOL hasHeOmitxDlmursdrec; 
@property (assign,nonatomic) unsigned heOmitxDlmursdrec;                 //@synthesize heOmitxDlmursdrec=_heOmitxDlmursdrec - In the implementation block
@property (assign,nonatomic) BOOL hasHeOmitxDlmursdrecAck; 
@property (assign,nonatomic) unsigned heOmitxDlmursdrecAck;              //@synthesize heOmitxDlmursdrecAck=_heOmitxDlmursdrecAck - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHeOmitxSched:(unsigned)arg1 ;
-(void)setHasHeOmitxSched:(BOOL)arg1 ;
-(BOOL)hasHeOmitxSched;
-(void)setHeOmitxSuccess:(unsigned)arg1 ;
-(void)setHasHeOmitxSuccess:(BOOL)arg1 ;
-(BOOL)hasHeOmitxSuccess;
-(void)setHeOmitxRetries:(unsigned)arg1 ;
-(void)setHasHeOmitxRetries:(BOOL)arg1 ;
-(BOOL)hasHeOmitxRetries;
-(void)setHeOmitxDur:(unsigned)arg1 ;
-(void)setHasHeOmitxDur:(BOOL)arg1 ;
-(BOOL)hasHeOmitxDur;
-(void)setHeOmitxUlmucfg:(unsigned)arg1 ;
-(void)setHasHeOmitxUlmucfg:(BOOL)arg1 ;
-(BOOL)hasHeOmitxUlmucfg;
-(void)setHeOmitxUlmucfgAck:(unsigned)arg1 ;
-(void)setHasHeOmitxUlmucfgAck:(BOOL)arg1 ;
-(BOOL)hasHeOmitxUlmucfgAck;
-(void)setHeOmitxTxnsts:(unsigned)arg1 ;
-(void)setHasHeOmitxTxnsts:(BOOL)arg1 ;
-(BOOL)hasHeOmitxTxnsts;
-(void)setHeOmitxTxnstsAck:(unsigned)arg1 ;
-(void)setHasHeOmitxTxnstsAck:(BOOL)arg1 ;
-(BOOL)hasHeOmitxTxnstsAck;
-(void)setHeOmitxDlmursdrec:(unsigned)arg1 ;
-(void)setHasHeOmitxDlmursdrec:(BOOL)arg1 ;
-(BOOL)hasHeOmitxDlmursdrec;
-(void)setHeOmitxDlmursdrecAck:(unsigned)arg1 ;
-(void)setHasHeOmitxDlmursdrecAck:(BOOL)arg1 ;
-(BOOL)hasHeOmitxDlmursdrecAck;
-(unsigned)heOmitxSched;
-(unsigned)heOmitxSuccess;
-(unsigned)heOmitxRetries;
-(unsigned)heOmitxDur;
-(unsigned)heOmitxUlmucfg;
-(unsigned)heOmitxUlmucfgAck;
-(unsigned)heOmitxTxnsts;
-(unsigned)heOmitxTxnstsAck;
-(unsigned)heOmitxDlmursdrec;
-(unsigned)heOmitxDlmursdrecAck;
@end

