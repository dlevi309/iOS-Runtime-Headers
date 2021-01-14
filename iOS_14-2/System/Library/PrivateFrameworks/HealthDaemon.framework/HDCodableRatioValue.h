/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableCodedQuantity;

@interface HDCodableRatioValue : PBCodable <NSCopying> {

	HDCodableCodedQuantity* _denominator;
	HDCodableCodedQuantity* _numerator;

}

@property (nonatomic,readonly) BOOL hasNumerator; 
@property (nonatomic,retain) HDCodableCodedQuantity * numerator;                //@synthesize numerator=_numerator - In the implementation block
@property (nonatomic,readonly) BOOL hasDenominator; 
@property (nonatomic,retain) HDCodableCodedQuantity * denominator;              //@synthesize denominator=_denominator - In the implementation block
-(id)dictionaryRepresentation;
-(HDCodableCodedQuantity *)numerator;
-(void)mergeFrom:(id)arg1 ;
-(HDCodableCodedQuantity *)denominator;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setNumerator:(HDCodableCodedQuantity *)arg1 ;
-(void)setDenominator:(HDCodableCodedQuantity *)arg1 ;
-(BOOL)hasNumerator;
-(BOOL)hasDenominator;
@end

