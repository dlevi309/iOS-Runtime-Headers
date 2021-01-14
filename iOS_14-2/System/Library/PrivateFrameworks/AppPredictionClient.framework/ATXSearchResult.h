/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <SearchFoundation/SFSearchResult.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ATXScoredPrediction, ATXResponse, ATXProactiveSuggestion;

@interface ATXSearchResult : SFSearchResult <NSSecureCoding> {

	ATXScoredPrediction* _scoredBundleId;
	ATXResponse* _response;
	ATXProactiveSuggestion* _proactiveSuggestion;

}

@property (nonatomic,readonly) ATXScoredPrediction * scoredBundleId;                      //@synthesize scoredBundleId=_scoredBundleId - In the implementation block
@property (nonatomic,readonly) ATXResponse * response;                                    //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) ATXProactiveSuggestion * proactiveSuggestion;              //@synthesize proactiveSuggestion=_proactiveSuggestion - In the implementation block
+(BOOL)supportsSecureCoding;
-(ATXProactiveSuggestion *)proactiveSuggestion;
-(void)encodeWithCoder:(id)arg1 ;
-(ATXScoredPrediction *)scoredBundleId;
-(ATXResponse *)response;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithScoredBundleId:(id)arg1 response:(id)arg2 proactiveSuggestion:(id)arg3 ;
@end

