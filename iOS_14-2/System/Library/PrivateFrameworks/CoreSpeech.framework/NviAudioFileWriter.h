/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


#import <CoreSpeech/CoreSpeech-Structs.h>
@class NSURL;

@interface NviAudioFileWriter : NSObject {

	OpaqueExtAudioFileRef fFile;
	AudioStreamBasicDescription inASBD;
	AudioStreamBasicDescription outASBD;
	NSURL* _fileURL;

}

@property (nonatomic,readonly) NSURL * fileURL;              //@synthesize fileURL=_fileURL - In the implementation block
-(NSURL *)fileURL;
-(void)addSamples:(const void*)arg1 numSamples:(long long)arg2 ;
-(void)endAudio;
-(void)dealloc;
-(id)initWithURL:(id)arg1 inputFormat:(AudioStreamBasicDescription)arg2 outputFormat:(AudioStreamBasicDescription)arg3 ;
@end

