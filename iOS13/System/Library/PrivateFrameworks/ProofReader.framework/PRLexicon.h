/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
*/


#import <ProofReader/ProofReader-Structs.h>
@class NSString;

@interface PRLexicon : NSObject {

	NSString* _localization;
	NSString* _unigramsPath;
	const void* _lexicon;

}
+(id)lexiconWithLocalization:(id)arg1 unigramsPath:(id)arg2 ;
+(id)lexiconWithLexicon:(const void*)arg1 ;
-(void)dealloc;
-(id)description;
-(unsigned)tokenIDForString:(id)arg1 ;
-(id)stringForTokenID:(unsigned)arg1 ;
-(void)enumerateCompletionsForPrefix:(id)arg1 maxCompletions:(unsigned long long)arg2 withBlock:(/*^block*/id)arg3 ;
-(BOOL)getProbabilityForTokenID:(unsigned)arg1 probability:(double*)arg2 ;
-(BOOL)getProbabilityForString:(id)arg1 probability:(double*)arg2 ;
-(void)enumerateEntriesForString:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateCorrectionEntriesForWord:(id)arg1 maxCorrections:(unsigned long long)arg2 withBlock:(/*^block*/id)arg3 ;
-(LXLexiconRef)lexicon;
-(id)initWithLexicon:(const void*)arg1 ;
-(id)initWithLocalization:(id)arg1 unigramsPath:(id)arg2 ;
-(id)createCursor;
-(void)enumerateCompletionEntriesForPrefix:(id)arg1 maxCompletions:(unsigned long long)arg2 withBlock:(/*^block*/id)arg3 ;
@end

