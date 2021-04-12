/*
* Generated on Monday, March 1, 2021 at 2:34:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <libobjc.A.dylib/FCSubscriptionObserving.h>
#import <libobjc.A.dylib/FCBundleSubscriptionChangeObserver.h>

@interface NewsUI2.OfflineIssueAutoDownloader : NSObject <FCSubscriptionObserving, FCBundleSubscriptionChangeObserver> {

	 currentIssuesChecker;
	 offlineIssueManager;
	 bundleSubscriptionManager;
	 triggerDeduper;

}
-(void)subscriptionController:(id)arg1 didAddTags:(id)arg2 changeTags:(id)arg3 moveTags:(id)arg4 removeTags:(id)arg5 subscriptionType:(unsigned long long)arg6 eventInitiationLevel:(long long)arg7 ;
-(void)bundleSubscriptionDidSubscribe:(id)arg1 ;
-(id)init;
@end

