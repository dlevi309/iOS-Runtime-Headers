/*
* Generated on Monday, March 1, 2021 at 2:32:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
*/


#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@interface _EARLanguageDetectorAudioBuffer : NSObject {

	shared_ptr<quasar::RecogAudioBuffer>* _buffer;

}
-(void)addAudioSampleData:(id)arg1 ;
-(void)endAudio;
-(void)addAudioSamples:(const short*)arg1 count:(unsigned long long)arg2 ;
-(id)_initWithAudioBuffer:(const shared_ptr<quasar::RecogAudioBuffer>*)arg1 ;
@end

