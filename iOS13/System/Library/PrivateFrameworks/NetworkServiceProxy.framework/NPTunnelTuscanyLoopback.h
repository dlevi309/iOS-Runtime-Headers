/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)write:(id)arg1 ;
-(void*)window;
-(void)setWindow:(void*)arg1 ;
-(NPTunnelFlow *)flow;
-(void)setFlow:(NPTunnelFlow *)arg1 ;
-(unsigned long long)initialWindowSize;
-(void)cancelConnection;
-(void)removeFlow:(unsigned long long)arg1 ;
-(id)initWithEndpoint:(id)arg1 parameters:(id)arg2 appRule:(id)arg3 flowProperties:(id)arg4 onRamp:(id)arg5 delegate:(id)arg6 ;
-(BOOL)addNewFlow:(id)arg1 ;
-(unsigned long long)maxFrameSize;
-(void)createTuscanyClient;
-(unsigned)dayPassSessionCounter;
-(long long)currentMTU;
-(BOOL)selectBestEdge;
-(void)startConnectionTimer;
-(void)cancelConnectionTimer;
-(void)sendUsageReportWithRTT:(unsigned long long)arg1 geohash:(id)arg2 fallbackReason:(long long)arg3 ;
-(void)pingWithCompletionHandler:(/*^block*/id)arg1 ;
@end

