/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>

@protocol HMDCloudShareMessengerDelegate, OS_dispatch_queue;
@class NSUUID, NSObject, HMFMessageDispatcher, NSString;

@interface HMDCloudShareMessenger : HMFObject <HMFLogging, HMFMessageReceiver> {

	NSUUID* _messageTargetUUID;
	id<HMDCloudShareMessengerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMFMessageDispatcher* _messageDispatcher;
	/*^block*/id _shareInvitationRetryHandler;

}

@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                  //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) HMFMessageDispatcher * messageDispatcher;                                //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (copy) id shareInvitationRetryHandler;                                              //@synthesize shareInvitationRetryHandler=_shareInvitationRetryHandler - In the implementation block
@property (__weak) id<HMDCloudShareMessengerDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSUUID * messageTargetUUID;                                              //@synthesize messageTargetUUID=_messageTargetUUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
-(id<HMDCloudShareMessengerDelegate>)delegate;
-(void)setDelegate:(id<HMDCloudShareMessengerDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)logIdentifier;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(HMFMessageDispatcher *)messageDispatcher;
-(void)configureWithHome:(id)arg1 ;
-(void)unconfigure;
-(void)requestShareInvitationDataFromUser:(id)arg1 ;
-(void)sendShareInvitationData:(id)arg1 toUser:(id)arg2 minimumHomeKitVersion:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithMessageTargetUUID:(id)arg1 workQueue:(id)arg2 ;
-(id)initWithMessageTargetUUID:(id)arg1 workQueue:(id)arg2 messageDispatcher:(id)arg3 ;
-(void)handleInviteMessage:(id)arg1 ;
-(void)handleRequestInviteMessage:(id)arg1 ;
-(void)_sendShareInvitationData:(id)arg1 toUser:(id)arg2 minimumHomeKitVersion:(id)arg3 retryCount:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(id)shareInvitationRetryHandler;
-(void)setShareInvitationRetryHandler:(id)arg1 ;
@end

