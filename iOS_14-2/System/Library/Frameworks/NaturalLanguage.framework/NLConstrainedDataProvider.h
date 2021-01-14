/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
*/

#import <NaturalLanguage/NaturalLanguage-Structs.h>
#import <NaturalLanguage/NLDataProvider.h>

@class NLDataProvider, NSArray, NSDictionary;

@interface NLConstrainedDataProvider : NLDataProvider {

	NLDataProvider* _dataProvider;
	NLConstraintParameters _parameters;
	NSArray* _locators;
	NSDictionary* _labelMap;
	NSDictionary* _inverseLabelMap;
	NSDictionary* _vocabularyMap;
	NSDictionary* _documentFrequencyMap;
	unsigned long long _numberOfLabels;
	unsigned long long _numberOfVocabularyEntries;

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
-(void)_generateMaps;
-(unsigned long long)numberOfVocabularyEntries;
-(id)initWithDataProvider:(id)arg1 parameters:(NLConstraintParameters)arg2 modelTrainer:(id)arg3 ;
@end

