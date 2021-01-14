/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeRecommendationEngine.framework/HomeRecommendationEngine
*/

#import <HomeRecommendationEngine/HREStandardAsyncRecommendationSource.h>

@class NSArray;

@interface HRETemplateRecommendationGenerator : HREStandardAsyncRecommendationSource {

	NSArray* _templates;

}

@property (nonatomic,retain) NSArray * templates;              //@synthesize templates=_templates - In the implementation block
-(NSArray *)templates;
-(void)setTemplates:(NSArray *)arg1 ;
-(id)initWithTemplates:(id)arg1 ;
-(void)setupProcess:(id)arg1 ;
-(unsigned long long)disablingOptions;
-(Class)generationProcessClass;
-(id)filterTemplates:(id)arg1 withOptions:(unsigned long long)arg2 ;
@end

