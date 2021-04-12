/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
*/


#import <AirPlayReceiver/AirPlayReceiver-Structs.h>
@class AirPlayControllerServer, DEExtension, NSString;

@interface AirPlayReceiverPlatform : NSObject {

	AirPlayReceiverServerPrivate* _server;
	int _uiErrorNotifyToken;
	int _lockDownActivationStateToken;
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
	unsigned char _isMuted;
	float _volumeSliderValueBeforeMute;
	DEExtension* _wifiDiagnosticExtension;
	NSString* _wifiDECaptureUUID;
	unsigned long long _stalledSessionCount;
	unsigned char _isAmbientAudioPlaying;
	unsigned char _isMediaAudioPlaying;
	unsigned char _isVideoPlaying;

}

@property (assign,nonatomic) unsigned char isAmbientAudioPlaying;              //@synthesize isAmbientAudioPlaying=_isAmbientAudioPlaying - In the implementation block
@property (assign,nonatomic) unsigned char isMediaAudioPlaying;                //@synthesize isMediaAudioPlaying=_isMediaAudioPlaying - In the implementation block
@property (assign,nonatomic) unsigned char isVideoPlaying;                     //@synthesize isVideoPlaying=_isVideoPlaying - In the implementation block
-(unsigned char)isVideoPlaying;
-(void)_avSystemControllerVolumeConfigChanged:(id)arg1 ;
-(void)_avSystemControllerVolumeChanged:(id)arg1 ;
-(void)_setupVolumeNotificationHandlers;
-(void)_handleVolumeControlTypeChange;
-(void)setIsAmbientAudioPlaying:(unsigned char)arg1 ;
-(void)setIsMediaAudioPlaying:(unsigned char)arg1 ;
-(void)setIsVideoPlaying:(unsigned char)arg1 ;
-(void)_handleAVAudioSessionInterruption:(id)arg1 ;
-(void)_handleAVAudioSessionServicesReset:(id)arg1 ;
-(void)_updateMediaSessionActivationStateBasedOnMediaAudioPlayingState:(unsigned char)arg1 andVideoPlayingState:(unsigned char)arg2 ;
-(unsigned char)isAmbientAudioPlaying;
-(unsigned char)isMediaAudioPlaying;
@end

