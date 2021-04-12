/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NLP.framework/NLP
*/


@interface NLSearchParserManager : NSObject {

	void* _parser;

}
+(id)defaultManager;
+(id)availableLanguages;
-(void)dealloc;
-(id)initWithOptions:(id)arg1 ;
-(id)tokenizeAndEnumerateAttributedParsesForQuery:(id)arg1 options:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)initWithLocale:(id)arg1 context:(id)arg2 options:(id)arg3 ;
-(void)enumerateAttributedParsesForQuery:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)enumerateSearchSuggestions:(id)arg1 options:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)enumerateDateRangeAttributedParseForOptions:(id)arg1 withBlock:(/*^block*/id)arg2 ;
@end

