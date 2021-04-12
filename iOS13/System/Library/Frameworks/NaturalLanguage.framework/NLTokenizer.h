/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)string;
-(void)dealloc;
-(void)setString:(NSString *)arg1 ;
-(long long)unit;
-(id)language;
-(void)setLanguage:(id)arg1 ;
-(NSRange)tokenRangeAtIndex:(unsigned long long)arg1 ;
-(id)initWithUnit:(long long)arg1 ;
-(void)enumerateTokensInRange:(NSRange)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)tokensForRange:(NSRange)arg1 ;
@end

