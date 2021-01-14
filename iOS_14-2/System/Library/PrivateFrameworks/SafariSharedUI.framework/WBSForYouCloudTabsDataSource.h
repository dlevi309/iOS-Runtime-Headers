/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <SafariSharedUI/WBSForYouRecommendationMediatorDataSource.h>

@protocol OS_dispatch_queue;
@class WBSCloudTabStore, NSObject;

@interface WBSForYouCloudTabsDataSource : WBSForYouRecommendationMediatorDataSource {

	WBSCloudTabStore* _tabsStore;
	NSObject*<OS_dispatch_queue> _internalQueue;

}
-(void)retrieveRecommendationsMatchingTopic:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)initWithTabStore:(id)arg1 ;
-(void)_createInternalQueueIfNecessary;
@end

