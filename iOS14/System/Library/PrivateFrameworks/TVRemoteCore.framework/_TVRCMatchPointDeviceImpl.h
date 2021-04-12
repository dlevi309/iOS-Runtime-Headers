/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/

#import <TVRemoteCore/_TVRCHMServiceWrapperDelegate.h>
#import <TVRemoteCore/_TVRCDeviceImpl.h>

@class _TVRXDevice, _TVRCHMServiceWrapper, NSString;

@interface _TVRCMatchPointDeviceImpl : NSObject <_TVRCHMServiceWrapperDelegate, _TVRCDeviceImpl> {

	_TVRXDevice* _device;
	_TVRCHMServiceWrapper* _service;

}

@property (nonatomic,retain) _TVRCHMServiceWrapper * service;              //@synthesize service=_service - In the implementation block
@property (assign,nonatomic,__weak) _TVRXDevice * device;                  //@synthesize device=_device - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)implWithService:(id)arg1 ;
-(void)disconnect;
-(id)model;
-(long long)connectionType;
-(void)connect;
-(void)sendGameControllerEvent:(id)arg1 ;
-(id)supportedButtons;
-(id)initWithService:(id)arg1 ;
-(_TVRXDevice *)device;
-(id)name;
-(id)keyboardController;
-(void)setService:(_TVRCHMServiceWrapper *)arg1 ;
-(void)setDevice:(_TVRXDevice *)arg1 ;
-(void)sendButtonEvent:(id)arg1 ;
-(id)identifier;
-(_TVRCHMServiceWrapper *)service;
-(id)alternateIdentifiers;
-(BOOL)supportsTouchEvents;
-(void)sendTouchEvent:(id)arg1 ;
-(unsigned long long)pairingCapability;
-(id)voiceRecorder;
-(void)setAuthenticationSupported:(BOOL)arg1 ;
-(void)connectedToService:(id)arg1 ;
-(void)disconnectedFromService:(id)arg1 error:(id)arg2 ;
-(void)service:(id)arg1 updatedName:(id)arg2 ;
@end

