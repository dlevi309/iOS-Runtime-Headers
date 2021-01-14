/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol OS_dispatch_queue;
@class NSObject, AVConferenceXPCClient;

@interface AVCTestMonitor : NSObject {

	id _delegate;
	NSObject*<OS_dispatch_queue> _delegateNotificationQueue;
	AVConferenceXPCClient* _connection;

}
-(void)setForcedCapBitrate:(int)arg1 ;
-(void)setEmulatedRxPLR:(double)arg1 ;
-(void)setCannedReplayPath:(id)arg1 ;
-(id)delegate;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)setEnableLoopbackInterface:(BOOL)arg1 ;
-(void)setForcedTargetBitrate:(int)arg1 ;
-(void)setEnableOneToOneMode:(BOOL)arg1 ;
-(void)dealloc;
-(void)registerBlocksForNotifications;
-(void)deregisterBlocksForNotifications;
-(id)delegateNotificationQueue;
-(void)setupNotificationQueue:(id)arg1 ;
-(void)requestReport;
-(void)updateAudioInjectConfig:(id)arg1 ;
-(void)forceNetworkCellular:(BOOL)arg1 ;
-(void)setEmulatedNetworkConfigurationPath:(id)arg1 ;
@end

