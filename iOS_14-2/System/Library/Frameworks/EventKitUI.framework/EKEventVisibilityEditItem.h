/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventEditItem.h>

@class EKEventAvailabilityEditItem, EKEventPrivacyLevelInlineEditItem, EKEventEditItem;

@interface EKEventVisibilityEditItem : EKEventEditItem {

	EKEventAvailabilityEditItem* _availabilityEditItem;
	EKEventPrivacyLevelInlineEditItem* _privacyLevelEditItem;
	EKEventEditItem* _subitemOfLastDetailViewControllerRequested;
	unsigned long long _lastKnownNumberOfSubitems;

}
-(unsigned long long)numberOfSubitems;
-(id)footerView;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(id)init;
-(BOOL)editItemViewControllerSave:(id)arg1 ;
-(BOOL)canBeConfiguredForCalendarConstraints:(id)arg1 ;
-(BOOL)forceTableReloadOnSave;
-(id)_editItemForIndex:(unsigned long long)arg1 ;
-(id)_lowestEditItem;
-(double)footerHeightForWidth:(double)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(BOOL)requiresReconfigurationOnSave;
-(void)reset;
-(void)setCalendarItem:(id)arg1 store:(id)arg2 ;
-(BOOL)usesDetailViewControllerForSubitem:(unsigned long long)arg1 ;
-(BOOL)saveAndDismissWithForce:(BOOL)arg1 ;
-(BOOL)editor:(id)arg1 canSelectSubitem:(unsigned long long)arg2 ;
-(id)footerTitle;
-(BOOL)shouldAppearWithVisibility:(int)arg1 ;
@end

