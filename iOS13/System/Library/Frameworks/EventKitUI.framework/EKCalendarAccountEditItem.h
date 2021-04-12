/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

