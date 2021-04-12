/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CoreSpeech-Structs.h>
#import <libobjc.A.dylib/CSAudioFileWriter.h>

@class NSURL, NSString;

@interface CSPlainAudioFileWriter : NSObject <CSAudioFileWriter> {

	BOOL isWriting;
	OpaqueExtAudioFileRef fFile;
	AudioStreamBasicDescription inASBD;
	AudioStreamBasicDescription outASBD;
	NSURL* _fileURL;

}

@property (nonatomic,readonly) NSURL * fileURL;                     //@synthesize fileURL=_fileURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)saveAudioChunck:(id)arg1 toURL:(id)arg2 ;
-(id)initWithURL:(id)arg1 ;
-(id)initWithFilepath:(id)arg1 ;
-(NSURL *)fileURL;
-(BOOL)addSamples:(const void*)arg1 numSamples:(long long)arg2 ;
-(BOOL)endAudio;
-(void)dealloc;
-(id)initWithURL:(id)arg1 inputFormat:(AudioStreamBasicDescription)arg2 outputFormat:(AudioStreamBasicDescription)arg3 ;
-(void)addContextKey:(id)arg1 withContext:(id)arg2 ;
-(void)addContextKey:(id)arg1 fromMetaFile:(id)arg2 ;
@end

