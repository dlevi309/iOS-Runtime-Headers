/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/

#import <libobjc.A.dylib/VTKeywordAnalyzer.h>

@protocol OS_dispatch_queue;
@class NSObject, NSArray, _EARSyncSpeechRecognizer, NSDictionary, NSString;

@interface VTKeywordAnalyzerQuasar : NSObject <VTKeywordAnalyzer> {

	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _lastReportedRecogResults;
	NSArray* _triggerTokenList;
	_EARSyncSpeechRecognizer* _syncRecognizer;
	BOOL _useKeywordSpotting;
	NSDictionary* _ctcKwdToPhraseIdMap;

}

@property (nonatomic,retain) NSDictionary * ctcKwdToPhraseIdMap;              //@synthesize ctcKwdToPhraseIdMap=_ctcKwdToPhraseIdMap - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAsset:(id)arg1 ;
-(void)endAudio;
-(NSDictionary *)ctcKwdToPhraseIdMap;
-(void)setCtcKwdToPhraseIdMap:(NSDictionary *)arg1 ;
-(void)setStartSampleCount:(unsigned long long)arg1 ;
-(void)resetWithLanguage:(id)arg1 withSamplingRate:(long long)arg2 withAudioSource:(id)arg3 ;
-(void)processFloatAudioBuffer:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(void)processAudioBuffer:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(id)getDetailedResults;
-(id)getAnalyzerType;
@end

