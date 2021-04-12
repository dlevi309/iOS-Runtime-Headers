/*
* Generated on Thursday, January 14, 2021 at 2:29:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiMetricActiveProbeStats : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _avgRTTLargePktSize;
	unsigned _avgRTTMediumPktSize;
	unsigned _avgRTTSmallPktSize;
	unsigned _maxRTTLargePktSize;
	unsigned _maxRTTMediumPktSize;
	unsigned _maxRTTSmallPktSize;
	unsigned _minRTTLargePktSize;
	unsigned _minRTTMediumPktSize;
	unsigned _minRTTSmallPktSize;
	unsigned _perLargePktSize;
	unsigned _perMediumPktSize;
	unsigned _perSmallPktSize;
	SCD_Struct_AW7 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasMinRTTSmallPktSize; 
@property (assign,nonatomic) unsigned minRTTSmallPktSize;               //@synthesize minRTTSmallPktSize=_minRTTSmallPktSize - In the implementation block
@property (assign,nonatomic) BOOL hasMaxRTTSmallPktSize; 
@property (assign,nonatomic) unsigned maxRTTSmallPktSize;               //@synthesize maxRTTSmallPktSize=_maxRTTSmallPktSize - In the implementation block
@property (assign,nonatomic) BOOL hasAvgRTTSmallPktSize; 
@property (assign,nonatomic) unsigned avgRTTSmallPktSize;               //@synthesize avgRTTSmallPktSize=_avgRTTSmallPktSize - In the implementation block
@property (assign,nonatomic) BOOL hasPerSmallPktSize; 
@property (assign,nonatomic) unsigned perSmallPktSize;                  //@synthesize perSmallPktSize=_perSmallPktSize - In the implementation block
@property (assign,nonatomic) BOOL hasMinRTTMediumPktSize; 
@property (assign,nonatomic) unsigned minRTTMediumPktSize;              //@synthesize minRTTMediumPktSize=_minRTTMediumPktSize - In the implementation block
@property (assign,nonatomic) BOOL hasMaxRTTMediumPktSize; 
@property (assign,nonatomic) unsigned maxRTTMediumPktSize;              //@synthesize maxRTTMediumPktSize=_maxRTTMediumPktSize - In the implementation block
@property (assign,nonatomic) BOOL hasAvgRTTMediumPktSize; 
@property (assign,nonatomic) unsigned avgRTTMediumPktSize;              //@synthesize avgRTTMediumPktSize=_avgRTTMediumPktSize - In the implementation block
@property (assign,nonatomic) BOOL hasPerMediumPktSize; 
@property (assign,nonatomic) unsigned perMediumPktSize;                 //@synthesize perMediumPktSize=_perMediumPktSize - In the implementation block
@property (assign,nonatomic) BOOL hasMinRTTLargePktSize; 
@property (assign,nonatomic) unsigned minRTTLargePktSize;               //@synthesize minRTTLargePktSize=_minRTTLargePktSize - In the implementation block
@property (assign,nonatomic) BOOL hasMaxRTTLargePktSize; 
@property (assign,nonatomic) unsigned maxRTTLargePktSize;               //@synthesize maxRTTLargePktSize=_maxRTTLargePktSize - In the implementation block
@property (assign,nonatomic) BOOL hasAvgRTTLargePktSize; 
@property (assign,nonatomic) unsigned avgRTTLargePktSize;               //@synthesize avgRTTLargePktSize=_avgRTTLargePktSize - In the implementation block
@property (assign,nonatomic) BOOL hasPerLargePktSize; 
@property (assign,nonatomic) unsigned perLargePktSize;                  //@synthesize perLargePktSize=_perLargePktSize - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasPerLargePktSize;
-(void)setHasMinRTTMediumPktSize:(BOOL)arg1 ;
-(void)setHasPerMediumPktSize:(BOOL)arg1 ;
-(BOOL)hasMaxRTTLargePktSize;
-(unsigned)maxRTTLargePktSize;
-(BOOL)hasAvgRTTSmallPktSize;
-(unsigned long long)timestamp;
-(void)setAvgRTTSmallPktSize:(unsigned)arg1 ;
-(void)setAvgRTTMediumPktSize:(unsigned)arg1 ;
-(unsigned)avgRTTLargePktSize;
-(unsigned)minRTTLargePktSize;
-(void)mergeFrom:(id)arg1 ;
-(void)setMaxRTTLargePktSize:(unsigned)arg1 ;
-(unsigned)perSmallPktSize;
-(void)setMaxRTTMediumPktSize:(unsigned)arg1 ;
-(void)setAvgRTTLargePktSize:(unsigned)arg1 ;
-(void)setHasMinRTTLargePktSize:(BOOL)arg1 ;
-(void)setMinRTTLargePktSize:(unsigned)arg1 ;
-(unsigned)avgRTTSmallPktSize;
-(unsigned)avgRTTMediumPktSize;
-(BOOL)hasMaxRTTSmallPktSize;
-(void)setHasAvgRTTSmallPktSize:(BOOL)arg1 ;
-(void)setHasMinRTTSmallPktSize:(BOOL)arg1 ;
-(id)description;
-(void)setHasAvgRTTLargePktSize:(BOOL)arg1 ;
-(unsigned)perMediumPktSize;
-(BOOL)hasAvgRTTLargePktSize;
-(void)setMinRTTSmallPktSize:(unsigned)arg1 ;
-(unsigned)minRTTSmallPktSize;
-(unsigned)minRTTMediumPktSize;
-(BOOL)hasMinRTTSmallPktSize;
-(void)setHasPerLargePktSize:(BOOL)arg1 ;
-(void)setPerLargePktSize:(unsigned)arg1 ;
-(BOOL)hasPerMediumPktSize;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setHasPerSmallPktSize:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setHasMaxRTTMediumPktSize:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setMinRTTMediumPktSize:(unsigned)arg1 ;
-(unsigned)maxRTTMediumPktSize;
-(void)setPerSmallPktSize:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasMaxRTTSmallPktSize:(BOOL)arg1 ;
-(void)setHasAvgRTTMediumPktSize:(BOOL)arg1 ;
-(BOOL)hasMaxRTTMediumPktSize;
-(BOOL)hasAvgRTTMediumPktSize;
-(void)setHasMaxRTTLargePktSize:(BOOL)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)perLargePktSize;
-(BOOL)hasMinRTTMediumPktSize;
-(void)setPerMediumPktSize:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(unsigned)maxRTTSmallPktSize;
-(void)setMaxRTTSmallPktSize:(unsigned)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasPerSmallPktSize;
-(BOOL)hasMinRTTLargePktSize;
@end

