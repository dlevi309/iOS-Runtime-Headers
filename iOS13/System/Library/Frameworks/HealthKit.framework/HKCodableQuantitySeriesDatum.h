/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HKCodableQuantitySeriesDatum : PBCodable <NSCopying> {

	double _timeInterval;
	double _value;
	float _duration;
	SCD_Struct_HK18 _has;

}

@property (assign,nonatomic) BOOL hasTimeInterval; 
@property (assign,nonatomic) double timeInterval;               //@synthesize timeInterval=_timeInterval - In the implementation block
@property (assign,nonatomic) BOOL hasValue; 
@property (assign,nonatomic) double value;                      //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) float duration;                    //@synthesize duration=_duration - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)timeInterval;
-(double)value;
-(void)setValue:(double)arg1 ;
-(id)dictionaryRepresentation;
-(float)duration;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDuration:(float)arg1 ;
-(void)setTimeInterval:(double)arg1 ;
-(BOOL)hasValue;
-(BOOL)hasDuration;
-(void)setHasValue:(BOOL)arg1 ;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setHasTimeInterval:(BOOL)arg1 ;
-(BOOL)hasTimeInterval;
@end

