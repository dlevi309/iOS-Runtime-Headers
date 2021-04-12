/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <SearchFoundation/SFSearchResult.h>

@class ATXActionResponse, ATXAction, ATXHeroAppPrediction, ATXProactiveSuggestion;

@interface ATXActionSearchResult : SFSearchResult {

	ATXActionResponse* _actionResponse;
	ATXAction* _atxAction;
	ATXHeroAppPrediction* _heroApp;
	ATXProactiveSuggestion* _proactiveSuggestion;

}

@property (nonatomic,retain) ATXActionResponse * actionResponse;                          //@synthesize actionResponse=_actionResponse - In the implementation block
@property (nonatomic,readonly) ATXAction * atxAction;                                     //@synthesize atxAction=_atxAction - In the implementation block
@property (nonatomic,readonly) ATXHeroAppPrediction * heroApp;                            //@synthesize heroApp=_heroApp - In the implementation block
@property (nonatomic,readonly) ATXProactiveSuggestion * proactiveSuggestion;              //@synthesize proactiveSuggestion=_proactiveSuggestion - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)actionResponseForDeveloperModeWithClientId:(id)arg1 shouldShowRecentDonations:(BOOL)arg2 ;
+(BOOL)shouldDisplayUpcomingMediaForTesting;
+(id)actionResponseForDeveloperModeWithShouldShowRecentDonations:(BOOL)arg1 shouldShowParameterCombinations:(BOOL)arg2 shouldShowUpcomingMedia:(BOOL)arg3 withClientModelId:(id)arg4 ;
+(id)_unarchiveATXHeroAppPredictionFromSuggestion:(id)arg1 ;
+(id)_unarchiveATXActionFromSuggestion:(id)arg1 ;
+(id)generatedSearchResultForProactiveSuggestion:(id)arg1 actionResponse:(id)arg2 ;
+(id)actionResponseForDeveloperModeWithShouldShowRecentDonations:(BOOL)arg1 shouldShowParameterCombinations:(BOOL)arg2 shouldShowUpcomingMedia:(BOOL)arg3 ;
+(id)generatedSearchResultForAction:(id)arg1 actionResponse:(id)arg2 ;
+(id)mostRecentDonationParameterCombinations;
+(BOOL)shouldDisplayRecentActionsOnHomeScreen;
+(id)recentDonationsStarting:(id)arg1 end:(id)arg2 number:(unsigned long long)arg3 ;
+(id)actionSearchResultFromProactiveSuggestion:(id)arg1 actionResponse:(id)arg2 avRoutingSessionHelper:(id)arg3 nowPlayingDataProvider:(id)arg4 ;
+(BOOL)shouldDisplayRecentDonationsForTesting;
+(id)recentUpcomingMedia;
+(id)actionResponseForDeveloperMode;
+(id)actionSearchResultFromScoredAction:(id)arg1 actionResponse:(id)arg2 avRoutingSessionHelper:(id)arg3 nowPlayingDataProvider:(id)arg4 ;
+(id)_recentDonationProactiveSuggestionFromScoredAction:(id)arg1 withClientModelId:(id)arg2 ;
+(id)_unarchiveObjectFromSuggestion:(id)arg1 ;
+(id)_demoModeActionResponse;
+(BOOL)shouldDisplayValidParameterCombinations;
+(id)predictedActionSearchResultsWithLimit:(long long)arg1 forBundleIdentifiers:(id)arg2 ;
+(BOOL)_demoModeEnabled;
-(ATXProactiveSuggestion *)proactiveSuggestion;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(ATXHeroAppPrediction *)heroApp;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setAtxAction:(ATXAction *)arg1 ;
-(void)setActionResponse:(ATXActionResponse *)arg1 ;
-(void)setProactiveSuggestion:(ATXProactiveSuggestion *)arg1 ;
-(void)setHeroApp:(ATXHeroAppPrediction *)arg1 ;
-(void)_updateInlineCardWithContent:(id)arg1 ;
-(BOOL)isEqualToActionSearchResult:(id)arg1 ;
-(ATXActionResponse *)actionResponse;
-(ATXAction *)atxAction;
@end

