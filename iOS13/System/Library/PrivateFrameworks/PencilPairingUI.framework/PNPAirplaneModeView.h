/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
*/

#import <PencilPairingUI/PencilPairingUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PNPDeviceStateConfigurable.h>

@protocol PNPAirplaneModeBluetoothViewDelegate;
@class PNPDeviceState, UIView, UILabel, UIButton, NSString;

@interface PNPAirplaneModeView : UIView <PNPDeviceStateConfigurable> {

	PNPDeviceState* _deviceState;
	UIView* _contentAreaView;
	UILabel* _deviceNameLabel;
	UIButton* _turnOnBluetoothButton;
	NSString* _currentString;
	NSString* _pencilStatusString;
	id<PNPAirplaneModeBluetoothViewDelegate> _bluetoothDelegate;

}

@property (assign,nonatomic,__weak) id<PNPAirplaneModeBluetoothViewDelegate> bluetoothDelegate;              //@synthesize bluetoothDelegate=_bluetoothDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) PNPDeviceState * deviceState; 
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(PNPDeviceState *)deviceState;
-(void)setDeviceState:(PNPDeviceState *)arg1 ;
-(void)_configureConstraints;
-(void)turnOnBluetooth:(id)arg1 ;
-(id)_turnOnString;
-(id)_applePencilOff;
-(id)_bluetoothOnString;
-(id)_applePencilOn;
-(id<PNPAirplaneModeBluetoothViewDelegate>)bluetoothDelegate;
-(void)setBluetoothDelegate:(id<PNPAirplaneModeBluetoothViewDelegate>)arg1 ;
@end

