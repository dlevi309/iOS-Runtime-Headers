/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDCodableQuantitySeriesDatum : PBCodable <NSCopying> {

	double _endDate;
	double _startDate;
	double _value;
	SCD_Struct_HD12 _has;

}

@property (assign,nonatomic) BOOL hasEndDate; 
@property (assign,nonatomic) double endDate;                 //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) BOOL hasValue; 
@property (assign,nonatomic) double value;                   //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL hasStartDate; 
@property (assign,nonatomic) double startDate;               //@synthesize startDate=_startDate - In the implementation block
-(id)dictionaryRepresentation;
-(double)endDate;
-(void)setStartDate:(double)arg1 ;
-(BOOL)hasValue;
-(double)startDate;
-(BOOL)hasStartDate;
-(void)setHasStartDate:(BOOL)arg1 ;
-(void)setHasEndDate:(BOOL)arg1 ;
-(void)setEndDate:(double)arg1 ;
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
-(BOOL)hasEndDate;
@end

