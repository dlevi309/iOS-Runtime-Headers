/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface HKCodableCondensedWorkout : PBCodable <NSCopying> {

	double _condenserDate;
	long long _condenserVersion;
	double _creationDate;
	double _duration;
	double _endDate;
	long long _persistentID;
	double _startDate;
	long long _type;
	NSData* _uuid;
	SCD_Struct_HK23 _has;

}

@property (assign,nonatomic) BOOL hasPersistentID; 
@property (assign,nonatomic) long long persistentID;                  //@synthesize persistentID=_persistentID - In the implementation block
@property (nonatomic,readonly) BOOL hasUuid; 
@property (nonatomic,retain) NSData * uuid;                           //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) BOOL hasCreationDate; 
@property (assign,nonatomic) double creationDate;                     //@synthesize creationDate=_creationDate - In the implementation block
@property (assign,nonatomic) BOOL hasStartDate; 
@property (assign,nonatomic) double startDate;                        //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) BOOL hasEndDate; 
@property (assign,nonatomic) double endDate;                          //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) long long type;                          //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) double duration;                         //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasCondenserVersion; 
@property (assign,nonatomic) long long condenserVersion;              //@synthesize condenserVersion=_condenserVersion - In the implementation block
@property (assign,nonatomic) BOOL hasCondenserDate; 
@property (assign,nonatomic) double condenserDate;                    //@synthesize condenserDate=_condenserDate - In the implementation block
-(id)dictionaryRepresentation;
-(double)endDate;
-(BOOL)hasDuration;
-(NSData *)uuid;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(void)setStartDate:(double)arg1 ;
-(void)setPersistentID:(long long)arg1 ;
-(BOOL)hasCreationDate;
-(double)startDate;
-(void)setCreationDate:(double)arg1 ;
-(void)setHasCreationDate:(BOOL)arg1 ;
-(BOOL)hasStartDate;
-(void)setHasStartDate:(BOOL)arg1 ;
-(void)setHasEndDate:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)setCondenserVersion:(long long)arg1 ;
-(void)setHasCondenserVersion:(BOOL)arg1 ;
-(void)setEndDate:(double)arg1 ;
-(BOOL)hasUuid;
-(void)setCondenserDate:(double)arg1 ;
-(void)setHasCondenserDate:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(id)description;
-(double)creationDate;
-(double)condenserDate;
-(BOOL)hasCondenserVersion;
-(long long)condenserVersion;
-(BOOL)hasCondenserDate;
-(long long)persistentID;
-(long long)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setUuid:(NSData *)arg1 ;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasPersistentID:(BOOL)arg1 ;
-(BOOL)hasPersistentID;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasEndDate;
@end

