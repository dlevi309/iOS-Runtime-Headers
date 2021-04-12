/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBApplicationLaunchNotifyAlertItem.h>

@interface SBApplicationLaunchNotifyAirplaneModeAlertItem : SBApplicationLaunchNotifyAlertItem {

	BOOL _usesCellNetwork;

}
-(id)initWithApplication:(id)arg1 ;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(void)_configureForAirplaneModeDataAlertOnCellular:(BOOL)arg1 ;
-(void)_configureForAirplaneModeDataAlertOffCellular:(BOOL)arg1 ;
-(void)_turnOffAirplaneMode;
-(void)_sendUserToSettings;
@end

