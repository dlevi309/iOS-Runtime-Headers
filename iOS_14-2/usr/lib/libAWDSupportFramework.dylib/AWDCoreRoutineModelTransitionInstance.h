/*
* Generated on Thursday, January 14, 2021 at 2:28:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/RTMetricManagerMetricIdProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDCoreRoutineTransitionMotionType, NSString;

@interface AWDCoreRoutineModelTransitionInstance : PBCodable <RTMetricManagerMetricIdProtocol, NSCopying> {

	unsigned _distance;
	unsigned _duration;
	AWDCoreRoutineTransitionMotionType* _transitionHistogram;
	SCD_Struct_AW3 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned duration;                                                     //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasDistance; 
@property (assign,nonatomic) unsigned distance;                                                     //@synthesize distance=_distance - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitionHistogram; 
@property (nonatomic,retain) AWDCoreRoutineTransitionMotionType * transitionHistogram;              //@synthesize transitionHistogram=_transitionHistogram - In the implementation block
-(BOOL)valid:(id*)arg1 ;
-(id)_init;
-(long long)metricId;
-(id)dictionaryRepresentation;
-(void)setDistance:(unsigned)arg1 ;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setDuration:(unsigned)arg1 ;
-(unsigned)distance;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasDistance;
-(void)setHasDistance:(BOOL)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setTransitionHistogram:(AWDCoreRoutineTransitionMotionType *)arg1 ;
-(BOOL)hasTransitionHistogram;
-(AWDCoreRoutineTransitionMotionType *)transitionHistogram;
@end

