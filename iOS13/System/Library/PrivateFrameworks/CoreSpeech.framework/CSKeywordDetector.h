/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/CSKeywordAnalyzerQuasarScoreDelegate.h>
#import <libobjc.A.dylib/CSSpeechManagerDelegate.h>

@protocol CSVoiceTriggerDelegate, OS_dispatch_queue;
@class CSSpeechManager, NSObject, CSAsset, CSKeywordAnalyzerQuasar, NSString;

@interface CSKeywordDetector : NSObject <CSKeywordAnalyzerQuasarScoreDelegate, CSSpeechManagerDelegate> {

	BOOL _isRunningRecognizer;
	float _keywordThreshold;
	id<CSVoiceTriggerDelegate> _delegate;
	CSSpeechManager* _speechManager;
	NSObject*<OS_dispatch_queue> _queue;
	CSAsset* _currentAsset;
	CSKeywordAnalyzerQuasar* _keywordAnalyzer;
	unsigned long long _analyzedSampleCount;
	unsigned long long _decisionWaitSampleCount;

}

@property (assign,nonatomic,__weak) CSSpeechManager * speechManager;                  //@synthesize speechManager=_speechManager - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) CSAsset * currentAsset;                                  //@synthesize currentAsset=_currentAsset - In the implementation block
@property (nonatomic,retain) CSKeywordAnalyzerQuasar * keywordAnalyzer;               //@synthesize keywordAnalyzer=_keywordAnalyzer - In the implementation block
@property (assign,nonatomic) float keywordThreshold;                                  //@synthesize keywordThreshold=_keywordThreshold - In the implementation block
@property (assign,nonatomic) unsigned long long analyzedSampleCount;                  //@synthesize analyzedSampleCount=_analyzedSampleCount - In the implementation block
@property (assign,nonatomic) unsigned long long decisionWaitSampleCount;              //@synthesize decisionWaitSampleCount=_decisionWaitSampleCount - In the implementation block
@property (assign,nonatomic) BOOL isRunningRecognizer;                                //@synthesize isRunningRecognizer=_isRunningRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id<CSVoiceTriggerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<CSVoiceTriggerDelegate>)delegate;
-(void)setDelegate:(id<CSVoiceTriggerDelegate>)arg1 ;
-(void)reset;
-(void)_reset;
-(void)setAsset:(id)arg1 ;
-(void)_setAsset:(id)arg1 ;
-(void)setCurrentAsset:(CSAsset *)arg1 ;
-(CSAsset *)currentAsset;
-(CSKeywordAnalyzerQuasar *)keywordAnalyzer;
-(void)setKeywordAnalyzer:(CSKeywordAnalyzerQuasar *)arg1 ;
-(float)keywordThreshold;
-(void)setKeywordThreshold:(float)arg1 ;
-(unsigned long long)analyzedSampleCount;
-(void)setAnalyzedSampleCount:(unsigned long long)arg1 ;
-(void)keywordAnalyzerQuasar:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3 ;
-(BOOL)isRunningRecognizer;
-(void)setIsRunningRecognizer:(BOOL)arg1 ;
-(CSSpeechManager *)speechManager;
-(void)setSpeechManager:(CSSpeechManager *)arg1 ;
-(id)initWithManager:(id)arg1 asset:(id)arg2 ;
-(void)startDetectKeyword:(id)arg1 ;
-(void)speechManagerRecordBufferAvailable:(id)arg1 buffer:(id)arg2 ;
-(void)speechManagerLPCMRecordBufferAvailable:(id)arg1 chunk:(id)arg2 ;
-(void)speechManagerDidStartForwarding:(id)arg1 successfully:(BOOL)arg2 error:(id)arg3 ;
-(void)speechManagerDidStopForwarding:(id)arg1 forReason:(long long)arg2 ;
-(unsigned long long)decisionWaitSampleCount;
-(void)setDecisionWaitSampleCount:(unsigned long long)arg1 ;
@end

