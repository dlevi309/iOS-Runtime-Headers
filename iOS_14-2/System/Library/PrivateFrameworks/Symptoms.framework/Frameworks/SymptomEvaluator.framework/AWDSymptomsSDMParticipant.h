/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDSymptomsSDMParticipant : PBCodable <NSCopying> {

	unsigned long long _additionalFlags;
	unsigned long long _dlThroughputBytesPerSecond;
	unsigned long long _participationDelta;
	unsigned long long _periodDuration;
	unsigned long long _ulThroughputBytesPerSecond;
	NSString* _name;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasParticipationDelta; 
@property (assign,nonatomic) unsigned long long participationDelta;                      //@synthesize participationDelta=_participationDelta - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                                            //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL hasPeriodDuration; 
@property (assign,nonatomic) unsigned long long periodDuration;                          //@synthesize periodDuration=_periodDuration - In the implementation block
@property (assign,nonatomic) BOOL hasDlThroughputBytesPerSecond; 
@property (assign,nonatomic) unsigned long long dlThroughputBytesPerSecond;              //@synthesize dlThroughputBytesPerSecond=_dlThroughputBytesPerSecond - In the implementation block
@property (assign,nonatomic) BOOL hasUlThroughputBytesPerSecond; 
@property (assign,nonatomic) unsigned long long ulThroughputBytesPerSecond;              //@synthesize ulThroughputBytesPerSecond=_ulThroughputBytesPerSecond - In the implementation block
@property (assign,nonatomic) BOOL hasAdditionalFlags; 
@property (assign,nonatomic) unsigned long long additionalFlags;                         //@synthesize additionalFlags=_additionalFlags - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasName;
-(unsigned long long)additionalFlags;
-(void)setAdditionalFlags:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setParticipationDelta:(unsigned long long)arg1 ;
-(void)setHasParticipationDelta:(BOOL)arg1 ;
-(BOOL)hasParticipationDelta;
-(void)setPeriodDuration:(unsigned long long)arg1 ;
-(void)setHasPeriodDuration:(BOOL)arg1 ;
-(BOOL)hasPeriodDuration;
-(void)setDlThroughputBytesPerSecond:(unsigned long long)arg1 ;
-(void)setHasDlThroughputBytesPerSecond:(BOOL)arg1 ;
-(BOOL)hasDlThroughputBytesPerSecond;
-(void)setUlThroughputBytesPerSecond:(unsigned long long)arg1 ;
-(void)setHasUlThroughputBytesPerSecond:(BOOL)arg1 ;
-(BOOL)hasUlThroughputBytesPerSecond;
-(void)setHasAdditionalFlags:(BOOL)arg1 ;
-(BOOL)hasAdditionalFlags;
-(unsigned long long)participationDelta;
-(unsigned long long)periodDuration;
-(unsigned long long)dlThroughputBytesPerSecond;
-(unsigned long long)ulThroughputBytesPerSecond;
@end

