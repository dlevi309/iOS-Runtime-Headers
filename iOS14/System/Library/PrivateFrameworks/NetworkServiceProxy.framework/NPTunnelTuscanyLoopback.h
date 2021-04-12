/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
*/

#import <NetworkServiceProxy/NPTunnelTuscany.h>

@class NPTunnelFlow;

@interface NPTunnelTuscanyLoopback : NPTunnelTuscany {

	void* _window;
	NPTunnelFlow* _flow;

}

@property (assign) void* window;                     //@synthesize window=_window - In the implementation block
@property (retain) NPTunnelFlow * flow;              //@synthesize flow=_flow - In the implementation block
-(NPTunnelFlow *)flow;
-(void)setWindow:(void*)arg1 ;
-(void)removeFlow:(unsigned long long)arg1 ;
-(void)write:(id)arg1 ;
-(unsigned long long)maxFrameSize;
-(void)setFlow:(NPTunnelFlow *)arg1 ;
-(void*)window;
-(unsigned long long)initialWindowSize;
-(void)dealloc;
-(unsigned)dayPassSessionCounter;
-(void)cancelConnection;
-(id)initWithEndpoint:(id)arg1 parameters:(id)arg2 appRule:(id)arg3 flowProperties:(id)arg4 onRamp:(id)arg5 delegate:(id)arg6 ;
-(BOOL)addNewFlow:(id)arg1 ;
-(void)createTuscanyClient;
-(long long)currentMTU;
-(BOOL)selectBestEdge;
-(void)startConnectionTimer;
-(void)cancelConnectionTimer;
-(void)sendUsageReportWithRTT:(unsigned long long)arg1 geohash:(id)arg2 fallbackReason:(long long)arg3 ;
-(void)pingWithCompletionHandler:(/*^block*/id)arg1 ;
@end

