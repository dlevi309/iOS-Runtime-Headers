/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <libobjc.A.dylib/CSLanguageDetectorDelegate.h>

@protocol OS_dispatch_queue, _LTSpeechTranslationDelegate;
@class _LTTranslationContext, CSLanguageDetector, NSMutableDictionary, NSObject, _LTLanguageDetectionResult, _LTLanguageDetectorFeatureCombinationModel, NSString;

@interface _LTLanguageDetector : NSObject <CSLanguageDetectorDelegate> {

	_LTTranslationContext* _context;
	CSLanguageDetector* _csLanguageDetector;
	float _sourceLocaleConfidenceThreshold;
	float _targetLocaleConfidenceThreshold;
	BOOL _endAudioCalled;
	NSMutableDictionary* _finalSpeechResults;
	unsigned long long _lidSignpostID;
	NSObject*<OS_dispatch_queue> _resultQueue;
	id<_LTSpeechTranslationDelegate> _delegate;
	BOOL _featureCombinationModelSupported;
	double _samplingRate;
	long long _audioBitDepth;
	_LTLanguageDetectionResult* _lastResult;
	_LTLanguageDetectorFeatureCombinationModel* _featureCombinationModel;

}

@property (nonatomic,retain) _LTLanguageDetectionResult * lastResult;                                           //@synthesize lastResult=_lastResult - In the implementation block
@property (assign,nonatomic) BOOL featureCombinationModelSupported;                                             //@synthesize featureCombinationModelSupported=_featureCombinationModelSupported - In the implementation block
@property (nonatomic,retain) _LTLanguageDetectorFeatureCombinationModel * featureCombinationModel;              //@synthesize featureCombinationModel=_featureCombinationModel - In the implementation block
@property (nonatomic,readonly) double samplingRate;                                                             //@synthesize samplingRate=_samplingRate - In the implementation block
@property (nonatomic,readonly) long long audioBitDepth;                                                         //@synthesize audioBitDepth=_audioBitDepth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)sendFinalLanguageDetectionResult;
-(void)languageDetectorDidDetectLanguageWithConfidence:(id)arg1 confidence:(id)arg2 isConfident:(BOOL)arg3 ;
-(void)startLanguageDetectionWithContext:(id)arg1 delegate:(id)arg2 ;
-(void)addSpeechRecognitionResult:(id)arg1 ;
-(void)addSpeechAudioData:(id)arg1 ;
-(void)cancelLanguageDetection;
-(long long)audioBitDepth;
-(_LTLanguageDetectionResult *)lastResult;
-(double)samplingRate;
-(void)setLastResult:(_LTLanguageDetectionResult *)arg1 ;
-(BOOL)featureCombinationModelSupported;
-(void)setFeatureCombinationModelSupported:(BOOL)arg1 ;
-(_LTLanguageDetectorFeatureCombinationModel *)featureCombinationModel;
-(void)setFeatureCombinationModel:(_LTLanguageDetectorFeatureCombinationModel *)arg1 ;
-(void)endAudio;
@end

