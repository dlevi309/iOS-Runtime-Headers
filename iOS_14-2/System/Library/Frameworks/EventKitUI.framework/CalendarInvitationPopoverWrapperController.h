/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <UIKitCore/UINavigationController.h>

@class EKEventViewController;

@interface CalendarInvitationPopoverWrapperController : UINavigationController {

	EKEventViewController* _eventViewController;

}

@property (nonatomic,retain) EKEventViewController * eventViewController;              //@synthesize eventViewController=_eventViewController - In the implementation block
-(EKEventViewController *)eventViewController;
-(id)initForEventUID:(int)arg1 ;
-(void)setEventViewController:(EKEventViewController *)arg1 ;
@end

