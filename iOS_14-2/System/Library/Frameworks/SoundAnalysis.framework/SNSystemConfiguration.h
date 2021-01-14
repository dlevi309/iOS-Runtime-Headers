/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/


#import <SoundAnalysis/SoundAnalysis-Structs.h>
@interface SNSystemConfiguration : NSObject {

	unsigned _channelCount;
	double _sampleRate;

}

@property (assign,nonatomic) double sampleRate;                  //@synthesize sampleRate=_sampleRate - In the implementation block
@property (assign,nonatomic) unsigned channelCount;              //@synthesize channelCount=_channelCount - In the implementation block
-(unsigned)channelCount;
-(id)description;
-(void)setSampleRate:(double)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)sampleRate;
-(BOOL)isEqual:(id)arg1 ;
-(void)setChannelCount:(unsigned)arg1 ;
-(id)initWithSampleRate:(double)arg1 channelCount:(unsigned)arg2 ;
@end

