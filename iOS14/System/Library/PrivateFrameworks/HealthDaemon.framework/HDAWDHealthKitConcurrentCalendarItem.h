/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDAWDHealthKitConcurrentCalendarItem : PBCodable <NSCopying> {

	long long _endDate;
	long long _startDate;
	BOOL _isBusy;
	SCD_Struct_HD12 _has;

}

@property (assign,nonatomic) BOOL hasStartDate; 
@property (assign,nonatomic) long long startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) BOOL hasEndDate; 
@property (assign,nonatomic) long long endDate;                //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) BOOL hasIsBusy; 
@property (assign,nonatomic) BOOL isBusy;                      //@synthesize isBusy=_isBusy - In the implementation block
-(id)dictionaryRepresentation;
-(long long)endDate;
-(BOOL)isBusy;
-(void)setStartDate:(long long)arg1 ;
-(long long)startDate;
-(BOOL)hasStartDate;
-(void)setHasStartDate:(BOOL)arg1 ;
-(void)setHasEndDate:(BOOL)arg1 ;
-(void)setEndDate:(long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setIsBusy:(BOOL)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasEndDate;
-(void)setHasIsBusy:(BOOL)arg1 ;
-(BOOL)hasIsBusy;
@end

