/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKEmergencyCardTableItem.h>

@class HKMedicalIDPersonSummaryCell;

@interface HKEmergencyCardSummaryTableItem : HKEmergencyCardTableItem {

	HKMedicalIDPersonSummaryCell* _cell;

}
-(void)setData:(id)arg1 ;
-(id)_cell;
-(UIEdgeInsets)separatorInset;
-(void)localeDidChange:(id)arg1 ;
-(id)initInEditMode:(BOOL)arg1 ;
-(BOOL)hasPresentableData;
-(id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2 ;
-(void)timeZoneDidChange:(id)arg1 ;
@end

