/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CFStringTokenizerRef)tokenizer;
-(NSString *)languageID;
-(void)setTokenizer:(CFStringTokenizerRef)arg1 ;
-(void)dealloc;
-(id)transform:(id)arg1 ;
-(BOOL)hasEmoticon:(id)arg1 ;
-(id)processForEmoticons:(id)arg1 ;
-(id)processForHyphenation:(id)arg1 ;
-(id)tokenizeWithDataDetectors:(id)arg1 ;
-(id)processForEmoticonsAndEmojis:(id)arg1 ;
-(id)getTokens:(id)arg1 ;
-(id)initWithLanguageID:(id)arg1 ;
-(id)buildTokenSquence:(id)arg1 withOffset:(unsigned long long)arg2 ;
@end

