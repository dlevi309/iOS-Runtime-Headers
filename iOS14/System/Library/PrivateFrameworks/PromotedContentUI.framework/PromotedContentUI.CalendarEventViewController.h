/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PromotedContentUI.framework/PromotedContentUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/EKEventEditViewDelegate.h>

@interface PromotedContentUI.CalendarEventViewController : UIViewController <EKEventEditViewDelegate> {

	 calendarEvent;
	 eventStore;
	 notificationObserver;
	 actionDelegate;

}
-(void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

