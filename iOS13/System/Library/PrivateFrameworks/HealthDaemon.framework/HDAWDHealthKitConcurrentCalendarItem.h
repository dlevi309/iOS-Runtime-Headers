/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDAWDHealthKitConcurrentCalendarItem : PBCodable <NSCopying> {

	long long _endDate;
	long long _startDate;
	BOOL _isBusy;
	SCD_Struct_HD3 _has;

}

@property (assign,nonatomic) BOOL hasStartDate; 
@property (assign,nonatomic) long long startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) BOOL hasEndDate; 
@property (assign,nonatomic) long long endDate;                //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) BOOL hasIsBusy; 
@property (assign,nonatomic) BOOL isBusy;                      //@synthesize isBusy=_isBusy - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)startDate;
-(long long)endDate;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)setIsBusy:(BOOL)arg1 ;
-(BOOL)isBusy;
-(void)setStartDate:(long long)arg1 ;
-(void)setEndDate:(long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasStartDate:(BOOL)arg1 ;
-(BOOL)hasStartDate;
-(void)setHasEndDate:(BOOL)arg1 ;
-(BOOL)hasEndDate;
-(void)setHasIsBusy:(BOOL)arg1 ;
-(BOOL)hasIsBusy;
@end

