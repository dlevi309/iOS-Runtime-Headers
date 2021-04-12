/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@class NSString, NSRegularExpression;

@interface TIAutoshiftRegularExpressionLoader : NSObject {

	NSString* _sentenceDelimitingCharacters;
	NSString* _sentenceTrailingCharacters;
	NSString* _nextSentencePrefixCharacters;
	NSRegularExpression* _regex;

}

@property (nonatomic,readonly) NSString * sentenceDelimitingCharacters;              //@synthesize sentenceDelimitingCharacters=_sentenceDelimitingCharacters - In the implementation block
@property (nonatomic,readonly) NSString * sentenceTrailingCharacters;                //@synthesize sentenceTrailingCharacters=_sentenceTrailingCharacters - In the implementation block
@property (nonatomic,readonly) NSString * nextSentencePrefixCharacters;              //@synthesize nextSentencePrefixCharacters=_nextSentencePrefixCharacters - In the implementation block
@property (nonatomic,retain) NSRegularExpression * regex;                            //@synthesize regex=_regex - In the implementation block
+(id)loaderWithSentenceDelimiters:(id)arg1 trailingChars:(id)arg2 prefixChars:(id)arg3 ;
-(NSRegularExpression *)regex;
-(void)startBackgroundLoad;
-(NSString *)sentenceTrailingCharacters;
-(void)setRegex:(NSRegularExpression *)arg1 ;
-(NSString *)sentenceDelimitingCharacters;
-(id)initWithSentenceDelimiters:(id)arg1 trailingChars:(id)arg2 prefixChars:(id)arg3 ;
-(NSString *)nextSentencePrefixCharacters;
@end

