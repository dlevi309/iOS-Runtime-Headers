/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/


@protocol SGSuggestionsServiceMailProtocol <_SGSuggestionsServiceBaseProtocol,_SGSuggestionsServiceEventsConfirmRejectProtocol,_SGSuggestionsServiceContactsConfirmRejectProtocol,_SGSuggestionsServiceContactsObserverProtocol,_SGSuggestionsServiceEventsObserverProtocol>
@required
-(void)suggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3;
-(BOOL)prepareForRealtimeExtraction:(id*)arg1;
-(void)harvestedSuggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3;
-(void)messagesToRefreshWithCompletion:(/*^block*/id)arg1;
-(void)reportMessagesFound:(id)arg1 lost:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)fullDownloadRequestBatch:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolveFullDownloadRequests:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)prepareForRealtimeExtractionWithCompletion:(/*^block*/id)arg1;
-(void)updateMessages:(id)arg1 state:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3;

@end

