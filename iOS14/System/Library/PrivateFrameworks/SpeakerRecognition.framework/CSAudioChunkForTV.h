/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
*/


@class NSArray;

@interface CSAudioChunkForTV : NSObject {

	float _avgPower;
	float _peakPower;
	unsigned _numChannels;
	unsigned _audioFormat;
	NSArray* _packets;
	unsigned long long _timeStamp;
	unsigned long long _streamHandleID;

}

@property (nonatomic,retain) NSArray * packets;                              //@synthesize packets=_packets - In the implementation block
@property (assign,nonatomic) float avgPower;                                 //@synthesize avgPower=_avgPower - In the implementation block
@property (assign,nonatomic) float peakPower;                                //@synthesize peakPower=_peakPower - In the implementation block
@property (assign,nonatomic) unsigned long long timeStamp;                   //@synthesize timeStamp=_timeStamp - In the implementation block
@property (assign,nonatomic) unsigned numChannels;                           //@synthesize numChannels=_numChannels - In the implementation block
@property (assign,nonatomic) unsigned audioFormat;                           //@synthesize audioFormat=_audioFormat - In the implementation block
@property (assign,nonatomic) unsigned long long streamHandleID;              //@synthesize streamHandleID=_streamHandleID - In the implementation block
-(id)initWithXPCObject:(id)arg1 ;
-(id)xpcObject;
-(void)setPackets:(NSArray *)arg1 ;
-(unsigned long long)timeStamp;
-(NSArray *)packets;
-(unsigned)audioFormat;
-(void)setTimeStamp:(unsigned long long)arg1 ;
-(float)peakPower;
-(float)avgPower;
-(void)setAudioFormat:(unsigned)arg1 ;
-(unsigned long long)streamHandleID;
-(unsigned)numChannels;
-(void)setAvgPower:(float)arg1 ;
-(void)setPeakPower:(float)arg1 ;
-(void)setNumChannels:(unsigned)arg1 ;
-(void)setStreamHandleID:(unsigned long long)arg1 ;
@end

