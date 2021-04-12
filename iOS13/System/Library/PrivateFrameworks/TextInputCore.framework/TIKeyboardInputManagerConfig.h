/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@class TIInputMode, NSString, NSDictionary;

@interface TIKeyboardInputManagerConfig : NSObject {

	BOOL _allowsSpaceCorrections;
	BOOL _usesTextChecker;
	BOOL _usesRetrocorrection;
	BOOL _usesWordNgramModel;
	BOOL _usesAdaptation;
	BOOL _completionsShouldSharePrefix;
	BOOL _usesStemSuffixCorrectionFactor;
	BOOL _languageAllowsCP;
	BOOL _usesContinuousPath;
	BOOL _usesContinuousPathProgressiveCandidates;
	BOOL _continuousPathDeleteWholeWord;
	BOOL _continuousPathDetectPause;
	BOOL _continuousPathCompletesWords;
	BOOL _insertsSpaceAfterPredictiveInput;
	BOOL _usesContinuousPathRetrocorrection;
	BOOL _shouldIgnoreCPRequirements;
	BOOL _usesCJContinuousPath;
	BOOL _testing;
	BOOL _usesCustomNgramModel;
	BOOL _usesCustomStaticDictionary;
	BOOL _usesDODMLLogging;
	BOOL _sensorKitEnabled;
	BOOL _allowRelaxedOVSPolicy;
	BOOL _usesUserModelLogging;
	int _continuousPathEnabledAlgorithms;
	int _cpConfidenceModelType;
	TIInputMode* _inputMode;
	NSString* _staticDictionaryPath;
	NSString* _dynamicResourcePath;
	NSString* _ngramModelPath;
	NSString* _shapeStoreResourceDir;
	unsigned long long _maxWordsPerPrediction;
	NSDictionary* _continuousPathParams;
	double _continuousPathLanguageWeight;
	unsigned long long _sensorKitWordsThreshold;

}

