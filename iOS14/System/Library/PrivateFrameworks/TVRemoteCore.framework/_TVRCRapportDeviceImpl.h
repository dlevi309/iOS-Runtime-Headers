/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isPaired;
-(id)initWithDevice:(id)arg1 ;
-(void)disconnect;
-(id)model;
-(long long)connectionType;
-(void)connect;
-(void)sendGameControllerEvent:(id)arg1 ;
-(id)supportedButtons;
-(_TVRXDevice *)device;
-(id)name;
-(_TVRXKeyboardController *)keyboardController;
-(void)setDevice:(_TVRXDevice *)arg1 ;
-(void)sendButtonEvent:(id)arg1 ;
-(id)identifier;
-(void)disconnectedFromDevice:(id)arg1 error:(id)arg2 ;
-(void)_setupKeyboardController;
-(void)connectedToDevice:(id)arg1 ;
-(void)deviceEncounteredAuthenticationChallenge:(id)arg1 ;
-(void)deviceUpdatedSupportedButtons:(id)arg1 ;
-(id)alternateIdentifiers;
-(BOOL)supportsTouchEvents;
-(void)sendTouchEvent:(id)arg1 ;
-(void)setKeyboardController:(_TVRXKeyboardController *)arg1 ;
-(_TVRCRapportRemoteTextInputKeyboardImpl *)keyboardImpl;
-(void)setKeyboardImpl:(_TVRCRapportRemoteTextInputKeyboardImpl *)arg1 ;
-(unsigned long long)pairingCapability;
-(id)voiceRecorder;
-(void)setAuthenticationSupported:(BOOL)arg1 ;
-(void)sendEvent:(id)arg1 options:(id)arg2 response:(/*^block*/id)arg3 ;
-(_TVRCRPCompanionLinkClientWrapper *)deviceWrapper;
-(void)setDeviceWrapper:(_TVRCRPCompanionLinkClientWrapper *)arg1 ;
@end

