/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <Preferences/PSListController.h>

@class PSUIPlanPendingTransferMenusGroup;

@interface PSUIPlanPendingTransferDetailController : PSListController {

	PSUIPlanPendingTransferMenusGroup* _planPendingTransferMenus;

}

@property (nonatomic,retain) PSUIPlanPendingTransferMenusGroup * planPendingTransferMenus;              //@synthesize planPendingTransferMenus=_planPendingTransferMenus - In the implementation block
-(id)specifiers;
-(id)init;
-(void)cellularPlanChanged;
-(PSUIPlanPendingTransferMenusGroup *)planPendingTransferMenus;
-(void)setPlanPendingTransferMenus:(PSUIPlanPendingTransferMenusGroup *)arg1 ;
@end

