/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/


@class NSSet, NSString, NSRegularExpression;

@interface ICSearchResultRegexMatchFinder : NSObject {

	NSSet* _prefixMatchingTokens;
	NSSet* _substringMatchingTokens;
	NSString* _searchString;
	NSRegularExpression* _normalRegex;
	NSRegularExpression* _fallbackRegex;

}

@property (nonatomic,retain) NSSet * prefixMatchingTokens;                     //@synthesize prefixMatchingTokens=_prefixMatchingTokens - In the implementation block
@property (nonatomic,retain) NSSet * substringMatchingTokens;                  //@synthesize substringMatchingTokens=_substringMatchingTokens - In the implementation block
@property (nonatomic,retain) NSString * searchString;                          //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,retain) NSRegularExpression * normalRegex;                //@synthesize normalRegex=_normalRegex - In the implementation block
@property (nonatomic,retain) NSRegularExpression * fallbackRegex;              //@synthesize fallbackRegex=_fallbackRegex - In the implementation block
+(id)matchesForToken:(id)arg1 inDocument:(id)arg2 checkPrefixBeforeFallingBack:(BOOL)arg3 ;
+(BOOL)textCheckingResultsAreValid:(id)arg1 ;
-(void)setSearchString:(NSString *)arg1 ;
-(NSString *)searchString;
-(NSRegularExpression *)normalRegex;
-(NSRegularExpression *)fallbackRegex;
-(NSSet *)prefixMatchingTokens;
-(NSSet *)substringMatchingTokens;
-(id)initWithPrefixMatchingTokens:(id)arg1 substringMatchingTokens:(id)arg2 searchString:(id)arg3 ;
-(id)firstMatchInDocumentWithGlobalFallback:(id)arg1 ;
-(id)matchesInDocumentWithPerTokenFallback:(id)arg1 ;
-(void)setPrefixMatchingTokens:(NSSet *)arg1 ;
-(void)setSubstringMatchingTokens:(NSSet *)arg1 ;
-(void)setNormalRegex:(NSRegularExpression *)arg1 ;
-(void)setFallbackRegex:(NSRegularExpression *)arg1 ;
@end

