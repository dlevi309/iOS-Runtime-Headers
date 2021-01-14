/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/


#import <PeopleSuggester/PeopleSuggester-Structs.h>
@class NSXPCConnection, _PSSuggesterConfiguration;

@interface _PSSuggester : NSObject {

	NSXPCConnection* _connection;
	os_unfair_lock_s _lock;
	_PSSuggesterConfiguration* _configuration;

}

@property (nonatomic,readonly) _PSSuggesterConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
+(id)suggesterWithDaemon;
-(id)rankedFamilySuggestions;
-(id)init;
-(id)initWithDaemonUsingConfiguration:(id)arg1 ;
-(id)suggestInteractionsFromContext:(id)arg1 ;
-(void)provideFeedbackForMessagesZkwSuggestions:(id)arg1 ;
-(id)rankedSiriNLContactSuggestionsFromContext:(id)arg1 maxSuggestions:(id)arg2 interactionId:(id)arg3 ;
-(id)hourOfDayProbabilitiesToInteractWithContacts:(id)arg1 ;
-(id)hourOfDayProbabilitiesToInteractWithContact:(id)arg1 ;
-(id)rankedAutocompleteSuggestionsFromContext:(id)arg1 candidates:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 ;
-(id)rankedGlobalSuggestionsFromContext:(id)arg1 contactsOnly:(BOOL)arg2 ;
-(_PSSuggesterConfiguration *)configuration;
-(id)relativeAppUsageProbabilitiesForCandidateBundleIds:(id)arg1 daysAgo:(long long)arg2 ;
-(id)shareSheetInteractionsFromContext:(id)arg1 maximumNumberOfSuggestions:(long long)arg2 ;
-(id)rankedNameSuggestionsFromContext:(id)arg1 name:(id)arg2 ;
-(id)shareSheetInteractionsFromContext:(id)arg1 ;
-(id)shareExtensionSuggestionsFromContext:(id)arg1 ;
-(id)rankedZKWSuggestionsFromContext:(id)arg1 ;
-(void)provideSuggestLessFeedbackForShareSheetSuggestion:(id)arg1 ;
-(void)dealloc;
-(void)provideFeedbackForSuggestions:(id)arg1 ;
@end

