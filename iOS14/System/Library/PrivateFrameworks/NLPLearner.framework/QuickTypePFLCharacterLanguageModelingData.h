/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NLPLearner.framework/NLPLearner
*/

#import <NLPLearner/QuickTypePFLLanguageModelingData.h>

@class NSLocale, CVNLPTokenIDConverter;

@interface QuickTypePFLCharacterLanguageModelingData : QuickTypePFLLanguageModelingData {

	NSLocale* _locale;
	CVNLPTokenIDConverter* _tokenConverter;

}
+(void)initialize;
+(unsigned long long)defaultMaxSequenceLength;
-(id)initWithLocale:(id)arg1 ;
-(void)addResource:(id)arg1 ;
-(BOOL)loadFromCoreDuet:(id)arg1 ;
@end

