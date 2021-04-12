/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NLP.framework/NLP
*/


@interface NLSearchParserManager : NSObject {

	void* _parser;

}
+(id)availableLanguages;
+(id)defaultManager;
-(id)initWithOptions:(id)arg1 ;
-(id)initWithLocale:(id)arg1 context:(id)arg2 options:(id)arg3 ;
-(void)enumerateAttributedParsesForQuery:(id)arg1 options:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)enumerateSearchSuggestions:(id)arg1 options:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)enumerateDateRangeAttributedParseForOptions:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)tokenizeAndEnumerateAttributedParsesForQuery:(id)arg1 options:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)dealloc;
@end

