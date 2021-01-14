/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@interface CSNovDetector : NSObject {

	void* _novDetect;

}
-(id)getSuperVectorWithEndPoint:(unsigned long long)arg1 ;
-(void)analyzeWavFloatData:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(id)getAnalyzedResultForPhraseId:(unsigned)arg1 ;
-(unsigned)numResultsAvailable;
-(void)reset;
-(id)initWithConfigPath:(id)arg1 resourcePath:(id)arg2 ;
-(id)getOptionValue:(id)arg1 ;
-(void)analyzeWavData:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(void)resetBest;
-(void)dealloc;
@end

