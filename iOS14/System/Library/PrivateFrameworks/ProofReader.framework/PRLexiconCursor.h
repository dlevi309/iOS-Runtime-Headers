/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
*/


#import <ProofReader/ProofReader-Structs.h>
@class PRLexicon;

@interface PRLexiconCursor : NSObject {

	PRLexicon* _lexicon;
	LXCursorRef _cursor;

}
-(void)advanceWithString:(id)arg1 ;
-(id)initWithLexicon:(id)arg1 ;
-(void)_enumerateCompletions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)isValid;
-(BOOL)hasChildren;
-(void)enumerateEntriesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateCompletionEntries:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)advanceWithCombinedCharacterSequence:(id)arg1 ;
-(double)prefixProbability;
-(double)terminationProbability;
-(BOOL)hasEntries;
-(void)enumerateCompletions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)_advance:(id)arg1 ;
@end

