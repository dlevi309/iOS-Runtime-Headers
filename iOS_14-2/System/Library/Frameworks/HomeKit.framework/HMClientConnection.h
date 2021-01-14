/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/HMFMessageReceiver.h>

@protocol OS_dispatch_queue;
@class NSObject, HMXPCClient, HMFMessageDispatcher, NSUUID, NSString;

@interface HMClientConnection : NSObject <HMFMessageReceiver> {

	NSObject*<OS_dispatch_queue> _clientQueue;
	HMXPCClient* _xpcClient;
	HMFMessageDispatcher* _msgDispatcher;
	NSUUID* _uuid;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                      //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,retain) HMXPCClient * xpcClient;                                         //@synthesize xpcClient=_xpcClient - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                            //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                   //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(BOOL)areAnyTelevisionAccessoriesConfigured;
+(id)siriHomeIdentifier;
+(id)siriCurrentHome;
+(BOOL)areHomesConfigured;
+(BOOL)areAnyAccessoriesConfigured;
+(BOOL)areAnyHomePodsConfigured;
+(BOOL)areAnyAppleTVAccessoriesConfigured;
+(BOOL)areAnySmallHomePodsConfigured;
+(BOOL)areAnySpeakersConfigured;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(NSUUID *)uuid;
-(id)init;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(HMFMessageDispatcher *)msgDispatcher;
-(void)_start;
-(HMXPCClient *)xpcClient;
-(void)_registerToDaemon;
-(id)initWithNoValidation;
-(void)_reportResultsTohandler:(/*^block*/id)arg1 ;
-(void)_reportIntentResultTohandler:(/*^block*/id)arg1 ;
-(void)sendSiriCommand:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)sendIntentRequestCommand:(id)arg1 withPayload:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)requestSiriSyncDataWithValidity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)dealloc;
-(void)setXpcClient:(HMXPCClient *)arg1 ;
@end

