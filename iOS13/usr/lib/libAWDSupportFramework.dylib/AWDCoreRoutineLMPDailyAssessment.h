/*
* Generated on Monday, March 1, 2021 at 2:35:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/RTMetricManagerMetricIdProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDCoreRoutineLMPDailyAssessment : PBCodable <RTMetricManagerMetricIdProtocol, NSCopying> {

	unsigned long long _timestamp;
	int _dailyEvents;
	int _eventsWithLMPLocation;
	int _eventsWithLocation;
	int _eventsWithMaybeLocation;
	int _visitLMPLocation;
	int _visitLocation;
	int _visitMaybeLocation;
	SCD_Struct_AW13 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDailyEvents; 
@property (assign,nonatomic) int dailyEvents;                              //@synthesize dailyEvents=_dailyEvents - In the implementation block
@property (assign,nonatomic) BOOL hasEventsWithLocation; 
@property (assign,nonatomic) int eventsWithLocation;                       //@synthesize eventsWithLocation=_eventsWithLocation - In the implementation block
@property (assign,nonatomic) BOOL hasEventsWithMaybeLocation; 
@property (assign,nonatomic) int eventsWithMaybeLocation;                  //@synthesize eventsWithMaybeLocation=_eventsWithMaybeLocation - In the implementation block
@property (assign,nonatomic) BOOL hasEventsWithLMPLocation; 
@property (assign,nonatomic) int eventsWithLMPLocation;                    //@synthesize eventsWithLMPLocation=_eventsWithLMPLocation - In the implementation block
@property (assign,nonatomic) BOOL hasVisitLocation; 
@property (assign,nonatomic) int visitLocation;                            //@synthesize visitLocation=_visitLocation - In the implementation block
@property (assign,nonatomic) BOOL hasVisitMaybeLocation; 
@property (assign,nonatomic) int visitMaybeLocation;                       //@synthesize visitMaybeLocation=_visitMaybeLocation - In the implementation block
@property (assign,nonatomic) BOOL hasVisitLMPLocation; 
@property (assign,nonatomic) int visitLMPLocation;                         //@synthesize visitLMPLocation=_visitLMPLocation - In the implementation block
-(NSString *)description;
-(id)_init;
-(long long)metricId;
-(BOOL)valid:(id*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(int)dailyEvents;
-(int)eventsWithLocation;
-(int)eventsWithLMPLocation;
-(int)eventsWithMaybeLocation;
-(int)visitLocation;
-(int)visitLMPLocation;
-(int)visitMaybeLocation;
-(void)setDailyEvents:(int)arg1 ;
-(void)setHasDailyEvents:(BOOL)arg1 ;
-(BOOL)hasDailyEvents;
-(void)setEventsWithLocation:(int)arg1 ;
-(void)setHasEventsWithLocation:(BOOL)arg1 ;
-(BOOL)hasEventsWithLocation;
-(void)setEventsWithMaybeLocation:(int)arg1 ;
-(void)setHasEventsWithMaybeLocation:(BOOL)arg1 ;
-(BOOL)hasEventsWithMaybeLocation;
-(void)setEventsWithLMPLocation:(int)arg1 ;
-(void)setHasEventsWithLMPLocation:(BOOL)arg1 ;
-(BOOL)hasEventsWithLMPLocation;
-(void)setVisitLocation:(int)arg1 ;
-(void)setHasVisitLocation:(BOOL)arg1 ;
-(BOOL)hasVisitLocation;
-(void)setVisitMaybeLocation:(int)arg1 ;
-(void)setHasVisitMaybeLocation:(BOOL)arg1 ;
-(BOOL)hasVisitMaybeLocation;
-(void)setVisitLMPLocation:(int)arg1 ;
-(void)setHasVisitLMPLocation:(BOOL)arg1 ;
-(BOOL)hasVisitLMPLocation;
@end

