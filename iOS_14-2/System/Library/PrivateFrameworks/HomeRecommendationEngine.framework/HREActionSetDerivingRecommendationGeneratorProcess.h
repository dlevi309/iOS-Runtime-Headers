/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeRecommendationEngine.framework/HomeRecommendationEngine
*/

#import <HomeRecommendationEngine/HREStandardAsyncRecommendationGenerationProcess.h>

@class NSDictionary;

@interface HREActionSetDerivingRecommendationGeneratorProcess : HREStandardAsyncRecommendationGenerationProcess {

	NSDictionary* _sourceCharacteristics;

}

@property (nonatomic,retain) NSDictionary * sourceCharacteristics;              //@synthesize sourceCharacteristics=_sourceCharacteristics - In the implementation block
-(void)setSourceCharacteristics:(NSDictionary *)arg1 ;
-(id)_recommendationForActionSet:(id)arg1 inHome:(id)arg2 ;
-(id)_createRecommendationWithActionSet:(id)arg1 ;
-(BOOL)shouldGenerateRecommendations;
-(id)generateRecommendations;
-(NSDictionary *)sourceCharacteristics;
@end

