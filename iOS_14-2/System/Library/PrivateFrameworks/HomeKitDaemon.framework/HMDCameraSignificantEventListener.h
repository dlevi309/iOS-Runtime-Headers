/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDCameraSnapshotIDSRelayReceiverDelegate.h>

@protocol HMDCameraSignificantEventListenerDelegate, OS_dispatch_queue;
@class NSUUID, HMFMessageDispatcher, NSObject, NSMutableDictionary, NSString;

@interface HMDCameraSignificantEventListener : HMFObject <HMFMessageReceiver, HMFLogging, HMDCameraSnapshotIDSRelayReceiverDelegate> {

	NSUUID* _messageTargetUUID;
	id<HMDCameraSignificantEventListenerDelegate> _delegate;
	HMFMessageDispatcher* _messageDispatcher;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableDictionary* _fetchHeroFrameContextBySessionUUID;
	NSString* _logIdentifier;
	/*^block*/id _idsRelayReceiverFactory;

}

@property (readonly) HMFMessageDispatcher * messageDispatcher;                                //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                  //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) NSMutableDictionary * fetchHeroFrameContextBySessionUUID;                //@synthesize fetchHeroFrameContextBySessionUUID=_fetchHeroFrameContextBySessionUUID - In the implementation block
@property (readonly) NSString * logIdentifier;                                                //@synthesize logIdentifier=_logIdentifier - In the implementation block
@property (copy) id idsRelayReceiverFactory;                                                  //@synthesize idsRelayReceiverFactory=_idsRelayReceiverFactory - In the implementation block
@property (__weak) id<HMDCameraSignificantEventListenerDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSUUID * messageTargetUUID;                                    //@synthesize messageTargetUUID=_messageTargetUUID - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id<HMDCameraSignificantEventListenerDelegate>)delegate;
-(void)start;
-(NSString *)logIdentifier;
-(HMFMessageDispatcher *)messageDispatcher;
-(void)setDelegate:(id<HMDCameraSignificantEventListenerDelegate>)arg1 ;
-(id)initWithMessageTargetUUID:(id)arg1 messageDispatcher:(id)arg2 workQueue:(id)arg3 logIdentifier:(id)arg4 ;
-(void)handleCameraSignificantEventDidOccurMessage:(id)arg1 ;
-(id)idsRelayReceiverFactory;
-(void)relayReceiver:(id)arg1 didReceiveData:(id)arg2 error:(id)arg3 ;
-(NSMutableDictionary *)fetchHeroFrameContextBySessionUUID;
-(void)relayReceiverDidAcceptIDSInvitation:(id)arg1 ;
-(void)relayReceiverIDSSessionDidStart:(id)arg1 ;
-(id)initWithCamera:(id)arg1 ;
-(void)setIdsRelayReceiverFactory:(id)arg1 ;
@end

