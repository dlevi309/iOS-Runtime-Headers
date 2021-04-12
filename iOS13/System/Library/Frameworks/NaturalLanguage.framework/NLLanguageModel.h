/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(NSString *)localization;
-(BOOL)getConditionalProbabilityForTokenID:(unsigned)arg1 context:(const unsigned*)arg2 length:(unsigned long long)arg3 probability:(double*)arg4 ;
-(NLLexicon *)lexicon;
-(id)initWithLocalization:(id)arg1 ;
-(double)conditionalProbabilityForEntry:(id)arg1 context:(id)arg2 ;
-(double)conditionalProbabilityForWord:(id)arg1 context:(id)arg2 ;
-(void)enumeratePredictionsForContext:(id)arg1 maxEntriesPerPrediction:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)enumeratePredictionsForContext:(id)arg1 maxWordsPerPrediction:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
@end

