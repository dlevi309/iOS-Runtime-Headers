/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioServerApplication.framework/AudioServerApplication
*/


#import <AudioServerApplication/AudioServerApplication-Structs.h>
@interface ASAAudioFormat : NSObject {

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
-(unsigned)formatID;
-(id)description;
-(void)setSampleRate:(double)arg1 ;
-(void)setFormatID:(unsigned)arg1 ;
-(AudioStreamBasicDescription)audioStreamBasicDescription;
-(unsigned)bitsPerChannel;
-(unsigned)bytesPerFrame;
-(void)setBitsPerChannel:(unsigned)arg1 ;
-(void)setBytesPerFrame:(unsigned)arg1 ;
-(unsigned)bytesPerPacket;
-(void)setBytesPerPacket:(unsigned)arg1 ;
-(unsigned)channelsPerFrame;
-(void)setChannelsPerFrame:(unsigned)arg1 ;
-(unsigned)formatFlags;
-(void)setFormatFlags:(unsigned)arg1 ;
-(unsigned)framesPerPacket;
-(void)setFramesPerPacket:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)sampleRate;
-(id)initWithAudioStreamBasicDescription:(AudioStreamBasicDescription*)arg1 ;
-(id)initWithAudioStreamRangedDescription:(AudioStreamRangedDescription*)arg1 ;
-(double)minimumSampleRate;
-(double)maximumSampleRate;
-(void)setMinimumSampleRate:(double)arg1 ;
-(void)setMaximumSampleRate:(double)arg1 ;
-(AudioStreamRangedDescription)audioStreamRangedDescription;
@end

