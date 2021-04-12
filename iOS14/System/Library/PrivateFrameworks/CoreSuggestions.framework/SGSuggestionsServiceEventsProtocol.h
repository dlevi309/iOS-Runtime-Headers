/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/


@protocol SGSuggestionsServiceEventsProtocol <_SGSuggestionsServiceBaseProtocol,_SGSuggestionsServiceEventsConfirmRejectProtocol,_SGSuggestionsServiceEventsObserverProtocol>
@required
-(void)suggestionsFromURL:(id)arg1 title:(id)arg2 HTMLPayload:(id)arg3 withCompletion:(/*^block*/id)arg4;
-(void)allEventsLimitedTo:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2;
-(void)keysForSchemas:(id)arg1 completion:(/*^block*/id)arg2;
-(void)eventFromUniqueId:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)isEventCandidateForURL:(id)arg1 andTitle:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)launchAppForSuggestedEventUsingLaunchInfo:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(BOOL)launchAppForSuggestedEventUsingLaunchInfo:(id)arg1 error:(id*)arg2;
-(void)eventsForSchemas:(id)arg1 usingStore:(id)arg2 completion:(/*^block*/id)arg3;
-(id)launchInfoForSuggestedEventWithUniqueIdentifier:(id)arg1 sourceURL:(id)arg2 clientLocale:(id)arg3 error:(id*)arg4;
-(void)launchInfoForSuggestedEventWithUniqueIdentifier:(id)arg1 sourceURL:(id)arg2 clientLocale:(id)arg3 withCompletion:(/*^block*/id)arg4;
-(void)isEventCandidateForURL:(id)arg1 andTitle:(id)arg2 containsSchemaOrg:(BOOL)arg3 withCompletion:(/*^block*/id)arg4;

@end

