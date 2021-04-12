/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
*/

#import <AudioServerDriver/AudioServerDriver-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ASDStreamFormat : NSObject <NSCopying> {

	unsigned _formatID;
	unsigned _formatFlags;
	unsigned _bytesPerPacket;
	unsigned _framesPerPacket;
	unsigned _bytesPerFrame;
	unsigned _channelsPerFrame;
	unsigned _bitsPerChannel;
	double _sampleRate;
	double _minimumSampleRate;
	double _maximumSampleRate;

}

@property (assign,nonatomic) double sampleRate;                      //@synthesize sampleRate=_sampleRate - In the implementation block
@property (assign,nonatomic) unsigned formatID;                      //@synthesize formatID=_formatID - In the implementation block
@property (assign,nonatomic) unsigned formatFlags;                   //@synthesize formatFlags=_formatFlags - In the implementation block
@property (assign,nonatomic) unsigned bytesPerPacket;                //@synthesize bytesPerPacket=_bytesPerPacket - In the implementation block
@property (assign,nonatomic) unsigned framesPerPacket;               //@synthesize framesPerPacket=_framesPerPacket - In the implementation block
@property (assign,nonatomic) unsigned bytesPerFrame;                 //@synthesize bytesPerFrame=_bytesPerFrame - In the implementation block
@property (assign,nonatomic) unsigned channelsPerFrame;              //@synthesize channelsPerFrame=_channelsPerFrame - In the implementation block
@property (assign,nonatomic) unsigned bitsPerChannel;                //@synthesize bitsPerChannel=_bitsPerChannel - In the implementation block
@property (assign,nonatomic) double minimumSampleRate;               //@synthesize minimumSampleRate=_minimumSampleRate - In the implementation block
@property (assign,nonatomic) double maximumSampleRate;               //@synthesize maximumSampleRate=_maximumSampleRate - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSampleRate:(double)arg1 ;
-(double)sampleRate;
-(unsigned)formatID;
-(void)setFormatID:(unsigned)arg1 ;
-(unsigned)bitsPerChannel;
-(void)setBitsPerChannel:(unsigned)arg1 ;
-(unsigned)bytesPerFrame;
-(void)setBytesPerFrame:(unsigned)arg1 ;
-(unsigned)bytesPerPacket;
-(void)setBytesPerPacket:(unsigned)arg1 ;
-(unsigned)channelsPerFrame;
-(void)setChannelsPerFrame:(unsigned)arg1 ;
-(unsigned)formatFlags;
-(void)setFormatFlags:(unsigned)arg1 ;
-(unsigned)framesPerPacket;
-(void)setFramesPerPacket:(unsigned)arg1 ;
-(AudioStreamBasicDescription)audioStreamBasicDescription;
-(AudioStreamRangedDescription)audioStreamRangedDescription;
-(id)initWithAudioStreamBasicDescription:(AudioStreamBasicDescription*)arg1 ;
-(void)setMaximumSampleRate:(double)arg1 ;
-(void)setMinimumSampleRate:(double)arg1 ;
-(double)minimumSampleRate;
-(double)maximumSampleRate;
-(id)initWithSampleRate:(double)arg1 numChannels:(unsigned)arg2 commonPCMFormat:(unsigned)arg3 isInterleaved:(BOOL)arg4 ;
-(id)initWithAudioStreamRangedDescription:(AudioStreamRangedDescription*)arg1 ;
-(unsigned)framesToBytes:(unsigned)arg1 ;
@end

