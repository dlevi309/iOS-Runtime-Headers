/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
*/


#import <NaturalLanguage/NaturalLanguage-Structs.h>
@class NSString, NSArray;

@interface NLDataInstance : NSObject

@property (copy,readonly) NSString * string; 
@property (copy,readonly) NSString * label; 
@property (copy,readonly) NSArray * tokens; 
@property (copy,readonly) NSArray * labels; 
-(NSArray *)tokens;
-(NSArray *)labels;
-(NSString *)string;
-(NSString *)label;
-(CFDictionaryRef)instanceDictionary;
-(id)initWithString:(id)arg1 label:(id)arg2 ;
-(id)initWithLine:(id)arg1 tokenizer:(CFStringTokenizerRef)arg2 ;
-(id)formattedLineWithLabelMap:(id)arg1 vocabularyMap:(id)arg2 ;
-(id)locatorsWithIndex:(unsigned long long)arg1 parameters:(NLConstraintParameters)arg2 tagger:(id)arg3 tokenizer:(CFStringTokenizerRef)arg4 ;
-(id)subInstanceWithLocator:(id)arg1 tokenizer:(CFStringTokenizerRef)arg2 ;
@end

