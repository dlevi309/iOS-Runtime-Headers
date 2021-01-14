/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
*/


#import <EmojiFoundation/EmojiFoundation-Structs.h>
@class NSLock, NSLocale;

@interface EMFStringStemmer : NSObject {

	sb_stemmerRef _stemmer;
	NSLock* _stemmerLock;
	NSLocale* _locale;
	unsigned long long _encoding;

}

@property (nonatomic,retain,readonly) NSLocale * locale;               //@synthesize locale=_locale - In the implementation block
@property (assign,nonatomic) unsigned long long encoding;              //@synthesize encoding=_encoding - In the implementation block
+(id)stemmerLanguageNameForLocale:(id)arg1 ;
+(sb_stemmerRef)_createSnowballStemmerForLocale:(id)arg1 ;
+(unsigned char)supportsLocale:(id)arg1 ;
+(id)supportedLanguageNames;
-(id)initWithLocale:(id)arg1 ;
-(NSLocale *)locale;
-(void)setEncoding:(unsigned long long)arg1 ;
-(unsigned long long)encoding;
-(void)dealloc;
-(id)stemToken:(id)arg1 ;
-(id)stemTokens:(id)arg1 ;
@end

