/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKEmergencyCardGroupTableItem.h>
#import <libobjc.A.dylib/HKMedicalIDEditorCellEditDelegate.h>

@class UITableViewCell, HKEmergencyCardShareInfoTableItem, HKEmergencyCardEnabledTableItem, HKEmergencyCardFooterTableItem;

@interface HKEmergencyCardEmergencyAccessTableItem : HKEmergencyCardGroupTableItem <HKMedicalIDEditorCellEditDelegate> {

	UITableViewCell* _lastDequeuedAddContactCell;
	HKEmergencyCardShareInfoTableItem* _shareInfoTableItem;
	HKEmergencyCardEnabledTableItem* _enabledTableItem;
	HKEmergencyCardFooterTableItem* _enabledFooterItem;
	HKEmergencyCardFooterTableItem* _shareInfoFooterItem;
	BOOL _showsShowWhenLockedState;
	BOOL _showsEmergencyAccessState;

}

@property (assign,nonatomic) BOOL showsShowWhenLockedState;               //@synthesize showsShowWhenLockedState=_showsShowWhenLockedState - In the implementation block
@property (assign,nonatomic) BOOL showsEmergencyAccessState;              //@synthesize showsEmergencyAccessState=_showsEmergencyAccessState - In the implementation block
-(UIEdgeInsets)separatorInset;
-(id)titleForHeader;
-(BOOL)hasPresentableData;
-(void)medicalIDEditorCellDidChangeValue:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2 ;
-(void)setIsSecondaryProfile:(BOOL)arg1 ;
-(id)viewOnlyTitle;
-(id)initInEditMode:(BOOL)arg1 shouldShowLocked:(BOOL)arg2 shouldShareInfo:(BOOL)arg3 ;
-(BOOL)showsShowWhenLockedState;
-(void)setShowsShowWhenLockedState:(BOOL)arg1 ;
-(BOOL)showsEmergencyAccessState;
-(void)setShowsEmergencyAccessState:(BOOL)arg1 ;
@end

