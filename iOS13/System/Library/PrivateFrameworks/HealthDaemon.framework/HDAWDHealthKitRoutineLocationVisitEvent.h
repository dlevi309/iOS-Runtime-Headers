/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_HD12 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) HDAWDHealthKitRoutineLocation * location;              //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL hasArrivalDate; 
@property (assign,nonatomic) long long arrivalDate;                                 //@synthesize arrivalDate=_arrivalDate - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(HDAWDHealthKitRoutineLocation *)location;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(long long)arrivalDate;
-(BOOL)hasArrivalDate;
-(void)setLocation:(HDAWDHealthKitRoutineLocation *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasLocation;
-(void)setArrivalDate:(long long)arg1 ;
-(void)setHasArrivalDate:(BOOL)arg1 ;
@end

