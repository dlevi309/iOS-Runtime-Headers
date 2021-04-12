/*
* Generated on Monday, March 1, 2021 at 2:34:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <libobjc.A.dylib/FCUserInfoObserving.h>

@interface NewsUI2.FollowingNotificationsDataManager : NSObject <FCUserInfoObserving> {

	 delegate;
	 subscriptionService;
	 tagService;
	 userNotificationCenter;

}
-(void)userInfoDidChangeMarketingNotificationsEnabled:(id)arg1 fromCloud:(BOOL)arg2 ;
-(void)userInfoDidChangeNewIssueNotificationsEnabled:(id)arg1 fromCloud:(BOOL)arg2 ;
-(id)init;
-(void)determineSystemNotificationSettingsStatus;
@end

