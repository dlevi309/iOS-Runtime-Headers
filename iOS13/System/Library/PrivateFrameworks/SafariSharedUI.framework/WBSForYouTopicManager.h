/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@protocol OS_dispatch_queue;
@class WBSRecentHistoryTopicTagController, PPNamedEntityStore, NSObject, WBSHistory, CKContextClient, NSDate, NSArray;

@interface WBSForYouTopicManager : NSObject {

	WBSRecentHistoryTopicTagController* _historyTopicTagController;
	PPNamedEntityStore* _namedEntityStore;
	NSObject*<OS_dispatch_queue> _internalQueue;
	WBSHistory* _history;
	CKContextClient* _contextClient;
	NSDate* _lastContextKitRequestDate;
	NSArray* _mostRecentUserVisibleTopics;

}
-(id)initWithHistory:(id)arg1 contextClient:(id)arg2 ;
-(void)_createInternalQueueIfNecessary;
-(void)contextKitTopicsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)portraitNamedEntitiesWithCompletionHandler:(/*^block*/id)arg1 ;
@end

