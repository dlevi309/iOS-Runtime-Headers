/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>

@protocol OS_dispatch_queue;
@class HMDAppleMediaAccessory, NSUUID, NSObject, NSHashTable, NSString;

@interface HMDSoftwareUpdateManager : HMFObject <HMFMessageReceiver> {

	HMDAppleMediaAccessory* _accessory;
	NSUUID* _identifier;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSHashTable* _activeClients;

}

@property (nonatomic,copy,readonly) NSUUID * identifier;                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                      //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSHashTable * activeClients;                                   //@synthesize activeClients=_activeClients - In the implementation block
@property (__weak) HMDAppleMediaAccessory * accessory;                                        //@synthesize accessory=_accessory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(BOOL)isSupported;
-(id)init;
-(NSUUID *)identifier;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(HMDAppleMediaAccessory *)accessory;
-(void)setAccessory:(HMDAppleMediaAccessory *)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(id)messageDispatcher;
-(id)messageDestination;
-(void)fetchAvailableUpdateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startUpdate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)registerForMessages;
-(void)updateAvailableUpdate:(id)arg1 ;
-(void)_handleStart:(id)arg1 ;
-(void)_handleStop:(id)arg1 ;
-(void)_handleUpdateAvailableUpdate:(id)arg1 ;
-(NSHashTable *)activeClients;
@end

