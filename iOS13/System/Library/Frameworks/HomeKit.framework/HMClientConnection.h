/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)sharedInstance;
+(BOOL)areHomesConfigured;
+(id)siriHomeIdentifier;
+(BOOL)areAnyAccessoriesConfigured;
+(BOOL)areAnySpeakersConfigured;
+(BOOL)areAnyTelevisionAccessoriesConfigured;
-(id)init;
-(void)dealloc;
-(NSUUID *)uuid;
-(void)_registerToDaemon;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)_start;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(HMFMessageDispatcher *)msgDispatcher;
-(id)initWithNoValidation;
-(HMXPCClient *)xpcClient;
-(void)_reportResultsTohandler:(/*^block*/id)arg1 ;
-(void)_reportIntentResultTohandler:(/*^block*/id)arg1 ;
-(void)sendSiriCommand:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)sendIntentRequestCommand:(id)arg1 withPayload:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)requestSiriSyncDataWithValidity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setXpcClient:(HMXPCClient *)arg1 ;
@end

