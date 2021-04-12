/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
*/

#import <CalendarUIKit/CUIKSaveOperation.h>

@class EKReminder;

@interface CUIKUncompleteRecurringReminderOperation : CUIKSaveOperation {

	EKReminder* _previouslyCompletedRecurringReminder;

}

@property (retain) EKReminder * previouslyCompletedRecurringReminder;              //@synthesize previouslyCompletedRecurringReminder=_previouslyCompletedRecurringReminder - In the implementation block
-(EKReminder *)previouslyCompletedRecurringReminder;
-(void)setPreviouslyCompletedRecurringReminder:(EKReminder *)arg1 ;
@end

