/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
*/

#import <NaturalLanguage/NaturalLanguage-Structs.h>
#import <NaturalLanguage/NLDataInstance.h>

@class NSString, NSArray;

@interface NLClassifierModelDataInstance : NLDataInstance {

	NSString* _string;
	NSString* _label;
	NSArray* _tokens;

}
+(id)readInstancesFromString:(id)arg1 tokenizer:(CFStringTokenizerRef)arg2 ;
-(id)string;
-(id)label;
-(id)labels;
-(id)tokens;
-(id)initWithString:(id)arg1 label:(id)arg2 tokenizer:(CFStringTokenizerRef)arg3 ;
-(CFDictionaryRef)instanceDictionary;
-(id)initWithString:(id)arg1 label:(id)arg2 ;
-(id)initWithLine:(id)arg1 tokenizer:(CFStringTokenizerRef)arg2 ;
-(id)formattedLineWithLabelMap:(id)arg1 vocabularyMap:(id)arg2 ;
-(id)locatorsWithIndex:(unsigned long long)arg1 parameters:(NLConstraintParameters)arg2 tagger:(id)arg3 tokenizer:(CFStringTokenizerRef)arg4 ;
-(id)subInstanceWithLocator:(id)arg1 tokenizer:(CFStringTokenizerRef)arg2 ;
@end

