/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/


@class NSDictionary, NSLocale;

@interface _LTEtiquetteSanitizer : NSObject {

	NSDictionary* _replacementTree;
	NSLocale* _locale;

}
+(void)initialize;
-(id)initWithModelURL:(id)arg1 language:(id)arg2 ;
-(id)sanitizedStringForString:(id)arg1 ;
-(id)treeForReplacementTokens:(id)arg1 ;
-(id)initWithReplacementTokenDictionary:(id)arg1 language:(id)arg2 ;
-(id)replacementStringForString:(id)arg1 forToken:(id)arg2 ;
-(id)matchesForString:(id)arg1 ;
-(id)stringByReplacingMatches:(id)arg1 inString:(id)arg2 ;
@end

