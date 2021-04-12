/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
*/


#import <ResponseKit/ResponseKit-Structs.h>
@class NSString;

@interface RKNLEventTokenizer : NSObject {

	NSString* _languageID;
	CFStringTokenizerRef _tokenizer;

}

@property (assign) CFStringTokenizerRef tokenizer;              //@synthesize tokenizer=_tokenizer - In the implementation block
@property (readonly) NSString * languageID;                     //@synthesize languageID=_languageID - In the implementation block
+(void)initialize;
+(BOOL)isSpecialToken:(id)arg1 ;
-(void)dealloc;
-(CFStringTokenizerRef)tokenizer;
-(void)setTokenizer:(CFStringTokenizerRef)arg1 ;
-(NSString *)languageID;
-(BOOL)hasEmoticon:(id)arg1 ;
-(id)processForEmoticons:(id)arg1 ;
-(id)processForHyphenation:(id)arg1 ;
-(id)tokenizeWithDataDetectors:(id)arg1 ;
-(id)processForEmoticonsAndEmojis:(id)arg1 ;
-(id)transform:(id)arg1 ;
-(id)getTokens:(id)arg1 ;
-(id)initWithLanguageID:(id)arg1 ;
-(id)buildTokenSquence:(id)arg1 withOffset:(unsigned long long)arg2 ;
@end

