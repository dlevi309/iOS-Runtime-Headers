/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKCalendarItemEditItem.h>

@interface EKCalendarItemCalendarEditItem : EKCalendarItemEditItem {

	unsigned long long _entityType;

}
-(id)init;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(BOOL)editItemViewControllerSave:(id)arg1 ;
-(BOOL)shouldAppearWithVisibility:(int)arg1 ;
-(BOOL)canBeConfiguredForCalendarConstraints:(id)arg1 ;
-(BOOL)requiresReconfigurationOnSave;
-(id)initWithEntityType:(unsigned long long)arg1 ;
-(BOOL)_shouldShowSourceForCalendar:(id)arg1 ;
@end

