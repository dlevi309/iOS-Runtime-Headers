/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
*/


#import <ProofReader/ProofReader-Structs.h>
@class PRLexicon;

@interface PRLexiconCursor : NSObject {

	PRLexicon* _lexicon;
	LXCursorRef _cursor;

}
-(void)dealloc;
-(BOOL)isValid;
-(BOOL)hasChildren;
-(void)_advance:(id)arg1 ;
-(void)enumerateEntriesUsingBlock:(/*^block*/id)arg1 ;
-(double)prefixProbability;
-(void)_enumerateCompletions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)initWithLexicon:(id)arg1 ;
-(void)advanceWithCombinedCharacterSequence:(id)arg1 ;
-(void)advanceWithString:(id)arg1 ;
-(BOOL)hasEntries;
-(double)terminationProbability;
-(void)enumerateCompletions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateCompletionEntries:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

