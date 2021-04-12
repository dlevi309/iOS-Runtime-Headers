/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(float)volume;
-(void)setVolume:(float)arg1;
-(void)setAudioEnabled:(BOOL)arg1;
-(BOOL)isAudioEnabled;
-(BOOL)isVideoEnabled;
-(void)setVideoEnabled:(BOOL)arg1;
-(BOOL)isVideoPaused;
-(void)setVideoPaused:(BOOL)arg1;
-(void)setAudioMuted:(BOOL)arg1;
-(BOOL)isAudioPaused;
-(void)setAudioPaused:(BOOL)arg1;
-(NSData *)negotiationData;
-(BOOL)isAudioMuted;
-(NSData *)frequencyLevels;

@end

