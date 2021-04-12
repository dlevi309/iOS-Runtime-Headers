/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class ATXResponse, NSArray, NSError;

@interface APRAppPredictions : NSObject {

	ATXResponse* _atxResponse;
	NSArray* _scoredBundleIds;
	unsigned long long _experience;
	NSError* _error;

}

@property (nonatomic,readonly) ATXResponse * atxResponse;                //@synthesize atxResponse=_atxResponse - In the implementation block
@property (nonatomic,readonly) NSArray * scoredBundleIds;                //@synthesize scoredBundleIds=_scoredBundleIds - In the implementation block
@property (assign,nonatomic) unsigned long long experience;              //@synthesize experience=_experience - In the implementation block
@property (nonatomic,readonly) NSError * error;                          //@synthesize error=_error - In the implementation block
+(unsigned long long)_experienceForPredictions:(id)arg1 intentType:(id)arg2 ;
-(id)init;
-(NSError *)error;
-(ATXResponse *)atxResponse;
-(unsigned long long)experience;
-(void)setExperience:(unsigned long long)arg1 ;
-(id)initWithScoredBundleIds:(id)arg1 experience:(unsigned long long)arg2 error:(id)arg3 ;
-(id)initWithIntent:(id)arg1 candidateBundleIdentifiers:(id)arg2 limit:(int)arg3 ;
-(NSArray *)scoredBundleIds;
@end

