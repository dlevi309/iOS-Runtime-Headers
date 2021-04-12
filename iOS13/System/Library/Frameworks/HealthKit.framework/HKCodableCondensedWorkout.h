/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_HK20 _has;

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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(double)startDate;
-(double)endDate;
-(id)dictionaryRepresentation;
-(NSData *)uuid;
-(double)duration;
-(void)setUuid:(NSData *)arg1 ;
-(double)creationDate;
-(void)writeTo:(id)arg1 ;
-(void)setStartDate:(double)arg1 ;
-(void)setEndDate:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCreationDate:(double)arg1 ;
-(void)setHasCreationDate:(BOOL)arg1 ;
-(BOOL)hasCreationDate;
-(long long)persistentID;
-(void)setPersistentID:(long long)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setHasStartDate:(BOOL)arg1 ;
-(BOOL)hasStartDate;
-(void)setHasEndDate:(BOOL)arg1 ;
-(BOOL)hasEndDate;
-(BOOL)hasUuid;
-(BOOL)hasPersistentID;
-(void)setHasPersistentID:(BOOL)arg1 ;
-(BOOL)hasCondenserVersion;
-(long long)condenserVersion;
-(BOOL)hasCondenserDate;
-(double)condenserDate;
-(void)setCondenserVersion:(long long)arg1 ;
-(void)setHasCondenserVersion:(BOOL)arg1 ;
-(void)setCondenserDate:(double)arg1 ;
-(void)setHasCondenserDate:(BOOL)arg1 ;
@end

