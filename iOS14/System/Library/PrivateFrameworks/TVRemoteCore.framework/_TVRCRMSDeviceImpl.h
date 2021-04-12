/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/

#import <TVRemoteCore/_TVRCRMSDeviceWrapperDelegate.h>
#import <TVRemoteCore/_TVRCDeviceImpl.h>

@class _TVRXDevice, _TVRCRMSDeviceWrapper, NSString;

@interface _TVRCRMSDeviceImpl : NSObject <_TVRCRMSDeviceWrapperDelegate, _TVRCDeviceImpl> {

	_TVRXDevice* _device;
	_TVRCRMSDeviceWrapper* _deviceWrapper;

}

@property (nonatomic,retain) _TVRCRMSDeviceWrapper * deviceWrapper;              //@synthesize deviceWrapper=_deviceWrapper - In the implementation block
@property (assign,nonatomic,__weak) _TVRXDevice * device;                        //@synthesize device=_device - In the implementation block
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
-(id)keyboardController;
-(void)setDevice:(_TVRXDevice *)arg1 ;
-(void)sendButtonEvent:(id)arg1 ;
-(id)identifier;
-(void)disconnectedFromDevice:(id)arg1 error:(id)arg2 ;
-(void)connectedToDevice:(id)arg1 ;
-(void)deviceEncounteredAuthenticationChallenge:(id)arg1 ;
-(void)deviceUpdatedSupportedButtons:(id)arg1 ;
-(id)alternateIdentifiers;
-(BOOL)supportsTouchEvents;
-(void)sendTouchEvent:(id)arg1 ;
-(unsigned long long)pairingCapability;
-(id)voiceRecorder;
-(void)setAuthenticationSupported:(BOOL)arg1 ;
-(_TVRCRMSDeviceWrapper *)deviceWrapper;
-(void)setDeviceWrapper:(_TVRCRMSDeviceWrapper *)arg1 ;
@end

