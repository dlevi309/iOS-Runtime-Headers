/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@interface CSNovDetector : NSObject {

	void* _novDetect;

}
-(void)dealloc;
-(void)reset;
-(id)getSuperVectorWithEndPoint:(unsigned long long)arg1 ;
-(id)initWithConfigPath:(id)arg1 resourcePath:(id)arg2 ;
-(void)resetBest;
-(void)analyzeWavData:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(id)getAnalyzedResultForPhraseId:(unsigned)arg1 ;
-(unsigned)numResultsAvailable;
-(id)getOptionValue:(id)arg1 ;
@end

