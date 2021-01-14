/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HDCodableQuantity : PBCodable <NSCopying> {

	double _value;
	NSString* _unitString;
	SCD_Struct_HD7 _has;

}

@property (assign,nonatomic) BOOL hasValue; 
@property (assign,nonatomic) double value;                       //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) BOOL hasUnitString; 
@property (nonatomic,retain) NSString * unitString;              //@synthesize unitString=_unitString - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)unitString;
-(BOOL)hasValue;
-(void)setUnitString:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setValue:(double)arg1 ;
-(id)description;
-(void)setHasValue:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)value;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasUnitString;
@end

