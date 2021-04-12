/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@protocol _TVRCDeviceImpl <NSObject>
@optional
-(BOOL)isPaired;
-(void)sendEvent:(id)arg1 options:(id)arg2 response:(/*^block*/id)arg3;

@required
-(void)disconnect;
-(id)model;
-(long long)connectionType;
-(void)connect;
-(void)sendGameControllerEvent:(id)arg1;
-(id)supportedButtons;
-(id)name;
-(id)keyboardController;
-(void)setDevice:(id)arg1;
-(void)sendButtonEvent:(id)arg1;
-(id)identifier;
-(id)alternateIdentifiers;
-(BOOL)supportsTouchEvents;
-(void)sendTouchEvent:(id)arg1;
-(unsigned long long)pairingCapability;
-(id)voiceRecorder;
-(void)setAuthenticationSupported:(BOOL)arg1;

@end

