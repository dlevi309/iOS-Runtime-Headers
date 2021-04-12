/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@protocol _TVRCDeviceImpl <NSObject>
@optional
-(BOOL)isPaired;
-(void)sendEvent:(id)arg1 options:(id)arg2 response:(/*^block*/id)arg3;

@required
-(id)name;
-(id)identifier;
-(void)disconnect;
-(long long)connectionType;
-(id)model;
-(void)connect;
-(id)keyboardController;
-(void)setDevice:(id)arg1;
-(void)sendButtonEvent:(id)arg1;
-(void)sendGameControllerEvent:(id)arg1;
-(id)supportedButtons;
-(BOOL)supportsTouchEvents;
-(void)sendTouchEvent:(id)arg1;
-(id)voiceRecorder;
-(id)alternateIdentifiers;
-(unsigned long long)pairingCapability;
-(void)setAuthenticationSupported:(BOOL)arg1;

@end

