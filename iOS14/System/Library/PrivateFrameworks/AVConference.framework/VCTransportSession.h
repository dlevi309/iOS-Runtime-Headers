/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol OS_dispatch_queue, VCConnectionProtocol;
#import <AVConference/AVConference-Structs.h>
@class NSObject, NSString, TimingCollection, VCConnectionManager, NSMutableArray;

@interface VCTransportSession : NSObject {

	BOOL _isCallActive;
	BOOL _requiresWiFi;
	BOOL _useCompressedConnectionData;
	unsigned _basebandNotificationRegistrationToken;
	NSObject*<OS_dispatch_queue> _stateQueue;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	NSObject* _connectionSetupPiggybackBlob;
	NSString* _localFrameworkVersion;
	NSString* _remoteFrameworkVersion;
	opaqueRTCReportingRef _reportingAgent;
	TimingCollection* _perfTimings;
	VCConnectionManager* _connectionManager;
	/*^block*/id _eventHandler;
	NSMutableArray* _streams;
	opaque_pthread_mutex_t _stateLock;
	id<VCConnectionProtocol> _registeredConnection;

}

@property (nonatomic,readonly) int detailedErrorCode; 
@property (nonatomic,readonly) BOOL isHandoverSupported; 
@property (nonatomic,readonly) BOOL isRemoteOSPreLion; 
@property (assign,nonatomic) BOOL requiresWiFi;                                             //@synthesize requiresWiFi=_requiresWiFi - In the implementation block
@property (assign,nonatomic) BOOL useCompressedConnectionData;                              //@synthesize useCompressedConnectionData=_useCompressedConnectionData - In the implementation block
@property (nonatomic,readonly) unsigned connectionSetupRTTEstimate; 
@property (nonatomic,retain) NSObject * connectionSetupPiggybackBlob;                       //@synthesize connectionSetupPiggybackBlob=_connectionSetupPiggybackBlob - In the implementation block
@property (nonatomic,retain) TimingCollection * perfTimings;                                //@synthesize perfTimings=_perfTimings - In the implementation block
@property (nonatomic,readonly) VCConnectionManager * connectionManager;                     //@synthesize connectionManager=_connectionManager - In the implementation block
@property (nonatomic,copy) id eventHandler;                                                 //@synthesize eventHandler=_eventHandler - In the implementation block
@property (nonatomic,readonly) unsigned basebandNotificationRegistrationToken;              //@synthesize basebandNotificationRegistrationToken=_basebandNotificationRegistrationToken - In the implementation block
@property (assign,setter=setCallActive:,nonatomic) BOOL isCallActive; 
@property (nonatomic,retain) id<VCConnectionProtocol> registeredConnection;                 //@synthesize registeredConnection=_registeredConnection - In the implementation block
@property (readonly) int networkInterfaceType; 
@property (readonly) unsigned networkMTU; 
@property (readonly) BOOL isIPv6; 
+(int)vtpPacketTypeForStreamType:(unsigned)arg1 ;
+(unsigned)trafficClassForStreamType:(unsigned)arg1 ;
-(id)eventHandler;
-(void)setEventHandler:(id)arg1 ;
-(BOOL)requiresWiFi;
-(void)start;
-(void)stop;
-(BOOL)isIPv6;
-(int)networkInterfaceType;
-(VCConnectionManager *)connectionManager;
-(BOOL)isCallActive;
-(void)setCallActive:(BOOL)arg1 ;
-(void)setRequiresWiFi:(BOOL)arg1 ;
-(void)dealloc;
-(id)initWithNotificationQueue:(id)arg1 reportingAgent:(opaqueRTCReportingRef)arg2 ;
-(void)callEventHandlerWithEvent:(unsigned)arg1 info:(id)arg2 ;
-(int)createVFD:(int*)arg1 forStreamType:(unsigned)arg2 ;
-(unsigned)networkMTU;
-(BOOL)getConnectionSetupData:(id*)arg1 withOptions:(id)arg2 error:(id*)arg3 ;
-(void)setConnectionSetupPiggybackBlob:(NSObject *)arg1 ;
-(NSObject *)connectionSetupPiggybackBlob;
-(int)getSignalStrengthBars:(int*)arg1 displayBars:(int*)arg2 maxDisplayBars:(int*)arg3 ;
-(int)flushBasebandQueueForConnection:(id)arg1 payloadInfoList:(id)arg2 ;
-(int)updateQualityIndicator:(int)arg1 isIPv6:(BOOL)arg2 ;
-(int)registerBasebandNotificationsForConnection:(id)arg1 ;
-(void)deregisterBasebandNotifications;
-(void)setConnectionSelectionVersionWithLocalFrameworkVersion:(id)arg1 remoteFrameworkVersion:(id)arg2 ;
-(void)setPerfTimings:(TimingCollection *)arg1 ;
-(BOOL)useCompressedConnectionData;
-(void)setUseCompressedConnectionData:(BOOL)arg1 ;
-(int)detailedErrorCode;
-(void)reportNetworkConditionsDegraded;
-(BOOL)isRemoteOSPreLion;
-(void)handleMediaReceivedOverPeerToPeerLinkWithConnectionId:(int)arg1 ;
-(void)handleMediaReceivedOverRelayLinkWithConnectionId:(int)arg1 ;
-(int)flushBasebandQueueWithPayloads:(id)arg1 flushCount:(unsigned*)arg2 ;
-(unsigned)basebandNotificationRegistrationToken;
-(BOOL)isHandoverSupported;
-(int)updateBasebandForConnection:(id)arg1 ;
-(unsigned)connectionSetupRTTEstimate;
-(int)deregisterNotificationForTransportStream:(OpaqueVCTransportStreamRef)arg1 ;
-(void)cleanupBaseband;
-(void)handleTransportStreamDeactivated:(OpaqueVCTransportStreamRef)arg1 ;
-(void)setRegisteredConnection:(id<VCConnectionProtocol>)arg1 ;
-(int)createTransportStream:(OpaqueVCTransportStream*)arg1 withType:(unsigned)arg2 options:(id)arg3 ;
-(TimingCollection *)perfTimings;
-(id<VCConnectionProtocol>)registeredConnection;
@end

