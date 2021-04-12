/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HDAWDHealthKitWorkoutSessionEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _activityType;
	int _eventType;
	NSString* _sessionUUID;
	SCD_Struct_HD12 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasActivityType; 
@property (assign,nonatomic) int activityType;                          //@synthesize activityType=_activityType - In the implementation block
@property (assign,nonatomic) BOOL hasEventType; 
@property (assign,nonatomic) int eventType;                             //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionUUID; 
@property (nonatomic,retain) NSString * sessionUUID;                    //@synthesize sessionUUID=_sessionUUID - In the implementation block
-(void)setHasEventType:(BOOL)arg1 ;
-(BOOL)hasEventType;
-(id)dictionaryRepresentation;
-(int)StringAsEventType:(id)arg1 ;
-(id)eventTypeAsString:(int)arg1 ;
-(void)setEventType:(int)arg1 ;
-(void)setActivityType:(int)arg1 ;
-(int)eventType;
-(void)setSessionUUID:(NSString *)arg1 ;
-(int)activityType;
-(NSString *)sessionUUID;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasActivityType;
-(void)setHasActivityType:(BOOL)arg1 ;
-(id)activityTypeAsString:(int)arg1 ;
-(int)StringAsActivityType:(id)arg1 ;
-(BOOL)hasSessionUUID;
@end

