/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)portraitNamedEntitiesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_createInternalQueueIfNecessary;
-(void)contextKitTopicsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithHistory:(id)arg1 contextClient:(id)arg2 ;
@end

