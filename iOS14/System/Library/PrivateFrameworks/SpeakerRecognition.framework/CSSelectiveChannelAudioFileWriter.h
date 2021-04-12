/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
*/

#import <SpeakerRecognition/SpeakerRecognition-Structs.h>
#import <libobjc.A.dylib/CSAudioFileWriter.h>

@class NSArray, NSURL, NSString;

@interface CSSelectiveChannelAudioFileWriter : NSObject <CSAudioFileWriter> {

	BOOL isWriting;
	OpaqueExtAudioFileRef fFile;
	AudioStreamBasicDescription inASBD;
	AudioStreamBasicDescription outASBD;
	NSArray* selectedChannelList;
	unsigned _numberOfChannels;
	NSURL* _fileURL;

}

@property (nonatomic,readonly) NSURL * fileURL;                        //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,readonly) unsigned numberOfChannels;              //@synthesize numberOfChannels=_numberOfChannels - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)fileURL;
-(unsigned)numberOfChannels;
-(BOOL)addSamples:(const void*)arg1 numSamples:(long long)arg2 ;
-(BOOL)endAudio;
-(void)dealloc;
-(id)initWithURL:(id)arg1 inputFormat:(AudioStreamBasicDescription)arg2 outputFormat:(AudioStreamBasicDescription)arg3 channelBitset:(unsigned long long)arg4 ;
@end

