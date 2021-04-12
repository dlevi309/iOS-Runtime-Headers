/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, HDCodableMedicalDateInterval;

@interface HDCodableMedicationDosage : PBCodable <NSCopying> {

	NSString* _instruction;
	HDCodableMedicalDateInterval* _timingPeriod;

}

@property (nonatomic,readonly) BOOL hasInstruction; 
@property (nonatomic,retain) NSString * instruction;                                   //@synthesize instruction=_instruction - In the implementation block
@property (nonatomic,readonly) BOOL hasTimingPeriod; 
@property (nonatomic,retain) HDCodableMedicalDateInterval * timingPeriod;              //@synthesize timingPeriod=_timingPeriod - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(NSString *)instruction;
-(void)setInstruction:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(HDCodableMedicalDateInterval *)timingPeriod;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTimingPeriod:(HDCodableMedicalDateInterval *)arg1 ;
-(BOOL)hasInstruction;
-(BOOL)hasTimingPeriod;
@end

