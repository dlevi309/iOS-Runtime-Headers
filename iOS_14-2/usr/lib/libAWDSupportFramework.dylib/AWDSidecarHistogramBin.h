/*
* Generated on Thursday, January 14, 2021 at 2:29:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDSidecarHistogramBin : PBCodable <NSCopying> {

	double _binEnd;
	double _binStart;
	double _value;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasBinStart; 
@property (assign,nonatomic) double binStart;               //@synthesize binStart=_binStart - In the implementation block
@property (assign,nonatomic) BOOL hasBinEnd; 
@property (assign,nonatomic) double binEnd;                 //@synthesize binEnd=_binEnd - In the implementation block
@property (assign,nonatomic) BOOL hasValue; 
@property (assign,nonatomic) double value;                  //@synthesize value=_value - In the implementation block
-(id)dictionaryRepresentation;
-(double)binStart;
-(BOOL)hasValue;
-(void)setBinEnd:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setBinStart:(double)arg1 ;
-(void)setHasBinStart:(BOOL)arg1 ;
-(void)setValue:(double)arg1 ;
-(id)description;
-(void)setHasValue:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setHasBinEnd:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(double)binEnd;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasBinEnd;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)value;
-(BOOL)hasBinStart;
-(BOOL)isEqual:(id)arg1 ;
@end

