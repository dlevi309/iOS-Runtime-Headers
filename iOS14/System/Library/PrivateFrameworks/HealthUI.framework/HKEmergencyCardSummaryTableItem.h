/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKEmergencyCardTableItem.h>

@class HKMedicalIDPersonSummaryCell;

@interface HKEmergencyCardSummaryTableItem : HKEmergencyCardTableItem {

	HKMedicalIDPersonSummaryCell* _cell;

}
-(UIEdgeInsets)separatorInset;
-(id)_cell;
-(void)setData:(id)arg1 ;
-(void)localeDidChange:(id)arg1 ;
-(id)initInEditMode:(BOOL)arg1 ;
-(void)timeZoneDidChange:(id)arg1 ;
-(BOOL)hasPresentableData;
-(id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2 ;
@end

