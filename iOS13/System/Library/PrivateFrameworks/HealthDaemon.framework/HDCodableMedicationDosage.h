/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)instruction;
-(void)setInstruction:(NSString *)arg1 ;
-(HDCodableMedicalDateInterval *)timingPeriod;
-(void)setTimingPeriod:(HDCodableMedicalDateInterval *)arg1 ;
-(BOOL)hasInstruction;
-(BOOL)hasTimingPeriod;
@end

