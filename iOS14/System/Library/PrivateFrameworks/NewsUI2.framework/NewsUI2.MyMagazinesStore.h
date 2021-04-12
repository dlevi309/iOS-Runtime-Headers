/*
* Generated on Thursday, January 14, 2021 at 2:24:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <libobjc.A.dylib/FCIssueReadingHistoryObserving.h>
#import <libobjc.A.dylib/FCSubscriptionObserving.h>
#import <libobjc.A.dylib/FCOfflineIssueListObserving.h>

@interface NewsUI2.MyMagazinesStore : NSObject <FCIssueReadingHistoryObserving, FCSubscriptionObserving, FCOfflineIssueListObserving> {

	 state;
	 badgeIssueIDs;
	 currentIssues;
	 recentlyReadIssues;
	 downloadedIssues;
	 currentIssuesChecker;
	 issueService;
	 issueReadingHistory;
	 subscriptionController;
	 offlineIssueList;
	 offlineIssueManager;
	 paidBundleConfigManager;
	 persistentStore;
	 accessQueue;
	 $__lazy_storage_$_lazyInitializingPromise;

}
-(void)issueReadingHistoryDidChange:(id)arg1 forIssueIDs:(id)arg2 ;
-(void)offlineIssueList:(id)arg1 didAddIssues:(id)arg2 removeIssues:(id)arg3 ;
-(void)subscriptionController:(id)arg1 didAddTags:(id)arg2 changeTags:(id)arg3 moveTags:(id)arg4 removeTags:(id)arg5 subscriptionType:(unsigned long long)arg6 eventInitiationLevel:(long long)arg7 ;
-(id)init;
@end

