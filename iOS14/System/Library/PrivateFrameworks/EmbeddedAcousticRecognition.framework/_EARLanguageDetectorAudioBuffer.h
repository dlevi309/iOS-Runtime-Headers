/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

