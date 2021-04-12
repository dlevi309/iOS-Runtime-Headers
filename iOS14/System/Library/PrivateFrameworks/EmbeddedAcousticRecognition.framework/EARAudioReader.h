/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
*/


@class NSURL;

@interface EARAudioReader : NSObject {

	NSURL* _fileURL;
	unsigned long long _sampleRate;

}
-(id)_opx_enumerateAudioBuffersWithBlock:(/*^block*/id)arg1 ;
-(id)_avf_enumerateAudioBuffersWithBlock:(/*^block*/id)arg1 ;
-(id)_opx_enumeratePacketsWithBlock:(/*^block*/id)arg1 ;
-(id)initWithFileURL:(id)arg1 sampleRate:(unsigned long long)arg2 ;
-(id)enumerateAudioBuffersWithBlock:(/*^block*/id)arg1 ;
@end

