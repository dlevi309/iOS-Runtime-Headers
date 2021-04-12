/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol OS_dispatch_queue, OS_dispatch_source, WBSFormAutoFillCorrectionsStore;
@class NSMutableArray, NSObject, WBSCrowdsourcedFeedbackDomainNormalizer;

@interface WBSFormAutoFillCorrectionsHistoryObserver : NSObject {

	NSMutableArray* _pendingRemovedHistoryItemsToProcess;
	NSMutableArray* _pendingRemovedHistoryVisitsToProcess;
	NSObject*<OS_dispatch_queue> _processingQueue;
	NSObject*<OS_dispatch_source> _coalescingTimerSource;
	WBSCrowdsourcedFeedbackDomainNormalizer* _domainNormalizer;
	id<WBSFormAutoFillCorrectionsStore> _correctionsStore;

}
-(void)flushPendingChangesAndDisconnectFromStoreAndHistory;
-(void)_updateCorrectionsStoreNow;
-(void)_historyWasCleared:(id)arg1 ;
-(id)initWithCorrectionsStore:(id)arg1 ;
-(void)_updateCorrectionsStoreSoon;
-(id)_normalizeURL:(id)arg1 ;
-(void)_historyItemsWereRemoved:(id)arg1 ;
-(void)_historyVisitsWereRemoved:(id)arg1 ;
-(void)_invalidateUpdateCoalescingTimer;
-(void)dealloc;
@end

