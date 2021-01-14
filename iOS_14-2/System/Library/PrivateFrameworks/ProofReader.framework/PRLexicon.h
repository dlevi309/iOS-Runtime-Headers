/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)getProbabilityForTokenID:(unsigned)arg1 probability:(double*)arg2 ;
-(id)initWithLexicon:(const void*)arg1 ;
-(id)createCursor;
-(LXLexiconRef)lexicon;
-(id)description;
-(BOOL)getProbabilityForString:(id)arg1 probability:(double*)arg2 ;
-(unsigned)tokenIDForString:(id)arg1 ;
-(void)enumerateCorrectionEntriesForWord:(id)arg1 maxCorrections:(unsigned long long)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)enumerateEntriesForString:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateCompletionEntriesForPrefix:(id)arg1 maxCompletions:(unsigned long long)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)enumerateCompletionsForPrefix:(id)arg1 maxCompletions:(unsigned long long)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)initWithLocalization:(id)arg1 unigramsPath:(id)arg2 ;
-(void)dealloc;
-(id)stringForTokenID:(unsigned)arg1 ;
@end

