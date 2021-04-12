/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(HDCodableCodedQuantity *)numerator;
-(HDCodableCodedQuantity *)denominator;
-(void)setNumerator:(HDCodableCodedQuantity *)arg1 ;
-(void)setDenominator:(HDCodableCodedQuantity *)arg1 ;
-(BOOL)hasNumerator;
-(BOOL)hasDenominator;
@end

