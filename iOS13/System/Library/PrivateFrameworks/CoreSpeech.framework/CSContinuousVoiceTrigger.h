/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/CSKeywordAnalyzerNDAPIScoreDelegate.h>

@protocol CSContinuousVoiceTriggerDelegate, OS_dispatch_queue;
@class CSAudioTimeConverter, NSObject, CSAsset, CSKeywordAnalyzerNDAPI, NSString;

@interface CSContinuousVoiceTrigger : NSObject <CSKeywordAnalyzerNDAPIScoreDelegate> {

	float _keywordThreshold;
	float _twoShotThreshold;
	float _lastScore;
	id<CSContinuousVoiceTriggerDelegate> _delegate;
	CSAudioTimeConverter* _audioTimeConverter;
	NSObject*<OS_dispatch_queue> _queue;
	CSAsset* _currentAsset;
	CSKeywordAnalyzerNDAPI* _keywordAnalyzer;
	long long _mode;
	unsigned long long _analyzedSampleCount;
	unsigned long long _triggerEndSampleCount;
	unsigned long long _twoShotDecisionWaitSamples;
	unsigned long long _activeChannel;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) CSAsset * currentAsset;                                            //@synthesize currentAsset=_currentAsset - In the implementation block
@property (nonatomic,retain) CSKeywordAnalyzerNDAPI * keywordAnalyzer;                          //@synthesize keywordAnalyzer=_keywordAnalyzer - In the implementation block
@property (assign,nonatomic) float keywordThreshold;                                            //@synthesize keywordThreshold=_keywordThreshold - In the implementation block
@property (assign,nonatomic) long long mode;                                                    //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) unsigned long long analyzedSampleCount;                            //@synthesize analyzedSampleCount=_analyzedSampleCount - In the implementation block
@property (assign,nonatomic) unsigned long long triggerEndSampleCount;                          //@synthesize triggerEndSampleCount=_triggerEndSampleCount - In the implementation block
@property (assign,nonatomic) unsigned long long twoShotDecisionWaitSamples;                     //@synthesize twoShotDecisionWaitSamples=_twoShotDecisionWaitSamples - In the implementation block
@property (assign,nonatomic) float twoShotThreshold;                                            //@synthesize twoShotThreshold=_twoShotThreshold - In the implementation block
@property (assign,nonatomic) unsigned long long activeChannel;                                  //@synthesize activeChannel=_activeChannel - In the implementation block
@property (assign,nonatomic) float lastScore;                                                   //@synthesize lastScore=_lastScore - In the implementation block
@property (assign,nonatomic,__weak) id<CSContinuousVoiceTriggerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CSAudioTimeConverter * audioTimeConverter;                         //@synthesize audioTimeConverter=_audioTimeConverter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<CSContinuousVoiceTriggerDelegate>)delegate;
-(void)setDelegate:(id<CSContinuousVoiceTriggerDelegate>)arg1 ;
-(void)setMode:(long long)arg1 ;
-(void)start;
-(void)reset;
-(void)_reset;
-(long long)mode;
-(void)setAsset:(id)arg1 ;
-(void)_setAsset:(id)arg1 ;
-(unsigned long long)activeChannel;
-(void)setActiveChannel:(unsigned long long)arg1 ;
-(float)lastScore;
-(void)setCurrentAsset:(CSAsset *)arg1 ;
-(CSAsset *)currentAsset;
-(void)_shotAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3 ;
-(void)_keywordAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3 ;
-(void)keywordAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3 ;
-(void)startDetectTwoShot:(id)arg1 ;
-(void)processAudioSamples:(id)arg1 ;
-(CSAudioTimeConverter *)audioTimeConverter;
-(void)setAudioTimeConverter:(CSAudioTimeConverter *)arg1 ;
-(CSKeywordAnalyzerNDAPI *)keywordAnalyzer;
-(void)setKeywordAnalyzer:(CSKeywordAnalyzerNDAPI *)arg1 ;
-(float)keywordThreshold;
-(void)setKeywordThreshold:(float)arg1 ;
-(unsigned long long)analyzedSampleCount;
-(void)setAnalyzedSampleCount:(unsigned long long)arg1 ;
-(unsigned long long)triggerEndSampleCount;
-(void)setTriggerEndSampleCount:(unsigned long long)arg1 ;
-(unsigned long long)twoShotDecisionWaitSamples;
-(void)setTwoShotDecisionWaitSamples:(unsigned long long)arg1 ;
-(float)twoShotThreshold;
-(void)setTwoShotThreshold:(float)arg1 ;
-(void)setLastScore:(float)arg1 ;
@end

