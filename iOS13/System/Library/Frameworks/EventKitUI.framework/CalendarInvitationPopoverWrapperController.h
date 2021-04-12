/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <UIKitCore/UINavigationController.h>

@class EKEventViewController;

@interface CalendarInvitationPopoverWrapperController : UINavigationController {

	EKEventViewController* _eventViewController;

}

@property (nonatomic,retain) EKEventViewController * eventViewController;              //@synthesize eventViewController=_eventViewController - In the implementation block
-(id)initForEventUID:(int)arg1 ;
-(EKEventViewController *)eventViewController;
-(void)setEventViewController:(EKEventViewController *)arg1 ;
@end

