/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>

@protocol OS_dispatch_queue;
@class NSObject, HMFMessageDispatcher, HMDHomeManager, NSMutableArray, NSString, NSUUID;

@interface HMDClientConnection : HMFObject <HMFMessageReceiver> {

	NSObject*<OS_dispatch_queue> _workQueue;
	HMFMessageDispatcher* _msgDispatcher;
	HMDHomeManager* _homeManager;
	NSMutableArray* _commandsBeingExecuted;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                          //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                            //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (assign,nonatomic,__weak) HMDHomeManager * homeManager;                             //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,retain) NSMutableArray * commandsBeingExecuted;                          //@synthesize commandsBeingExecuted=_commandsBeingExecuted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(HMDHomeManager *)homeManager;
-(void)setHomeManager:(HMDHomeManager *)arg1 ;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(HMFMessageDispatcher *)msgDispatcher;
-(void)_registerForMessages;
-(void)_handleSiriCommand:(id)arg1 ;
-(void)_handleDaemonRequest:(id)arg1 ;
-(void)_handleSiriSyncDataRequest:(id)arg1 ;
-(void)_handleSiriIntentRequest:(id)arg1 ;
-(NSMutableArray *)commandsBeingExecuted;
-(id)initWithHomeManager:(id)arg1 queue:(id)arg2 messageDispatcher:(id)arg3 ;
-(void)setCommandsBeingExecuted:(NSMutableArray *)arg1 ;
@end

