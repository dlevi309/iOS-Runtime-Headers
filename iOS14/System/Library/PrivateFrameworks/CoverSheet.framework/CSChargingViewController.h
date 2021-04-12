/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CSCoverSheetViewControllerBase.h>
#import <libobjc.A.dylib/BCBatteryDeviceObserving.h>

@class BCBatteryDeviceController, CSBatteryChargingView, CSBatteryChargingInfo, NSString;

@interface CSChargingViewController : CSCoverSheetViewControllerBase <BCBatteryDeviceObserving> {

	BCBatteryDeviceController* _batteryController;
	CSBatteryChargingView* _chargingView;
	CSBatteryChargingInfo* _chargingInfo;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)presentationStyle;
-(long long)presentationPriority;
-(id)init;
-(BOOL)handleEvent:(id)arg1 ;
-(void)connectedDevicesDidChange:(id)arg1 ;
-(void)aggregateAppearance:(id)arg1 ;
-(long long)presentationType;
-(void)viewDidLoad;
-(void)performDismissalAnimationWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithChargingInfo:(id)arg1 ;
-(double)durationBeforeDismissal;
-(void)_updateChargingViewIfNecessary;
-(void)_updateChargingViewLegibility;
-(void)_createNewChargingViewForDoubleBattery:(BOOL)arg1 ;
@end

