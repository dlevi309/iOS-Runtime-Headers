/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <Preferences/PSListController.h>

@class PSUIPlanPendingTransferMenusGroup;

@interface PSUIPlanPendingTransferDetailController : PSListController {

	PSUIPlanPendingTransferMenusGroup* _planPendingTransferMenus;

}

@property (nonatomic,retain) PSUIPlanPendingTransferMenusGroup * planPendingTransferMenus;              //@synthesize planPendingTransferMenus=_planPendingTransferMenus - In the implementation block
-(id)init;
-(id)specifiers;
-(void)cellularPlanChanged;
-(PSUIPlanPendingTransferMenusGroup *)planPendingTransferMenus;
-(void)setPlanPendingTransferMenus:(PSUIPlanPendingTransferMenusGroup *)arg1 ;
@end

