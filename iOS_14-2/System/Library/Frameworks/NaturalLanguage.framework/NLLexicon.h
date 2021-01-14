/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
*/


#import <NaturalLanguage/NaturalLanguage-Structs.h>
@class NSString;

@interface NLLexicon : NSObject {

	NSString* _localization;
	const void* _lexicon;

}

@property (copy,readonly) NSString * localization; 
-(BOOL)getProbabilityForTokenID:(unsigned)arg1 probability:(double*)arg2 ;
-(LXLexiconRef)lexicon;
-(id)description;
-(BOOL)getProbabilityForString:(id)arg1 probability:(double*)arg2 ;
-(NSString *)localization;
-(void)dealloc;
-(void)_enumerateEntriesForString:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)initWithLocalization:(id)arg1 ;
-(id)entryForTokenID:(unsigned)arg1 ;
-(id)entryForString:(id)arg1 ;
-(void)enumerateCompletionsForPrefix:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

