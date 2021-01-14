/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKCalendarItemEditItem.h>

@interface EKCalendarItemCalendarEditItem : EKCalendarItemEditItem {

	unsigned long long _entityType;

}
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(id)init;
-(BOOL)editItemViewControllerSave:(id)arg1 ;
-(BOOL)canBeConfiguredForCalendarConstraints:(id)arg1 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(id)initWithEntityType:(unsigned long long)arg1 ;
-(BOOL)_shouldShowSourceForCalendar:(id)arg1 ;
-(BOOL)requiresReconfigurationOnSave;
-(BOOL)shouldAppearWithVisibility:(int)arg1 ;
@end

