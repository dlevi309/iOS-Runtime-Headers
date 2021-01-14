/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/

#import <libobjc.A.dylib/CRConfidenceThresholdProviding.h>

@class NSURL, NSArray, NSOrderedSet, NSNumber, NSString;

@interface CRRecognizerConfiguration : NSObject <CRConfidenceThresholdProviding> {

	BOOL _cpuOnly;
	BOOL _decodeWithLM;
	int _colorSpace;
	float _precisionThreshold;
	float _mediumConfidenceThreshold;
	float _highConfidenceThreshold;
	NSURL* _customModelURL;
	long long _batchSize;
	long long _maxConcurrentBatches;
	NSArray* _inputWidths;
	double _inputHeight;
	double _angleThresholdForRotatedCrops;
	long long _numTopStringCandidates;
	NSOrderedSet* _languages;
	NSArray* _customWords;
	NSNumber* _lexiconWeight;
	NSNumber* _characterLMWeight;
	NSNumber* _wordLMWeight;
	unsigned long long _minTitleLength;
	double _minTitleProb;

}

@property (assign) float mediumConfidenceThreshold;                     //@synthesize mediumConfidenceThreshold=_mediumConfidenceThreshold - In the implementation block
@property (assign) float highConfidenceThreshold;                       //@synthesize highConfidenceThreshold=_highConfidenceThreshold - In the implementation block
@property (readonly) int colorSpace;                                    //@synthesize colorSpace=_colorSpace - In the implementation block
@property (readonly) NSURL * customModelURL;                            //@synthesize customModelURL=_customModelURL - In the implementation block
@property (readonly) long long batchSize;                               //@synthesize batchSize=_batchSize - In the implementation block
@property (readonly) long long maxConcurrentBatches;                    //@synthesize maxConcurrentBatches=_maxConcurrentBatches - In the implementation block
@property (readonly) NSArray * inputWidths;                             //@synthesize inputWidths=_inputWidths - In the implementation block
@property (readonly) double inputHeight;                                //@synthesize inputHeight=_inputHeight - In the implementation block
@property (readonly) double angleThresholdForRotatedCrops;              //@synthesize angleThresholdForRotatedCrops=_angleThresholdForRotatedCrops - In the implementation block
@property (readonly) BOOL cpuOnly;                                      //@synthesize cpuOnly=_cpuOnly - In the implementation block
@property (readonly) BOOL decodeWithLM;                                 //@synthesize decodeWithLM=_decodeWithLM - In the implementation block
@property (readonly) long long numTopStringCandidates;                  //@synthesize numTopStringCandidates=_numTopStringCandidates - In the implementation block
@property (readonly) NSOrderedSet * languages;                          //@synthesize languages=_languages - In the implementation block
@property (readonly) NSArray * customWords;                             //@synthesize customWords=_customWords - In the implementation block
@property (readonly) float precisionThreshold;                          //@synthesize precisionThreshold=_precisionThreshold - In the implementation block
@property (readonly) NSNumber * lexiconWeight;                          //@synthesize lexiconWeight=_lexiconWeight - In the implementation block
@property (readonly) NSNumber * characterLMWeight;                      //@synthesize characterLMWeight=_characterLMWeight - In the implementation block
@property (readonly) NSNumber * wordLMWeight;                           //@synthesize wordLMWeight=_wordLMWeight - In the implementation block
@property (readonly) unsigned long long minTitleLength;                 //@synthesize minTitleLength=_minTitleLength - In the implementation block
@property (readonly) double minTitleProb;                               //@synthesize minTitleProb=_minTitleProb - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedLanguagesForVersion:(long long)arg1 ;
+(id)languageSetFromInputLanguages:(id)arg1 supportedLanguages:(id)arg2 ;
-(int)colorSpace;
-(long long)batchSize;
-(NSOrderedSet *)languages;
-(BOOL)cpuOnly;
-(NSArray *)customWords;
-(double)inputHeight;
-(id)initWithImageReaderOptions:(id)arg1 error:(id*)arg2 ;
-(float)mediumConfidenceThreshold;
-(float)highConfidenceThreshold;
-(NSURL *)customModelURL;
-(BOOL)usesAppleNeuralEngine;
-(id)initV1DefaultConfig;
-(double)angleThresholdForRotatedCrops;
-(BOOL)decodeWithLM;
-(long long)numTopStringCandidates;
-(float)precisionThreshold;
-(id)initV2DefaultConfigWithOptions:(id)arg1 ;
-(void)setConfidenceThresholdsForRevision:(unsigned long long)arg1 ;
-(void)loadLanguageModelWeightsForLanguageIdentifier:(id)arg1 rev:(unsigned long long)arg2 ;
-(long long)maxConcurrentBatches;
-(NSArray *)inputWidths;
-(NSNumber *)lexiconWeight;
-(NSNumber *)characterLMWeight;
-(NSNumber *)wordLMWeight;
-(unsigned long long)minTitleLength;
-(double)minTitleProb;
-(void)setMediumConfidenceThreshold:(float)arg1 ;
-(void)setHighConfidenceThreshold:(float)arg1 ;
@end

