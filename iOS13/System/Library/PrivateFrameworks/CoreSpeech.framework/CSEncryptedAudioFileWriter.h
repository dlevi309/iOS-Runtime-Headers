/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/CSAudioFileWriter.h>

@class NSURL, NSMutableData, NSString;

@interface CSEncryptedAudioFileWriter : NSObject <CSAudioFileWriter> {

	NSURL* _fileUrl;
	NSMutableData* _writeBuffer;
	unsigned long long _sampleByteDepth;

}

@property (nonatomic,retain) NSURL * fileUrl;                                 //@synthesize fileUrl=_fileUrl - In the implementation block
@property (nonatomic,retain) NSMutableData * writeBuffer;                     //@synthesize writeBuffer=_writeBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long sampleByteDepth;              //@synthesize sampleByteDepth=_sampleByteDepth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)fileUrl;
-(void)setFileUrl:(NSURL *)arg1 ;
-(BOOL)endAudio;
-(BOOL)addSamples:(const void*)arg1 numSamples:(unsigned long long)arg2 ;
-(unsigned long long)sampleByteDepth;
-(void)setSampleByteDepth:(unsigned long long)arg1 ;
-(id)initWithFileUrl:(id)arg1 sampleByteDepth:(unsigned long long)arg2 ;
-(NSMutableData *)writeBuffer;
-(void)setWriteBuffer:(NSMutableData *)arg1 ;
@end

