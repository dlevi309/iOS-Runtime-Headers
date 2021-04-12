/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
*/


#import <AirPlayReceiver/AirPlayReceiver-Structs.h>
@class AirPlayControllerServer, AirPlayReceiverMediaRemoteHelper, DEExtension, NSString;

@interface AirPlayReceiverPlatform : NSObject {

	AirPlayReceiverServerPrivate* _server;
	CFSetRef _mediaAudioSessions;
	CFSetRef _mediaVideoSessions;
	CFSetRef _screenSessions;
	CFSetRef _auxAudioSessions;
	int _uiErrorNotifyToken;
	int _lockDownActivationStateToken;
	int _hijackIDChangedNotifyToken;
	unsigned char _playbackPrevented;
	int _playbackAllowNotifyToken;
	int _playbackPreventNotifyToken;
	int _prefChangedNotifyToken;
	int _managedDefaultsChangedNotificationToken;
	int _systemBufferSamples;
	int _systemSampleRate;
	unsigned char _voiceForSiri;
	unsigned char _voiceForTelephony;
	AirPlayControllerServer* _controllerServer;
	float _volumeSliderValue;
	int _volumeControlType;
	unsigned char _useMediaRemotePerPlayerAPI;
	AirPlayReceiverMediaRemoteHelper* _mediaRemoteHelper;
	unsigned char _isAirPlayReceiverMRNowPlayingApp;
	unsigned char _isHandlingMRCommands;
	unsigned char _isMuted;
	float _volumeSliderValueBeforeMute;
	DEExtension* _wifiDiagnosticExtension;
	NSString* _wifiDECaptureUUID;
	unsigned long long _stalledSessionCount;
	unsigned char _isAmbientAudioActive;
	unsigned char _isMediaAudioActive;
	unsigned char _isVideoActive;
	unsigned char _isScreenActive;
	unsigned long long _receiverSessionCount;

}

@property (assign,nonatomic) unsigned long long receiverSessionCount;              //@synthesize receiverSessionCount=_receiverSessionCount - In the implementation block
@property (assign,nonatomic) unsigned char isAmbientAudioActive;                   //@synthesize isAmbientAudioActive=_isAmbientAudioActive - In the implementation block
@property (assign,nonatomic) unsigned char isMediaAudioActive;                     //@synthesize isMediaAudioActive=_isMediaAudioActive - In the implementation block
@property (assign,nonatomic) unsigned char isVideoActive;                          //@synthesize isVideoActive=_isVideoActive - In the implementation block
@property (assign,nonatomic) unsigned char isScreenActive;                         //@synthesize isScreenActive=_isScreenActive - In the implementation block
-(unsigned char)isVideoActive;
-(void)handleMRCommand:(unsigned)arg1 translatedAPCommand:(unsigned)arg2 withOptions:(CFDictionaryRef)arg3 ;
-(void)_avSystemControllerNowPlayingAppIsPlayingChanged:(id)arg1 ;
-(void)_avSystemControllerVolumeConfigChanged:(id)arg1 ;
-(void)_avSystemControllerVolumeChanged:(id)arg1 ;
-(void)_registerAVSystemControllerNotificationsAndFetchInitialStates;
-(void)_registerAVSystemControllerNotifications;
-(void)_unregisterAVSystemControllerNotifications;
-(void)_handleVolumeControlTypeChange;
-(void)updateActiveSessionRegistration:(AirPlayReceiverSessionPrivate*)arg1 regType:(int)arg2 regOp:(int)arg3 ;
-(void)setReceiverSessionCount:(unsigned long long)arg1 ;
-(void)setIsAmbientAudioActive:(unsigned char)arg1 ;
-(void)setIsMediaAudioActive:(unsigned char)arg1 ;
-(void)setIsVideoActive:(unsigned char)arg1 ;
-(void)setIsScreenActive:(unsigned char)arg1 ;
-(void)updateMRNowPlayingAppState;
-(void)_handleAVAudioSessionInterruption:(id)arg1 ;
-(void)_handleAVAudioSessionServicesReset:(id)arg1 ;
-(void)_updateMediaSessionActivationStateBasedOnMediaAudioActiveState:(unsigned char)arg1 andVideoActiveState:(unsigned char)arg2 ;
-(unsigned long long)receiverSessionCount;
-(unsigned char)isAmbientAudioActive;
-(unsigned char)isMediaAudioActive;
-(unsigned char)isScreenActive;
@end

