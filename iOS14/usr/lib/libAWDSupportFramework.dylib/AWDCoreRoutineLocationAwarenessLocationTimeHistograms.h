/*
* Generated on Thursday, January 14, 2021 at 2:28:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/RTMetricManagerMetricIdProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDCoreRoutineLocationAwarenessBasicHistogram, NSString;

@interface AWDCoreRoutineLocationAwarenessLocationTimeHistograms : PBCodable <RTMetricManagerMetricIdProtocol, NSCopying> {

	unsigned long long _duration;
	unsigned long long _timestamp;
	AWDCoreRoutineLocationAwarenessBasicHistogram* _anyPositiveHistogram;
	AWDCoreRoutineLocationAwarenessBasicHistogram* _lessThan10mHistogram;
	AWDCoreRoutineLocationAwarenessBasicHistogram* _lessThan200mHistogram;
	AWDCoreRoutineLocationAwarenessBasicHistogram* _lessThan20mHistogram;
	AWDCoreRoutineLocationAwarenessBasicHistogram* _lessThan55mHistogram;
	SCD_Struct_AW3 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                                       //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned long long duration;                                                        //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) BOOL hasLessThan10mHistogram; 
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessBasicHistogram * lessThan10mHistogram;               //@synthesize lessThan10mHistogram=_lessThan10mHistogram - In the implementation block
@property (nonatomic,readonly) BOOL hasLessThan20mHistogram; 
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessBasicHistogram * lessThan20mHistogram;               //@synthesize lessThan20mHistogram=_lessThan20mHistogram - In the implementation block
@property (nonatomic,readonly) BOOL hasLessThan55mHistogram; 
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessBasicHistogram * lessThan55mHistogram;               //@synthesize lessThan55mHistogram=_lessThan55mHistogram - In the implementation block
@property (nonatomic,readonly) BOOL hasLessThan200mHistogram; 
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessBasicHistogram * lessThan200mHistogram;              //@synthesize lessThan200mHistogram=_lessThan200mHistogram - In the implementation block
@property (nonatomic,readonly) BOOL hasAnyPositiveHistogram; 
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessBasicHistogram * anyPositiveHistogram;               //@synthesize anyPositiveHistogram=_anyPositiveHistogram - In the implementation block
-(BOOL)valid:(id*)arg1 ;
-(id)_init;
-(long long)metricId;
-(id)dictionaryRepresentation;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setDuration:(unsigned long long)arg1 ;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(AWDCoreRoutineLocationAwarenessBasicHistogram *)anyPositiveHistogram;
-(AWDCoreRoutineLocationAwarenessBasicHistogram *)lessThan200mHistogram;
-(AWDCoreRoutineLocationAwarenessBasicHistogram *)lessThan55mHistogram;
-(AWDCoreRoutineLocationAwarenessBasicHistogram *)lessThan20mHistogram;
-(AWDCoreRoutineLocationAwarenessBasicHistogram *)lessThan10mHistogram;
-(void)setLessThan10mHistogram:(AWDCoreRoutineLocationAwarenessBasicHistogram *)arg1 ;
-(void)setLessThan20mHistogram:(AWDCoreRoutineLocationAwarenessBasicHistogram *)arg1 ;
-(void)setLessThan55mHistogram:(AWDCoreRoutineLocationAwarenessBasicHistogram *)arg1 ;
-(void)setLessThan200mHistogram:(AWDCoreRoutineLocationAwarenessBasicHistogram *)arg1 ;
-(void)setAnyPositiveHistogram:(AWDCoreRoutineLocationAwarenessBasicHistogram *)arg1 ;
-(BOOL)hasLessThan10mHistogram;
-(BOOL)hasLessThan20mHistogram;
-(BOOL)hasLessThan55mHistogram;
-(BOOL)hasLessThan200mHistogram;
-(BOOL)hasAnyPositiveHistogram;
@end

