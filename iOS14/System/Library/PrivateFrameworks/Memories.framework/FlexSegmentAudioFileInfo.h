/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@class NSArray;

@interface FlexSegmentAudioFileInfo : NSObject {

	long long _sampleRate;
	long long _sampleCount;
	long long _bpm;
	long long _bars;
	long long _samplesPerBar;
	NSArray* _customBarMarkers;

}

@property (assign,nonatomic) long long sampleRate;                    //@synthesize sampleRate=_sampleRate - In the implementation block
@property (assign,nonatomic) long long sampleCount;                   //@synthesize sampleCount=_sampleCount - In the implementation block
@property (assign,nonatomic) long long bpm;                           //@synthesize bpm=_bpm - In the implementation block
@property (assign,nonatomic) long long bars;                          //@synthesize bars=_bars - In the implementation block
@property (assign,nonatomic) long long samplesPerBar;                 //@synthesize samplesPerBar=_samplesPerBar - In the implementation block
@property (nonatomic,retain) NSArray * customBarMarkers;              //@synthesize customBarMarkers=_customBarMarkers - In the implementation block
-(long long)bpm;
-(void)setSampleCount:(long long)arg1 ;
-(void)setBars:(long long)arg1 ;
-(long long)bars;
-(void)setSampleRate:(long long)arg1 ;
-(long long)sampleCount;
-(void)setBpm:(long long)arg1 ;
-(long long)sampleRate;
-(long long)samplesPerBar;
-(void)setSamplesPerBar:(long long)arg1 ;
-(NSArray *)customBarMarkers;
-(void)setCustomBarMarkers:(NSArray *)arg1 ;
@end

