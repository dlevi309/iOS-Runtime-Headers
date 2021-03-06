/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/


#import <CoreHandwriting/CoreHandwriting-Structs.h>
@class NSLocale;

@interface CHRecognizerConfiguration : NSObject {

	unsigned long long _language;
	unsigned long long _script;
	BOOL _enableCachingIfAvailable;
	BOOL _enableGen2ModelIfAvailable;
	BOOL _enableGen2CharacterLMIfAvailable;
	int _mode;
	int _contentType;
	int _autoCapitalizationMode;
	NSLocale* _locale;

}

@property (nonatomic,readonly) int mode;                                           //@synthesize mode=_mode - In the implementation block
@property (nonatomic,copy,readonly) NSLocale * locale;                             //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) int contentType;                                    //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,readonly) int contentTypeForNoSpaceRecognition; 
@property (nonatomic,readonly) int autoCapitalizationMode;                         //@synthesize autoCapitalizationMode=_autoCapitalizationMode - In the implementation block
@property (nonatomic,readonly) BOOL enableCachingIfAvailable;                      //@synthesize enableCachingIfAvailable=_enableCachingIfAvailable - In the implementation block
@property (nonatomic,readonly) BOOL enableGen2ModelIfAvailable;                    //@synthesize enableGen2ModelIfAvailable=_enableGen2ModelIfAvailable - In the implementation block
@property (nonatomic,readonly) BOOL enableGen2CharacterLMIfAvailable;              //@synthesize enableGen2CharacterLMIfAvailable=_enableGen2CharacterLMIfAvailable - In the implementation block
+(BOOL)isLocaleSupported:(id)arg1 withMode:(int)arg2 ;
+(id)defaultLocaleForRecognitionType:(int)arg1 withMode:(int)arg2 ;
+(int)validateRecognitionMode:(int)arg1 ;
+(id)stringForRecognitionMode:(int)arg1 ;
+(CGSize)defaultMinimumDrawingSize;
+(BOOL)shouldApplyLatinSpacingForLocale:(id)arg1 ;
+(id)stringForRecognitionContentType:(int)arg1 ;
+(id)stringForAutoCapitalizationMode:(int)arg1 ;
+(void)_decodeLocale:(id)arg1 supportedLanguage:(unsigned long long*)arg2 supportedScript:(unsigned long long*)arg3 ;
+(id)_stringForRecognitionLanguage:(unsigned long long)arg1 ;
+(id)_stringForRecognitionScript:(unsigned long long)arg1 ;
+(unsigned long long)supportedScriptForLocale:(id)arg1 ;
+(unsigned long long)supportedLanguageForLocale:(id)arg1 ;
+(BOOL)isLanguageSupported:(unsigned long long)arg1 withMode:(int)arg2 ;
+(id)forcedGen2ModelLocaleForLocale:(id)arg1 ;
+(id)spellCheckingLocaleForRecognitionLocale:(id)arg1 string:(id)arg2 ;
-(int)mode;
-(NSLocale *)locale;
-(int)contentType;
-(id)description;
-(void)dealloc;
-(id)configurationKey;
-(int)autoCapitalizationMode;
-(void*)newLanguageModel;
-(int)mecabraInputMethodType;
-(BOOL)enableCachingIfAvailable;
-(BOOL)enableGen2ModelIfAvailable;
-(BOOL)enableGen2CharacterLMIfAvailable;
-(id)initWithMode:(int)arg1 locale:(id)arg2 contentType:(int)arg3 autoCapitalizationMode:(int)arg4 enableCachingIfAvailable:(BOOL)arg5 enableGen2ModelIfAvailable:(BOOL)arg6 enableGen2CharacterLMIfAvailable:(BOOL)arg7 ;
-(unsigned)requiredInappropriateFilteringFlags;
-(BOOL)shouldGenerateDigitLetterAlternatives;
-(BOOL)shouldEnforceGrammarOnTransliterations;
-(CHNeuralNetwork*)newRecognitionEngine;
-(CHNeuralNetwork*)newFreeFormEngine;
-(id)newSpellChecker;
-(const LXLexiconRef)newStaticLexicon:(id*)arg1 ;
-(const LXLexiconRef)newPhraseLexicon:(id*)arg1 ;
-(void*)newCJKStaticLexicon;
-(CFBurstTrieRef)newOVSTrie;
-(id)newPatternFST;
-(id)newPostProcessingFST;
-(Network*)newGrammarFST;
-(Network*)newRadicalClusterFST;
-(VariantMap*)newTransliterationVariantMap;
-(void*)newCharacterLanguageModelAndMap:(map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int> > >*)arg1 ;
-(id)newStrokeTransitionModel;
-(id)newCutpointModel;
-(id)newCTCRecognitionModel;
-(id)newPostProcessorWithStaticLexicon:(LXLexiconRef)arg1 customLexicon:(LXLexiconRef)arg2 phraseLexicon:(LXLexiconRef)arg3 customPhraseLexicon:(LXLexiconRef)arg4 recognizer:(id)arg5 textReplacements:(id)arg6 postProcessingFST:(id)arg7 languageModel:(void*)arg8 ;
-(id)newCTCTextDecoderWithStaticLexicon:(LXLexiconRef)arg1 customLexicon:(LXLexiconRef)arg2 wordLanguageModel:(void*)arg3 ;
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
-(BOOL)shouldKeepDuplicateTokenIDs;
-(BOOL)shouldKeepOutOfPatternCandidates;
-(BOOL)shouldDetectChinesePunctuation;
-(BOOL)shouldDetectRomanPunctuation;
-(long long)engineCandidateCount;
-(BOOL)shouldApplyCandidatesThresholding;
-(BOOL)shouldRelaxFinalCandidatesThresholding;
-(BOOL)shouldApplyLMSorting;
-(/*^block*/id)decodingCommitActionBlock;
-(BOOL)shouldRunNextGenRecognizer;
-(BOOL)shouldTreatAllSmallStrokesAsPunctuation;
-(BOOL)shouldApplyCharacterLMRescoring;
-(BOOL)shouldReplaceInvalidTokenIDs;
-(long long)precedingSpaceDefaultBehavior;
-(long long)maxRecognitionResultDefaultCount;
-(BOOL)isEqualToRecognizerConfiguration:(id)arg1 ;
-(BOOL)hasSameResourcesAsConfiguration:(id)arg1 ;
-(BOOL)hasSamePostProcessingAsConfiguration:(id)arg1 ;
-(BOOL)shouldRunNextGenCharacterLM;
-(unsigned long long)effectiveEngineLanguage;
-(BOOL)shouldTransliterateHalfWidthPunctuations;
-(BOOL)shouldApplySemanticTokenization;
-(BOOL)shouldIdentifyChangeableColumns;
-(BOOL)shouldMergeNoPrecedingWhiteSpaceColumns;
-(id)linguisticResourcesFallbackLocale;
-(BOOL)shouldReorderSCTCConfusion;
-(BOOL)shouldRefineCandidates;
-(BOOL)shouldMarkMultiWordOVS;
-(id)languageResourceBundleWithStaticLexicon:(LXLexiconRef)arg1 customLexicon:(LXLexiconRef)arg2 wordLanguageModel:(void*)arg3 ;
-(double)decodingLexiconWeight;
-(double)decodingCharacterLMWeight;
-(double)characterLMLowerBoundLogProbability;
-(double)decodingWordLMWeight;
-(BOOL)shouldPreserveLegacyTranscriptionPaths;
@end

