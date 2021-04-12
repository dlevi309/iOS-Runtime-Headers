/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableMetadataDictionary;

@interface HDCodableWorkoutEvent : PBCodable <NSCopying> {

	double _date;
	double _duration;
	long long _swimmingStrokeStyle;
	long long _type;
	HDCodableMetadataDictionary* _metadataDictionary;
	SCD_Struct_HD11 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) long long type;                                                //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasDate; 
@property (assign,nonatomic) double date;                                                   //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) BOOL hasSwimmingStrokeStyle; 
@property (assign,nonatomic) long long swimmingStrokeStyle;                                 //@synthesize swimmingStrokeStyle=_swimmingStrokeStyle - In the implementation block
@property (nonatomic,readonly) BOOL hasMetadataDictionary; 
@property (nonatomic,retain) HDCodableMetadataDictionary * metadataDictionary;              //@synthesize metadataDictionary=_metadataDictionary - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) double duration;                                               //@synthesize duration=_duration - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(double)date;
-(id)dictionaryRepresentation;
-(double)duration;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasDate;
-(void)setDate:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(HDCodableMetadataDictionary *)metadataDictionary;
-(void)setHasDate:(BOOL)arg1 ;
-(void)setMetadataDictionary:(HDCodableMetadataDictionary *)arg1 ;
-(void)setSwimmingStrokeStyle:(long long)arg1 ;
-(BOOL)hasSwimmingStrokeStyle;
-(long long)swimmingStrokeStyle;
-(id)decodedDateIntervalStartDate;
-(void)setHasSwimmingStrokeStyle:(BOOL)arg1 ;
-(BOOL)hasMetadataDictionary;
@end

