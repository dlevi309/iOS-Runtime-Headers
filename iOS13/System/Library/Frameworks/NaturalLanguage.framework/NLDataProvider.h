/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
*/


#import <NaturalLanguage/NaturalLanguage-Structs.h>
@class NLModelConfiguration, NSArray, NSDictionary, NSString;

@interface NLDataProvider : NSObject {

	NLModelConfiguration* _configuration;
	CFStringTokenizerRef _tokenizer;
	NSArray* _instances;
	NSDictionary* _labelMap;
	NSDictionary* _inverseLabelMap;
	NSDictionary* _vocabularyMap;
	NSDictionary* _documentFrequencyMap;
	unsigned long long _numberOfLabels;
	unsigned long long _numberOfVocabularyEntries;
	unsigned long long _numberOfTokens;
	NSString* _recognizedLanguage;
	BOOL _generatedMaps;
	BOOL _performedLanguageRecognition;

}

@property (copy,readonly) NLModelConfiguration * configuration; 
@property (readonly) unsigned long long numberOfInstances; 
@property (readonly) NSString * recognizedLanguage; 
-(void)dealloc;
-(NLModelConfiguration *)configuration;
-(CFStringTokenizerRef)tokenizer;
-(unsigned long long)numberOfTokens;
-(unsigned long long)numberOfLabels;
-(id)labelMap;
-(id)vocabularyMap;
-(id)documentFrequencyMap;
-(unsigned long long)numberOfInstances;
-(id)instanceAtIndex:(unsigned long long)arg1 ;
-(id)inverseLabelMap;
-(id)initWithConfiguration:(id)arg1 dataURL:(id)arg2 ;
-(void)generateMapsWithModelTrainer:(id)arg1 ;
-(void)_generateMapsWithModelTrainer:(id)arg1 ;
-(void)_generateMaps;
-(void)_performLanguageRecognition;
-(unsigned long long)numberOfVocabularyEntries;
-(NSString *)recognizedLanguage;
@end

