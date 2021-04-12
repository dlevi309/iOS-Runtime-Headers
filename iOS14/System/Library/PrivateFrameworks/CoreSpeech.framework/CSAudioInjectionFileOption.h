/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


#import <CoreSpeech/CoreSpeech-Structs.h>
@class NSURL;

@interface CSAudioInjectionFileOption : NSObject {

	float _scaleFactor;
	NSURL* _audioURL;
	OpaqueExtAudioFileRef _fFile;
	AudioStreamBasicDescription _outASBD;

}

@property (nonatomic,readonly) NSURL * audioURL;                               //@synthesize audioURL=_audioURL - In the implementation block
@property (assign,nonatomic) AudioStreamBasicDescription outASBD;              //@synthesize outASBD=_outASBD - In the implementation block
@property (assign,nonatomic) OpaqueExtAudioFileRef fFile;                      //@synthesize fFile=_fFile - In the implementation block
@property (nonatomic,readonly) float scaleFactor;                              //@synthesize scaleFactor=_scaleFactor - In the implementation block
-(float)scaleFactor;
-(OpaqueExtAudioFileRef)fFile;
-(id)description;
-(AudioStreamBasicDescription)outASBD;
-(NSURL *)audioURL;
-(id)initWithAudioURL:(id)arg1 withScaleFactor:(float)arg2 outASBD:(AudioStreamBasicDescription)arg3 ;
-(void)setOutASBD:(AudioStreamBasicDescription)arg1 ;
-(void)setFFile:(OpaqueExtAudioFileRef)arg1 ;
@end

