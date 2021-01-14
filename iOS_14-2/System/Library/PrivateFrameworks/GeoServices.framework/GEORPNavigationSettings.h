/*
* Generated on Thursday, January 14, 2021 at 2:21:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEORPNavigationSettings : PBCodable <NSCopying> {

	unsigned long long _distanceUnits;
	unsigned long long _maxAlternateRouteCount;
	NSString* _voiceLanguage;
	unsigned long long _voiceVolume;
	int _userPreferredTransportType;
	BOOL _beepBeforeInstruction;
	BOOL _muteSpeechOverride;
	BOOL _pauseSpokenAudio;
	BOOL _shouldUseGuidanceEventManager;
	BOOL _speechEnabled;
	struct {
		unsigned has_distanceUnits : 1;
		unsigned has_maxAlternateRouteCount : 1;
		unsigned has_voiceVolume : 1;
		unsigned has_userPreferredTransportType : 1;
		unsigned has_beepBeforeInstruction : 1;
		unsigned has_muteSpeechOverride : 1;
		unsigned has_pauseSpokenAudio : 1;
		unsigned has_shouldUseGuidanceEventManager : 1;
		unsigned has_speechEnabled : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasVoiceVolume; 
@property (assign,nonatomic) unsigned long long voiceVolume; 
@property (assign,nonatomic) BOOL hasDistanceUnits; 
@property (assign,nonatomic) unsigned long long distanceUnits; 
@property (assign,nonatomic) BOOL hasPauseSpokenAudio; 
@property (assign,nonatomic) BOOL pauseSpokenAudio; 
@property (assign,nonatomic) BOOL hasMuteSpeechOverride; 
@property (assign,nonatomic) BOOL muteSpeechOverride; 
@property (assign,nonatomic) BOOL hasSpeechEnabled; 
@property (assign,nonatomic) BOOL speechEnabled; 
@property (assign,nonatomic) BOOL hasMaxAlternateRouteCount; 
@property (assign,nonatomic) unsigned long long maxAlternateRouteCount; 
@property (assign,nonatomic) BOOL hasBeepBeforeInstruction; 
@property (assign,nonatomic) BOOL beepBeforeInstruction; 
@property (nonatomic,readonly) BOOL hasVoiceLanguage; 
@property (nonatomic,retain) NSString * voiceLanguage; 
@property (assign,nonatomic) BOOL hasShouldUseGuidanceEventManager; 
@property (assign,nonatomic) BOOL shouldUseGuidanceEventManager; 
@property (assign,nonatomic) BOOL hasUserPreferredTransportType; 
@property (assign,nonatomic) int userPreferredTransportType; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)pauseSpokenAudio;
-(id)dictionaryRepresentation;
-(BOOL)speechEnabled;
-(unsigned long long)distanceUnits;
-(unsigned long long)voiceVolume;
-(BOOL)shouldUseGuidanceEventManager;
-(BOOL)muteSpeechOverride;
-(NSString *)voiceLanguage;
-(void)setVoiceLanguage:(NSString *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)setVoiceVolume:(unsigned long long)arg1 ;
-(void)setDistanceUnits:(unsigned long long)arg1 ;
-(void)setHasVoiceVolume:(BOOL)arg1 ;
-(BOOL)hasVoiceVolume;
-(void)setHasDistanceUnits:(BOOL)arg1 ;
-(BOOL)hasDistanceUnits;
-(void)setHasPauseSpokenAudio:(BOOL)arg1 ;
-(BOOL)hasPauseSpokenAudio;
-(void)setHasMuteSpeechOverride:(BOOL)arg1 ;
-(BOOL)hasMuteSpeechOverride;
-(void)setHasSpeechEnabled:(BOOL)arg1 ;
-(BOOL)hasSpeechEnabled;
-(unsigned long long)maxAlternateRouteCount;
-(void)setHasMaxAlternateRouteCount:(BOOL)arg1 ;
-(BOOL)hasMaxAlternateRouteCount;
-(void)setHasBeepBeforeInstruction:(BOOL)arg1 ;
-(BOOL)hasBeepBeforeInstruction;
-(BOOL)hasVoiceLanguage;
-(void)setHasShouldUseGuidanceEventManager:(BOOL)arg1 ;
-(BOOL)hasShouldUseGuidanceEventManager;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setSpeechEnabled:(BOOL)arg1 ;
-(void)setShouldUseGuidanceEventManager:(BOOL)arg1 ;
-(void)setPauseSpokenAudio:(BOOL)arg1 ;
-(BOOL)beepBeforeInstruction;
-(unsigned long long)hash;
-(void)setMuteSpeechOverride:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setMaxAlternateRouteCount:(unsigned long long)arg1 ;
-(void)setUserPreferredTransportType:(int)arg1 ;
-(int)userPreferredTransportType;
-(void)setHasUserPreferredTransportType:(BOOL)arg1 ;
-(BOOL)hasUserPreferredTransportType;
-(id)userPreferredTransportTypeAsString:(int)arg1 ;
-(int)StringAsUserPreferredTransportType:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setBeepBeforeInstruction:(BOOL)arg1 ;
@end

