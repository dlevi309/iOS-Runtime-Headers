/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)buttonIdentifier;
-(void)setLongPressInterval:(double)arg1 ;
-(double)longPressInterval;
-(void)setButtonIdentifier:(long long)arg1 ;
-(SiriBluetoothContext *)context;
-(void)deactivate;
-(void)activate;
-(void)setContext:(SiriBluetoothContext *)arg1 ;
@end

