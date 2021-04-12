/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <SafariSharedUI/WBSForYouRecommendationMediatorDataSource.h>

@protocol OS_dispatch_queue;
@class WBSCloudTabStore, NSObject;

@interface WBSForYouCloudTabsDataSource : WBSForYouRecommendationMediatorDataSource {

	WBSCloudTabStore* _tabsStore;
	NSObject*<OS_dispatch_queue> _internalQueue;

}
-(void)_createInternalQueueIfNecessary;
-(id)initWithTabStore:(id)arg1 ;
-(void)retrieveRecommendationsMatchingTopic:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

