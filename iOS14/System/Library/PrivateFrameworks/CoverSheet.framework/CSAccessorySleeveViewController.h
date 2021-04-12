/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <CoverSheet/CSAccessoryViewController.h>
#import <libobjc.A.dylib/BCBatteryDeviceObserving.h>

@protocol SBFDateProviding;
@class SBFLockScreenDateViewController, BCBatteryDeviceController, CSAccessorySleeveView, BrightnessSystemClient, NSString;

@interface CSAccessorySleeveViewController : CSAccessoryViewController <BCBatteryDeviceObserving> {

	BOOL _chargingAnimationVisible;
	id<SBFDateProviding> _dateProvider;
	SBFLockScreenDateViewController* _dateViewController;
	SBFLockScreenDateViewController* _secodaryDateViewController;
	BCBatteryDeviceController* _batteryDeviceController;
	CSAccessorySleeveView* _sleeveView;
	BrightnessSystemClient* _brightnessClient;
	CGRect _visibleBounds;

}

@property (nonatomic,retain) SBFLockScreenDateViewController * dateViewController;                      //@synthesize dateViewController=_dateViewController - In the implementation block
@property (nonatomic,retain) SBFLockScreenDateViewController * secodaryDateViewController;              //@synthesize secodaryDateViewController=_secodaryDateViewController - In the implementation block
@property (nonatomic,retain) BCBatteryDeviceController * batteryDeviceController;                       //@synthesize batteryDeviceController=_batteryDeviceController - In the implementation block
@property (nonatomic,retain) CSAccessorySleeveView * sleeveView;                                        //@synthesize sleeveView=_sleeveView - In the implementation block
@property (assign,nonatomic) BOOL chargingAnimationVisible;                                             //@synthesize chargingAnimationVisible=_chargingAnimationVisible - In the implementation block
@property (nonatomic,retain) BrightnessSystemClient * brightnessClient;                                 //@synthesize brightnessClient=_brightnessClient - In the implementation block
@property (nonatomic,retain) id<SBFDateProviding> dateProvider;                                         //@synthesize dateProvider=_dateProvider - In the implementation block
@property (assign,nonatomic) CGRect visibleBounds;                                                      //@synthesize visibleBounds=_visibleBounds - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(CGRect)visibleBounds;
-(BOOL)handleEvent:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BCBatteryDeviceController *)batteryDeviceController;
-(id)accessoryView;
-(SBFLockScreenDateViewController *)dateViewController;
-(void)connectedDevicesDidChange:(id)arg1 ;
-(void)setVisibleBounds:(CGRect)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id<SBFDateProviding>)dateProvider;
-(void)setDateProvider:(id<SBFDateProviding>)arg1 ;
-(void)setDateViewController:(SBFLockScreenDateViewController *)arg1 ;
-(id)initWithAccessory:(id)arg1 ;
-(double)animationDurationBeforeDismissal;
-(BOOL)hasChargingAnimation;
-(BOOL)showingChargingAnimation;
-(BOOL)isStatic;
-(void)transitionChargingViewVisible:(BOOL)arg1 chargingInfo:(id)arg2 ;
-(double)chargingAnimationDuration;
-(CSAccessorySleeveView *)sleeveView;
-(SBFLockScreenDateViewController *)secodaryDateViewController;
-(void)_updateOverrideFloor;
-(void)_removeOverrideFloor;
-(void)updateViewWithBatteryCharging:(BOOL)arg1 ;
-(void)setSecodaryDateViewController:(SBFLockScreenDateViewController *)arg1 ;
-(void)setBatteryDeviceController:(BCBatteryDeviceController *)arg1 ;
-(void)setSleeveView:(CSAccessorySleeveView *)arg1 ;
-(BOOL)chargingAnimationVisible;
-(void)setChargingAnimationVisible:(BOOL)arg1 ;
-(BrightnessSystemClient *)brightnessClient;
-(void)setBrightnessClient:(BrightnessSystemClient *)arg1 ;
@end

