/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@protocol _TVRXDeviceDelegate, _TVRCDeviceImpl;
@class NSString, NSDictionary, NSSet, _TVRXVoiceRecorder, _TVRXKeyboardController;

@interface _TVRXDevice : NSObject {

	id<_TVRXDeviceDelegate> _delegate;
	NSString* _identifier;
	NSDictionary* _alternateIdentifiers;
	NSString* _name;
	NSString* _model;
	long long _connectionState;
	NSSet* _supportedButtons;
	id<_TVRCDeviceImpl> _impl;

}

@property (nonatomic,copy) NSString * name;                                                       //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSDictionary * alternateIdentifiers;                                   //@synthesize alternateIdentifiers=_alternateIdentifiers - In the implementation block
@property (nonatomic,copy) NSString * model;                                                      //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSSet * supportedButtons;                                              //@synthesize supportedButtons=_supportedButtons - In the implementation block
@property (setter=_setImpl:,getter=_impl,nonatomic,retain) id<_TVRCDeviceImpl> impl;              //@synthesize impl=_impl - In the implementation block
@property (assign,nonatomic,__weak) id<_TVRXDeviceDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long connectionType; 
@property (nonatomic,readonly) BOOL supportsTouchEvents; 
@property (nonatomic,readonly) BOOL paired; 
@property (nonatomic,readonly) long long connectionState;                                         //@synthesize connectionState=_connectionState - In the implementation block
@property (nonatomic,readonly) _TVRXVoiceRecorder * voiceRecorder; 
@property (nonatomic,readonly) _TVRXKeyboardController * keyboardController; 
@property (nonatomic,readonly) unsigned long long pairingCapability; 
-(void)disconnect;
-(NSString *)model;
-(long long)connectionState;
-(id)allIdentifiers;
-(BOOL)paired;
-(long long)connectionType;
-(id<_TVRXDeviceDelegate>)delegate;
-(void)_setImpl:(id)arg1 ;
-(void)connect;
-(void)sendGameControllerEvent:(id)arg1 ;
-(NSSet *)supportedButtons;
-(NSString *)name;
-(void)setDelegate:(id<_TVRXDeviceDelegate>)arg1 ;
-(id)description;
-(void)setModel:(NSString *)arg1 ;
-(_TVRXKeyboardController *)keyboardController;
-(id)_impl;
-(void)setName:(NSString *)arg1 ;
-(id)_init;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)sendButtonEvent:(id)arg1 ;
-(NSString *)identifier;
-(BOOL)containsIdentifier:(id)arg1 ;
-(NSDictionary *)alternateIdentifiers;
-(BOOL)supportsTouchEvents;
-(void)sendTouchEvent:(id)arg1 ;
-(unsigned long long)pairingCapability;
-(void)setAlternateIdentifiers:(NSDictionary *)arg1 ;
-(void)setSupportedButtons:(NSSet *)arg1 ;
-(void)_connectionAttemptSucceeded;
-(void)_disconnected:(long long)arg1 error:(id)arg2 ;
-(void)_setSupportedButtons:(id)arg1 ;
-(void)_encounteredAuthenticationChallenge:(id)arg1 ;
-(_TVRXVoiceRecorder *)voiceRecorder;
-(void)sendEvent:(id)arg1 options:(id)arg2 response:(/*^block*/id)arg3 ;
-(void)_setDeviceName:(id)arg1 ;
-(void)_applyButtonEventSideEffects:(id)arg1 ;
-(BOOL)_authenticationIsSupported;
-(void)_setActiveEndpoint;
-(void)_setIdentifier:(id)arg1 alternateIdentifiers:(id)arg2 name:(id)arg3 model:(id)arg4 supportedButtons:(id)arg5 ;
@end

