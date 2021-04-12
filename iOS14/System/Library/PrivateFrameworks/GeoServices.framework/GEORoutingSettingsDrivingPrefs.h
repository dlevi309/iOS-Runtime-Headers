/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEORoutingSettingsDrivingPrefs : PBCodable <NSCopying> {

	BOOL _avoidHighways;
	BOOL _avoidTolls;
	BOOL _speedLimitEnabled;
	BOOL _trafficEnabled;
	BOOL _voiceNavEnabled;
	struct {
		unsigned has_avoidHighways : 1;
		unsigned has_avoidTolls : 1;
		unsigned has_speedLimitEnabled : 1;
		unsigned has_trafficEnabled : 1;
		unsigned has_voiceNavEnabled : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasAvoidHighways; 
@property (assign,nonatomic) BOOL avoidHighways; 
@property (assign,nonatomic) BOOL hasAvoidTolls; 
@property (assign,nonatomic) BOOL avoidTolls; 
@property (assign,nonatomic) BOOL hasSpeedLimitEnabled; 
@property (assign,nonatomic) BOOL speedLimitEnabled; 
@property (assign,nonatomic) BOOL hasTrafficEnabled; 
@property (assign,nonatomic) BOOL trafficEnabled; 
@property (assign,nonatomic) BOOL hasVoiceNavEnabled; 
@property (assign,nonatomic) BOOL voiceNavEnabled; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)avoidHighways;
-(void)setHasAvoidTolls:(BOOL)arg1 ;
-(void)setTrafficEnabled:(BOOL)arg1 ;
-(BOOL)avoidTolls;
-(void)setAvoidHighways:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)trafficEnabled;
-(BOOL)hasAvoidTolls;
-(void)setHasAvoidHighways:(BOOL)arg1 ;
-(BOOL)hasAvoidHighways;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)speedLimitEnabled;
-(void)setSpeedLimitEnabled:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTrafficEnabled:(BOOL)arg1 ;
-(void)setVoiceNavEnabled:(BOOL)arg1 ;
-(BOOL)voiceNavEnabled;
-(void)setHasVoiceNavEnabled:(BOOL)arg1 ;
-(BOOL)hasVoiceNavEnabled;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(BOOL)hasSpeedLimitEnabled;
-(BOOL)hasTrafficEnabled;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasSpeedLimitEnabled:(BOOL)arg1 ;
-(void)setAvoidTolls:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

