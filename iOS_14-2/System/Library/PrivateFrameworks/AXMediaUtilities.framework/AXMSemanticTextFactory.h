/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/


#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
@class NLTagger, NSMutableDictionary, NSNumberFormatter, NSDataDetector;

@interface AXMSemanticTextFactory : NSObject {

	NLTagger* _tagger;
	NSMutableDictionary* _cachedLexicons;
	NSNumberFormatter* _numberFormatter;
	NSMutableDictionary* _compiledPatterns;
	NSDataDetector* _dataDetector;

}

@property (nonatomic,retain) NLTagger * tagger;                                   //@synthesize tagger=_tagger - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedLexicons;                //@synthesize cachedLexicons=_cachedLexicons - In the implementation block
@property (nonatomic,retain) NSNumberFormatter * numberFormatter;                 //@synthesize numberFormatter=_numberFormatter - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * compiledPatterns;              //@synthesize compiledPatterns=_compiledPatterns - In the implementation block
@property (nonatomic,retain) NSDataDetector * dataDetector;                       //@synthesize dataDetector=_dataDetector - In the implementation block
-(void)setNumberFormatter:(NSNumberFormatter *)arg1 ;
-(NSNumberFormatter *)numberFormatter;
-(NLTagger *)tagger;
-(id)semanticTextForText:(id)arg1 withLocale:(id)arg2 ;
-(id)_preprocessedText:(id)arg1 ;
-(void)_applyNaturalLanguageTokens:(id)arg1 ;
-(void)_applyDataDetectors:(id)arg1 ;
-(void)_applyCustomPatterns:(id)arg1 ;
-(void)_performSemanticAnalysis:(id)arg1 ;
-(BOOL)_textExistsInLexicon:(id)arg1 withLocale:(id)arg2 ;
-(NSMutableDictionary *)compiledPatterns;
-(LXLexiconRef)_lexiconForLocale:(id)arg1 ;
-(NSMutableDictionary *)cachedLexicons;
-(void)setTagger:(NLTagger *)arg1 ;
-(BOOL)_string:(id)arg1 containsOnlyCharactersFrom:(id)arg2 ;
-(BOOL)_lexiconExistsForLocale:(id)arg1 ;
-(void)setCachedLexicons:(NSMutableDictionary *)arg1 ;
-(void)setCompiledPatterns:(NSMutableDictionary *)arg1 ;
-(void)setDataDetector:(NSDataDetector *)arg1 ;
-(NSDataDetector *)dataDetector;
@end

