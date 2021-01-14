/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
*/


@class NSXPCConnection;

@interface VSKeepAlive : NSObject {

	NSXPCConnection* _serverConnection;
	long long _audioType;
	BOOL _active;
	BOOL _keepAudioSessionActive;

}

@property (assign,nonatomic) long long audioType;                      //@synthesize audioType=_audioType - In the implementation block
@property (assign,nonatomic) BOOL active;                              //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) BOOL keepAudioSessionActive;              //@synthesize keepAudioSessionActive=_keepAudioSessionActive - In the implementation block
-(id)_serverConnection;
-(BOOL)active;
-(void)setActive:(BOOL)arg1 ;
-(void)_ensureKeepAliveMaintenance;
-(id)_remoteKeepAlive;
-(BOOL)keepAudioSessionActive;
-(long long)audioType;
-(void)setAudioType:(long long)arg1 ;
-(void)setKeepAudioSessionActive:(BOOL)arg1 ;
-(void)dealloc;
@end

