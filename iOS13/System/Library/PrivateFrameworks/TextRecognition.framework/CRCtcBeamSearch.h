/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/


#import <TextRecognition/TextRecognition-Structs.h>
@class NSLocale, CRLanguageResources;

@interface CRCtcBeamSearch : NSObject {

	LXLexiconRef _dynamicLexicon;
	NSLocale* _locale;
	CRLanguageResources* _languageResources;

}

@property (assign,nonatomic) LXLexiconRef dynamicLexicon;                            //@synthesize dynamicLexicon=_dynamicLexicon - In the implementation block
@property (nonatomic,readonly) NSLocale * locale;                                    //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) CRLanguageResources * languageResources;              //@synthesize languageResources=_languageResources - In the implementation block
-(void)dealloc;
-(NSLocale *)locale;
-(LXLexiconRef)newDynamicLexiconForLocale:(id)arg1 error:(id*)arg2 ;
-(LXLexiconRef)dynamicLexicon;
-(void)setDynamicLexicon:(LXLexiconRef)arg1 ;
-(id)initWithOptions:(id)arg1 languageResources:(id)arg2 ;
-(void)loadDynamicLexicon:(id)arg1 forLocale:(id)arg2 ;
-(CRLanguageResources *)languageResources;
-(id)kBestPathsForInput:(id)arg1 k:(unsigned long long)arg2 beamWidth:(unsigned long long)arg3 outputProbs:(id*)arg4 outputWhitespaceRanges:(id*)arg5 ;
@end

