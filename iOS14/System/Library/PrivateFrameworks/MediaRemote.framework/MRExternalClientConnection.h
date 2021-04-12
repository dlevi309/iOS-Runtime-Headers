/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolClientConnection.h>

@class NSMutableArray, NSArray, MRCryptoPairingSession;

@interface MRExternalClientConnection : MRProtocolClientConnection {

	NSMutableArray* _subscribedOrigins;
	BOOL _registeredToNowPlayingUpdates;
	BOOL _registeredToVolumeUpdates;
	BOOL _registeredKeyboardUpdates;
	BOOL _registeredToOutputDeviceUpdates;
	BOOL _registeredToSystemEndpointUpdates;
	BOOL _cryptoEnabled;
	unsigned _voiceRecordingState;
	NSArray* _subscribedPlayerPaths;
	MRCryptoPairingSession* _cryptoSession;

}

@property (nonatomic,copy) NSArray * subscribedPlayerPaths;                       //@synthesize subscribedPlayerPaths=_subscribedPlayerPaths - In the implementation block
@property (assign,nonatomic) BOOL registeredToNowPlayingUpdates;                  //@synthesize registeredToNowPlayingUpdates=_registeredToNowPlayingUpdates - In the implementation block
@property (assign,nonatomic) BOOL registeredToVolumeUpdates;                      //@synthesize registeredToVolumeUpdates=_registeredToVolumeUpdates - In the implementation block
@property (assign,nonatomic) BOOL registeredKeyboardUpdates;                      //@synthesize registeredKeyboardUpdates=_registeredKeyboardUpdates - In the implementation block
@property (assign,nonatomic) BOOL registeredToOutputDeviceUpdates;                //@synthesize registeredToOutputDeviceUpdates=_registeredToOutputDeviceUpdates - In the implementation block
@property (assign,nonatomic) BOOL registeredToSystemEndpointUpdates;              //@synthesize registeredToSystemEndpointUpdates=_registeredToSystemEndpointUpdates - In the implementation block
@property (assign,nonatomic) unsigned voiceRecordingState;                        //@synthesize voiceRecordingState=_voiceRecordingState - In the implementation block
@property (nonatomic,retain) MRCryptoPairingSession * cryptoSession;              //@synthesize cryptoSession=_cryptoSession - In the implementation block
@property (assign,nonatomic) BOOL cryptoEnabled;                                  //@synthesize cryptoEnabled=_cryptoEnabled - In the implementation block
-(id)decryptData:(id)arg1 error:(id*)arg2 ;
-(void)setCryptoEnabled:(BOOL)arg1 ;
-(BOOL)cryptoEnabled;
-(void)setCryptoSession:(MRCryptoPairingSession *)arg1 ;
-(BOOL)registeredToNowPlayingUpdates;
-(void)setRegisteredToNowPlayingUpdates:(BOOL)arg1 ;
-(BOOL)registeredToVolumeUpdates;
-(void)setRegisteredToVolumeUpdates:(BOOL)arg1 ;
-(BOOL)registeredKeyboardUpdates;
-(void)setRegisteredKeyboardUpdates:(BOOL)arg1 ;
-(BOOL)registeredToOutputDeviceUpdates;
-(void)setRegisteredToOutputDeviceUpdates:(BOOL)arg1 ;
-(BOOL)registeredToSystemEndpointUpdates;
-(void)setRegisteredToSystemEndpointUpdates:(BOOL)arg1 ;
-(id)initWithInputStream:(id)arg1 outputStream:(id)arg2 runLoop:(id)arg3 ;
-(unsigned)voiceRecordingState;
-(void)setVoiceRecordingState:(unsigned)arg1 ;
-(MRCryptoPairingSession *)cryptoSession;
-(id)encryptDataForMessage:(id)arg1 ;
-(NSArray *)subscribedPlayerPaths;
-(void)setSubscribedPlayerPaths:(NSArray *)arg1 ;
@end

