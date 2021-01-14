/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_HD10 _has;

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
-(id)dictionaryRepresentation;
-(BOOL)hasDate;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setDate:(double)arg1 ;
-(void)setType:(long long)arg1 ;
-(id)description;
-(void)setHasDate:(BOOL)arg1 ;
-(long long)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(HDCodableMetadataDictionary *)metadataDictionary;
-(double)date;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setMetadataDictionary:(HDCodableMetadataDictionary *)arg1 ;
-(void)setSwimmingStrokeStyle:(long long)arg1 ;
-(BOOL)hasSwimmingStrokeStyle;
-(long long)swimmingStrokeStyle;
-(id)decodedDateIntervalStartDate;
-(void)setHasSwimmingStrokeStyle:(BOOL)arg1 ;
-(BOOL)hasMetadataDictionary;
@end

