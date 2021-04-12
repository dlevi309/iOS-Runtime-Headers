/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)bars;
-(long long)sampleCount;
-(void)setSampleCount:(long long)arg1 ;
-(void)setSampleRate:(long long)arg1 ;
-(long long)sampleRate;
-(void)setBars:(long long)arg1 ;
-(long long)bpm;
-(void)setBpm:(long long)arg1 ;
-(long long)samplesPerBar;
-(void)setSamplesPerBar:(long long)arg1 ;
-(NSArray *)customBarMarkers;
-(void)setCustomBarMarkers:(NSArray *)arg1 ;
@end

