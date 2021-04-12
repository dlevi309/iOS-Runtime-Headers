/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_HD11 _has;

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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(long long)activityType;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setActivityType:(long long)arg1 ;
-(long long)locationType;
-(BOOL)hasActivityType;
-(void)setLocationType:(long long)arg1 ;
-(void)setHasLocationType:(BOOL)arg1 ;
-(BOOL)hasLocationType;
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

