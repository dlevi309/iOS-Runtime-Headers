/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/VCTransportSession.h>

@class VCDatagramChannelIDS, NSString;

@interface VCTransportSessionIDS : VCTransportSession {

	VCDatagramChannelIDS* _datagramChannel;
	int _socket;
	NSString* _destination;
	BOOL _requireEncryptionInfo;
	BOOL _isIDSDCEventUsageErrorReported;

}

@property (assign,nonatomic) int socket;                        //@synthesize socket=_socket - In the implementation block
@property (nonatomic,copy) NSString * destination;              //@synthesize destination=_destination - In the implementation block
-(void)setDestination:(NSString *)arg1 ;
-(void)start;
-(int)socket;
-(void)stop;
-(void)onStop;
-(int)onStart;
-(void)setSocket:(int)arg1 ;
-(NSString *)destination;
-(void)dealloc;
-(id)initWithCallID:(unsigned)arg1 reportingAgent:(id)arg2 ;
-(id)initWithCallID:(unsigned)arg1 requireEncryptionInfo:(BOOL)arg2 reportingAgent:(id)arg3 notificationQueue:(id)arg4 ;
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
-(void)handleSessionInfoResponse:(id)arg1 ;
-(void)handleProbingResponse:(id)arg1 ;
-(void)handleCellularSoMaskChanged:(id)arg1 ;
-(void)processDatagramChannelEventInfo:(id)arg1 ;
-(unsigned)remoteDeviceVersionIDS;
-(void)cleanupDatagramChannel;
-(void)setPiggybackBlobPreference;
-(void)setConnectionSetupTime;
-(void)setQuickRelayServerProvider:(int)arg1 ;
-(id)datagramChannel;
-(BOOL)getConnectionSetupData:(id*)arg1 withOptions:(id)arg2 error:(id*)arg3 ;
-(void)setConnectionSetupPiggybackBlob:(id)arg1 ;
-(id)connectionSetupPiggybackBlob;
-(int)getSignalStrengthBars:(int*)arg1 displayBars:(int*)arg2 maxDisplayBars:(int*)arg3 ;
-(int)flushBasebandQueueForConnection:(id)arg1 payloadInfoList:(id)arg2 ;
-(int)updateQualityIndicator:(int)arg1 isIPv6:(BOOL)arg2 ;
-(int)registerBasebandNotificationsForConnection:(id)arg1 ;
-(void)deregisterBasebandNotifications;
@end

