/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class NSObject, TimingCollection, VCConnectionManager;

@interface VCTransportSession : NSObject {

	BOOL _isCallActive;
	BOOL _requiresWiFi;
	BOOL _useCompressedConnectionData;
	BOOL _didRegisterForBasebandNotifications;
	unsigned _basebandNotificationRegistrationToken;
	NSObject*<OS_dispatch_queue> _stateQueue;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	NSObject* _connectionSetupPiggybackBlob;
	opaqueRTCReportingRef _reportingAgent;
	TimingCollection* _perfTimings;
	VCConnectionManager* _connectionManager;
	/*^block*/id _eventHandler;

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
-(void)dealloc;
-(void)stop;
-(void)start;
-(id)eventHandler;
-(void)setEventHandler:(id)arg1 ;
-(VCConnectionManager *)connectionManager;
-(void)setRequiresWiFi:(BOOL)arg1 ;
-(BOOL)requiresWiFi;
-(id)initWithNotificationQueue:(id)arg1 reportingAgent:(opaqueRTCReportingRef)arg2 ;
-(BOOL)isHandoverSupported;
-(void)callEventHandlerWithEvent:(unsigned)arg1 info:(id)arg2 ;
-(int)updateBasebandForConnection:(id)arg1 ;
-(BOOL)getConnectionSetupData:(id*)arg1 withOptions:(id)arg2 error:(id*)arg3 ;
-(void)setConnectionSetupPiggybackBlob:(NSObject *)arg1 ;
-(NSObject *)connectionSetupPiggybackBlob;
-(int)getSignalStrengthBars:(int*)arg1 displayBars:(int*)arg2 maxDisplayBars:(int*)arg3 ;
-(int)flushBasebandQueueForConnection:(id)arg1 payloadInfoList:(id)arg2 ;
-(int)updateQualityIndicator:(int)arg1 isIPv6:(BOOL)arg2 ;
-(int)registerBasebandNotificationsForConnection:(id)arg1 ;
-(void)deregisterBasebandNotifications;
-(void)setPerfTimings:(TimingCollection *)arg1 ;
-(BOOL)useCompressedConnectionData;
-(void)setUseCompressedConnectionData:(BOOL)arg1 ;
-(int)detailedErrorCode;
-(void)reportNetworkConditionsDegraded;
-(void)setCallActive:(BOOL)arg1 ;
-(BOOL)isRemoteOSPreLion;
-(void)handleMediaReceivedOverPeerToPeerLinkWithConnectionId:(int)arg1 ;
-(void)handleMediaReceivedOverRelayLinkWithConnectionId:(int)arg1 ;
-(int)flushBasebandQueueWithPayloads:(id)arg1 flushCount:(unsigned*)arg2 ;
-(unsigned)basebandNotificationRegistrationToken;
-(unsigned)connectionSetupRTTEstimate;
-(void)cleanupBaseband;
-(BOOL)isCallActive;
-(TimingCollection *)perfTimings;
@end

