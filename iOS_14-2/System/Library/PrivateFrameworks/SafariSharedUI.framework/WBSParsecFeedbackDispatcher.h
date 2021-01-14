/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@protocol WBSParsecFeedbackDispatcher <NSObject>
@optional
-(void)flush;
-(void)didBeginSearchOfType:(long long)arg1 withQuery:(id)arg2 urlString:(id)arg3 headers:(id)arg4 endpoint:(unsigned long long)arg5;
-(void)userTypedURLDirectlyForQuery:(id)arg1;
-(void)didGenerateCompletionListItemsWithRankingObserver:(id)arg1 forQueryID:(long long)arg2;
-(void)didReceiveParsecResultsAfterTimeout:(id)arg1;
-(void)userTypedGoToSearch:(id)arg1 endpoint:(unsigned long long)arg2 forQueryID:(long long)arg3;
-(void)searchViewAppearedBecauseOfEvent:(unsigned long long)arg1 forQueryID:(long long)arg2;
-(void)didBeginSearchOfType:(long long)arg1 withQuery:(id)arg2 endpoint:(unsigned long long)arg3;
-(void)searchViewDisappearedBecauseOfEvent:(long long)arg1 forQueryID:(long long)arg2;
-(void)userDidEngageWithCompletionListItem:(id)arg1 onActionButton:(BOOL)arg2 method:(long long)arg3 doesMatchSiriSuggestion:(BOOL)arg4;
-(void)searchViewAppearedBecauseOfEvent:(unsigned long long)arg1 isSafariReaderAvailable:(BOOL)arg2 forQueryID:(long long)arg3;
-(void)userDidEngageWithCompletionListItem:(id)arg1 onActionButton:(BOOL)arg2 method:(long long)arg3;
-(void)userDidTypeKey:(long long)arg1;
-(void)userDidEngageWithCardShowingResult:(id)arg1 onCardOfType:(id)arg2 actionType:(id)arg3 actionTarget:(id)arg4 destination:(id)arg5;
-(void)userDidSelectCompletionListItem:(id)arg1;
-(void)userDidSelectCompletionListItem:(id)arg1 atPosition:(unsigned long long)arg2;
-(void)userDidEngageWithCompletionListItem:(id)arg1 withCardActionDictionary:(id)arg2;
-(void)userDidEngageWithCompletionListItem:(id)arg1 atPosition:(unsigned long long)arg2 withEngagementActionDictionary:(id)arg3;

@required
-(void)didReceiveWebSuggestionsForQuery:(id)arg1 fromSearchProvider:(id)arg2 responseSize:(long long)arg3 statusCode:(long long)arg4 networkTimingData:(id)arg5;
-(void)userDidCancelSession;
-(void)didReceiveLocalResultsForQuery:(id)arg1;
-(void)userDidCancelSession:(long long)arg1;
-(void)didDisplayCompletionListItems:(id)arg1 forQuery:(id)arg2 forEvent:(long long)arg3;

@end

