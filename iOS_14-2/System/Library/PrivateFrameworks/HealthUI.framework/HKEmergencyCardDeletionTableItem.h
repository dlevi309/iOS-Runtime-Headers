/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKEmergencyCardTableItem.h>

@protocol HKEmergencyCardDeletionDelegate;
@class UITableViewCell;

@interface HKEmergencyCardDeletionTableItem : HKEmergencyCardTableItem {

	UITableViewCell* _cell;
	id<HKEmergencyCardDeletionDelegate> _deletionDelegate;

}

@property (assign,nonatomic,__weak) id<HKEmergencyCardDeletionDelegate> deletionDelegate;              //@synthesize deletionDelegate=_deletionDelegate - In the implementation block
-(UIEdgeInsets)separatorInset;
-(id)initInEditMode:(BOOL)arg1 ;
-(id)title;
-(id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2 ;
-(BOOL)shouldHighlightRowAtIndex:(long long)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndex:(long long)arg2 ;
-(id<HKEmergencyCardDeletionDelegate>)deletionDelegate;
-(void)setDeletionDelegate:(id<HKEmergencyCardDeletionDelegate>)arg1 ;
@end

