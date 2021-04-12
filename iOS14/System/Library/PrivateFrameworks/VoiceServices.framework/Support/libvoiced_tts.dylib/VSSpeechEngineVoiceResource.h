/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/


#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
@interface VSSpeechEngineVoiceResource : NSObject {

	shared_ptr<SiriTTS::VoiceResource>* _resource;

}

@property (assign) shared_ptr<SiriTTS::VoiceResource>* resource;              //@synthesize resource=_resource - In the implementation block
-(void)setResource:(shared_ptr<SiriTTS::VoiceResource>*)arg1 ;
-(shared_ptr<SiriTTS::VoiceResource>*)resource;
@end

