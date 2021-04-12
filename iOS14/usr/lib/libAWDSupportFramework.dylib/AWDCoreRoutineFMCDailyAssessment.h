/*
* Generated on Thursday, January 14, 2021 at 2:28:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/RTMetricManagerMetricIdProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDCoreRoutineFMCDailyAssessment : PBCodable <RTMetricManagerMetricIdProtocol, NSCopying> {

	unsigned long long _timestamp;
	int _assistances;
	int _assistedParkingEvents;
	int _duration;
	int _engagedParkingEvents;
	int _engagements;
	int _locationType;
	int _parkingEvents;
	int _suppressedParkingEvents;
	SCD_Struct_AW11 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) int duration;                                 //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasParkingEvents; 
@property (assign,nonatomic) int parkingEvents;                            //@synthesize parkingEvents=_parkingEvents - In the implementation block
@property (assign,nonatomic) BOOL hasEngagedParkingEvents; 
@property (assign,nonatomic) int engagedParkingEvents;                     //@synthesize engagedParkingEvents=_engagedParkingEvents - In the implementation block
@property (assign,nonatomic) BOOL hasAssistedParkingEvents; 
@property (assign,nonatomic) int assistedParkingEvents;                    //@synthesize assistedParkingEvents=_assistedParkingEvents - In the implementation block
@property (assign,nonatomic) BOOL hasEngagements; 
@property (assign,nonatomic) int engagements;                              //@synthesize engagements=_engagements - In the implementation block
@property (assign,nonatomic) BOOL hasAssistances; 
@property (assign,nonatomic) int assistances;                              //@synthesize assistances=_assistances - In the implementation block
@property (assign,nonatomic) BOOL hasSuppressedParkingEvents; 
@property (assign,nonatomic) int suppressedParkingEvents;                  //@synthesize suppressedParkingEvents=_suppressedParkingEvents - In the implementation block
@property (assign,nonatomic) BOOL hasLocationType; 
@property (assign,nonatomic) int locationType;                             //@synthesize locationType=_locationType - In the implementation block
-(BOOL)valid:(id*)arg1 ;
-(NSString *)description;
-(id)_init;
-(long long)metricId;
-(id)dictionaryRepresentation;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setDuration:(int)arg1 ;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(void)setLocationType:(int)arg1 ;
-(NSString *)description;
-(int)locationType;
-(BOOL)hasLocationType;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasLocationType:(BOOL)arg1 ;
-(int)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)engagements;
-(void)setEngagements:(int)arg1 ;
-(int)parkingEvents;
-(int)suppressedParkingEvents;
-(int)assistances;
-(int)assistedParkingEvents;
-(int)engagedParkingEvents;
-(void)setParkingEvents:(int)arg1 ;
-(void)setEngagedParkingEvents:(int)arg1 ;
-(void)setAssistedParkingEvents:(int)arg1 ;
-(void)setAssistances:(int)arg1 ;
-(void)setSuppressedParkingEvents:(int)arg1 ;
-(void)setHasParkingEvents:(BOOL)arg1 ;
-(BOOL)hasParkingEvents;
-(void)setHasEngagedParkingEvents:(BOOL)arg1 ;
-(BOOL)hasEngagedParkingEvents;
-(void)setHasAssistedParkingEvents:(BOOL)arg1 ;
-(BOOL)hasAssistedParkingEvents;
-(void)setHasEngagements:(BOOL)arg1 ;
-(BOOL)hasEngagements;
-(void)setHasAssistances:(BOOL)arg1 ;
-(BOOL)hasAssistances;
-(void)setHasSuppressedParkingEvents:(BOOL)arg1 ;
-(BOOL)hasSuppressedParkingEvents;
@end

