/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <libobjc.A.dylib/FCIssueReadingHistoryObserving.h>

@interface NewsUI2.NewIssueLocalNotificationScheduler : NSObject <FCIssueReadingHistoryObserving> {

	 newIssueThreadIdentifier;
	 secondsPerDay;
	 notificationService;
	??? calendar;
	 secondsPastMidnightToDeliverNotification;
	 issueReadingHistory;

}
-(void)issueReadingHistoryDidChange:(id)arg1 forIssueIDs:(id)arg2 ;
-(id)init;
@end

