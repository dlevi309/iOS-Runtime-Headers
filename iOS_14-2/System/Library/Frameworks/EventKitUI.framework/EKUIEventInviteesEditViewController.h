/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDate *)selectedStartDate;
-(NSDate *)selectedEndDate;
-(void)loadView;
@end

