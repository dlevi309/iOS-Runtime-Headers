/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <libobjc.A.dylib/WBSParsecFeedbackDispatcher.h>
#import <libobjc.A.dylib/WBSParsecGlobalFeedbackDispatcher.h>

@protocol OS_dispatch_queue;
@class NSMapTable, NSObject, NSArray, NSString;

@interface WBSParsecDFeedbackDispatcher : NSObject <WBSParsecFeedbackDispatcher, WBSParsecGlobalFeedbackDispatcher> {

	NSMapTable* _queriesToDictionariesFromSearchTypesToStartSearchFeedbacks;
	NSObject*<OS_dispatch_queue> _feedbackQueue;
	NSObject*<OS_dispatch_queue> _queriesToDictionariesMappingQueue;
	NSArray* _feedbackListeners;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)flush;
-(void)sendNewWindowFeedback;
-(id)initWithSession:(id)arg1 ;
-(void)didReceiveWebSuggestionsForQuery:(id)arg1 fromSearchProvider:(id)arg2 responseSize:(long long)arg3 statusCode:(long long)arg4 networkTimingData:(id)arg5 ;
-(id)_customFeedbackOfType:(unsigned long long)arg1 JSONDictionary:(id)arg2 ;
-(void)didBeginSearchOfType:(long long)arg1 withQuery:(id)arg2 urlString:(id)arg3 headers:(id)arg4 endpoint:(unsigned long long)arg5 ;
-(void)userTypedURLDirectlyForQuery:(id)arg1 ;
-(void)userDidCancelSession;
-(void)didGenerateCompletionListItemsWithRankingObserver:(id)arg1 forQueryID:(long long)arg2 ;
-(void)didReceiveLocalResultsForQuery:(id)arg1 ;
-(void)sendWindowMiniaturizeByMouseFeedback;
-(void)didReceiveParsecResultsAfterTimeout:(id)arg1 ;
-(void)sendAppLaunchFeedback;
-(void)postFeedback:(id)arg1 forQueryID:(long long)arg2 ;
-(void)sendWindowCloseByMouseFeedback;
-(void)userTypedGoToSearch:(id)arg1 endpoint:(unsigned long long)arg2 forQueryID:(long long)arg3 ;
-(void)searchViewAppearedBecauseOfEvent:(unsigned long long)arg1 forQueryID:(long long)arg2 ;
-(void)didBeginSearchOfType:(long long)arg1 withQuery:(id)arg2 endpoint:(unsigned long long)arg3 ;
-(void)userDidCancelSession:(long long)arg1 ;
-(void)sendSmartSearchFieldClickedFeedbackWithReaderAvailable:(BOOL)arg1 ;
-(void)searchViewDisappearedBecauseOfEvent:(long long)arg1 forQueryID:(long long)arg2 ;
-(void)sendWindowMiniaturizeByKeyboardFeedback;
-(void)_setStartSearchFeedback:(id)arg1 forSearchOfType:(long long)arg2 withQuery:(id)arg3 ;
-(void)sendAppLostFocusFeedback;
-(void)didRankSections:(id)arg1 blendingDuration:(double)arg2 feedbackForHiddenAndDuplicateResults:(id)arg3 forQueryID:(long long)arg4 ;
-(void)userDidEngageWithCompletionListItem:(id)arg1 onActionButton:(BOOL)arg2 method:(long long)arg3 doesMatchSiriSuggestion:(BOOL)arg4 ;
-(void)sendClearInputFeedbackWithTriggerEvent:(unsigned long long)arg1 forQueryID:(long long)arg2 ;
-(void)searchViewAppearedBecauseOfEvent:(unsigned long long)arg1 isSafariReaderAvailable:(BOOL)arg2 forQueryID:(long long)arg3 ;
-(void)sendNewTabFeedback;
-(void)sendMapsPlaceCardEngagementFeedbackOfType:(int)arg1 forQueryID:(long long)arg2 ;
-(void)userDidEngageWithCompletionListItem:(id)arg1 onActionButton:(BOOL)arg2 method:(long long)arg3 ;
-(void)didDisplayCompletionListItems:(id)arg1 forQuery:(id)arg2 forEvent:(long long)arg3 ;
-(void)userDidTypeKey:(long long)arg1 ;
-(void)sendWindowCloseByKeyboardFeedback;
-(void)_postFeedbackOnFeedbackQueue:(id)arg1 forQueryID:(long long)arg2 ;
-(void)sendCrowdsourcedAutoFillFeedback:(id)arg1 forQueryID:(long long)arg2 ;
-(void)sendAppQuitFeedback;
-(id)_takeStartSearchFeedbackForSearchOfType:(long long)arg1 forQuery:(id)arg2 ;
@end

