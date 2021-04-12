/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HKCodableQuantitySeriesDatum : PBCodable <NSCopying> {

	double _timeInterval;
	double _value;
	float _duration;
	SCD_Struct_HK21 _has;

}

@property (assign,nonatomic) BOOL hasTimeInterval; 
@property (assign,nonatomic) double timeInterval;               //@synthesize timeInterval=_timeInterval - In the implementation block
@property (assign,nonatomic) BOOL hasValue; 
@property (assign,nonatomic) double value;                      //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) float duration;                    //@synthesize duration=_duration - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasDuration;
-(void)setTimeInterval:(double)arg1 ;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setDuration:(float)arg1 ;
-(BOOL)hasValue;
-(double)timeInterval;
-(void)mergeFrom:(id)arg1 ;
-(void)setValue:(double)arg1 ;
-(id)description;
-(void)setHasValue:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setHasTimeInterval:(BOOL)arg1 ;
-(BOOL)hasTimeInterval;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(float)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)value;
-(BOOL)isEqual:(id)arg1 ;
@end

