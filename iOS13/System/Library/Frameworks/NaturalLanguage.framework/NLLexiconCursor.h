/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)hasChildren;
-(void)enumerateChildrenUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateEntriesUsingBlock:(/*^block*/id)arg1 ;
-(double)prefixProbability;
-(BOOL)hasEntries;
-(double)terminationProbability;
-(id)initWithLexicon:(id)arg1 cursor:(LXCursorRef)arg2 ;
-(void)_enumerateEntriesUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithLexicon:(id)arg1 string:(id)arg2 ;
-(id)cursorByAdvancingWithString:(id)arg1 ;
-(NSString *)traversedString;
-(void)enumerateCompletionsUsingBlock:(/*^block*/id)arg1 ;
@end

