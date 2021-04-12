/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EKCalendarEditItem.h>

@class EKSource;

@interface EKCalendarAccountEditItem : EKCalendarEditItem {

	EKSource* _limitedToSource;

}
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(void)calendarEditor:(id)arg1 didSelectSubitem:(unsigned long long)arg2 ;
-(id)currentSource;
-(BOOL)canAddCalendarToMoreThanOneAccount;
-(id)initLimitedToSource:(id)arg1 ;
-(BOOL)calendarEditor:(id)arg1 shouldSelectSubitem:(unsigned long long)arg2 ;
@end

