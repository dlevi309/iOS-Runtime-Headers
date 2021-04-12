/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/VCTransportSession.h>
#import <libobjc.A.dylib/VCConnectionManagerDelegate.h>
#import <libobjc.A.dylib/VCIDSSessionInfoSynchronizerDelegate.h>

@class NSString, VCDatagramChannelIDS, VCIDSSessionInfoSynchronizer;

@interface VCTransportSessionIDS : VCTransportSession <VCConnectionManagerDelegate, VCIDSSessionInfoSynchronizerDelegate> {

	int _socket;
	NSString* _destination;
	VCDatagramChannelIDS* _datagramChannel;
	BOOL _requireEncryptionInfo;
	VCIDSSessionInfoSynchronizer* _sessionInfoSynchronizer;
	BOOL _isIDSDCEventUsageErrorReported;
	BOOL _isWiFiAssistActive;

}

@property (assign,nonatomic) int socket;                                                            //@synthesize socket=_socket - In the implementation block
@property (nonatomic,copy) NSString * destination;                                                  //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) VCIDSSessionInfoSynchronizer * sessionInfoSynchronizer;              //@synthesize sessionInfoSynchronizer=_sessionInfoSynchronizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)stop;
-(void)start;
-(NSString *)destination;
-(void)setDestination:(NSString *)arg1 ;
-(int)socket;
-(void)setWiFiAssist:(BOOL)arg1 ;
-(void)setSocket:(int)arg1 ;
-(id)initWithCallID:(unsigned)arg1 reportingAgent:(id)arg2 ;
-(void)primaryConnectionChanged:(id)arg1 oldPrimaryConnection:(id)arg2 ;
-(void)connectionCallback:(id)arg1 isInitialConnection:(BOOL)arg2 ;
-(id)initWithCallID:(unsigned)arg1 requireEncryptionInfo:(BOOL)arg2 reportingAgent:(id)arg3 notificationQueue:(id)arg4 isMultiwaySession:(BOOL)arg5 ;
-(void)dispatchedProcessDatagramChannelEventInfo:(id)arg1 ;
-(void)handleLinkConnectedWithInfo:(id)arg1 ;
-(void)handleLinkDisconnectedWithInfo:(id)arg1 ;
-(void)handleDefaultLinkUpdatedWithInfo:(id)arg1 ;
-(void)handlePreConnectionDataReceived:(id)arg1 ;
-(void)handleRATChanged:(id)arg1 ;
-(void)handleCellularMTUChanged:(id)arg1 ;
-(void)handleChannelInfoReport:(id)arg1 ;
-(void)handleIDSEncryptionInfoEvent:(id)arg1 ;
-(void)handleIDSMembershipChangeInfoEvent:(id)arg1 ;
-(void)handleUpdateRemoteSessionInfo:(id)arg1 ;
-(void)processDatagramChannelEventInfo:(id)arg1 ;
-(void)setPiggybackBlobPreference;
-(void)setConnectionSetupTime;
-(void)setQuickRelayServerProvider:(int)arg1 ;
-(void)setDefaultLink:(id)arg1 ;
-(void)resetParticipantGenerationCounter;
-(void)didEnableDuplication:(BOOL)arg1 activeConnection:(id)arg2 ;
-(void)discardConnection:(id)arg1 ;
-(void)updateParticipantGenerationCounter:(unsigned char)arg1 ;
-(void)optOutAllStreamsForConnection:(id)arg1 ;
-(void)VCIDSSessionInfoSynchronizer:(void*)arg1 sendVCIDSSessionInfoRequest:(id)arg2 ;
-(BOOL)getConnectionSetupData:(id*)arg1 withOptions:(id)arg2 error:(id*)arg3 ;
-(void)setConnectionSetupPiggybackBlob:(id)arg1 ;
-(id)connectionSetupPiggybackBlob;
-(int)getSignalStrengthBars:(int*)arg1 displayBars:(int*)arg2 maxDisplayBars:(int*)arg3 ;
-(int)flushBasebandQueueForConnection:(id)arg1 payloadInfoList:(id)arg2 ;
-(int)updateQualityIndicator:(int)arg1 isIPv6:(BOOL)arg2 ;
-(int)registerBasebandNotificationsForConnection:(id)arg1 ;
-(void)deregisterBasebandNotifications;
-(VCIDSSessionInfoSynchronizer *)sessionInfoSynchronizer;
@end

