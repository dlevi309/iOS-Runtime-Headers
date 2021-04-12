/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOLogMsgStateMapSettings : PBCodable <NSCopying> {

	int _navVoiceVolume;
	int _preferredTransportMode;
	BOOL _avoidHighways;
	BOOL _avoidTolls;
	BOOL _findMyCarEnabled;
	BOOL _headingEnabled;
	BOOL _labelEnabled;
	BOOL _pauseSpokenAudioEnabled;
	BOOL _speedLimitEnabled;
	BOOL _trafficEnabled;
	struct {
		unsigned has_navVoiceVolume : 1;
		unsigned has_preferredTransportMode : 1;
		unsigned has_avoidHighways : 1;
		unsigned has_avoidTolls : 1;
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
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)avoidTolls;
-(void)setAvoidTolls:(BOOL)arg1 ;
-(void)setHasAvoidTolls:(BOOL)arg1 ;
-(BOOL)hasAvoidTolls;
-(BOOL)avoidHighways;
-(void)setAvoidHighways:(BOOL)arg1 ;
-(void)setHasAvoidHighways:(BOOL)arg1 ;
-(BOOL)hasAvoidHighways;
-(int)preferredTransportMode;
-(void)setPreferredTransportMode:(int)arg1 ;
-(void)setHasPreferredTransportMode:(BOOL)arg1 ;
-(BOOL)hasPreferredTransportMode;
-(id)preferredTransportModeAsString:(int)arg1 ;
-(int)StringAsPreferredTransportMode:(id)arg1 ;
-(BOOL)headingEnabled;
-(void)setHeadingEnabled:(BOOL)arg1 ;
-(void)setHasHeadingEnabled:(BOOL)arg1 ;
-(BOOL)hasHeadingEnabled;
-(BOOL)speedLimitEnabled;
-(void)setSpeedLimitEnabled:(BOOL)arg1 ;
-(void)setHasSpeedLimitEnabled:(BOOL)arg1 ;
-(BOOL)hasSpeedLimitEnabled;
-(int)navVoiceVolume;
-(void)setNavVoiceVolume:(int)arg1 ;
-(void)setHasNavVoiceVolume:(BOOL)arg1 ;
-(BOOL)hasNavVoiceVolume;
-(id)navVoiceVolumeAsString:(int)arg1 ;
-(int)StringAsNavVoiceVolume:(id)arg1 ;
-(BOOL)pauseSpokenAudioEnabled;
-(void)setPauseSpokenAudioEnabled:(BOOL)arg1 ;
-(void)setHasPauseSpokenAudioEnabled:(BOOL)arg1 ;
-(BOOL)hasPauseSpokenAudioEnabled;
-(BOOL)findMyCarEnabled;
-(void)setFindMyCarEnabled:(BOOL)arg1 ;
-(void)setHasFindMyCarEnabled:(BOOL)arg1 ;
-(BOOL)hasFindMyCarEnabled;
-(BOOL)trafficEnabled;
-(void)setTrafficEnabled:(BOOL)arg1 ;
-(void)setHasTrafficEnabled:(BOOL)arg1 ;
-(BOOL)hasTrafficEnabled;
-(BOOL)labelEnabled;
-(void)setLabelEnabled:(BOOL)arg1 ;
-(void)setHasLabelEnabled:(BOOL)arg1 ;
-(BOOL)hasLabelEnabled;
@end

