/*
* Generated on Monday, March 1, 2021 at 2:35:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)_init;
-(long long)metricId;
-(BOOL)valid:(id*)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(unsigned long long)duration;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDuration:(unsigned long long)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
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

