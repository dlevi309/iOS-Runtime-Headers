/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDAWDHealthKitRoutineLocation;

@interface HDAWDHealthKitRoutineLocationVisitEvent : PBCodable <NSCopying> {

	long long _arrivalDate;
	unsigned long long _timestamp;
	HDAWDHealthKitRoutineLocation* _location;
	SCD_Struct_HD11 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) HDAWDHealthKitRoutineLocation * location;              //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL hasArrivalDate; 
@property (assign,nonatomic) long long arrivalDate;                                 //@synthesize arrivalDate=_arrivalDate - In the implementation block
-(id)dictionaryRepresentation;
-(void)setArrivalDate:(long long)arg1 ;
-(unsigned long long)timestamp;
-(HDAWDHealthKitRoutineLocation *)location;
-(void)mergeFrom:(id)arg1 ;
-(void)setLocation:(HDAWDHealthKitRoutineLocation *)arg1 ;
-(long long)arrivalDate;
-(id)description;
-(BOOL)hasLocation;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasArrivalDate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasArrivalDate:(BOOL)arg1 ;
@end

