/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)setActive:(BOOL)arg1 ;
-(id)_serverConnection;
-(BOOL)active;
-(long long)audioType;
-(void)setAudioType:(long long)arg1 ;
-(void)setKeepAudioSessionActive:(BOOL)arg1 ;
-(void)_ensureKeepAliveMaintenance;
-(id)_remoteKeepAlive;
-(BOOL)keepAudioSessionActive;
@end

