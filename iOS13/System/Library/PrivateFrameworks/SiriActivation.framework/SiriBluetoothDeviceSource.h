/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/

#import <SiriActivation/SiriLongPressButtonSource.h>

@class SiriBluetoothContext;

@interface SiriBluetoothDeviceSource : SiriLongPressButtonSource {

	long long _buttonIdentifier;
	double _longPressInterval;
	SiriBluetoothContext* _context;

}

@property (assign,nonatomic) long long buttonIdentifier;                  //@synthesize buttonIdentifier=_buttonIdentifier - In the implementation block
@property (assign,nonatomic) double longPressInterval;                    //@synthesize longPressInterval=_longPressInterval - In the implementation block
@property (nonatomic,retain) SiriBluetoothContext * context;              //@synthesize context=_context - In the implementation block
+(id)bluetoothDeviceForIdentifier:(long long)arg1 bluetoothDevice:(id)arg2 ;
-(SiriBluetoothContext *)context;
-(void)setContext:(SiriBluetoothContext *)arg1 ;
-(void)activate;
-(void)deactivate;
-(long long)buttonIdentifier;
-(void)setLongPressInterval:(double)arg1 ;
-(void)setButtonIdentifier:(long long)arg1 ;
-(double)longPressInterval;
@end

