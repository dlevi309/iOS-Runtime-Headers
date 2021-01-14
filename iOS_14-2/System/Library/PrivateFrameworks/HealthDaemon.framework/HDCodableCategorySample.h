/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/HDDecoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableSample, NSString;

@interface HDCodableCategorySample : PBCodable <HDDecoding, NSCopying> {

	long long _value;
	HDCodableSample* _sample;
	SCD_Struct_HD7 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasSample; 
@property (nonatomic,retain) HDCodableSample * sample;              //@synthesize sample=_sample - In the implementation block
@property (assign,nonatomic) BOOL hasValue; 
@property (assign,nonatomic) long long value;                       //@synthesize value=_value - In the implementation block
-(id)dictionaryRepresentation;
-(HDCodableSample *)sample;
-(BOOL)hasValue;
-(void)mergeFrom:(id)arg1 ;
-(void)setValue:(long long)arg1 ;
-(NSString *)description;
-(void)setHasValue:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setSample:(HDCodableSample *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)value;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)applyToObject:(id)arg1 ;
-(BOOL)hasSample;
@end

