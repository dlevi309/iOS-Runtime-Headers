/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <libobjc.A.dylib/FCOfflineIssueListObserving.h>
#import <libobjc.A.dylib/FCNetworkReachabilityObserving.h>

@interface NewsUI2.OfflineIssueManager : NSObject <FCOfflineIssueListObserving, FCNetworkReachabilityObserving> {

	 issueDownloadService;
	 offlineIssueList;
	 storageLevelProvider;
	 issueOfflineManager;
	 networkReachability;
	 cachedIssuesPromise;
	 downloads;
	 downloadsLock;
	 issueIDsAvailableOffline;

}
-(void)networkReachabilityDidChange:(id)arg1 ;
-(void)powerStateDidChange;
-(void)offlineIssueList:(id)arg1 didAddIssues:(id)arg2 removeIssues:(id)arg3 ;
-(id)init;
@end

