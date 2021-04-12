/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableMedicalDate;

@interface HDCodableMedicalDateInterval : PBCodable <NSCopying> {

	HDCodableMedicalDate* _endDate;
	HDCodableMedicalDate* _startDate;

}

@property (nonatomic,readonly) BOOL hasStartDate; 
@property (nonatomic,retain) HDCodableMedicalDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) BOOL hasEndDate; 
@property (nonatomic,retain) HDCodableMedicalDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HDCodableMedicalDate *)startDate;
-(HDCodableMedicalDate *)endDate;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)setStartDate:(HDCodableMedicalDate *)arg1 ;
-(void)setEndDate:(HDCodableMedicalDate *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasStartDate;
-(BOOL)hasEndDate;
@end

