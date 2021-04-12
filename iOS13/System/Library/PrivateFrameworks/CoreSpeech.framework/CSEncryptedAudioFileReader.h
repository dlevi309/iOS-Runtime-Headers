/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@class NSURL, NSData;

@interface CSEncryptedAudioFileReader : NSObject {

	NSURL* _fileUrl;
	NSData* _aesKey;
	NSData* _readBuffer;
	unsigned long long _sampleByteDepth;

}

@property (nonatomic,retain) NSURL * fileUrl;                                 //@synthesize fileUrl=_fileUrl - In the implementation block
@property (nonatomic,retain) NSData * aesKey;                                 //@synthesize aesKey=_aesKey - In the implementation block
@property (nonatomic,retain) NSData * readBuffer;                             //@synthesize readBuffer=_readBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long sampleByteDepth;              //@synthesize sampleByteDepth=_sampleByteDepth - In the implementation block
-(NSURL *)fileUrl;
-(void)setFileUrl:(NSURL *)arg1 ;
-(NSData *)readBuffer;
-(void)setReadBuffer:(NSData *)arg1 ;
-(unsigned long long)sampleByteDepth;
-(id)initWithFileUrl:(id)arg1 aesKey:(id)arg2 sampleByteDepth:(unsigned long long)arg3 ;
-(BOOL)readAudioChunksWithCallback:(/*^block*/id)arg1 ;
-(NSData *)aesKey;
-(void)setAesKey:(NSData *)arg1 ;
-(void)setSampleByteDepth:(unsigned long long)arg1 ;
@end

