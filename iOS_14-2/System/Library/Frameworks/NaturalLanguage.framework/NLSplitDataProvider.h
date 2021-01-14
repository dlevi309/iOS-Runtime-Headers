/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
*/

#import <NaturalLanguage/NaturalLanguage-Structs.h>
#import <NaturalLanguage/NLDataProvider.h>

@class NLDataProvider, NSArray;

@interface NLSplitDataProvider : NLDataProvider {

	NLDataProvider* _dataProvider;
	NSArray* _indexes;

}
-(CFStringTokenizerRef)tokenizer;
-(id)configuration;
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

