/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableSet, UIView, CSBatteryChargingView, SBLoginAppContainerOverlayWrapperView, SBLockScreenDeviceInformationTextView, _UILegibilitySettings;

@interface SBLoginAppContainerView : UIView {

	NSMutableSet* _contentHiddenRequesters;
	UIView* _contentView;
	CSBatteryChargingView* _batteryChargingView;
	SBLoginAppContainerOverlayWrapperView* _thermalWarningView;
	SBLockScreenDeviceInformationTextView* _deviceInformationTextView;
	UIView* _pluginView;
	_UILegibilitySettings* _legibilitySettings;

}

@property (nonatomic,retain) UIView * contentView;                                                           //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) CSBatteryChargingView * batteryChargingView;                                    //@synthesize batteryChargingView=_batteryChargingView - In the implementation block
@property (nonatomic,retain) SBLoginAppContainerOverlayWrapperView * thermalWarningView;                     //@synthesize thermalWarningView=_thermalWarningView - In the implementation block
@property (nonatomic,retain) SBLockScreenDeviceInformationTextView * deviceInformationTextView;              //@synthesize deviceInformationTextView=_deviceInformationTextView - In the implementation block
@property (nonatomic,retain) UIView * pluginView;                                                            //@synthesize pluginView=_pluginView - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                                     //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(UIView *)pluginView;
-(void)setPluginView:(UIView *)arg1 ;
-(void)_showOrHidePluginViewAppropriately;
-(void)setBatteryChargingView:(CSBatteryChargingView *)arg1 ;
-(void)setThermalWarningView:(SBLoginAppContainerOverlayWrapperView *)arg1 ;
-(void)setContentHidden:(BOOL)arg1 forRequester:(id)arg2 ;
-(CSBatteryChargingView *)batteryChargingView;
-(SBLoginAppContainerOverlayWrapperView *)thermalWarningView;
-(SBLockScreenDeviceInformationTextView *)deviceInformationTextView;
-(void)setDeviceInformationTextView:(SBLockScreenDeviceInformationTextView *)arg1 ;
@end

