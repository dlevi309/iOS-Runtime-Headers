/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventDetailItem.h>

@class EKCalendar, UITableViewCell;

@interface EKEventCalendarDetailItem : EKEventDetailItem {

	EKCalendar* _calendar;
	UITableViewCell* _cell;

}
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 withTraitCollection:(id)arg2 ;
-(BOOL)hasDetailViewControllerAtIndex:(unsigned long long)arg1 ;
-(id)init;
-(BOOL)editItemViewControllerSave:(id)arg1 ;
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
-(BOOL)_calendarCanBeChanged;
-(void)_contentSizeCategoryChanged:(id)arg1 ;
-(void)reset;
-(BOOL)_shouldAllowViewingDetailsForCalendar:(id)arg1 ;
-(void)dealloc;
@end

