/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/CSSpIdSpeakerVectorGeneratorDelegate.h>

@protocol CSSpIdProcessorDelegate, OS_dispatch_queue;
@class NSString, CSSpIdSpeakerVectorGenerator, NSArray, NSObject;

@interface CSSpIdProcessor : NSObject <CSSpIdSpeakerVectorGeneratorDelegate> {

	float _rawScoreVTScale;
	float _rawScoreVTOffset;
	float _rawScoreNonVTScale;
	float _rawScoreNonVTOffset;
	float _logitCeilScore;
	float _logitFloorScore;
	BOOL _triggerPhraseDetectedOnTap;
	unsigned long long _spIdType;
	NSString* _spIdTypeStr;
	id<CSSpIdProcessorDelegate> _delegate;
	CSSpIdSpeakerVectorGenerator* _spIdSvg;
	NSArray* _satAnalyzers;
	unsigned long long _invocationStyle;
	NSString* _assetVersion;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic) unsigned long long spIdType;                              //@synthesize spIdType=_spIdType - In the implementation block
@property (nonatomic,retain) NSString * spIdTypeStr;                                   //@synthesize spIdTypeStr=_spIdTypeStr - In the implementation block
@property (assign,nonatomic,__weak) id<CSSpIdProcessorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CSSpIdSpeakerVectorGenerator * spIdSvg;                   //@synthesize spIdSvg=_spIdSvg - In the implementation block
@property (nonatomic,retain) NSArray * satAnalyzers;                                   //@synthesize satAnalyzers=_satAnalyzers - In the implementation block
@property (assign,nonatomic) unsigned long long invocationStyle;                       //@synthesize invocationStyle=_invocationStyle - In the implementation block
@property (nonatomic,retain) NSString * assetVersion;                                  //@synthesize assetVersion=_assetVersion - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                       //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSString * sysConfigFilepath; 
@property (nonatomic,readonly) float satScoreThreshold; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<CSSpIdProcessorDelegate>)delegate;
-(void)setDelegate:(id<CSSpIdProcessorDelegate>)arg1 ;
-(NSString *)assetVersion;
-(void)setAssetVersion:(NSString *)arg1 ;
-(float)satScoreThreshold;
-(unsigned long long)invocationStyle;
-(NSString *)sysConfigFilepath;
-(void)processAudioData:(id)arg1 ;
-(void)_processSpeakerVector:(id)arg1 withSize:(unsigned long long)arg2 processedAudioDurationMs:(unsigned long long)arg3 isFinal:(BOOL)arg4 ;
-(void)speakerVectorGenerator:(id)arg1 hasSpeakerVector:(id)arg2 speakerVectorSize:(unsigned long long)arg3 processedAudioDurationMs:(unsigned long long)arg4 ;
-(void)speakerVectorGenerator:(id)arg1 finishedWithFinalSpeakerVector:(id)arg2 speakerVectorSize:(unsigned long long)arg3 processedAudioDurationMs:(unsigned long long)arg4 ;
-(id)initWithSpIdContext:(id)arg1 forSpIdType:(unsigned long long)arg2 delegate:(id)arg3 ;
-(void)endProcessing;
-(void)setCVTTriggerPhraseDetected;
-(unsigned long long)spIdType;
-(void)setSpIdType:(unsigned long long)arg1 ;
-(NSString *)spIdTypeStr;
-(void)setSpIdTypeStr:(NSString *)arg1 ;
-(CSSpIdSpeakerVectorGenerator *)spIdSvg;
-(void)setSpIdSvg:(CSSpIdSpeakerVectorGenerator *)arg1 ;
-(NSArray *)satAnalyzers;
-(void)setSatAnalyzers:(NSArray *)arg1 ;
-(void)setInvocationStyle:(unsigned long long)arg1 ;
@end

