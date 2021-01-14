/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

@class NSString, NSData;


@protocol AVCSessionParticipantControlProtocol <NSObject>
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) NSData * negotiationData; 
@property (assign,getter=isAudioMuted,nonatomic) BOOL audioMuted; 
@property (assign,getter=isAudioEnabled,nonatomic) BOOL audioEnabled; 
@property (assign,getter=isVideoEnabled,nonatomic) BOOL videoEnabled; 
@property (assign,getter=isAudioPaused,nonatomic) BOOL audioPaused; 
@property (assign,getter=isVideoPaused,nonatomic) BOOL videoPaused; 
@property (assign,nonatomic) float volume; 
@property (nonatomic,readonly) NSData * frequencyLevels; 
@required
-(NSString *)uuid;
-(void)setVolume:(float)arg1;
-(void)setVideoPaused:(BOOL)arg1;
-(void)setAudioEnabled:(BOOL)arg1;
-(void)setAudioMuted:(BOOL)arg1;
-(BOOL)isVideoEnabled;
-(void)setVideoEnabled:(BOOL)arg1;
-(float)volume;
-(BOOL)isAudioEnabled;
-(BOOL)isVideoPaused;
-(BOOL)isAudioPaused;
-(void)setAudioPaused:(BOOL)arg1;
-(NSData *)negotiationData;
-(BOOL)isAudioMuted;
-(NSData *)frequencyLevels;

@end

