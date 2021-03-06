/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/

#import <TVRemoteCore/TVRemoteCore-Structs.h>
#import <TVRemoteCore/_TVRXVoiceRecorderDelegate.h>
#import <TVRemoteCore/_TVRCMROriginDelegate.h>
#import <TVRemoteCore/_TVRCDeviceImpl.h>

@class _TVRXDevice, _TVRCMRTelevisionWrapper, _TVRCMROriginWrapper, NSSet, _TVRCMediaRemoteEventTranslator, _TVRXVoiceRecorder, NSMutableArray, _TVRXKeyboardController, _TVRCMediaRemoteKeyboardImplManager, NSString;

@interface _TVRCMediaRemoteDeviceImpl : NSObject <_TVRXVoiceRecorderDelegate, _TVRCMROriginDelegate, _TVRCDeviceImpl> {

	unsigned _voiceDeviceID;
	_TVRXDevice* _device;
	_TVRCMRTelevisionWrapper* _television;
	_TVRCMROriginWrapper* _origin;
	NSSet* _mediaButtons;
	NSSet* _volumeButtons;
	unsigned long long _touchDeviceID;
	unsigned long long _gameControllerID;
	long long _gameControllerState;
	_TVRCMediaRemoteEventTranslator* _eventTranslator;
	_TVRXVoiceRecorder* _voiceRecorder;
	NSMutableArray* _queuedAudioBuffers;
	_TVRXKeyboardController* _keyboardController;
	_TVRCMediaRemoteKeyboardImplManager* _keyboardImplManager;

}

