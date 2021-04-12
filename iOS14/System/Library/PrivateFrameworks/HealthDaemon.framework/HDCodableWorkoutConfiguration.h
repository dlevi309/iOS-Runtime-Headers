/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HDCodableWorkoutConfiguration : PBCodable <NSCopying> {

	long long _activityType;
	long long _locationType;
	double _wLengthValue;
	long long _wLocationType;
	NSString* _wLengthUnitString;
	SCD_Struct_HD10 _has;

}

@property (assign,nonatomic) BOOL hasActivityType; 
@property (assign,nonatomic) long long activityType;                    //@synthesize activityType=_activityType - In the implementation block
@property (assign,nonatomic) BOOL hasLocationType; 
@property (assign,nonatomic) long long locationType;                    //@synthesize locationType=_locationType - In the implementation block
@property (assign,nonatomic) BOOL hasWLocationType; 
@property (assign,nonatomic) long long wLocationType;                   //@synthesize wLocationType=_wLocationType - In the implementation block
@property (assign,nonatomic) BOOL hasWLengthValue; 
@property (assign,nonatomic) double wLengthValue;                       //@synthesize wLengthValue=_wLengthValue - In the implementation block
@property (nonatomic,readonly) BOOL hasWLengthUnitString; 
@property (nonatomic,retain) NSString * wLengthUnitString;              //@synthesize wLengthUnitString=_wLengthUnitString - In the implementation block
-(id)dictionaryRepresentation;
-(void)setActivityType:(long long)arg1 ;
-(long long)activityType;
-(void)mergeFrom:(id)arg1 ;
-(void)setLocationType:(long long)arg1 ;
-(id)description;
-(long long)locationType;
-(BOOL)hasLocationType;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasLocationType:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasActivityType;
-(void)setHasActivityType:(BOOL)arg1 ;
-(long long)wLocationType;
-(BOOL)hasWLengthUnitString;
-(NSString *)wLengthUnitString;
-(double)wLengthValue;
-(void)setWLocationType:(long long)arg1 ;
-(void)setWLengthValue:(double)arg1 ;
-(void)setWLengthUnitString:(NSString *)arg1 ;
-(void)setHasWLocationType:(BOOL)arg1 ;
-(BOOL)hasWLocationType;
-(void)setHasWLengthValue:(BOOL)arg1 ;
-(BOOL)hasWLengthValue;
@end

