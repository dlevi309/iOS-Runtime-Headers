/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/


#import <CoreHandwriting/CoreHandwriting-Structs.h>
@class NSLocale;

@interface CHRecognizerConfiguration : NSObject {

	unsigned long long _language;
	unsigned long long _script;
	BOOL _shouldEnableCachingIfAvailable;
	int _mode;
	int _contentType;
	NSLocale* _locale;

}

@property (nonatomic,readonly) int mode;                                          //@synthesize mode=_mode - In the implementation block
@property (nonatomic,copy,readonly) NSLocale * locale;                            //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) int contentType;                                   //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,readonly) int contentTypeForNoSpaceRecognition; 
@property (nonatomic,readonly) BOOL shouldEnableCachingIfAvailable;               //@synthesize shouldEnableCachingIfAvailable=_shouldEnableCachingIfAvailable - In the implementation block
+(id)defaultLocaleForRecognitionType:(int)arg1 withMode:(int)arg2 ;
+(int)validateRecognitionMode:(int)arg1 ;
+(BOOL)isLocaleSupported:(id)arg1 withMode:(int)arg2 ;
+(id)stringForRecognitionMode:(int)arg1 ;
+(CGSize)defaultMinimumDrawingSize;
+(id)stringForRecognitionContentType:(int)arg1 ;
+(id)configurationKeyForLocale:(id)arg1 mode:(int)arg2 ;
+(void)_decodeLocale:(id)arg1 supportedLanguage:(unsigned long long*)arg2 supportedScript:(unsigned long long*)arg3 ;
+(id)_stringForRecognitionLanguage:(unsigned long long)arg1 ;
+(id)_stringForRecognitionScript:(unsigned long long)arg1 ;
+(unsigned long long)supportedScriptForLocale:(id)arg1 ;
+(unsigned long long)supportedLanguageForLocale:(id)arg1 ;
+(BOOL)isLanguageSupported:(unsigned long long)arg1 withMode:(int)arg2 ;
-(void)dealloc;
-(id)description;
-(NSLocale *)locale;
-(int)contentType;
-(int)mode;
-(void*)newLanguageModel;
-(int)mecabraInputMethodType;
-(id)initWithMode:(int)arg1 locale:(id)arg2 contentType:(int)arg3 shouldEnableCachingIfAvailable:(BOOL)arg4 ;
-(unsigned)requiredInappropriateFilteringFlags;
-(BOOL)shouldGenerateDigitLetterAlternatives;
-(BOOL)shouldEnforceGrammarOnTransliterations;
-(CHNeuralNetwork*)newRecognitionEngine;
-(CHNeuralNetwork*)newFreeFormEngine;
-(id)newSpellChecker;
-(const LXLexiconRef)newStaticLexicon:(id*)arg1 ;
-(void*)newCJKStaticLexicon;
-(CFBurstTrieRef)newOVSTrie;
-(id)newPatternFST;
-(Network*)newGrammarFST;
-(Network*)newRadicalClusterFST;
-(VariantMap*)newTransliterationVariantMap;
-(void*)newCharacterLanguageModelAndMap:(map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int> > >*)arg1 ;
-(id)newStrokeTransitionModel;
-(id)newCutpointModel;
-(BOOL)shouldForwardMecabraOTAAssetsUpdate;
-(BOOL)shouldRefineChineseCharacterCandidates;
-(BOOL)shouldApplyLMRescoring;
-(BOOL)shouldTransliterateAndSynthetizeCandidates;
-(BOOL)shouldPromoteChineseCommonCharacters;
-(BOOL)shouldTransformCharacterProbabilitiesIntoLogScores;
-(BOOL)shouldPerformGlobalBestSearch;
-(BOOL)shouldPerformGlobalBestSearchWithSmallLattice;
-(BOOL)shouldPerformIntegratedLexiconExpansion;
-(BOOL)shouldPenalizeLetterInsertion;
-(BOOL)shouldPerformMultiWordsExpansion;
-(BOOL)shouldApplyLexicalPenalty;
-(BOOL)shouldExpandNonSpaceSeparators;
-(BOOL)shouldComputeStrokePenalties;
-(BOOL)shouldExpandCodePoints;
-(BOOL)shouldPenalizePrefixes;
-(BOOL)shouldApplyRomanPostProcessing;
-(BOOL)shouldApplyChinesePostProcessing;
-(BOOL)shouldAutoCapitalize;
-(BOOL)shouldUseTokenPrecedingSpaces;
-(BOOL)shouldTransliterateSentences;
-(BOOL)shouldApplyDiacriticSensitivity;
-(BOOL)shouldUseCaching;
-(unsigned long long)supportedSegmentationStrategy;
-(BOOL)shouldPerformRegularSpaceRecognition;
-(BOOL)shouldPerformNoSpaceRecognition;
-(BOOL)shouldFallbackOnSingleCharacterExpansion;
-(BOOL)shouldComposeLexiconWithNetwork;
-(BOOL)shouldExpandLexiconInNetwork;
-(int)contentTypeForNoSpaceRecognition;
-(BOOL)shouldKeepOutOfPatternCandidates;
-(BOOL)shouldDetectChinesePunctuation;
-(BOOL)shouldDetectRomanPunctuation;
-(long long)engineCandidateCount;
-(BOOL)shouldApplyCandidatesThresholding;
-(BOOL)shouldRelaxFinalCandidatesThresholding;
-(BOOL)shouldApplyLMSorting;
-(BOOL)shouldTreatAllSmallStrokesAsPunctuation;
-(BOOL)shouldApplyCharacterLMRescoring;
-(BOOL)shouldReplaceInvalidTokenIDs;
-(long long)maxRecognitionResultDefaultCount;
-(BOOL)shouldEnableCachingIfAvailable;
-(BOOL)isEqualToRecognizerConfiguration:(id)arg1 ;
-(id)linguisticResourcesFallbackLocale;
-(id)configurationKey;
-(BOOL)shouldPreserveLegacyTranscriptionPaths;
-(LXLexiconRef)newCustomLexicon:(id*)arg1 ;
@end

