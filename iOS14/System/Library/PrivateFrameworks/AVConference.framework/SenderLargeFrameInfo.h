/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@interface SenderLargeFrameInfo : NSObject {

	double probingInterval;
	double startTime;
	double lastProbingSequenceTimeExpect;
	double lastProbingSequenceTimeActual;
	unsigned largeFrameSizeRequested;
	unsigned largeFrameSizeAtCurrentBandwidth;
	unsigned probingSequencePacketSize;
	unsigned probingSequencePacketCount;
	int probingSequenceCount;
	int totalLargeFrameWaste;
	BOOL isLastFrameProbingSequence;
	BOOL isLargeFrameRequestDisabled;

}

@property (assign,nonatomic) double startTime; 
@property (assign,nonatomic) double lastProbingSequenceTimeExpect; 
@property (assign,nonatomic) double lastProbingSequenceTimeActual; 
@property (assign,nonatomic) unsigned largeFrameSizeRequested; 
@property (assign,nonatomic) unsigned largeFrameSizeAtCurrentBandwidth; 
@property (assign,nonatomic) unsigned probingSequencePacketSize; 
@property (assign,nonatomic) unsigned probingSequencePacketCount; 
@property (assign,nonatomic) int probingSequenceCount; 
@property (assign,nonatomic) int totalLargeFrameWaste; 
@property (assign,nonatomic) BOOL isLastFrameProbingSequence; 
@property (assign,nonatomic) BOOL isLargeFrameRequestDisabled; 
-(void)setStartTime:(double)arg1 ;
-(double)startTime;
-(double)lastProbingSequenceTimeExpect;
-(void)setLastProbingSequenceTimeExpect:(double)arg1 ;
-(double)lastProbingSequenceTimeActual;
-(void)setLastProbingSequenceTimeActual:(double)arg1 ;
-(unsigned)largeFrameSizeRequested;
-(void)setLargeFrameSizeRequested:(unsigned)arg1 ;
-(unsigned)largeFrameSizeAtCurrentBandwidth;
-(void)setLargeFrameSizeAtCurrentBandwidth:(unsigned)arg1 ;
-(unsigned)probingSequencePacketSize;
-(void)setProbingSequencePacketSize:(unsigned)arg1 ;
-(unsigned)probingSequencePacketCount;
-(void)setProbingSequencePacketCount:(unsigned)arg1 ;
-(int)probingSequenceCount;
-(void)setProbingSequenceCount:(int)arg1 ;
-(int)totalLargeFrameWaste;
-(void)setTotalLargeFrameWaste:(int)arg1 ;
-(BOOL)isLastFrameProbingSequence;
-(void)setIsLastFrameProbingSequence:(BOOL)arg1 ;
-(BOOL)isLargeFrameRequestDisabled;
-(void)setIsLargeFrameRequestDisabled:(BOOL)arg1 ;
@end

