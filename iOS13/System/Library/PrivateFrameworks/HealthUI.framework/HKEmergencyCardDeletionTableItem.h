/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKEmergencyCardTableItem.h>

@protocol HKEmergencyCardDeletionDelegate;
@class UITableViewCell;

@interface HKEmergencyCardDeletionTableItem : HKEmergencyCardTableItem {

	UITableViewCell* _cell;
	id<HKEmergencyCardDeletionDelegate> _deletionDelegate;

}

@property (assign,nonatomic,__weak) id<HKEmergencyCardDeletionDelegate> deletionDelegate;              //@synthesize deletionDelegate=_deletionDelegate - In the implementation block
-(id)title;
-(id)initInEditMode:(BOOL)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2 ;
-(BOOL)shouldHighlightRowAtIndex:(long long)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndex:(long long)arg2 ;
-(void)setDeletionDelegate:(id<HKEmergencyCardDeletionDelegate>)arg1 ;
-(id<HKEmergencyCardDeletionDelegate>)deletionDelegate;
@end

