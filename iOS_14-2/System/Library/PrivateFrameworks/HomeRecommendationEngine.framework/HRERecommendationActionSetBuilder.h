/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeRecommendationEngine.framework/HomeRecommendationEngine
*/

#import <Home/HFActionSetBuilder.h>

@class HRERecommendation;

@interface HRERecommendationActionSetBuilder : HFActionSetBuilder {

	HRERecommendation* _recommendation;

}

@property (nonatomic,retain) HRERecommendation * recommendation;              //@synthesize recommendation=_recommendation - In the implementation block
-(HRERecommendation *)recommendation;
-(id)initWithRecommendation:(id)arg1 ;
-(void)setRecommendation:(HRERecommendation *)arg1 ;
@end

