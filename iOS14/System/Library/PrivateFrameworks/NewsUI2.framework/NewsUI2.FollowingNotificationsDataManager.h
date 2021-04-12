/*
* Generated on Thursday, January 14, 2021 at 2:24:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <libobjc.A.dylib/FCUserInfoObserving.h>
#import <libobjc.A.dylib/FCNewsletterSubscriptionObserver.h>

@interface NewsUI2.FollowingNotificationsDataManager : NSObject <FCUserInfoObserving, FCNewsletterSubscriptionObserver> {

	 delegate;
	 subscriptionService;
	 tagService;
	 userNotificationCenter;
	 configurationManager;
	 newsletterManager;

}
-(void)newsletterSubscriptionChangedFromSubscription:(long long)arg1 ;
-(void)userInfoDidChangeMarketingNotificationsEnabled:(id)arg1 fromCloud:(BOOL)arg2 ;
-(void)userInfoDidChangeNewIssueNotificationsEnabled:(id)arg1 fromCloud:(BOOL)arg2 ;
-(void)userInfoDidChangeEndOfAudioTrackNotificationsEnabled:(id)arg1 fromCloud:(BOOL)arg2 ;
-(id)init;
-(void)determineSystemNotificationSettingsStatus;
@end

