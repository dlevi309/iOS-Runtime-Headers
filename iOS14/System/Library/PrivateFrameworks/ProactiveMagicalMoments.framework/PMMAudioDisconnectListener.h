/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveMagicalMoments.framework/ProactiveMagicalMoments
*/


@interface PMMAudioDisconnectListener : NSObject {

	/*^block*/id _disconnectHandler;

}
+(BOOL)bluetoothDeviceTypeIsAudio:(id)arg1 ;
-(void)_setupBluetoothDisconnectListener;
-(id)initWithHandler:(/*^block*/id)arg1 ;
-(void)_setupAudioDisconnectListener;
@end

