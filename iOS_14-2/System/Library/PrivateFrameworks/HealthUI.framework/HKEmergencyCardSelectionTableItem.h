/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKEmergencyCardTableItem.h>

@protocol HKEmergencyCardSelectionTableItemDelegate;
@class UITableViewCell;

@interface HKEmergencyCardSelectionTableItem : HKEmergencyCardTableItem {

	UITableViewCell* _cell;
	id<HKEmergencyCardSelectionTableItemDelegate> _selectionDelegate;

}

@property (assign,nonatomic,__weak) id<HKEmergencyCardSelectionTableItemDelegate> selectionDelegate;              //@synthesize selectionDelegate=_selectionDelegate - In the implementation block
-(id<HKEmergencyCardSelectionTableItemDelegate>)selectionDelegate;
-(void)setSelectionDelegate:(id<HKEmergencyCardSelectionTableItemDelegate>)arg1 ;
-(id)title;
-(BOOL)hasPresentableData;
-(id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2 ;
-(BOOL)shouldHighlightRowAtIndex:(long long)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndex:(long long)arg2 ;
@end

