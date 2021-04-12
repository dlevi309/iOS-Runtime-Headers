/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/VoiceOverServices.framework/VoiceOverServices
*/


@protocol VOSBluetoothConnectableDevice <NSObject>
@required
-(id)name;
-(id)identifier;
-(void)disconnect;
-(void)connect;
-(BOOL)connected;
-(BOOL)paired;
-(void)unpair;

@end

