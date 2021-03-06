/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
*/

#import <NetworkServiceProxy/NPTunnelFlowUDP.h>

@class NSPDNSPacket;

@interface NPTunnelFlowDNS : NPTunnelFlowUDP {

	BOOL _telemetryReported;
	NSPDNSPacket* _query;
	long long _tunnelResult;
	NSPDNSPacket* _tunnelDNSResponse;
	long long _directResult;
	NSPDNSPacket* _directDNSResponse;
	void* _tunnelResponseTimer;

}

@property (retain) NSPDNSPacket * query;                          //@synthesize query=_query - In the implementation block
@property (assign) long long tunnelResult;                        //@synthesize tunnelResult=_tunnelResult - In the implementation block
@property (retain) NSPDNSPacket * tunnelDNSResponse;              //@synthesize tunnelDNSResponse=_tunnelDNSResponse - In the implementation block
@property (assign) long long directResult;                        //@synthesize directResult=_directResult - In the implementation block
@property (retain) NSPDNSPacket * directDNSResponse;              //@synthesize directDNSResponse=_directDNSResponse - In the implementation block
@property (assign) void* tunnelResponseTimer;                     //@synthesize tunnelResponseTimer=_tunnelResponseTimer - In the implementation block
@property (assign) BOOL telemetryReported;                        //@synthesize telemetryReported=_telemetryReported - In the implementation block
-(NSPDNSPacket *)query;
-(void)setQuery:(NSPDNSPacket *)arg1 ;
-(void)handleAppData:(id)arg1 ;
-(void)sendDataToClient:(id)arg1 fromTunnel:(BOOL)arg2 ;
-(void)closeFromDirectConnectionWithError:(int)arg1 ;
-(BOOL)shouldSendDataToClient:(id)arg1 fromTunnel:(BOOL)arg2 ;
-(long long)tunnelResult;
-(void)setTunnelDNSResponse:(NSPDNSPacket *)arg1 ;
-(NSPDNSPacket *)tunnelDNSResponse;
-(void)setTunnelResult:(long long)arg1 ;
-(void*)tunnelResponseTimer;
-(void)setTunnelResponseTimer:(void*)arg1 ;
-(long long)directResult;
-(void)setDirectDNSResponse:(NSPDNSPacket *)arg1 ;
-(NSPDNSPacket *)directDNSResponse;
-(void)setDirectResult:(long long)arg1 ;
-(BOOL)checkAndReportTelemetry;
-(void)closeFromTunnel;
-(BOOL)telemetryReported;
-(void)setTelemetryReported:(BOOL)arg1 ;
-(id)addDNSInfoToTelemetry:(id)arg1 ;
-(id)resultToString:(long long)arg1 ;
-(id)createStateDictionaryWithResult:(long long)arg1 response:(id)arg2 ;
-(void)handleTunnelConnected;
-(void)cleanupLosingConnection:(BOOL)arg1 ;
@end

