/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <Preferences/PSConfirmationSpecifier.h>

@class PSListController;

@interface PSUICellularRATWarningSpecifier : PSConfirmationSpecifier {

	PSListController* _RATModeDrillDownController;

}

@property (nonatomic,retain) PSListController * RATModeDrillDownController;              //@synthesize RATModeDrillDownController=_RATModeDrillDownController - In the implementation block
-(id)initWithDrillDownController:(id)arg1 ;
-(void)acceptedRATSwitch;
-(void)canceledRATSwitch;
-(PSListController *)RATModeDrillDownController;
-(void)setRATModeDrillDownController:(PSListController *)arg1 ;
@end

