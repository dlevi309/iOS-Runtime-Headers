/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(HDCodableMedicalDate *)endDate;
-(void)setStartDate:(HDCodableMedicalDate *)arg1 ;
-(HDCodableMedicalDate *)startDate;
-(BOOL)hasStartDate;
-(void)setEndDate:(HDCodableMedicalDate *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasEndDate;
@end

