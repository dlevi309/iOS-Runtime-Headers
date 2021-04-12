/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <libobjc.A.dylib/FCIssueReadingHistoryObserving.h>

@interface NewsUI2.NewIssueLocalNotificationScheduler : NSObject <FCIssueReadingHistoryObserving> {

	 newIssueThreadIdentifier;
	 secondsPerDay;
	 notificationService;
	 secondsPastMidnightToDeliverNotification;
	 issueReadingHistory;

}
-(void)issueReadingHistoryDidChange:(id)arg1 forIssueIDs:(id)arg2 ;
-(id)init;
@end

