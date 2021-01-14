/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/HDDecoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableSample, NSData, NSString;

@interface HDCodableECGSample : PBCodable <HDDecoding, NSCopying> {

	double _averageHeartRateInBPM;
	long long _privateClassification;
	long long _symptomsStatus;
	HDCodableSample* _sample;
	NSData* _voltagePayload;
	SCD_Struct_HD12 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasSample; 
@property (nonatomic,retain) HDCodableSample * sample;                     //@synthesize sample=_sample - In the implementation block
@property (assign,nonatomic) BOOL hasPrivateClassification; 
@property (assign,nonatomic) long long privateClassification;              //@synthesize privateClassification=_privateClassification - In the implementation block
@property (assign,nonatomic) BOOL hasAverageHeartRateInBPM; 
@property (assign,nonatomic) double averageHeartRateInBPM;                 //@synthesize averageHeartRateInBPM=_averageHeartRateInBPM - In the implementation block
@property (nonatomic,readonly) BOOL hasVoltagePayload; 
@property (nonatomic,retain) NSData * voltagePayload;                      //@synthesize voltagePayload=_voltagePayload - In the implementation block
@property (assign,nonatomic) BOOL hasSymptomsStatus; 
@property (assign,nonatomic) long long symptomsStatus;                     //@synthesize symptomsStatus=_symptomsStatus - In the implementation block
-(id)dictionaryRepresentation;
-(HDCodableSample *)sample;
-(void)mergeFrom:(id)arg1 ;
-(long long)privateClassification;
-(long long)symptomsStatus;
-(NSString *)description;
-(unsigned long long)hash;
-(void)setSample:(HDCodableSample *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)applyToObject:(id)arg1 ;
-(BOOL)hasSample;
-(void)setVoltagePayload:(NSData *)arg1 ;
-(void)setPrivateClassification:(long long)arg1 ;
-(void)setSymptomsStatus:(long long)arg1 ;
-(void)setAverageHeartRateInBPM:(double)arg1 ;
-(NSData *)voltagePayload;
-(double)averageHeartRateInBPM;
-(void)setHasPrivateClassification:(BOOL)arg1 ;
-(BOOL)hasPrivateClassification;
-(void)setHasAverageHeartRateInBPM:(BOOL)arg1 ;
-(BOOL)hasAverageHeartRateInBPM;
-(BOOL)hasVoltagePayload;
-(void)setHasSymptomsStatus:(BOOL)arg1 ;
-(BOOL)hasSymptomsStatus;
@end

