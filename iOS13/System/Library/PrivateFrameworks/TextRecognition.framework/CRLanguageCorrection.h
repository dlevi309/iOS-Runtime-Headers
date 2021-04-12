/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/


#import <TextRecognition/TextRecognition-Structs.h>
@class NSString, CRCHPatternNetwork, NSLocale, NSCharacterSet;

@interface CRLanguageCorrection : NSObject {

	void* _characterLanguageModel;
	LXLexiconRef _staticLexicon;
	LXLexiconRef _dynamicLexicon;
	NSString* _invalidSingleCharCNNCode;
	CRCHPatternNetwork* _patternFST;
	NSLocale* _locale;

}

@property (assign,nonatomic) void* characterLanguageModel;                     //@synthesize characterLanguageModel=_characterLanguageModel - In the implementation block
@property (assign,nonatomic) LXLexiconRef staticLexicon;                       //@synthesize staticLexicon=_staticLexicon - In the implementation block
@property (assign,nonatomic) LXLexiconRef dynamicLexicon;                      //@synthesize dynamicLexicon=_dynamicLexicon - In the implementation block
@property (nonatomic,retain) NSString * invalidSingleCharCNNCode;              //@synthesize invalidSingleCharCNNCode=_invalidSingleCharCNNCode - In the implementation block
@property (nonatomic,retain) CRCHPatternNetwork * patternFST;                  //@synthesize patternFST=_patternFST - In the implementation block
@property (readonly) NSCharacterSet * confusableCharacters; 
@property (readonly) NSLocale * locale;                                        //@synthesize locale=_locale - In the implementation block
-(void)dealloc;
-(id)initWithOptions:(id)arg1 ;
-(NSLocale *)locale;
-(CRCHPatternNetwork *)patternFST;
-(void)setPatternFST:(CRCHPatternNetwork *)arg1 ;
-(void*)characterLanguageModel;
-(void)setCharacterLanguageModel:(void*)arg1 ;
-(LXLexiconRef)staticLexicon;
-(void)setStaticLexicon:(LXLexiconRef)arg1 ;
-(BOOL)isLanguageCorrectionSupportedForLanguage:(id)arg1 ;
-(void)loadCharacterNgramModel:(id)arg1 ;
-(LXLexiconRef)newDynamicLexiconForLocale:(id)arg1 error:(id*)arg2 ;
-(void)adjustCaseConfusions:(id)arg1 ;
-(NSString *)invalidSingleCharCNNCode;
-(id)findBestPathsForTextResults:(id)arg1 numPathsToExtract:(unsigned long long)arg2 ngramsize:(unsigned long long)arg3 ;
-(NSCharacterSet *)confusableCharacters;
-(BOOL)preferAllUppercase:(id)arg1 ;
-(BOOL)preferAllLowercase:(id)arg1 ;
-(id)correctTextFeature:(id)arg1 inImage:(id)arg2 withTextPieces:(id)arg3 withMaxWidthPerRegion:(double)arg4 withMedianCharSpacing:(double)arg5 withBreakpoints:(const vector<std::__1::vector<BreakPoint, std::__1::allocator<BreakPoint> >, std::__1::allocator<std::__1::vector<BreakPoint, std::__1::allocator<BreakPoint> > > >*)arg6 segmenter:(Segmenter*)arg7 options:(id)arg8 numCharCandidates:(int)arg9 downscaleSpaceRatio:(BOOL)arg10 latticePresetIdx:(int)arg11 latticeResults:(id)arg12 ;
-(LXLexiconRef)dynamicLexicon;
-(void)setDynamicLexicon:(LXLexiconRef)arg1 ;
-(void)setInvalidSingleCharCNNCode:(NSString *)arg1 ;
@end

