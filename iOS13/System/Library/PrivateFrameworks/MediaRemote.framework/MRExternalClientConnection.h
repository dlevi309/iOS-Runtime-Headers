/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolClientConnection.h>

@class MRCryptoPairingSession;

@interface MRExternalClientConnection : MRProtocolClientConnection {

	BOOL _registeredToNowPlayingUpdates;
	BOOL _registeredToVolumeUpdates;
	BOOL _registeredKeyboardUpdates;
	BOOL _registeredToOutputDeviceUpdates;
	BOOL _cryptoEnabled;
	unsigned _voiceRecordingState;
	MRCryptoPairingSession* _cryptoSession;

}

@property (assign,nonatomic) BOOL registeredToNowPlayingUpdates;                  //@synthesize registeredToNowPlayingUpdates=_registeredToNowPlayingUpdates - In the implementation block
@property (assign,nonatomic) BOOL registeredToVolumeUpdates;                      //@synthesize registeredToVolumeUpdates=_registeredToVolumeUpdates - In the implementation block
@property (assign,nonatomic) BOOL registeredKeyboardUpdates;                      //@synthesize registeredKeyboardUpdates=_registeredKeyboardUpdates - In the implementation block
@property (assign,nonatomic) BOOL registeredToOutputDeviceUpdates;                //@synthesize registeredToOutputDeviceUpdates=_registeredToOutputDeviceUpdates - In the implementation block
@property (assign,nonatomic) unsigned voiceRecordingState;                        //@synthesize voiceRecordingState=_voiceRecordingState - In the implementation block
@property (nonatomic,retain) MRCryptoPairingSession * cryptoSession;              //@synthesize cryptoSession=_cryptoSession - In the implementation block
@property (assign,nonatomic) BOOL cryptoEnabled;                                  //@synthesize cryptoEnabled=_cryptoEnabled - In the implementation block
-(unsigned)voiceRecordingState;
-(void)setVoiceRecordingState:(unsigned)arg1 ;
-(MRCryptoPairingSession *)cryptoSession;
-(id)initWithInputStream:(id)arg1 outputStream:(id)arg2 runLoop:(id)arg3 ;
-(void)setCryptoEnabled:(BOOL)arg1 ;
-(void)setCryptoSession:(MRCryptoPairingSession *)arg1 ;
-(id)decryptData:(id)arg1 error:(id*)arg2 ;
-(id)encryptDataForMessage:(id)arg1 ;
-(BOOL)registeredToNowPlayingUpdates;
-(void)setRegisteredToNowPlayingUpdates:(BOOL)arg1 ;
-(BOOL)registeredToVolumeUpdates;
-(void)setRegisteredToVolumeUpdates:(BOOL)arg1 ;
-(BOOL)registeredKeyboardUpdates;
-(void)setRegisteredKeyboardUpdates:(BOOL)arg1 ;
-(BOOL)registeredToOutputDeviceUpdates;
-(void)setRegisteredToOutputDeviceUpdates:(BOOL)arg1 ;
-(BOOL)cryptoEnabled;
@end

