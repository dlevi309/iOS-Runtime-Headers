/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSUUID, HMDRemoteLoginInitiator, HMDRemoteLoginReceiver, HMDAppleMediaAccessory, HMDRemoteLoginAnisetteDataHandler, ACAccount, NSObject, HMFMessageDispatcher, NSString, NSSet;

@interface HMDRemoteLoginHandler : HMFObject <HMDHomeMessageReceiver, HMFLogging, NSSecureCoding> {

	NSUUID* _uuid;
	HMDRemoteLoginInitiator* _initiator;
	HMDRemoteLoginReceiver* _receiver;
	HMDAppleMediaAccessory* _accessory;
	HMDRemoteLoginAnisetteDataHandler* _anisetteDataHandler;
	ACAccount* _loggedInAccount;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMFMessageDispatcher* _msgDispatcher;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                                 //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                                   //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                                        //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) HMDRemoteLoginInitiator * initiator;                                  //@synthesize initiator=_initiator - In the implementation block
@property (nonatomic,readonly) HMDRemoteLoginReceiver * receiver;                                    //@synthesize receiver=_receiver - In the implementation block
@property (nonatomic,__weak,readonly) HMDAppleMediaAccessory * accessory;                            //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) HMDRemoteLoginAnisetteDataHandler * anisetteDataHandler;              //@synthesize anisetteDataHandler=_anisetteDataHandler - In the implementation block
@property (nonatomic,retain) ACAccount * loggedInAccount;                                            //@synthesize loggedInAccount=_loggedInAccount - In the implementation block
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
+(id)remoteMessages;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uuid;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(HMDRemoteLoginInitiator *)initiator;
-(HMDRemoteLoginReceiver *)receiver;
-(HMDAppleMediaAccessory *)accessory;
-(id)logIdentifier;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(ACAccount *)loggedInAccount;
-(void)_initialize;
-(void)registerForMessages;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(HMFMessageDispatcher *)msgDispatcher;
-(void)setLoggedInAccount:(ACAccount *)arg1 ;
-(NSSet *)messageReceiverChildren;
-(void)configureWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2 ;
-(void)_updateLoggedInAccount:(id)arg1 ;
-(id)initWithAccessory:(id)arg1 loggedInAccountData:(id)arg2 ;
-(void)_registerForUsernameUpdates;
-(void)_handleRemoteLoginAccount:(id)arg1 message:(id)arg2 ;
-(HMDRemoteLoginAnisetteDataHandler *)anisetteDataHandler;
-(void)__handleUpdateLoggedInAccount:(id)arg1 ;
-(void)_sendAccountUpdateNotification:(id)arg1 ;
-(void)handleAccountUsernameUpdatedOnCurrentDevice:(id)arg1 ;
@end

