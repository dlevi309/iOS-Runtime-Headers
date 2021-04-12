/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>
#import <libobjc.A.dylib/HMFDumpState.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>

@protocol OS_dispatch_queue;
@class NSString, NSUUID, HMDHome, NSObject, HMFMessageDispatcher, HMDApplicationData, NSSet;

@interface HMDRoom : HMFObject <HMFLogging, HMDHomeMessageReceiver, HMFDumpState, NSSecureCoding, HMDBackingStoreObjectProtocol> {

	NSString* _name;
	NSUUID* _uuid;
	HMDHome* _home;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMFMessageDispatcher* _msgDispatcher;
	HMDApplicationData* _appData;

}

@property (nonatomic,retain) NSString * name;                                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * serializedIdentifier; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                          //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                            //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,retain) HMDApplicationData * appData;                                    //@synthesize appData=_appData - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uuid;                                            //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic,__weak) HMDHome * home;                                           //@synthesize home=_home - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSSet * messageReceiverChildren; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
+(BOOL)supportsSecureCoding;
+(BOOL)hasMessageReceiverChildren;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(id)urlString;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSUUID *)uuid;
-(id)privateDescription;
-(id)dumpState;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(HMFMessageDispatcher *)msgDispatcher;
-(void)_registerForMessages;
-(void)encodeWithCoder:(id)arg1 ;
-(id)logIdentifier;
-(NSString *)name;
-(id)messageDestination;
-(id)attributeDescriptions;
-(id)initWithCoder:(id)arg1 ;
-(HMDApplicationData *)appData;
-(void)setName:(NSString *)arg1 ;
-(void)logEvent:(unsigned long long)arg1 ;
-(void)setHome:(HMDHome *)arg1 ;
-(void)dealloc;
-(HMDHome *)home;
-(void)_handleRenameRequest:(id)arg1 ;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(id)backingStoreObjects:(long long)arg1 ;
-(void)_handleRemoveAppDataModel:(id)arg1 message:(id)arg2 ;
-(void)_handleUpdateAppDataModel:(id)arg1 message:(id)arg2 ;
-(id)initWithName:(id)arg1 uuid:(id)arg2 home:(id)arg3 ;
-(void)configure:(id)arg1 queue:(id)arg2 ;
-(void)setAppData:(HMDApplicationData *)arg1 ;
-(id)assistantObject;
-(NSString *)serializedIdentifier;
-(void)_logEventWithViewInformation:(id)arg1 source:(unsigned long long)arg2 ;
-(void)_handleUpdateRoomModel:(id)arg1 message:(id)arg2 ;
@end

