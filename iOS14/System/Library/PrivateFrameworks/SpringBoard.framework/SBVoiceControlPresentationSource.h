/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class BluetoothDevice;

@interface SBVoiceControlPresentationSource : NSObject {

	BluetoothDevice* _bluetoothDevice;
	long long _sourceType;

}

@property (nonatomic,readonly) long long sourceType;                           //@synthesize sourceType=_sourceType - In the implementation block
@property (nonatomic,readonly) BluetoothDevice * bluetoothDevice;              //@synthesize bluetoothDevice=_bluetoothDevice - In the implementation block
+(id)sourceFromHomeButton;
+(id)sourceFromHeadsetButton;
+(id)sourceFromBluetoothDevice:(id)arg1 ;
-(long long)sourceType;
-(id)_initWithSourceType:(long long)arg1 ;
-(BluetoothDevice *)bluetoothDevice;
@end

