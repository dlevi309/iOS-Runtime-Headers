/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceOverServices.framework/VoiceOverServices
*/


@protocol VOSBluetoothConnectableDevice <NSObject>
@required
-(BOOL)connected;
-(void)disconnect;
-(BOOL)paired;
-(void)unpair;
-(void)connect;
-(id)name;
-(id)identifier;
-(BOOL)connecting;

@end