@property (nonatomic,retain) _TVRCMRTelevisionWrapper * television;                                  //@synthesize television=_television - In the implementation block
@property (nonatomic,retain) _TVRCMROriginWrapper * origin;                                          //@synthesize origin=_origin - In the implementation block
@property (nonatomic,copy) NSSet * mediaButtons;                                                     //@synthesize mediaButtons=_mediaButtons - In the implementation block
@property (nonatomic,copy) NSSet * volumeButtons;                                                    //@synthesize volumeButtons=_volumeButtons - In the implementation block
@property (assign,nonatomic) unsigned long long touchDeviceID;                                       //@synthesize touchDeviceID=_touchDeviceID - In the implementation block
@property (assign,nonatomic) unsigned voiceDeviceID;                                                 //@synthesize voiceDeviceID=_voiceDeviceID - In the implementation block
@property (assign,nonatomic) unsigned long long gameControllerID;                                    //@synthesize gameControllerID=_gameControllerID - In the implementation block
@property (assign,nonatomic) long long gameControllerState;                                          //@synthesize gameControllerState=_gameControllerState - In the implementation block
@property (nonatomic,retain) _TVRCMediaRemoteEventTranslator * eventTranslator;                      //@synthesize eventTranslator=_eventTranslator - In the implementation block
@property (nonatomic,retain) _TVRXVoiceRecorder * voiceRecorder;                                     //@synthesize voiceRecorder=_voiceRecorder - In the implementation block
@property (nonatomic,retain) NSMutableArray * queuedAudioBuffers;                                    //@synthesize queuedAudioBuffers=_queuedAudioBuffers - In the implementation block
@property (nonatomic,retain) _TVRXKeyboardController * keyboardController;                           //@synthesize keyboardController=_keyboardController - In the implementation block
@property (nonatomic,retain) _TVRCMediaRemoteKeyboardImplManager * keyboardImplManager;              //@synthesize keyboardImplManager=_keyboardImplManager - In the implementation block
@property (assign,nonatomic,__weak) _TVRXDevice * device;                                            //@synthesize device=_device - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)implWithTelevision:(id)arg1 ;
-(void)setOrigin:(_TVRCMROriginWrapper *)arg1 ;
-(void)disconnect;
-(id)model;
-(_TVRCMROriginWrapper *)origin;
-(long long)connectionType;
-(void)connect;
-(void)sendGameControllerEvent:(id)arg1 ;
-(id)supportedButtons;
-(_TVRXDevice *)device;
-(id)name;
-(_TVRXKeyboardController *)keyboardController;
-(_TVRCMRTelevisionWrapper *)television;
-(void)setDevice:(_TVRXDevice *)arg1 ;
-(void)sendButtonEvent:(id)arg1 ;
-(id)identifier;
-(void)dealloc;
-(id)initWithTelevision:(id)arg1 ;
-(NSSet *)mediaButtons;
-(void)setMediaButtons:(NSSet *)arg1 ;
-(void)_setupKeyboardController;
-(id)alternateIdentifiers;
-(BOOL)supportsTouchEvents;
-(void)sendTouchEvent:(id)arg1 ;
-(void)setKeyboardController:(_TVRXKeyboardController *)arg1 ;
-(unsigned long long)pairingCapability;
-(_TVRXVoiceRecorder *)voiceRecorder;
-(void)setAuthenticationSupported:(BOOL)arg1 ;
-(void)voiceRecorder:(id)arg1 isAboutToBeginRecording:(/*^block*/id)arg2 ;
-(void)voidRecorderDidStop:(id)arg1 ;
-(id)createBufferWithSettings:(id)arg1 packetCapacity:(unsigned long long)arg2 maxPacketSize:(unsigned long long)arg3 ;
-(void)voiceRecorder:(id)arg1 bufferAvailable:(id)arg2 ;
-(void)_nameChanged:(id)arg1 ;
-(void)setTelevision:(_TVRCMRTelevisionWrapper *)arg1 ;
-(void)_connectionRequestedPairing:(SCD_Struct_TV9)arg1 continuation:(/*^block*/id)arg2 ;
-(void)_addConnectionStateHandler;
-(void)_becameDisconnected:(id)arg1 ;
-(void)_removeConnectionStateHandler;
-(void)_resetAllState;
-(void)_sendEquivalentGameButton:(id)arg1 ;
-(void)_connectionStateChanged:(unsigned)arg1 error:(id)arg2 ;
-(void)_becameConnected;
-(void)_registerTouchDevice;
-(void)_setupVoiceRecorder;
-(void)_beginObservingNowPlaying;
-(void)_setupVolumeControls;
-(void)_registerGameControllerInputModeHandler;
-(void)_removePairingRecords;
-(void)_unregisterGameControllerInputModeHandler;
-(void)_teardownVolumeControls;
-(void)_registerVoiceDeviceWithCompletion:(/*^block*/id)arg1 ;
-(void)_voiceRecorderStateChanged:(unsigned)arg1 ;
-(void)_drainAndClearAudioBufferQueue;
-(void)_setupOriginIfNeeded;
-(void)_volumeControlsDidUpdate:(id)arg1 ;
-(void)_reloadVolumeControlAvailability;
-(void)setVolumeButtons:(NSSet *)arg1 ;
-(void)_enableVolumeButtons:(BOOL)arg1 ;
-(BOOL)_isSystemVersionSupported;
-(void)_gameControllerInputModeChanged:(unsigned)arg1 ;
-(void)_registerGameControllerID;
-(void)_unregisterGameControllerID;
-(void)origin:(id)arg1 updatedSupportedCommands:(id)arg2 ;
-(NSSet *)volumeButtons;
-(unsigned long long)touchDeviceID;
-(void)setTouchDeviceID:(unsigned long long)arg1 ;
-(unsigned)voiceDeviceID;
-(void)setVoiceDeviceID:(unsigned)arg1 ;
-(unsigned long long)gameControllerID;
-(void)setGameControllerID:(unsigned long long)arg1 ;
-(long long)gameControllerState;
-(void)setGameControllerState:(long long)arg1 ;
-(_TVRCMediaRemoteEventTranslator *)eventTranslator;
-(void)setEventTranslator:(_TVRCMediaRemoteEventTranslator *)arg1 ;
-(void)setVoiceRecorder:(_TVRXVoiceRecorder *)arg1 ;
-(NSMutableArray *)queuedAudioBuffers;
-(void)setQueuedAudioBuffers:(NSMutableArray *)arg1 ;
-(_TVRCMediaRemoteKeyboardImplManager *)keyboardImplManager;
-(void)setKeyboardImplManager:(_TVRCMediaRemoteKeyboardImplManager *)arg1 ;
@end

