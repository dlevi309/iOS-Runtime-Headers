/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/

#import <CoreUtils/CoreUtils-Structs.h>
#import <libobjc.A.dylib/CUReadWriteRequestable.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, CUReadRequest, NSMutableArray, CUWriteRequest, CUNetLinkEndpoint, CUWiFiManager, CUBonjourDevice, NSString, CUNANDataSession, CUNetLinkManager;

@interface CUTCPConnection : NSObject <CUReadWriteRequestable> {

	AsyncConnectionRef _connector;
	NSObject*<OS_dispatch_source> _readSource;
	unsigned char _readSuspended;
	CUReadRequest* _readRequestCurrent;
	NSMutableArray* _readRequests;
	NSObject*<OS_dispatch_source> _writeSource;
	unsigned char _writeSuspended;
	CUWriteRequest* _writeRequestCurrent;
	NSMutableArray* _writeRequests;
	BOOL _activateCalled;
	/*^block*/id _activateCompletion;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	opaque_pthread_mutex_t _mutex;
	CUNetLinkEndpoint* _netLinkEndpoint;
	unsigned _trafficFlagsApplied;
	BOOL _trafficFlagsPending;
	LogCategory* _ucat;
	CUWiFiManager* _wifiTrafficManager;
	unsigned long long _ifExtendedFlags;
	unsigned _ifFlags;
	unsigned _ifIndex;
	unsigned _ifMedia;
	char _ifName[17];
	int _defaultPort;
	unsigned _flags;
	int _flowControlState;
	int _keepAliveSeconds;
	unsigned _netTransportType;
	int _socketFD;
	unsigned _trafficFlags;
	double _connectTimeoutSecs;
	double _dataTimeoutSecs;
	CUBonjourDevice* _destinationBonjour;
	NSString* _destinationString;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _errorHandler;
	/*^block*/id _flowControlChangedHandler;
	NSString* _interfaceName;
	/*^block*/id _invalidationHandler;
	NSString* _label;
	CUNANDataSession* _nanDataSession;
	CUNetLinkManager* _netLinkManager;
	/*^block*/id _serverInvalidationHandler;
	SCD_Union_CU21 _peerAddr;
	SCD_Union_CU21 _selfAddr;

}

@property (nonatomic,retain) CUNANDataSession * nanDataSession;                       //@synthesize nanDataSession=_nanDataSession - In the implementation block
@property (nonatomic,copy) id serverInvalidationHandler;                              //@synthesize serverInvalidationHandler=_serverInvalidationHandler - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* peerAddr;                    //@synthesize peerAddr=_peerAddr - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* selfAddr;                    //@synthesize selfAddr=_selfAddr - In the implementation block
@property (assign,nonatomic) double connectTimeoutSecs;                               //@synthesize connectTimeoutSecs=_connectTimeoutSecs - In the implementation block
@property (assign,nonatomic) double dataTimeoutSecs;                                  //@synthesize dataTimeoutSecs=_dataTimeoutSecs - In the implementation block
@property (nonatomic,retain) CUBonjourDevice * destinationBonjour;                    //@synthesize destinationBonjour=_destinationBonjour - In the implementation block
@property (nonatomic,copy) NSString * destinationString;                              //@synthesize destinationString=_destinationString - In the implementation block
@property (assign,nonatomic) int defaultPort;                                         //@synthesize defaultPort=_defaultPort - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id errorHandler;                                           //@synthesize errorHandler=_errorHandler - In the implementation block
@property (assign,nonatomic) unsigned flags;                                          //@synthesize flags=_flags - In the implementation block
@property (nonatomic,copy) id flowControlChangedHandler;                              //@synthesize flowControlChangedHandler=_flowControlChangedHandler - In the implementation block
@property (nonatomic,readonly) int flowControlState;                                  //@synthesize flowControlState=_flowControlState - In the implementation block
@property (nonatomic,copy) NSString * interfaceName;                                  //@synthesize interfaceName=_interfaceName - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (assign,nonatomic) int keepAliveSeconds;                                    //@synthesize keepAliveSeconds=_keepAliveSeconds - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) CUNetLinkManager * netLinkManager;                       //@synthesize netLinkManager=_netLinkManager - In the implementation block
@property (nonatomic,readonly) unsigned netTransportType;                             //@synthesize netTransportType=_netTransportType - In the implementation block
@property (assign,nonatomic) int socketFD;                                            //@synthesize socketFD=_socketFD - In the implementation block
@property (assign,nonatomic) unsigned trafficFlags;                                   //@synthesize trafficFlags=_trafficFlags - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(void)_invalidate;
-(unsigned)flags;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(void)_invalidated;
-(NSString *)interfaceName;
-(void)setInterfaceName:(NSString *)arg1 ;
-(void)setTrafficFlags:(unsigned)arg1 ;
-(void)readWithRequest:(id)arg1 ;
-(void)writeWithRequest:(id)arg1 ;
-(BOOL)activateDirectAndReturnError:(id*)arg1 ;
-(BOOL)_setupIOAndReturnError:(id*)arg1 ;
-(void)_processReads:(BOOL)arg1 ;
-(void)_prepareReadRequest:(id)arg1 ;
-(void)_abortReadsWithError:(id)arg1 ;
-(void)_completeReadRequest:(id)arg1 error:(id)arg2 ;
-(void)writeEndOfDataWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_prepareWriteRequest:(id)arg1 error:(id*)arg2 ;
-(void)_abortWritesWithError:(id)arg1 ;
-(void)_completeWriteRequest:(id)arg1 error:(id)arg2 ;
-(id)serverInvalidationHandler;
-(void)setServerInvalidationHandler:(id)arg1 ;
-(int)socketFD;
-(unsigned)trafficFlags;
-(BOOL)_activateDirectAndReturnError:(id*)arg1 ;
-(BOOL)_startConnectingToBonjourDevice:(id)arg1 error:(id*)arg2 ;
-(BOOL)_startConnectingToDestination:(id)arg1 error:(id*)arg2 ;
-(void)_netLinkStateChanged;
-(void)_updateTrafficRegistration;
-(BOOL)_readableData;
-(BOOL)_readStatus;
-(void)_processWrites:(BOOL)arg1 ;
-(/*function pointer*/void*)peerAddr;
-(/*function pointer*/void*)selfAddr;
-(double)connectTimeoutSecs;
-(void)setConnectTimeoutSecs:(double)arg1 ;
-(double)dataTimeoutSecs;
-(void)setDataTimeoutSecs:(double)arg1 ;
-(CUBonjourDevice *)destinationBonjour;
-(void)setDestinationBonjour:(CUBonjourDevice *)arg1 ;
-(NSString *)destinationString;
-(void)setDestinationString:(NSString *)arg1 ;
-(int)defaultPort;
-(void)setDefaultPort:(int)arg1 ;
-(id)flowControlChangedHandler;
-(void)setFlowControlChangedHandler:(id)arg1 ;
-(int)flowControlState;
-(int)keepAliveSeconds;
-(void)setKeepAliveSeconds:(int)arg1 ;
-(CUNANDataSession *)nanDataSession;
-(void)setNanDataSession:(CUNANDataSession *)arg1 ;
-(CUNetLinkManager *)netLinkManager;
-(void)setNetLinkManager:(CUNetLinkManager *)arg1 ;
-(unsigned)netTransportType;
-(void)setSocketFD:(int)arg1 ;
@end

