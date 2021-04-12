/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@interface SSRTriggerPhraseDetectorNDAPI : NSObject {

	void* _novDetect;
	unsigned long long _phraseId;

}
-(id)getSuperVectorWithEndPoint:(unsigned long long)arg1 ;
-(void)reset;
-(id)analyzeWavData:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)initWithConfigPath:(id)arg1 resourcePath:(id)arg2 phraseId:(unsigned long long)arg3 ;
@end

