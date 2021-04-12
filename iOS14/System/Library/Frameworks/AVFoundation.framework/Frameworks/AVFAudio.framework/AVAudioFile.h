/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/


#import <AVFAudio/AVFAudio-Structs.h>
@class NSURL, AVAudioFormat;

@interface AVAudioFile : NSObject {

	void* _impl;

}

@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) AVAudioFormat * fileFormat; 
@property (nonatomic,readonly) AVAudioFormat * processingFormat; 
@property (nonatomic,readonly) long long length; 
@property (assign,nonatomic) long long framePosition; 
-(id)initForReading:(id)arg1 error:(id*)arg2 ;
-(id)initForReading:(id)arg1 commonFormat:(unsigned long long)arg2 interleaved:(BOOL)arg3 error:(id*)arg4 ;
-(id)initForReadingFromExtAudioFile:(OpaqueExtAudioFileRef)arg1 error:(id*)arg2 ;
-(id)initSecondaryReader:(id)arg1 format:(id)arg2 error:(id*)arg3 ;
-(id)initForReadingFromExtAudioFile:(OpaqueExtAudioFileRef)arg1 commonFormat:(unsigned long long)arg2 interleaved:(BOOL)arg3 error:(id*)arg4 ;
-(id)initForWriting:(id)arg1 settings:(id)arg2 commonFormat:(unsigned long long)arg3 interleaved:(BOOL)arg4 error:(id*)arg5 ;
-(BOOL)readIntoBuffer:(id)arg1 error:(id*)arg2 ;
-(BOOL)readIntoBuffer:(id)arg1 frameCount:(unsigned)arg2 error:(id*)arg3 ;
-(long long)framePosition;
-(void)setFramePosition:(long long)arg1 ;
-(long long)length;
-(NSURL *)url;
-(AVAudioFormat *)processingFormat;
-(BOOL)writeFromBuffer:(id)arg1 error:(id*)arg2 ;
-(id)initForWriting:(id)arg1 settings:(id)arg2 error:(id*)arg3 ;
-(AVAudioFormat *)fileFormat;
-(void)dealloc;
@end

