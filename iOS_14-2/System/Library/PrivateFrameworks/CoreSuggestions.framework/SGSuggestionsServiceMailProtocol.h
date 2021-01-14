/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/


@protocol SGSuggestionsServiceMailProtocol <_SGSuggestionsServiceBaseProtocol,_SGSuggestionsServiceEventsConfirmRejectProtocol,_SGSuggestionsServiceContactsConfirmRejectProtocol,_SGSuggestionsServiceContactsObserverProtocol,_SGSuggestionsServiceEventsObserverProtocol>
@required
-(void)fullDownloadRequestBatch:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2;
-(BOOL)prepareForRealtimeExtraction:(id*)arg1;
-(void)harvestedSuggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3;
-(void)resolveFullDownloadRequests:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)reportMessagesFound:(id)arg1 lost:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)prepareForRealtimeExtractionWithCompletion:(/*^block*/id)arg1;
-(void)messagesToRefreshWithCompletion:(/*^block*/id)arg1;
-(void)updateMessages:(id)arg1 state:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3;
-(void)suggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3;

@end

