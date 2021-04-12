/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@protocol WBSParsecFeedbackDispatcher <NSObject>
@optional
-(void)flush;
-(void)userDidEngageWithCompletionListItem:(id)arg1 onActionButton:(BOOL)arg2 method:(long long)arg3 doesMatchSiriSuggestion:(BOOL)arg4;
-(void)didBeginSearchOfType:(long long)arg1 withQuery:(id)arg2 urlString:(id)arg3 headers:(id)arg4 endpoint:(unsigned long long)arg5;
-(void)searchViewAppearedBecauseOfEvent:(unsigned long long)arg1 forQueryID:(long long)arg2;
-(void)searchViewDisappearedBecauseOfEvent:(long long)arg1 forQueryID:(long long)arg2;
-(void)searchViewAppearedBecauseOfEvent:(unsigned long long)arg1 isSafariReaderAvailable:(BOOL)arg2 forQueryID:(long long)arg3;
-(void)userDidEngageWithCardShowingResult:(id)arg1 onCardOfType:(id)arg2 actionType:(id)arg3 actionTarget:(id)arg4 destination:(id)arg5;
-(void)userDidSelectCompletionListItem:(id)arg1;
-(void)userDidSelectCompletionListItem:(id)arg1 atPosition:(unsigned long long)arg2;
-(void)userDidEngageWithCompletionListItem:(id)arg1 withCardActionDictionary:(id)arg2;
-(void)userDidEngageWithCompletionListItem:(id)arg1 atPosition:(unsigned long long)arg2 withEngagementActionDictionary:(id)arg3;
-(void)userDidEngageWithCompletionListItem:(id)arg1 onActionButton:(BOOL)arg2 method:(long long)arg3;
-(void)userTypedURLDirectlyForQuery:(id)arg1;
-(void)didGenerateCompletionListItemsWithRankingObserver:(id)arg1 forQueryID:(long long)arg2;
-(void)didReceiveParsecResultsAfterTimeout:(id)arg1;
-(void)didBeginSearchOfType:(long long)arg1 withQuery:(id)arg2 endpoint:(unsigned long long)arg3;
-(void)userTypedGoToSearch:(id)arg1 endpoint:(unsigned long long)arg2 forQueryID:(long long)arg3;

@required
-(void)didDisplayCompletionListItems:(id)arg1 forQuery:(id)arg2 forEvent:(long long)arg3;
-(void)userDidCancelSession;
-(void)userDidCancelSession:(long long)arg1;
-(void)didReceiveWebSuggestionsForQuery:(id)arg1 fromSearchProvider:(id)arg2 responseSize:(long long)arg3 statusCode:(long long)arg4 networkTimingData:(id)arg5;
-(void)didReceiveLocalResultsForQuery:(id)arg1;

@end

