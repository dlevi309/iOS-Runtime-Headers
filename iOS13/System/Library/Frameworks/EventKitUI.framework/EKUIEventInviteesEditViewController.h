/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EKEditItemViewController.h>

@class EKEvent, EKUIEventInviteesViewController, NSDate;

@interface EKUIEventInviteesEditViewController : EKEditItemViewController {

	EKEvent* _event;
	EKUIEventInviteesViewController* _controller;

}

@property (nonatomic,readonly) NSDate * selectedStartDate; 
@property (nonatomic,readonly) NSDate * selectedEndDate; 
-(id)initWithEvent:(id)arg1 ;
-(void)loadView;
-(NSDate *)selectedStartDate;
-(NSDate *)selectedEndDate;
@end

