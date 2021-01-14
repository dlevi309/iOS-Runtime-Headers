/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
*/


@class NSString, NLLexicon, NLTokenizer;

@interface NLLanguageModel : NSObject {

	NSString* _localization;
	void* _model;
	NLLexicon* _lexicon;
	NLTokenizer* _tokenizer;

}

@property (copy,readonly) NSString * localization; 
@property (copy,readonly) NLLexicon * lexicon; 
-(NLLexicon *)lexicon;
-(id)description;
-(NSString *)localization;
-(void)dealloc;
-(BOOL)getConditionalProbabilityForTokenID:(unsigned)arg1 context:(const unsigned*)arg2 length:(unsigned long long)arg3 probability:(double*)arg4 ;
-(id)initWithLocalization:(id)arg1 ;
-(double)conditionalProbabilityForEntry:(id)arg1 context:(id)arg2 ;
-(double)conditionalProbabilityForWord:(id)arg1 context:(id)arg2 ;
-(void)enumeratePredictionsForContext:(id)arg1 maxEntriesPerPrediction:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)enumeratePredictionsForContext:(id)arg1 maxWordsPerPrediction:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
@end

