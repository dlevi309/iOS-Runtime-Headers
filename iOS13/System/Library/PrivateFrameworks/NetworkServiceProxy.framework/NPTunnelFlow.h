/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
*/


@protocol OS_dispatch_data;
@class NPTunnel, NSPAppRule, NPFlowProperties, NSDate, NSObject;

@interface NPTunnelFlow : NSObject {

	BOOL _hasTunnel;
	int _tunnelError;
	long long _fallbackReason;
	BOOL _isDirectConnectionViable;
	BOOL _fallbackDisabled;
	BOOL _enableDirectRace;
	BOOL _disconnectedByApp;
	BOOL _shouldComposeIntialData;
	unsigned long long _hashKey;
	unsigned long long _identifier;
	NPTunnel* _tunnel;
	long long _state;
	NSPAppRule* _appRule;
	NPFlowProperties* _extraFlowProperties;
	NSDate* _firstTxByteTimestamp;
	NSDate* _startDate;
	void* _window;
	unsigned long long _initialBytesLeftOver;
	NSObject*<OS_dispatch_data> _savedData;
	void* _fallbackTimer;
	void* _telemetryTimer;
	double _fallbackDelay;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_data> savedData;                 //@synthesize savedData=_savedData - In the implementation block
@property (assign,nonatomic) void* fallbackTimer;                                   //@synthesize fallbackTimer=_fallbackTimer - In the implementation block
@property (assign,nonatomic) void* telemetryTimer;                                  //@synthesize telemetryTimer=_telemetryTimer - In the implementation block
@property (assign,nonatomic) double fallbackDelay;                                  //@synthesize fallbackDelay=_fallbackDelay - In the implementation block
@property (nonatomic,readonly) unsigned long long hashKey;                          //@synthesize hashKey=_hashKey - In the implementation block
@property (assign,nonatomic) unsigned long long identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NPTunnel * tunnel;                                   //@synthesize tunnel=_tunnel - In the implementation block
@property (nonatomic,readonly) long long state;                                     //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSPAppRule * appRule;                                //@synthesize appRule=_appRule - In the implementation block
@property (nonatomic,readonly) NPFlowProperties * extraFlowProperties;              //@synthesize extraFlowProperties=_extraFlowProperties - In the implementation block
@property (assign,nonatomic) long long fallbackReason; 
@property (nonatomic,retain) NSDate * firstTxByteTimestamp;                         //@synthesize firstTxByteTimestamp=_firstTxByteTimestamp - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                                  //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) void* window;                                        //@synthesize window=_window - In the implementation block
@property (assign,nonatomic) unsigned long long initialBytesLeftOver;               //@synthesize initialBytesLeftOver=_initialBytesLeftOver - In the implementation block
@property (assign,nonatomic) BOOL isDirectConnectionViable;                         //@synthesize isDirectConnectionViable=_isDirectConnectionViable - In the implementation block
@property (assign,nonatomic) BOOL fallbackDisabled;                                 //@synthesize fallbackDisabled=_fallbackDisabled - In the implementation block
@property (nonatomic,readonly) BOOL enableDirectRace;                               //@synthesize enableDirectRace=_enableDirectRace - In the implementation block
@property (nonatomic,readonly) BOOL isClientFlowClosed; 
@property (nonatomic,readonly) BOOL isBestEffort; 
@property (assign,nonatomic) BOOL disconnectedByApp;                                //@synthesize disconnectedByApp=_disconnectedByApp - In the implementation block
@property (assign,nonatomic) BOOL shouldComposeIntialData;                          //@synthesize shouldComposeIntialData=_shouldComposeIntialData - In the implementation block
-(void)dealloc;
-(unsigned long long)identifier;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(NSDate *)startDate;
-(long long)state;
-(void)reportMetrics;
-(void*)window;
-(void)closeWithError:(int)arg1 ;
-(id)appData;
-(void)setAppData:(id)arg1 ;
-(long long)fallbackReason;
-(void)setFallbackReason:(long long)arg1 ;
-(void)setFallbackDelay:(double)arg1 ;
-(void)setInitialBytesLeftOver:(unsigned long long)arg1 ;
-(double)fallbackDelay;
-(unsigned long long)initialBytesLeftOver;
-(NSDate *)firstTxByteTimestamp;
-(void)handleAppData:(id)arg1 ;
-(BOOL)isDirectConnectionViable;
-(unsigned long long)hashKey;
-(void)setIsDirectConnectionViable:(BOOL)arg1 ;
-(NPTunnel *)tunnel;
-(void)sendDataToClient:(id)arg1 fromTunnel:(BOOL)arg2 ;
-(void)closeFromDirectConnectionWithError:(int)arg1 ;
-(void)readDataFromClient;
-(BOOL)enableDirectRace;
-(BOOL)fallbackDisabled;
-(NSPAppRule *)appRule;
-(void)setFallbackDisabled:(BOOL)arg1 ;
-(void)startDirectConnection;
-(void)stopDirectConnection;
-(BOOL)shouldSendDataToClient:(id)arg1 fromTunnel:(BOOL)arg2 ;
-(void)closeFromTunnel;
-(void)handleTunnelCanHandleMoreData;
-(void)reportTelemetry:(id)arg1 withService:(id)arg2 url:(id)arg3 ;
-(void)createTelemetryDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)handleTunnelConnected;
-(void)cleanupLosingConnection:(BOOL)arg1 ;
-(void)setFirstTxByteTimestamp:(NSDate *)arg1 ;
-(id)initWithTunnel:(id)arg1 appRule:(id)arg2 hashKey:(unsigned long long)arg3 extraFlowProperties:(id)arg4 ;
-(void)closeClientFlowWithError:(int)arg1 ;
-(BOOL)isClientFlowClosed;
-(NPFlowProperties *)extraFlowProperties;
-(BOOL)isBestEffort;
-(id)copyConnectionInfo;
-(void)processConnectionInfo:(id)arg1 ;
-(id)createFallbackConnectionInfoWithFallbackReason:(long long)arg1 ;
-(BOOL)disconnectedByApp;
-(id)combineStateInfo:(id)arg1 andConnectionInfo:(id)arg2 ;
-(void)increaseWindowSize:(unsigned long long)arg1 ;
-(void)handleTunnelDisconnected;
-(void)handleTunnelReadyForData;
-(void)setDisconnectedByApp:(BOOL)arg1 ;
-(BOOL)shouldComposeIntialData;
-(void)setShouldComposeIntialData:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_data>)savedData;
-(void)setSavedData:(NSObject*<OS_dispatch_data>)arg1 ;
-(void*)fallbackTimer;
-(void)setFallbackTimer:(void*)arg1 ;
-(void*)telemetryTimer;
-(void)setTelemetryTimer:(void*)arg1 ;
@end

