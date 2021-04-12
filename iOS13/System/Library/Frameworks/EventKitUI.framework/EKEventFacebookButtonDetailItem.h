/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EKEventDetailItem.h>

@class UITableViewCell;

@interface EKEventFacebookButtonDetailItem : EKEventDetailItem {

	UITableViewCell* _cell;

}
-(void)reset;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
-(void)eventViewController:(id)arg1 didSelectSubitem:(unsigned long long)arg2 ;
-(void)layoutCellsForWidth:(double)arg1 position:(int)arg2 ;
@end

