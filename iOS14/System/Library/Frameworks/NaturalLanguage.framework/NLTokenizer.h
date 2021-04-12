/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
*/


#import <NaturalLanguage/NaturalLanguage-Structs.h>
@class NSString;

@interface NLTokenizer : NSObject {

	long long _unit;
	NSString* _string;
	NSString* _language;
	NLTokenizerRef _tokenizer;

}

@property (nonatomic,readonly) long long unit; 
@property (nonatomic,retain) NSString * string; 
-(void)setLanguage:(id)arg1 ;
-(NSRange)tokenRangeAtIndex:(unsigned long long)arg1 ;
-(long long)unit;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(id)initWithUnit:(long long)arg1 ;
-(void)enumerateTokensInRange:(NSRange)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)language;
-(void)dealloc;
-(id)_wordCharacterSet;
-(const SCD_Struct_NL5*)_tokenAtIndex:(unsigned long long)arg1 ;
-(NSRange)tokenRangeForRange:(NSRange)arg1 ;
-(id)tokensForRange:(NSRange)arg1 ;
@end

