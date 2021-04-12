/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
*/


#import <NaturalLanguage/NaturalLanguage-Structs.h>
@class NSString;

@interface NLLexicon : NSObject {

	NSString* _localization;
	const void* _lexicon;

}

@property (copy,readonly) NSString * localization; 
-(void)dealloc;
-(id)description;
-(NSString *)localization;
-(BOOL)getProbabilityForTokenID:(unsigned)arg1 probability:(double*)arg2 ;
-(BOOL)getProbabilityForString:(id)arg1 probability:(double*)arg2 ;
-(LXLexiconRef)lexicon;
-(void)_enumerateEntriesForString:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)initWithLocalization:(id)arg1 ;
-(id)entryForTokenID:(unsigned)arg1 ;
-(id)entryForString:(id)arg1 ;
-(void)enumerateCompletionsForPrefix:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

