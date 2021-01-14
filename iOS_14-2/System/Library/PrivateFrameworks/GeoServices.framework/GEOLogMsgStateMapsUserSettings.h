/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOLogMsgStateMapsUserSettings : PBCodable <NSCopying> {

	int _locationCadence;
	int _locationType;
	BOOL _airQualityShown;
	BOOL _learnFromAppEnabled;
	BOOL _notificationsEnabled;
	BOOL _siriSuggestionsEnabled;
	BOOL _weatherShown;
	struct {
		unsigned has_locationCadence : 1;
		unsigned has_locationType : 1;
		unsigned has_airQualityShown : 1;
		unsigned has_learnFromAppEnabled : 1;
		unsigned has_notificationsEnabled : 1;
		unsigned has_siriSuggestionsEnabled : 1;
		unsigned has_weatherShown : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasLocationType; 
@property (assign,nonatomic) int locationType; 
@property (assign,nonatomic) BOOL hasLocationCadence; 
@property (assign,nonatomic) int locationCadence; 
@property (assign,nonatomic) BOOL hasNotificationsEnabled; 
@property (assign,nonatomic) BOOL notificationsEnabled; 
@property (assign,nonatomic) BOOL hasSiriSuggestionsEnabled; 
@property (assign,nonatomic) BOOL siriSuggestionsEnabled; 
@property (assign,nonatomic) BOOL hasLearnFromAppEnabled; 
@property (assign,nonatomic) BOOL learnFromAppEnabled; 
@property (assign,nonatomic) BOOL hasAirQualityShown; 
@property (assign,nonatomic) BOOL airQualityShown; 
@property (assign,nonatomic) BOOL hasWeatherShown; 
@property (assign,nonatomic) BOOL weatherShown; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(BOOL)hasNotificationsEnabled;
-(void)setLocationCadence:(int)arg1 ;
-(void)setAirQualityShown:(BOOL)arg1 ;
-(void)setLearnFromAppEnabled:(BOOL)arg1 ;
-(void)setSiriSuggestionsEnabled:(BOOL)arg1 ;
-(void)setWeatherShown:(BOOL)arg1 ;
-(int)locationCadence;
-(void)setHasLocationCadence:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasLocationCadence;
-(id)locationCadenceAsString:(int)arg1 ;
-(int)StringAsLocationCadence:(id)arg1 ;
-(BOOL)learnFromAppEnabled;
-(void)setHasSiriSuggestionsEnabled:(BOOL)arg1 ;
-(BOOL)hasSiriSuggestionsEnabled;
-(void)setHasLearnFromAppEnabled:(BOOL)arg1 ;
-(BOOL)hasLearnFromAppEnabled;
-(BOOL)airQualityShown;
-(void)setHasAirQualityShown:(BOOL)arg1 ;
-(BOOL)hasAirQualityShown;
-(BOOL)weatherShown;
-(void)setHasWeatherShown:(BOOL)arg1 ;
-(BOOL)hasWeatherShown;
-(void)setLocationType:(int)arg1 ;
-(id)locationTypeAsString:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)siriSuggestionsEnabled;
-(id)description;
-(int)locationType;
-(BOOL)notificationsEnabled;
-(int)StringAsLocationType:(id)arg1 ;
-(BOOL)hasLocationType;
-(void)setNotificationsEnabled:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasLocationType:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasNotificationsEnabled:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

