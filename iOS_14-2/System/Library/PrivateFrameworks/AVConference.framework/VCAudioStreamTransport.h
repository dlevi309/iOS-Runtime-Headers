/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)onStop;
-(int)onStart;
-(void)stopWRM;
-(void)dealloc;
-(void*)realtimeContext;
-(void)setWRMCallId:(unsigned)arg1 ;
-(id)initWithDelegate:(id)arg1 handle:(tagHANDLE*)arg2 callId:(unsigned)arg3 localSSRC:(unsigned)arg4 enableNetworkMonitor:(BOOL)arg5 ;
-(void)setPreWarmState:(BOOL)arg1 ;
-(void)setWRMMetricConfig:(SCD_Struct_VC113*)arg1 ;
-(void)setWRMNotification:(SCD_Struct_VC114*)arg1 ;
-(void)setWRMCoexMetrics:(id)arg1 ;
-(void)reportWRMMetrics:(const SCD_Struct_VC131*)arg1 ;
-(void)onRTCPPacket:(tagRTCPPACKET*)arg1 arrivalNTPTime:(tagNTP)arg2 ;
-(void)startWRM;
-(id)initWithDelegate:(id)arg1 handle:(tagHANDLE*)arg2 callId:(unsigned)arg3 localSSRC:(unsigned)arg4 ;
@end

