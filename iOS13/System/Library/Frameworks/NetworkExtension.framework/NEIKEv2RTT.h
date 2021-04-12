/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


#import <NetworkExtension/NetworkExtension-Structs.h>
@interface NEIKEv2RTT : NSObject {

	unsigned short _rxt_shift;
	int _lastRequestMessageID;
	unsigned long long _rtt_cur;
	unsigned long long _srtt;
	unsigned long long _rtt_var;
	unsigned long long _rtt_start_time;
	unsigned long long _rtt_min;
	unsigned long long _rtt_updated;
	unsigned long long _rxt_cur;

}

@property (assign,nonatomic) int lastRequestMessageID;                       //@synthesize lastRequestMessageID=_lastRequestMessageID - In the implementation block
@property (assign,nonatomic) unsigned long long rtt_cur;                     //@synthesize rtt_cur=_rtt_cur - In the implementation block
@property (assign,nonatomic) unsigned long long srtt;                        //@synthesize srtt=_srtt - In the implementation block
@property (assign,nonatomic) unsigned long long rtt_var;                     //@synthesize rtt_var=_rtt_var - In the implementation block
@property (assign,nonatomic) unsigned long long rtt_start_time;              //@synthesize rtt_start_time=_rtt_start_time - In the implementation block
@property (assign,nonatomic) unsigned long long rtt_min;                     //@synthesize rtt_min=_rtt_min - In the implementation block
@property (assign,nonatomic) unsigned long long rtt_updated;                 //@synthesize rtt_updated=_rtt_updated - In the implementation block
@property (assign,nonatomic) unsigned long long rxt_cur;                     //@synthesize rxt_cur=_rxt_cur - In the implementation block
@property (assign,nonatomic) unsigned short rxt_shift;                       //@synthesize rxt_shift=_rxt_shift - In the implementation block
-(id)init;
-(void)reset;
-(int)lastRequestMessageID;
-(void)setLastRequestMessageID:(int)arg1 ;
-(BOOL)startRTTMeasurement:(id)arg1 requestMessageID:(int)arg2 ;
-(unsigned long long)nextRetransmissionInterval;
-(void)updateRTT:(id)arg1 responseMessageID:(int)arg2 ;
-(void)setRxt_cur:(unsigned long long)arg1 ;
-(void)setRtt_min:(unsigned long long)arg1 ;
-(void)setSrtt:(unsigned long long)arg1 ;
-(void)setRtt_var:(unsigned long long)arg1 ;
-(void)setRtt_cur:(unsigned long long)arg1 ;
-(void)setRtt_start_time:(unsigned long long)arg1 ;
-(void)setRtt_updated:(unsigned long long)arg1 ;
-(void)setRxt_shift:(unsigned short)arg1 ;
-(BOOL)getCurrentTime:(timeval*)arg1 ;
-(unsigned long long)srtt;
-(unsigned short)rxt_shift;
-(unsigned long long)rtt_min;
-(unsigned long long)rtt_var;
-(unsigned long long)rxt_cur;
-(void)resetRTTMeasurement;
-(unsigned long long)rtt_start_time;
-(unsigned long long)rtt_updated;
-(unsigned long long)rtt_cur;
@end

