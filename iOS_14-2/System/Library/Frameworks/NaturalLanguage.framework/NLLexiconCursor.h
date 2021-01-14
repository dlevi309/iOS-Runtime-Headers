/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
*/


#import <NaturalLanguage/NaturalLanguage-Structs.h>
@class NLLexicon, NSString;

@interface NLLexiconCursor : NSObject {

	NLLexicon* _lexicon;
	LXCursorRef _cursor;

}

@property (readonly) BOOL hasEntries; 
@property (readonly) BOOL hasChildren; 
@property (readonly) double prefixProbability; 
@property (readonly) double terminationProbability; 
@property (copy,readonly) NSString * traversedString; 
-(BOOL)hasChildren;
-(void)enumerateEntriesUsingBlock:(/*^block*/id)arg1 ;
-(double)prefixProbability;
-(double)terminationProbability;
-(BOOL)hasEntries;
-(void)dealloc;
-(void)enumerateChildrenUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithLexicon:(id)arg1 cursor:(LXCursorRef)arg2 ;
-(void)_enumerateEntriesUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithLexicon:(id)arg1 string:(id)arg2 ;
-(id)cursorByAdvancingWithString:(id)arg1 ;
-(NSString *)traversedString;
-(void)enumerateCompletionsUsingBlock:(/*^block*/id)arg1 ;
@end

