/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>

@protocol OS_dispatch_queue, HMDAccessoryBrowserProtocol;
@class NSObject, HMFMessageDispatcher, HMDHome, HMFTimer, NSMutableDictionary, NSString, NSUUID, NSSet;

@interface HMDHomeReprovisionHandler : HMFObject <HMFTimerDelegate, HMFLogging, HMDHomeMessageReceiver> {

	BOOL _reprovisionBrowsingAllowed;
	BOOL _reprovisionBrowsingPending;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMFMessageDispatcher* _msgDispatcher;
	HMDHome* _home;
	id<HMDAccessoryBrowserProtocol> _accessoryBrowser;
	HMFTimer* _disableReprovisionBrowsingTimer;
	NSMutableDictionary* _pendingReprovisionRequests;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                                           //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                                             //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (assign,nonatomic,__weak) HMDHome * home;                                                            //@synthesize home=_home - In the implementation block
@property (assign,nonatomic,__weak) id<HMDAccessoryBrowserProtocol> accessoryBrowser;                          //@synthesize accessoryBrowser=_accessoryBrowser - In the implementation block
@property (assign,getter=isReprovisionBrowsingAllowed,nonatomic) BOOL reprovisionBrowsingAllowed;              //@synthesize reprovisionBrowsingAllowed=_reprovisionBrowsingAllowed - In the implementation block
@property (assign,getter=isReprovisionBrowsingPending,nonatomic) BOOL reprovisionBrowsingPending;              //@synthesize reprovisionBrowsingPending=_reprovisionBrowsingPending - In the implementation block
@property (nonatomic,retain) HMFTimer * disableReprovisionBrowsingTimer;                                       //@synthesize disableReprovisionBrowsingTimer=_disableReprovisionBrowsingTimer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingReprovisionRequests;                                 //@synthesize pendingReprovisionRequests=_pendingReprovisionRequests - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (copy,readonly) NSSet * messageReceiverChildren; 
+(id)logCategory;
+(BOOL)hasMessageReceiverChildren;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(HMDHome *)home;
-(void)setHome:(HMDHome *)arg1 ;
-(id)logIdentifier;
-(void)timerDidFire:(id)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(id)messageDestination;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(HMFMessageDispatcher *)msgDispatcher;
-(void)setAccessoryBrowser:(id<HMDAccessoryBrowserProtocol>)arg1 ;
-(id<HMDAccessoryBrowserProtocol>)accessoryBrowser;
-(void)_registerForMessages;
-(void)configure:(id)arg1 queue:(id)arg2 messageDispatcher:(id)arg3 ;
-(void)handleFoundAccessoryNeedingReprovisioning:(id)arg1 error:(id)arg2 ;
-(void)handleReprovionedAccessory:(id)arg1 identifier:(id)arg2 error:(id)arg3 ;
-(void)_handleRequestSearchForAccessoriesNeedingReprovisioning:(id)arg1 ;
-(void)_handleReprovisionAccessory:(id)arg1 ;
-(BOOL)isReprovisionBrowsingAllowed;
-(void)setReprovisionBrowsingPending:(BOOL)arg1 ;
-(HMFTimer *)disableReprovisionBrowsingTimer;
-(void)setReprovisionBrowsingAllowed:(BOOL)arg1 ;
-(void)setDisableReprovisionBrowsingTimer:(HMFTimer *)arg1 ;
-(void)_reportAccessoryNeedingReprovision:(id)arg1 error:(id)arg2 ;
-(void)_reprovisionAccessory:(id)arg1 networkCredential:(id)arg2 requestMessage:(id)arg3 ;
-(NSMutableDictionary *)pendingReprovisionRequests;
-(BOOL)isReprovisionBrowsingPending;
-(void)_handleDisableReprovisionBrowsingTimerFired;
-(void)setPendingReprovisionRequests:(NSMutableDictionary *)arg1 ;
@end

