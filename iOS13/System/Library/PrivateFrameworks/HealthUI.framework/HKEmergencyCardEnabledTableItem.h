/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKEmergencyCardTableItem.h>

@class UITableViewCell, UISwitch;

@interface HKEmergencyCardEnabledTableItem : HKEmergencyCardTableItem {

	UITableViewCell* _cell;
	UISwitch* _switch;

}
-(id)_cell;
-(UIEdgeInsets)separatorInset;
-(id)initInEditMode:(BOOL)arg1 ;
-(id)titleForHeader;
-(id)titleForFooter;
-(id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2 ;
-(void)_switchSwitched:(id)arg1 ;
@end

