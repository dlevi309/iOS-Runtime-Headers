/*
* Generated on Monday, March 1, 2021 at 2:35:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWRMULCACoexStats : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _uLCACriCarDLBW;
	unsigned _uLCACriCarDLFreq;
	unsigned _uLCACriCarULBW;
	unsigned _uLCACriCarULFreq;
	unsigned _uLCAPriCarDLBW;
	unsigned _uLCAPriCarDLFreq;
	unsigned _uLCAPriCarULBW;
	unsigned _uLCAPriCarULFreq;
	BOOL _uLCAHasCoexBand;
	SCD_Struct_AW15 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasULCAHasCoexBand; 
@property (assign,nonatomic) BOOL uLCAHasCoexBand;                      //@synthesize uLCAHasCoexBand=_uLCAHasCoexBand - In the implementation block
@property (assign,nonatomic) BOOL hasULCAPriCarULFreq; 
@property (assign,nonatomic) unsigned uLCAPriCarULFreq;                 //@synthesize uLCAPriCarULFreq=_uLCAPriCarULFreq - In the implementation block
@property (assign,nonatomic) BOOL hasULCAPriCarDLFreq; 
@property (assign,nonatomic) unsigned uLCAPriCarDLFreq;                 //@synthesize uLCAPriCarDLFreq=_uLCAPriCarDLFreq - In the implementation block
@property (assign,nonatomic) BOOL hasULCAPriCarULBW; 
@property (assign,nonatomic) unsigned uLCAPriCarULBW;                   //@synthesize uLCAPriCarULBW=_uLCAPriCarULBW - In the implementation block
@property (assign,nonatomic) BOOL hasULCAPriCarDLBW; 
@property (assign,nonatomic) unsigned uLCAPriCarDLBW;                   //@synthesize uLCAPriCarDLBW=_uLCAPriCarDLBW - In the implementation block
@property (assign,nonatomic) BOOL hasULCACriCarULFreq; 
@property (assign,nonatomic) unsigned uLCACriCarULFreq;                 //@synthesize uLCACriCarULFreq=_uLCACriCarULFreq - In the implementation block
@property (assign,nonatomic) BOOL hasULCACriCarDLFreq; 
@property (assign,nonatomic) unsigned uLCACriCarDLFreq;                 //@synthesize uLCACriCarDLFreq=_uLCACriCarDLFreq - In the implementation block
@property (assign,nonatomic) BOOL hasULCACriCarULBW; 
@property (assign,nonatomic) unsigned uLCACriCarULBW;                   //@synthesize uLCACriCarULBW=_uLCACriCarULBW - In the implementation block
@property (assign,nonatomic) BOOL hasULCACriCarDLBW; 
@property (assign,nonatomic) unsigned uLCACriCarDLBW;                   //@synthesize uLCACriCarDLBW=_uLCACriCarDLBW - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setULCAHasCoexBand:(BOOL)arg1 ;
-(void)setHasULCAHasCoexBand:(BOOL)arg1 ;
-(BOOL)hasULCAHasCoexBand;
-(void)setULCAPriCarULFreq:(unsigned)arg1 ;
-(void)setHasULCAPriCarULFreq:(BOOL)arg1 ;
-(BOOL)hasULCAPriCarULFreq;
-(void)setULCAPriCarDLFreq:(unsigned)arg1 ;
-(void)setHasULCAPriCarDLFreq:(BOOL)arg1 ;
-(BOOL)hasULCAPriCarDLFreq;
-(void)setULCAPriCarULBW:(unsigned)arg1 ;
-(void)setHasULCAPriCarULBW:(BOOL)arg1 ;
-(BOOL)hasULCAPriCarULBW;
-(void)setULCAPriCarDLBW:(unsigned)arg1 ;
-(void)setHasULCAPriCarDLBW:(BOOL)arg1 ;
-(BOOL)hasULCAPriCarDLBW;
-(void)setULCACriCarULFreq:(unsigned)arg1 ;
-(void)setHasULCACriCarULFreq:(BOOL)arg1 ;
-(BOOL)hasULCACriCarULFreq;
-(void)setULCACriCarDLFreq:(unsigned)arg1 ;
-(void)setHasULCACriCarDLFreq:(BOOL)arg1 ;
-(BOOL)hasULCACriCarDLFreq;
-(void)setULCACriCarULBW:(unsigned)arg1 ;
-(void)setHasULCACriCarULBW:(BOOL)arg1 ;
-(BOOL)hasULCACriCarULBW;
-(void)setULCACriCarDLBW:(unsigned)arg1 ;
-(void)setHasULCACriCarDLBW:(BOOL)arg1 ;
-(BOOL)hasULCACriCarDLBW;
-(BOOL)uLCAHasCoexBand;
-(unsigned)uLCAPriCarULFreq;
-(unsigned)uLCAPriCarDLFreq;
-(unsigned)uLCAPriCarULBW;
-(unsigned)uLCAPriCarDLBW;
-(unsigned)uLCACriCarULFreq;
-(unsigned)uLCACriCarDLFreq;
-(unsigned)uLCACriCarULBW;
-(unsigned)uLCACriCarDLBW;
@end

