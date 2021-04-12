/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
*/

#import <NaturalLanguage/NaturalLanguage-Structs.h>
#import <NaturalLanguage/NLDataProvider.h>

@class NSArray;

@interface NLConcatenatedDataProvider : NLDataProvider {

	NSArray* _dataProviders;

}
-(id)configuration;
-(CFStringTokenizerRef)tokenizer;
-(id)initWithDataProviders:(id)arg1 ;
-(unsigned long long)numberOfLabels;
-(id)labelMap;
-(id)vocabularyMap;
-(id)documentFrequencyMap;
-(unsigned long long)numberOfInstances;
-(id)instanceAtIndex:(unsigned long long)arg1 ;
-(id)inverseLabelMap;
-(void)_generateMaps;
-(unsigned long long)numberOfVocabularyEntries;
@end

