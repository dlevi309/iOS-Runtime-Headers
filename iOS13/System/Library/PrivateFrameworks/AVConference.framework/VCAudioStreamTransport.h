/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCMediaStreamTransport.h>
#import <libobjc.A.dylib/WRMClientDelegate.h>

@class WRMClient;

@interface VCAudioStreamTransport : VCMediaStreamTransport <WRMClientDelegate> {

	WRMClient* _wrmClient;
	VCAudioStreamTransportRealtimeContext* _realtimeContext;

}

@property (nonatomic,readonly) void* realtimeContext; 
-(void)dealloc;
-(void)onStart;
-(void*)realtimeContext;
-(void)setWRMCallId:(unsigned)arg1 ;
-(id)initWithDelegate:(id)arg1 handle:(tagHANDLE*)arg2 callId:(unsigned)arg3 localSSRC:(unsigned)arg4 enableNetworkMonitor:(BOOL)arg5 ;
-(void)setPreWarmState:(BOOL)arg1 ;
-(void)setWRMMetricConfig:(SCD_Struct_VC93*)arg1 ;
-(void)setWRMNotification:(SCD_Struct_VC92*)arg1 ;
-(void)reportWRMMetrics:(const SCD_Struct_VC111*)arg1 ;
-(void)onStop;
-(void)onRTCPPacket:(tagRTCPPACKET*)arg1 arrivalNTPTime:(tagNTP)arg2 ;
-(void)startWRM;
-(void)stopWRM;
-(id)initWithDelegate:(id)arg1 handle:(tagHANDLE*)arg2 callId:(unsigned)arg3 localSSRC:(unsigned)arg4 ;
@end

