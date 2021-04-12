/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <ShareSheet/UIActivityViewController.h>

@protocol CalendarPublishingActivityDelegate;
@interface CalendarPublishingActivityViewController : UIActivityViewController {

	id<CalendarPublishingActivityDelegate> _activityDelegate;

}

@property (__weak) id<CalendarPublishingActivityDelegate> activityDelegate;              //@synthesize activityDelegate=_activityDelegate - In the implementation block
-(void)_prepareActivity:(id)arg1 ;
-(BOOL)_shouldShowSystemActivityType:(id)arg1 ;
-(id<CalendarPublishingActivityDelegate>)activityDelegate;
-(void)setActivityDelegate:(id<CalendarPublishingActivityDelegate>)arg1 ;
@end

