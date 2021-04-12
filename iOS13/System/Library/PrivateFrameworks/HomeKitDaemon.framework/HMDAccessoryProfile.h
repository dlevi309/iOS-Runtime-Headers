/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDBulletinIdentifiers.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>
#import <libobjc.A.dylib/HMFDumpState.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class HMFMessageDispatcher, NSObject, NSUUID, NSString, HMDAccessory, NSArray, NSSet;

@interface HMDAccessoryProfile : HMFObject <HMDBulletinIdentifiers, HMDHomeMessageReceiver, HMFDumpState, HMFLogging, NSSecureCoding> {

	HMFMessageDispatcher* _msgDispatcher;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSUUID* _uniqueIdentifier;
	NSString* _logID;
	HMDAccessory* _accessory;
	NSArray* _services;

}

@property (nonatomic,copy,readonly) NSString * contextID; 
@property (nonatomic,copy,readonly) NSUUID * contextSPIUniqueIdentifier; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                        //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) HMFMessageDispatcher * msgDispatcher;                          //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;                                //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * logID;                                              //@synthesize logID=_logID - In the implementation block
@property (__weak,readonly) HMDAccessory * accessory;                                         //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) NSArray * services;                                            //@synthesize services=_services - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (copy,readonly) NSSet * messageReceiverChildren; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(BOOL)hasMessageReceiverChildren;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(NSString *)contextID;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)_encodeWithCoder:(id)arg1 ;
-(NSArray *)services;
-(HMDAccessory *)accessory;
-(id)logIdentifier;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(NSString *)logID;
-(id)dumpState;
-(void)registerForMessages;
-(HMFMessageDispatcher *)msgDispatcher;
-(NSUUID *)contextSPIUniqueIdentifier;
-(void)unconfigure;
-(id)runtimeState;
-(void)removeCloudData;
-(void)configureWithMessageDispatcher:(id)arg1 configurationTracker:(id)arg2 ;
-(id)initWithAccessory:(id)arg1 uniqueIdentifier:(id)arg2 services:(id)arg3 workQueue:(id)arg4 ;
-(void)handleInitialState;
-(id)initWithAccessory:(id)arg1 uniqueIdentifier:(id)arg2 services:(id)arg3 ;
-(id)findServiceWithType:(id)arg1 ;
@end

