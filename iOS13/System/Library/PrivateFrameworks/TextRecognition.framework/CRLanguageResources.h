/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/


#import <TextRecognition/TextRecognition-Structs.h>
@class NSLocale;

@interface CRLanguageResources : NSObject {

	NSLocale* _locale;
	void* _characterLanguageModel;
	const LXLexiconRef _staticLexicon;
	void* _wordLanguageModel;

}

@property (nonatomic,readonly) NSLocale * locale;                           //@synthesize locale=_locale - In the implementation block
@property (assign,nonatomic) void* characterLanguageModel;                  //@synthesize characterLanguageModel=_characterLanguageModel - In the implementation block
@property (assign,nonatomic) const LXLexiconRef staticLexicon;              //@synthesize staticLexicon=_staticLexicon - In the implementation block
@property (assign,nonatomic) void* wordLanguageModel;                       //@synthesize wordLanguageModel=_wordLanguageModel - In the implementation block
+(id)languageResourcesForLanguageIdentifier:(id)arg1 index:(long long)arg2 ;
+(BOOL)isLanguageSupported:(id)arg1 ;
+(void*)createCharacterModel:(id)arg1 ;
+(LXLexiconRef)createStaticLexicon:(id)arg1 ;
+(void*)createWordLanguageModel:(id)arg1 ;
-(void)dealloc;
-(NSLocale *)locale;
-(id)initWithLanguageIdentifier:(id)arg1 ;
-(void*)characterLanguageModel;
-(void)setCharacterLanguageModel:(void*)arg1 ;
-(const LXLexiconRef)staticLexicon;
-(void)setStaticLexicon:(const LXLexiconRef)arg1 ;
-(void*)wordLanguageModel;
-(void)setWordLanguageModel:(void*)arg1 ;
@end

