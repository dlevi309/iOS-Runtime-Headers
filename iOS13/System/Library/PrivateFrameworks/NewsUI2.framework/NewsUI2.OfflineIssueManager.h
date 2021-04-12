/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <libobjc.A.dylib/FCNetworkReachabilityObserving.h>
#import <libobjc.A.dylib/FCOfflineIssueListObserving.h>

@interface NewsUI2.OfflineIssueManager : NSObject <FCNetworkReachabilityObserving, FCOfflineIssueListObserving> {

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
-(void)powerStateDidChange;
-(void)wifiReachabilityDidChange:(id)arg1 ;
-(void)offlineIssueList:(id)arg1 didAddIssues:(id)arg2 removeIssues:(id)arg3 ;
-(id)init;
@end

