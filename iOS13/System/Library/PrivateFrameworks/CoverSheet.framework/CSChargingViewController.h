/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CSCoverSheetViewControllerBase.h>

@class BCBatteryDeviceController, CSBatteryChargingView;

@interface CSChargingViewController : CSCoverSheetViewControllerBase {

	BCBatteryDeviceController* _batteryController;
	CSBatteryChargingView* _chargingView;

}
-(id)init;
-(void)dealloc;
-(long long)presentationStyle;
-(void)viewDidLoad;
-(BOOL)handleEvent:(id)arg1 ;
-(long long)presentationType;
-(long long)presentationPriority;
-(void)aggregateAppearance:(id)arg1 ;
-(void)_updateChargingViewIfNecessary;
-(void)_updateChargingViewLegibility;
-(void)_createNewChargingViewForDoubleBattery:(BOOL)arg1 ;
@end

