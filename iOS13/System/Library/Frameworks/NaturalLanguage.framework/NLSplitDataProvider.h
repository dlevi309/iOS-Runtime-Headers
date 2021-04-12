/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
*/

#import <NaturalLanguage/NaturalLanguage-Structs.h>
#import <NaturalLanguage/NLDataProvider.h>

@class NLDataProvider, NSArray;

@interface NLSplitDataProvider : NLDataProvider {

	NLDataProvider* _dataProvider;
	NSArray* _indexes;

}
-(id)configuration;
-(CFStringTokenizerRef)tokenizer;
-(unsigned long long)numberOfLabels;
-(id)labelMap;
-(id)vocabularyMap;
-(id)documentFrequencyMap;
-(unsigned long long)numberOfInstances;
-(id)instanceAtIndex:(unsigned long long)arg1 ;
-(id)inverseLabelMap;
-(id)initWithDataProvider:(id)arg1 indexes:(id)arg2 ;
-(void)_generateMaps;
-(unsigned long long)numberOfVocabularyEntries;
@end

