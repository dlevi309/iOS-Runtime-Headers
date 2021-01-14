/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <ShareSheet/UIActivityViewController.h>

@protocol CalendarPublishingActivityDelegate;
@interface CalendarPublishingActivityViewController : UIActivityViewController {

	id<CalendarPublishingActivityDelegate> _activityDelegate;

}

@property (__weak) id<CalendarPublishingActivityDelegate> activityDelegate;              //@synthesize activityDelegate=_activityDelegate - In the implementation block
-(BOOL)_shouldShowSystemActivityType:(id)arg1 ;
-(id<CalendarPublishingActivityDelegate>)activityDelegate;
-(void)setActivityDelegate:(id<CalendarPublishingActivityDelegate>)arg1 ;
-(void)_prepareActivity:(id)arg1 ;
@end

