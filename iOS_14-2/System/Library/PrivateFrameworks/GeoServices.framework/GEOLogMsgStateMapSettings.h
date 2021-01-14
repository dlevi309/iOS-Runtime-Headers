/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOLogMsgStateMapSettings : PBCodable <NSCopying> {

	int _locationType;
	int _navVoiceVolume;
	int _preferredTransportMode;
	BOOL _avoidBusyRoads;
	BOOL _avoidHighways;
	BOOL _avoidHills;
	BOOL _avoidStairs;
	BOOL _avoidTolls;
	BOOL _eBike;
	BOOL _findMyCarEnabled;
	BOOL _headingEnabled;
	BOOL _labelEnabled;
	BOOL _pauseSpokenAudioEnabled;
	BOOL _speedLimitEnabled;
	BOOL _trafficEnabled;
	struct {
		unsigned has_locationType : 1;
		unsigned has_navVoiceVolume : 1;
		unsigned has_preferredTransportMode : 1;
		unsigned has_avoidBusyRoads : 1;
		unsigned has_avoidHighways : 1;
		unsigned has_avoidHills : 1;
		unsigned has_avoidStairs : 1;
		unsigned has_avoidTolls : 1;
		unsigned has_eBike : 1;
		unsigned has_findMyCarEnabled : 1;
		unsigned has_headingEnabled : 1;
		unsigned has_labelEnabled : 1;
		unsigned has_pauseSpokenAudioEnabled : 1;
		unsigned has_speedLimitEnabled : 1;
		unsigned has_trafficEnabled : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasPreferredTransportMode; 
@property (assign,nonatomic) int preferredTransportMode; 
@property (assign,nonatomic) BOOL hasAvoidTolls; 
@property (assign,nonatomic) BOOL avoidTolls; 
@property (assign,nonatomic) BOOL hasAvoidHighways; 
@property (assign,nonatomic) BOOL avoidHighways; 
@property (assign,nonatomic) BOOL hasHeadingEnabled; 
@property (assign,nonatomic) BOOL headingEnabled; 
@property (assign,nonatomic) BOOL hasSpeedLimitEnabled; 
@property (assign,nonatomic) BOOL speedLimitEnabled; 
@property (assign,nonatomic) BOOL hasNavVoiceVolume; 
@property (assign,nonatomic) int navVoiceVolume; 
@property (assign,nonatomic) BOOL hasPauseSpokenAudioEnabled; 
@property (assign,nonatomic) BOOL pauseSpokenAudioEnabled; 
@property (assign,nonatomic) BOOL hasFindMyCarEnabled; 
@property (assign,nonatomic) BOOL findMyCarEnabled; 
@property (assign,nonatomic) BOOL hasTrafficEnabled; 
@property (assign,nonatomic) BOOL trafficEnabled; 
@property (assign,nonatomic) BOOL hasLabelEnabled; 
@property (assign,nonatomic) BOOL labelEnabled; 
@property (assign,nonatomic) BOOL hasAvoidHills; 
@property (assign,nonatomic) BOOL avoidHills; 
@property (assign,nonatomic) BOOL hasAvoidStairs; 
@property (assign,nonatomic) BOOL avoidStairs; 
@property (assign,nonatomic) BOOL hasAvoidBusyRoads; 
@property (assign,nonatomic) BOOL avoidBusyRoads; 
@property (assign,nonatomic) BOOL hasLocationType; 
@property (assign,nonatomic) int locationType; 
@property (assign,nonatomic) BOOL hasEBike; 
@property (assign,nonatomic) BOOL eBike; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)avoidHighways;
-(BOOL)hasAvoidBusyRoads;
-(void)setHasAvoidTolls:(BOOL)arg1 ;
-(BOOL)eBike;
-(BOOL)hasAvoidStairs;
-(void)setTrafficEnabled:(BOOL)arg1 ;
-(BOOL)hasAvoidHills;
-(BOOL)avoidTolls;
-(void)setAvoidHighways:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(void)setAvoidBusyRoads:(BOOL)arg1 ;
-(BOOL)trafficEnabled;
-(BOOL)avoidBusyRoads;
-(BOOL)avoidHills;
-(BOOL)avoidStairs;
-(void)setAvoidHills:(BOOL)arg1 ;
-(BOOL)hasAvoidTolls;
-(void)setHasAvoidStairs:(BOOL)arg1 ;
-(void)setHasAvoidHighways:(BOOL)arg1 ;
-(BOOL)hasAvoidHighways;
-(void)setHasAvoidBusyRoads:(BOOL)arg1 ;
-(void)setHasAvoidHills:(BOOL)arg1 ;
-(void)setAvoidStairs:(BOOL)arg1 ;
-(BOOL)hasEBike;
-(BOOL)labelEnabled;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)speedLimitEnabled;
-(void)setSpeedLimitEnabled:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)setNavVoiceVolume:(int)arg1 ;
-(BOOL)hasLabelEnabled;
-(BOOL)hasNavVoiceVolume;
-(int)preferredTransportMode;
-(BOOL)hasPauseSpokenAudioEnabled;
-(void)mergeFrom:(id)arg1 ;
-(void)setLocationType:(int)arg1 ;
-(int)StringAsPreferredTransportMode:(id)arg1 ;
-(void)setHasTrafficEnabled:(BOOL)arg1 ;
-(id)preferredTransportModeAsString:(int)arg1 ;
-(int)navVoiceVolume;
-(id)locationTypeAsString:(int)arg1 ;
-(BOOL)headingEnabled;
-(id)initWithDictionary:(id)arg1 ;
-(void)setLabelEnabled:(BOOL)arg1 ;
-(void)setFindMyCarEnabled:(BOOL)arg1 ;
-(id)description;
-(void)setHasHeadingEnabled:(BOOL)arg1 ;
-(int)locationType;
-(BOOL)pauseSpokenAudioEnabled;
-(void)setHeadingEnabled:(BOOL)arg1 ;
-(BOOL)hasHeadingEnabled;
-(int)StringAsLocationType:(id)arg1 ;
-(BOOL)hasSpeedLimitEnabled;
-(BOOL)hasLocationType;
-(void)setHasFindMyCarEnabled:(BOOL)arg1 ;
-(void)setHasLabelEnabled:(BOOL)arg1 ;
-(BOOL)hasTrafficEnabled;
-(unsigned long long)hash;
-(void)setHasPreferredTransportMode:(BOOL)arg1 ;
-(BOOL)findMyCarEnabled;
-(void)setPauseSpokenAudioEnabled:(BOOL)arg1 ;
-(void)setHasNavVoiceVolume:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasPauseSpokenAudioEnabled:(BOOL)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasPreferredTransportMode;
-(void)setHasSpeedLimitEnabled:(BOOL)arg1 ;
-(void)setHasEBike:(BOOL)arg1 ;
-(void)setAvoidTolls:(BOOL)arg1 ;
-(void)setHasLocationType:(BOOL)arg1 ;
-(void)setPreferredTransportMode:(int)arg1 ;
-(int)StringAsNavVoiceVolume:(id)arg1 ;
-(void)setEBike:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)hasFindMyCarEnabled;
-(BOOL)isEqual:(id)arg1 ;
-(id)navVoiceVolumeAsString:(int)arg1 ;
@end

