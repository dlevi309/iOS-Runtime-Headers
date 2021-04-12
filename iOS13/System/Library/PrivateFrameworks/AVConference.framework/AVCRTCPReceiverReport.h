/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/AVCRTCPPacket.h>

@interface AVCRTCPReceiverReport : AVCRTCPPacket {

	unsigned _reportedSourceSSRC;
	unsigned char _fractionLost;
	unsigned _cumulativePacketsLost;
	unsigned _extendedHighestSequenceNumber;
	unsigned _interarrivalJitter;
	unsigned _lastSRTimestamp;
	unsigned _delaySinceLastSR;

}

@property (assign,nonatomic) unsigned reportedSourceSSRC;                         //@synthesize reportedSourceSSRC=_reportedSourceSSRC - In the implementation block
@property (assign,nonatomic) unsigned char fractionLost;                          //@synthesize fractionLost=_fractionLost - In the implementation block
@property (assign,nonatomic) unsigned cumulativePacketsLost;                      //@synthesize cumulativePacketsLost=_cumulativePacketsLost - In the implementation block
@property (assign,nonatomic) unsigned extendedHighestSequenceNumber;              //@synthesize extendedHighestSequenceNumber=_extendedHighestSequenceNumber - In the implementation block
@property (assign,nonatomic) unsigned interarrivalJitter;                         //@synthesize interarrivalJitter=_interarrivalJitter - In the implementation block
@property (assign,nonatomic) unsigned lastSRTimestamp;                            //@synthesize lastSRTimestamp=_lastSRTimestamp - In the implementation block
@property (assign,nonatomic) unsigned delaySinceLastSR;                           //@synthesize delaySinceLastSR=_delaySinceLastSR - In the implementation block
-(id)description;
-(id)initWithRTCPPacket:(tagRTCPPACKET*)arg1 ;
-(unsigned)reportedSourceSSRC;
-(unsigned char)fractionLost;
-(unsigned)cumulativePacketsLost;
-(unsigned)extendedHighestSequenceNumber;
-(unsigned)interarrivalJitter;
-(unsigned)lastSRTimestamp;
-(unsigned)delaySinceLastSR;
-(void)setReportedSourceSSRC:(unsigned)arg1 ;
-(void)setFractionLost:(unsigned char)arg1 ;
-(void)setCumulativePacketsLost:(unsigned)arg1 ;
-(void)setExtendedHighestSequenceNumber:(unsigned)arg1 ;
-(void)setInterarrivalJitter:(unsigned)arg1 ;
-(void)setLastSRTimestamp:(unsigned)arg1 ;
-(void)setDelaySinceLastSR:(unsigned)arg1 ;
@end

