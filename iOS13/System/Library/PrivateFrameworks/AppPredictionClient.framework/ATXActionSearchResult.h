/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <SearchFoundation/SFSearchResult.h>

@class ATXActionResponse, ATXAction;

@interface ATXActionSearchResult : SFSearchResult {

	ATXActionResponse* _actionResponse;
	ATXAction* _atxAction;

}

@property (nonatomic,retain) ATXActionResponse * actionResponse;              //@synthesize actionResponse=_actionResponse - In the implementation block
@property (nonatomic,readonly) ATXAction * atxAction;                         //@synthesize atxAction=_atxAction - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)predictedActionSearchResultsWithLimit:(long long)arg1 forBundleIdentifiers:(id)arg2 ;
+(id)searchResultForAction:(id)arg1 actionResponse:(id)arg2 ;
+(id)_demoModeActionResponse;
+(id)actionResponseForDeveloperModeWithShouldShowRecentDonations:(BOOL)arg1 shouldShowParameterCombinations:(BOOL)arg2 shouldShowUpcomingMedia:(BOOL)arg3 ;
+(id)actionResponseForDeveloperMode;
+(id)recentDonationsStarting:(id)arg1 end:(id)arg2 number:(unsigned long long)arg3 ;
+(id)mostRecentDonationParameterCombinations;
+(id)recentUpcomingMedia;
+(BOOL)_demoModeEnabled;
+(BOOL)shouldDisplayRecentDonationsForTesting;
+(BOOL)shouldDisplayUpcomingMediaForTesting;
+(BOOL)shouldDisplayValidParameterCombinations;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setAtxAction:(ATXAction *)arg1 ;
-(void)_updateInlineCard;
-(BOOL)isEqualToActionSearchResult:(id)arg1 ;
-(ATXActionResponse *)actionResponse;
-(void)setActionResponse:(ATXActionResponse *)arg1 ;
-(ATXAction *)atxAction;
@end

