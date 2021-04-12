/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/


@protocol SGSuggestionsServiceEventsProtocol <_SGSuggestionsServiceBaseProtocol,_SGSuggestionsServiceEventsConfirmRejectProtocol,_SGSuggestionsServiceEventsObserverProtocol>
@required
-(id)launchInfoForSuggestedEventWithUniqueIdentifier:(id)arg1 sourceURL:(id)arg2 clientLocale:(id)arg3 error:(id*)arg4;
-(BOOL)launchAppForSuggestedEventUsingLaunchInfo:(id)arg1 error:(id*)arg2;
-(void)isEventCandidateForURL:(id)arg1 andTitle:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)suggestionsFromURL:(id)arg1 title:(id)arg2 HTMLPayload:(id)arg3 withCompletion:(/*^block*/id)arg4;
-(void)eventFromUniqueId:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)allEventsLimitedTo:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2;
-(void)launchInfoForSuggestedEventWithUniqueIdentifier:(id)arg1 sourceURL:(id)arg2 clientLocale:(id)arg3 withCompletion:(/*^block*/id)arg4;
-(void)launchAppForSuggestedEventUsingLaunchInfo:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)keysForSchemas:(id)arg1 completion:(/*^block*/id)arg2;
-(void)eventsForSchemas:(id)arg1 usingStore:(id)arg2 completion:(/*^block*/id)arg3;

@end

