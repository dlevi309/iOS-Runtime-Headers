/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@class NSData, NSString;

@interface VCSessionParticipantConfig : NSObject {

	NSData* _participantData;
	NSString* _uuid;
	unsigned long long _idsParticipantID;
	BOOL _audioEnabled;
	BOOL _videoEnabled;
	BOOL _frequencyMeteringEnabled;
	BOOL _audioMuted;
	float _volume;
	float _audioPosition;
	BOOL _audioPaused;
	BOOL _videoPaused;
	unsigned char _videoQuality;
	unsigned _visibilityIndex;
	unsigned _prominenceIndex;

}

@property (nonatomic,retain) NSData * participantData;                         //@synthesize participantData=_participantData - In the implementation block
@property (nonatomic,retain) NSString * uuid;                                  //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) unsigned long long idsParticipantID;              //@synthesize idsParticipantID=_idsParticipantID - In the implementation block
@property (assign,nonatomic) BOOL audioEnabled;                                //@synthesize audioEnabled=_audioEnabled - In the implementation block
@property (assign,nonatomic) BOOL videoEnabled;                                //@synthesize videoEnabled=_videoEnabled - In the implementation block
@property (assign,nonatomic) BOOL frequencyMeteringEnabled;                    //@synthesize frequencyMeteringEnabled=_frequencyMeteringEnabled - In the implementation block
@property (assign,nonatomic) BOOL audioMuted;                                  //@synthesize audioMuted=_audioMuted - In the implementation block
@property (assign,nonatomic) float volume;                                     //@synthesize volume=_volume - In the implementation block
@property (assign,nonatomic) float audioPosition;                              //@synthesize audioPosition=_audioPosition - In the implementation block
@property (assign,nonatomic) BOOL audioPaused;                                 //@synthesize audioPaused=_audioPaused - In the implementation block
@property (assign,nonatomic) BOOL videoPaused;                                 //@synthesize videoPaused=_videoPaused - In the implementation block
@property (assign,nonatomic) unsigned char videoQuality;                       //@synthesize videoQuality=_videoQuality - In the implementation block
@property (assign,nonatomic) unsigned visibilityIndex;                         //@synthesize visibilityIndex=_visibilityIndex - In the implementation block
@property (assign,nonatomic) unsigned prominenceIndex;                         //@synthesize prominenceIndex=_prominenceIndex - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)uuid;
-(void)setUuid:(NSString *)arg1 ;
-(unsigned char)videoQuality;
-(void)setVideoQuality:(unsigned char)arg1 ;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(void)setAudioEnabled:(BOOL)arg1 ;
-(NSData *)participantData;
-(void)setVideoEnabled:(BOOL)arg1 ;
-(void)setVideoPaused:(BOOL)arg1 ;
-(BOOL)audioEnabled;
-(BOOL)videoEnabled;
-(void)setAudioMuted:(BOOL)arg1 ;
-(BOOL)audioMuted;
-(unsigned long long)idsParticipantID;
-(void)setAudioPosition:(float)arg1 ;
-(void)setAudioPaused:(BOOL)arg1 ;
-(void)setVisibilityIndex:(unsigned)arg1 ;
-(void)setProminenceIndex:(unsigned)arg1 ;
-(unsigned)visibilityIndex;
-(unsigned)prominenceIndex;
-(void)setIdsParticipantID:(unsigned long long)arg1 ;
-(void)setParticipantData:(NSData *)arg1 ;
-(BOOL)audioPaused;
-(BOOL)videoPaused;
-(float)audioPosition;
-(BOOL)frequencyMeteringEnabled;
-(void)setFrequencyMeteringEnabled:(BOOL)arg1 ;
@end

