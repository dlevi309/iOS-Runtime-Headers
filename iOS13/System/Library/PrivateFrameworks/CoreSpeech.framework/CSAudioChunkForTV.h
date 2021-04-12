/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@class NSArray;

@interface CSAudioChunkForTV : NSObject {

	float _avgPower;
	float _peakPower;
	NSArray* _packets;
	unsigned long long _timeStamp;

}

@property (nonatomic,retain) NSArray * packets;                         //@synthesize packets=_packets - In the implementation block
@property (assign,nonatomic) float avgPower;                            //@synthesize avgPower=_avgPower - In the implementation block
@property (assign,nonatomic) float peakPower;                           //@synthesize peakPower=_peakPower - In the implementation block
@property (assign,nonatomic) unsigned long long timeStamp;              //@synthesize timeStamp=_timeStamp - In the implementation block
-(unsigned long long)timeStamp;
-(void)setTimeStamp:(unsigned long long)arg1 ;
-(id)initWithXPCObject:(id)arg1 ;
-(float)peakPower;
-(id)xpcObject;
-(void)setPackets:(NSArray *)arg1 ;
-(NSArray *)packets;
-(float)avgPower;
-(void)setAvgPower:(float)arg1 ;
-(void)setPeakPower:(float)arg1 ;
@end

