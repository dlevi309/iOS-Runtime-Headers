/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <SearchFoundation/SFSearchResult.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ATXScoredPrediction, ATXResponse;

@interface ATXSearchResult : SFSearchResult <NSSecureCoding> {

	ATXScoredPrediction* _scoredBundleId;
	ATXResponse* _response;

}

@property (nonatomic,readonly) ATXScoredPrediction * scoredBundleId;              //@synthesize scoredBundleId=_scoredBundleId - In the implementation block
@property (nonatomic,readonly) ATXResponse * response;                            //@synthesize response=_response - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(ATXResponse *)response;
-(id)initWithScoredBundleId:(id)arg1 response:(id)arg2 ;
-(ATXScoredPrediction *)scoredBundleId;
@end

