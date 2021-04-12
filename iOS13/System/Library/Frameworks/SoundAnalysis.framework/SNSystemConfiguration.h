/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/


#import <SoundAnalysis/SoundAnalysis-Structs.h>
@interface SNSystemConfiguration : NSObject {

	unsigned _channelCount;
	double _sampleRate;

}

@property (assign,nonatomic) double sampleRate;                  //@synthesize sampleRate=_sampleRate - In the implementation block
@property (assign,nonatomic) unsigned channelCount;              //@synthesize channelCount=_channelCount - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSampleRate:(double)arg1 ;
-(double)sampleRate;
-(unsigned)channelCount;
-(void)setChannelCount:(unsigned)arg1 ;
-(id)initWithSampleRate:(double)arg1 channelCount:(unsigned)arg2 ;
@end

