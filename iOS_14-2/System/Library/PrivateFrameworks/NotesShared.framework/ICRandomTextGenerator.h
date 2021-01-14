/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@class ICRandomNumberGenerator;

@interface ICRandomTextGenerator : NSObject {

	unsigned long long _language;
	ICRandomNumberGenerator* _randomNumberGenerator;

}

@property (nonatomic,retain) ICRandomNumberGenerator * randomNumberGenerator;              //@synthesize randomNumberGenerator=_randomNumberGenerator - In the implementation block
@property (assign,nonatomic) unsigned long long language;                                  //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) BOOL isRightToLeftLanguage; 
+(id)loadWordsForLanguage:(unsigned long long)arg1 ;
+(id)wordsForLanguage:(unsigned long long)arg1 ;
+(BOOL)hasSpacesBetweenWordsForLanguage:(unsigned long long)arg1 ;
+(id)sentencePunctuationForLanguage:(unsigned long long)arg1 endOfParagraph:(BOOL)arg2 ;
-(id)word;
-(void)setLanguage:(unsigned long long)arg1 ;
-(void)setRandomNumberGenerator:(ICRandomNumberGenerator *)arg1 ;
-(id)generateMinWords:(unsigned long long)arg1 maxWords:(unsigned long long)arg2 ;
-(id)generateMinSentences:(unsigned long long)arg1 maxSentences:(unsigned long long)arg2 minWords:(unsigned long long)arg3 maxWords:(unsigned long long)arg4 ;
-(id)generateWords:(unsigned long long)arg1 minLength:(unsigned long long)arg2 ;
-(id)initWithRandomNumberGenerator:(id)arg1 ;
-(BOOL)isRightToLeftLanguage;
-(id)lineOfText;
-(id)generateWordsWithMinLength:(unsigned long long)arg1 ;
-(ICRandomNumberGenerator *)randomNumberGenerator;
-(id)paragraph;
-(id)sentence;
-(unsigned long long)language;
@end

