/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/

#import <TVRemoteCore/_TVRCCompanionLinkClientWrapperDelegate.h>
#import <TVRemoteCore/_TVRCDeviceImpl.h>

@class _TVRXDevice, _TVRCRPCompanionLinkClientWrapper, _TVRXKeyboardController, _TVRCRapportRemoteTextInputKeyboardImpl, NSString;

@interface _TVRCRapportDeviceImpl : NSObject <_TVRCCompanionLinkClientWrapperDelegate, _TVRCDeviceImpl> {

	_TVRXDevice* _device;
	_TVRCRPCompanionLinkClientWrapper* _deviceWrapper;
	_TVRXKeyboardController* _keyboardController;
	_TVRCRapportRemoteTextInputKeyboardImpl* _keyboardImpl;

}

@property (nonatomic,retain) _TVRCRPCompanionLinkClientWrapper * deviceWrapper;                   //@synthesize deviceWrapper=_deviceWrapper - In the implementation block
@property (nonatomic,retain) _TVRXKeyboardController * keyboardController;                        //@synthesize keyboardController=_keyboardController - In the implementation block
@property (nonatomic,retain) _TVRCRapportRemoteTextInputKeyboardImpl * keyboardImpl;              //@synthesize keyboardImpl=_keyboardImpl - In the implementation block
@property (assign,nonatomic,__weak) _TVRXDevice * device;                                         //@synthesize device=_device - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)implWithDevice:(id)arg1 ;
-(id)name;
-(id)identifier;
-(void)disconnect;
-(long long)connectionType;
-(id)model;
-(_TVRXDevice *)device;
-(id)initWithDevice:(id)arg1 ;
-(void)connect;
-(_TVRXKeyboardController *)keyboardController;
-(void)setDevice:(_TVRXDevice *)arg1 ;
-(BOOL)isPaired;
-(void)sendButtonEvent:(id)arg1 ;
-(void)sendGameControllerEvent:(id)arg1 ;
-(id)supportedButtons;
-(BOOL)supportsTouchEvents;
-(void)setKeyboardController:(_TVRXKeyboardController *)arg1 ;
-(void)sendTouchEvent:(id)arg1 ;
-(id)voiceRecorder;
-(void)disconnectedFromDevice:(id)arg1 error:(id)arg2 ;
-(void)_setupKeyboardController;
-(void)connectedToDevice:(id)arg1 ;
-(void)deviceEncounteredAuthenticationChallenge:(id)arg1 ;
-(void)deviceUpdatedSupportedButtons:(id)arg1 ;
-(id)alternateIdentifiers;
-(_TVRCRapportRemoteTextInputKeyboardImpl *)keyboardImpl;
-(void)setKeyboardImpl:(_TVRCRapportRemoteTextInputKeyboardImpl *)arg1 ;
-(unsigned long long)pairingCapability;
-(void)setAuthenticationSupported:(BOOL)arg1 ;
-(void)sendEvent:(id)arg1 options:(id)arg2 response:(/*^block*/id)arg3 ;
-(_TVRCRPCompanionLinkClientWrapper *)deviceWrapper;
-(void)setDeviceWrapper:(_TVRCRPCompanionLinkClientWrapper *)arg1 ;
@end

