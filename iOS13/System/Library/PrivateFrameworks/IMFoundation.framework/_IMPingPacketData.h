/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/


#import <IMFoundation/IMFoundation-Structs.h>
@interface _IMPingPacketData : NSObject {

	int _sequenceNumber;
	BOOL _timedOut;
	int _error;
	timeval _timeSent;
	double _rtt;

}

@property (nonatomic,readonly) int sequenceNumber;              //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,readonly) BOOL timedOut;                   //@synthesize timedOut=_timedOut - In the implementation block
@property (nonatomic,readonly) timeval timeSent;                //@synthesize timeSent=_timeSent - In the implementation block
@property (nonatomic,readonly) int error;                       //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) double rtt;                      //@synthesize rtt=_rtt - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)error;
-(int)sequenceNumber;
-(id)initWithSequeneceNumber:(int)arg1 timesent:(timeval*)arg2 error:(int)arg3 ;
-(void)_markPacketAsTimedOut:(double)arg1 ;
-(void)_returnPacketArrived;
-(BOOL)timedOut;
-(timeval)timeSent;
-(double)rtt;
@end

