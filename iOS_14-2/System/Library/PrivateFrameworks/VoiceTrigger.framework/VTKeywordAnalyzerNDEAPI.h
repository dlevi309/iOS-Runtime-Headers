/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/

#import <libobjc.A.dylib/VTKeywordAnalyzer.h>

@class NSMutableData, VTKeywordAnalyzerResults, NSString;

@interface VTKeywordAnalyzerNDEAPI : NSObject <VTKeywordAnalyzer> {

	void* _ndeObject;
	NSMutableData* _currentBlob;
	VTKeywordAnalyzerResults* _lastResult;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAsset:(id)arg1 ;
-(void)endAudio;
-(void)dealloc;
-(id)initWithBlob:(id)arg1 ;
-(void)setStartSampleCount:(unsigned long long)arg1 ;
-(void)resetWithLanguage:(id)arg1 withSamplingRate:(long long)arg2 withAudioSource:(id)arg3 ;
-(void)processFloatAudioBuffer:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(void)processAudioBuffer:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(id)getDetailedResults;
-(id)getAnalyzerType;
-(id)_checkForTriggerWithBytes:(const short*)arg1 withNumberOfSamples:(long long)arg2 ;
@end

