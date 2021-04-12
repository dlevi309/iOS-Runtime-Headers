/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isPaired;
-(NSString *)model;
-(long long)connectionState;
-(id)initWithDeviceIdentifier:(id)arg1 ;
-(TVRCDeviceInfo *)info;
-(long long)connectionType;
-(id<TVRCDeviceDelegate>)delegate;
-(void)connect;
-(void)sendGameControllerEvent:(id)arg1 ;
-(NSSet *)supportedButtons;
-(NSString *)name;
-(void)setDelegate:(id<TVRCDeviceDelegate>)arg1 ;
-(id)description;
-(_TVRCDeviceState *)deviceState;
-(TVRCKeyboardController *)keyboardController;
-(void)setInfo:(TVRCDeviceInfo *)arg1 ;
-(BOOL)isEqualToDevice:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)sendButtonEvent:(id)arg1 ;
-(NSString *)identifier;
-(BOOL)containsIdentifier:(id)arg1 ;
-(void)setDeviceState:(_TVRCDeviceState *)arg1 ;
-(void)dealloc;
-(BOOL)supportsTouchEvents;
-(void)sendTouchEvent:(id)arg1 ;
-(void)setKeyboardController:(TVRCKeyboardController *)arg1 ;
-(unsigned long long)pairingCapability;
-(TVRCVoiceRecorder *)voiceRecorder;
-(void)setVoiceRecorder:(TVRCVoiceRecorder *)arg1 ;
-(void)_deviceEncounteredAuthChallengeType:(long long)arg1 attributes:(long long)arg2 codeToEnterOnDevice:(id)arg3 throttleSeconds:(long long)arg4 ;
-(void)_deviceUpdatedState:(id)arg1 ;
-(void)_disconnectDeviceDueToConnectionInterruption;
-(void)disconnectWithType:(unsigned long long)arg1 ;
-(BOOL)isInEditingSession;
-(void)_sendRTIDataPayload:(id)arg1 ;
@end