@property (nonatomic,retain) TIInputMode * inputMode;                                   //@synthesize inputMode=_inputMode - In the implementation block
@property (nonatomic,copy) NSString * staticDictionaryPath;                             //@synthesize staticDictionaryPath=_staticDictionaryPath - In the implementation block
@property (nonatomic,copy) NSString * dynamicResourcePath;                              //@synthesize dynamicResourcePath=_dynamicResourcePath - In the implementation block
@property (nonatomic,copy) NSString * ngramModelPath;                                   //@synthesize ngramModelPath=_ngramModelPath - In the implementation block
@property (nonatomic,copy) NSString * shapeStoreResourceDir;                            //@synthesize shapeStoreResourceDir=_shapeStoreResourceDir - In the implementation block
@property (assign,nonatomic) BOOL allowsSpaceCorrections;                               //@synthesize allowsSpaceCorrections=_allowsSpaceCorrections - In the implementation block
@property (assign,nonatomic) BOOL usesTextChecker;                                      //@synthesize usesTextChecker=_usesTextChecker - In the implementation block
@property (assign,nonatomic) BOOL usesRetrocorrection;                                  //@synthesize usesRetrocorrection=_usesRetrocorrection - In the implementation block
@property (assign,nonatomic) BOOL usesWordNgramModel;                                   //@synthesize usesWordNgramModel=_usesWordNgramModel - In the implementation block
@property (assign,nonatomic) BOOL usesAdaptation;                                       //@synthesize usesAdaptation=_usesAdaptation - In the implementation block
@property (assign,nonatomic) BOOL usesWordNgramModelAdaptation; 
@property (assign,nonatomic) unsigned long long maxWordsPerPrediction;                  //@synthesize maxWordsPerPrediction=_maxWordsPerPrediction - In the implementation block
@property (assign,nonatomic) BOOL completionsShouldSharePrefix;                         //@synthesize completionsShouldSharePrefix=_completionsShouldSharePrefix - In the implementation block
@property (assign,nonatomic) BOOL usesStemSuffixCorrectionFactor;                       //@synthesize usesStemSuffixCorrectionFactor=_usesStemSuffixCorrectionFactor - In the implementation block
@property (assign,nonatomic) BOOL languageAllowsCP;                                     //@synthesize languageAllowsCP=_languageAllowsCP - In the implementation block
@property (assign,nonatomic) BOOL usesContinuousPath;                                   //@synthesize usesContinuousPath=_usesContinuousPath - In the implementation block
@property (nonatomic,copy) NSDictionary * continuousPathParams;                         //@synthesize continuousPathParams=_continuousPathParams - In the implementation block
@property (assign,nonatomic) BOOL usesContinuousPathProgressiveCandidates;              //@synthesize usesContinuousPathProgressiveCandidates=_usesContinuousPathProgressiveCandidates - In the implementation block
@property (assign,nonatomic) double continuousPathLanguageWeight;                       //@synthesize continuousPathLanguageWeight=_continuousPathLanguageWeight - In the implementation block
@property (assign,nonatomic) BOOL continuousPathDeleteWholeWord;                        //@synthesize continuousPathDeleteWholeWord=_continuousPathDeleteWholeWord - In the implementation block
@property (assign,nonatomic) BOOL continuousPathDetectPause;                            //@synthesize continuousPathDetectPause=_continuousPathDetectPause - In the implementation block
@property (assign,nonatomic) BOOL continuousPathCompletesWords;                         //@synthesize continuousPathCompletesWords=_continuousPathCompletesWords - In the implementation block
@property (assign,nonatomic) BOOL insertsSpaceAfterPredictiveInput;                     //@synthesize insertsSpaceAfterPredictiveInput=_insertsSpaceAfterPredictiveInput - In the implementation block
@property (assign,nonatomic) int continuousPathEnabledAlgorithms;                       //@synthesize continuousPathEnabledAlgorithms=_continuousPathEnabledAlgorithms - In the implementation block
@property (assign,nonatomic) BOOL usesContinuousPathRetrocorrection;                    //@synthesize usesContinuousPathRetrocorrection=_usesContinuousPathRetrocorrection - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreCPRequirements;                           //@synthesize shouldIgnoreCPRequirements=_shouldIgnoreCPRequirements - In the implementation block
@property (assign,nonatomic) int cpConfidenceModelType;                                 //@synthesize cpConfidenceModelType=_cpConfidenceModelType - In the implementation block
@property (assign,nonatomic) BOOL usesCJContinuousPath;                                 //@synthesize usesCJContinuousPath=_usesCJContinuousPath - In the implementation block
@property (assign,getter=isTesting,nonatomic) BOOL testing;                             //@synthesize testing=_testing - In the implementation block
@property (assign,nonatomic) BOOL usesCustomNgramModel;                                 //@synthesize usesCustomNgramModel=_usesCustomNgramModel - In the implementation block
@property (assign,nonatomic) BOOL usesCustomStaticDictionary;                           //@synthesize usesCustomStaticDictionary=_usesCustomStaticDictionary - In the implementation block
@property (assign,nonatomic) BOOL usesDODMLLogging;                                     //@synthesize usesDODMLLogging=_usesDODMLLogging - In the implementation block
@property (assign,nonatomic) BOOL sensorKitEnabled;                                     //@synthesize sensorKitEnabled=_sensorKitEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long sensorKitWordsThreshold;                //@synthesize sensorKitWordsThreshold=_sensorKitWordsThreshold - In the implementation block
@property (assign,nonatomic) BOOL allowRelaxedOVSPolicy;                                //@synthesize allowRelaxedOVSPolicy=_allowRelaxedOVSPolicy - In the implementation block
@property (assign,nonatomic) BOOL usesUserModelLogging;                                 //@synthesize usesUserModelLogging=_usesUserModelLogging - In the implementation block
+(id)configurationForInputMode:(id)arg1 ;
-(id)propertyList;
-(void)setInputMode:(TIInputMode *)arg1 ;
-(BOOL)usesContinuousPath;
-(BOOL)usesContinuousPathProgressiveCandidates;
-(TIInputMode *)inputMode;
-(BOOL)insertsSpaceAfterPredictiveInput;
-(void)setUsesContinuousPath:(BOOL)arg1 ;
-(void)setUsesContinuousPathProgressiveCandidates:(BOOL)arg1 ;
-(void)setInsertsSpaceAfterPredictiveInput:(BOOL)arg1 ;
-(void)setTesting:(BOOL)arg1 ;
-(BOOL)isTesting;
-(NSString *)dynamicResourcePath;
-(BOOL)usesRetrocorrection;
-(double)continuousPathLanguageWeight;
-(void)setCpConfidenceModelType:(int)arg1 ;
-(void)setShapeStoreResourceDir:(NSString *)arg1 ;
-(void)setDynamicResourcePath:(NSString *)arg1 ;
-(void)setNgramModelPath:(NSString *)arg1 ;
-(void)setStaticDictionaryPath:(NSString *)arg1 ;
-(void)setAllowRelaxedOVSPolicy:(BOOL)arg1 ;
-(void)setUsesUserModelLogging:(BOOL)arg1 ;
-(void)setSensorKitWordsThreshold:(unsigned long long)arg1 ;
-(void)setSensorKitEnabled:(BOOL)arg1 ;
-(void)setUsesDODMLLogging:(BOOL)arg1 ;
-(void)setUsesContinuousPathRetrocorrection:(BOOL)arg1 ;
-(void)setContinuousPathEnabledAlgorithms:(int)arg1 ;
-(void)setContinuousPathDetectPause:(BOOL)arg1 ;
-(void)setContinuousPathDeleteWholeWord:(BOOL)arg1 ;
-(void)setContinuousPathLanguageWeight:(double)arg1 ;
-(void)setContinuousPathCompletesWords:(BOOL)arg1 ;
-(void)setUsesCJContinuousPath:(BOOL)arg1 ;
-(void)setContinuousPathParams:(NSDictionary *)arg1 ;
-(BOOL)shouldIgnoreCPRequirements;
-(BOOL)languageAllowsCP;
-(void)setLanguageAllowsCP:(BOOL)arg1 ;
-(void)setShouldIgnoreCPRequirements:(BOOL)arg1 ;
-(void)setUsesStemSuffixCorrectionFactor:(BOOL)arg1 ;
-(void)setCompletionsShouldSharePrefix:(BOOL)arg1 ;
-(void)setMaxWordsPerPrediction:(unsigned long long)arg1 ;
-(void)setUsesAdaptation:(BOOL)arg1 ;
-(void)setUsesWordNgramModel:(BOOL)arg1 ;
-(void)setUsesRetrocorrection:(BOOL)arg1 ;
-(void)setUsesTextChecker:(BOOL)arg1 ;
-(void)setAllowsSpaceCorrections:(BOOL)arg1 ;
-(BOOL)usesWordNgramModelAdaptation;
-(void)setUsesWordNgramModelAdaptation:(BOOL)arg1 ;
-(NSString *)staticDictionaryPath;
-(NSString *)ngramModelPath;
-(NSString *)shapeStoreResourceDir;
-(BOOL)allowsSpaceCorrections;
-(BOOL)usesTextChecker;
-(BOOL)usesWordNgramModel;
-(BOOL)usesAdaptation;
-(unsigned long long)maxWordsPerPrediction;
-(BOOL)completionsShouldSharePrefix;
-(BOOL)usesStemSuffixCorrectionFactor;
-(NSDictionary *)continuousPathParams;
-(BOOL)continuousPathDeleteWholeWord;
-(BOOL)continuousPathDetectPause;
-(BOOL)continuousPathCompletesWords;
-(int)continuousPathEnabledAlgorithms;
-(BOOL)usesContinuousPathRetrocorrection;
-(int)cpConfidenceModelType;
-(BOOL)usesCJContinuousPath;
-(BOOL)usesCustomNgramModel;
-(void)setUsesCustomNgramModel:(BOOL)arg1 ;
-(BOOL)usesCustomStaticDictionary;
-(void)setUsesCustomStaticDictionary:(BOOL)arg1 ;
-(BOOL)usesDODMLLogging;
-(BOOL)sensorKitEnabled;
-(unsigned long long)sensorKitWordsThreshold;
-(BOOL)allowRelaxedOVSPolicy;
-(BOOL)usesUserModelLogging;
@end

