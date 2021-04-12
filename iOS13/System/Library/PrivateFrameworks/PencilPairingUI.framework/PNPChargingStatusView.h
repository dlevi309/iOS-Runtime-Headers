/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
*/

#import <PencilPairingUI/PencilPairingUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PNPDeviceStateConfigurable.h>

@protocol PNPChargingStatusViewDelegate;
@class PNPDeviceState, UIView, UILabel, _UIBatteryView, PNPConnectButton, NSLayoutConstraint, UIActivityIndicatorView, NSString;

@interface PNPChargingStatusView : UIView <PNPDeviceStateConfigurable> {

	PNPDeviceState* _deviceState;
	UIView* _contentAreaView;
	UIView* _batterySectionView;
	UILabel* _deviceNameLabel;
	_UIBatteryView* _batteryView;
	UILabel* _percentageLabel;
	PNPConnectButton* _tapToConnectButton;
	NSLayoutConstraint* _alignDeviceNameToTopConstraint;
	NSLayoutConstraint* _centerDeviceNameConstraint;
	UIActivityIndicatorView* _spinnerView;
	double _maxPillWidth;
	BOOL _didStartBatteryAnimation;
	BOOL _isFadingOutDeviceName;
	BOOL _showsCharging;
	BOOL _isTransitioningToBatteryUI;
	BOOL _didStartBatteryTransition;
	BOOL _alphaOutName;
	id<PNPChargingStatusViewDelegate> _delegate;
	long long _chargingState;

}

@property (assign,nonatomic,__weak) id<PNPChargingStatusViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsCharging;                                             //@synthesize showsCharging=_showsCharging - In the implementation block
@property (assign,nonatomic) BOOL isTransitioningToBatteryUI;                                //@synthesize isTransitioningToBatteryUI=_isTransitioningToBatteryUI - In the implementation block
@property (assign,nonatomic) BOOL didStartBatteryTransition;                                 //@synthesize didStartBatteryTransition=_didStartBatteryTransition - In the implementation block
@property (assign,nonatomic) long long chargingState;                                        //@synthesize chargingState=_chargingState - In the implementation block
@property (assign,nonatomic) BOOL alphaOutName;                                              //@synthesize alphaOutName=_alphaOutName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) PNPDeviceState * deviceState; 
-(id<PNPChargingStatusViewDelegate>)delegate;
-(void)setDelegate:(id<PNPChargingStatusViewDelegate>)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)setChargingState:(long long)arg1 ;
-(long long)chargingState;
-(PNPDeviceState *)deviceState;
-(void)setDeviceState:(PNPDeviceState *)arg1 ;
-(id)_batteryPercentageTextColor;
-(BOOL)_showBatteryStatus;
-(BOOL)showsCharging;
-(void)_setAndAnimateChargingStateToConnecting;
-(void)_performAnimations:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)beginPairing;
-(void)updateChargingState:(long long)arg1 ;
-(void)setShowsCharging:(BOOL)arg1 ;
-(void)setIsTransitioningToBatteryUI:(BOOL)arg1 ;
-(BOOL)isTransitioningToBatteryUI;
-(BOOL)didStartBatteryTransition;
-(void)setDidStartBatteryTransition:(BOOL)arg1 ;
-(BOOL)alphaOutName;
-(void)setAlphaOutName:(BOOL)arg1 ;
@end

