/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@protocol TVRCDeviceDelegate;
@class NSString, TVRCVoiceRecorder, TVRCKeyboardController, TVRCDeviceInfo, _TVRCDeviceState, NSSet;

@interface TVRCDevice : NSObject {

	id<TVRCDeviceDelegate> _delegate;
	NSString* _identifier;
	TVRCVoiceRecorder* _voiceRecorder;
	TVRCKeyboardController* _keyboardController;
	TVRCDeviceInfo* _info;
	NSString* _name;
	_TVRCDeviceState* _deviceState;

}

@property (nonatomic,copy) NSString * identifier;                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * name;                                            //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) _TVRCDeviceState * deviceState;                           //@synthesize deviceState=_deviceState - In the implementation block
@property (nonatomic,retain) TVRCKeyboardController * keyboardController;              //@synthesize keyboardController=_keyboardController - In the implementation block
@property (nonatomic,retain) TVRCVoiceRecorder * voiceRecorder;                        //@synthesize voiceRecorder=_voiceRecorder - In the implementation block
@property (nonatomic,retain) TVRCDeviceInfo * info;                                    //@synthesize info=_info - In the implementation block
@property (nonatomic,readonly) long long connectionType; 
@property (assign,nonatomic,__weak) id<TVRCDeviceDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * model; 
@property (nonatomic,readonly) BOOL supportsTouchEvents; 
@property (nonatomic,readonly) long long connectionState; 
@property (nonatomic,copy,readonly) NSSet * supportedButtons; 
@property (getter=isPaired,nonatomic,readonly) BOOL paired; 
@property (nonatomic,readonly) unsigned long long pairingCapability; 
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(id<TVRCDeviceDelegate>)delegate;
-(void)setDelegate:(id<TVRCDeviceDelegate>)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(long long)connectionType;
-(NSString *)model;
-(TVRCDeviceInfo *)info;
-(BOOL)isEqualToDevice:(id)arg1 ;
-(void)connect;
-(TVRCKeyboardController *)keyboardController;
-(void)setInfo:(TVRCDeviceInfo *)arg1 ;
-(BOOL)containsIdentifier:(id)arg1 ;
-(long long)connectionState;
-(_TVRCDeviceState *)deviceState;
-(BOOL)isPaired;
-(void)setDeviceState:(_TVRCDeviceState *)arg1 ;
-(id)initWithDeviceIdentifier:(id)arg1 ;
-(void)sendButtonEvent:(id)arg1 ;
-(void)sendGameControllerEvent:(id)arg1 ;
-(NSSet *)supportedButtons;
-(BOOL)supportsTouchEvents;
-(void)setKeyboardController:(TVRCKeyboardController *)arg1 ;
-(void)sendTouchEvent:(id)arg1 ;
-(void)_sendRTIDataPayload:(id)arg1 ;
-(void)disconnectWithType:(unsigned long long)arg1 ;
-(TVRCVoiceRecorder *)voiceRecorder;
-(unsigned long long)pairingCapability;
-(void)setVoiceRecorder:(TVRCVoiceRecorder *)arg1 ;
-(void)_deviceEncounteredAuthChallengeType:(long long)arg1 attributes:(long long)arg2 codeToEnterOnDevice:(id)arg3 throttleSeconds:(long long)arg4 ;
-(void)_deviceUpdatedState:(id)arg1 ;
-(void)_disconnectDeviceDueToConnectionInterruption;
-(BOOL)isInEditingSession;
@end

