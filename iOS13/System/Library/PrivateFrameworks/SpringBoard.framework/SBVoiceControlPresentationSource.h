/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

