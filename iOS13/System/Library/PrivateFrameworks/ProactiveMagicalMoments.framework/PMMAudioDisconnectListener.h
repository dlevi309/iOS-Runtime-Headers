/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveMagicalMoments.framework/ProactiveMagicalMoments
*/


@interface PMMAudioDisconnectListener : NSObject {

	/*^block*/id _disconnectHandler;

}
+(BOOL)bluetoothDeviceTypeIsAudio:(id)arg1 ;
-(id)initWithHandler:(/*^block*/id)arg1 ;
-(void)_setupAudioDisconnectListener;
-(void)_setupBluetoothDisconnectListener;
@end

