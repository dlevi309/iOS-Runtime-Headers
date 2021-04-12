/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>
#import <libobjc.A.dylib/HMFDumpState.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>

@protocol OS_dispatch_queue;
@class NSString, NSUUID, NSObject, NSMutableArray, NSMutableDictionary, HMDHome, HMFMessageDispatcher, HMDApplicationData, NSSet;

@interface HMDServiceGroup : HMFObject <HMDHomeMessageReceiver, HMFDumpState, NSSecureCoding, HMDBackingStoreObjectProtocol> {

	NSString* _name;
	NSUUID* _uuid;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableArray* _serviceUUIDs;
	NSMutableDictionary* _serviceMapping;
	HMDHome* _home;
	HMFMessageDispatcher* _msgDispatcher;
	HMDApplicationData* _appData;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                          //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * serviceUUIDs;                                   //@synthesize serviceUUIDs=_serviceUUIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * serviceMapping;                            //@synthesize serviceMapping=_serviceMapping - In the implementation block
@property (assign,nonatomic,__weak) HMDHome * home;                                           //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                            //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,retain) HMDApplicationData * appData;                                    //@synthesize appData=_appData - In the implementation block
@property (nonatomic,retain) NSString * name;                                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                                 //@synthesize uuid=_uuid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (copy,readonly) NSSet * messageReceiverChildren; 
+(BOOL)supportsSecureCoding;
+(BOOL)hasMessageReceiverChildren;
-(void)dealloc;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSUUID *)uuid;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(HMDHome *)home;
-(void)setHome:(HMDHome *)arg1 ;
-(id)urlString;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)removeService:(id)arg1 ;
-(HMDApplicationData *)appData;
-(void)setAppData:(HMDApplicationData *)arg1 ;
-(id)dumpState;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(HMFMessageDispatcher *)msgDispatcher;
-(NSMutableArray *)serviceUUIDs;
-(void)_registerForMessages;
-(void)_handleRenameRequest:(id)arg1 ;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 ;
-(id)backingStoreObjects:(long long)arg1 ;
-(void)_handleRemoveAppDataModel:(id)arg1 message:(id)arg2 ;
-(void)_handleUpdateAppDataModel:(id)arg1 message:(id)arg2 ;
-(void)configure:(id)arg1 queue:(id)arg2 ;
-(id)initWithName:(id)arg1 uuid:(id)arg2 home:(id)arg3 queue:(id)arg4 ;
-(void)fixupServicesForReplacementAccessory:(id)arg1 ;
-(void)removeServicesForAccessory:(id)arg1 ;
-(id)updateServiceGroupWithModel:(id)arg1 message:(id)arg2 ;
-(void)fixupServiceGroup;
-(id)assistantObject;
-(NSMutableDictionary *)serviceMapping;
-(void)setServiceIfPresent:(id)arg1 ;
-(id)_handleUpdateServicesTransaction:(id)arg1 error:(id*)arg2 ;
-(void)_handleAddServiceRequest:(id)arg1 ;
-(void)_handleRemoveServiceRequest:(id)arg1 ;
-(void)_transactionServiceGroupUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(id)_handleUpdateNameTransaction:(id)arg1 error:(id*)arg2 ;
-(void)setServiceUUIDs:(NSMutableArray *)arg1 ;
-(void)setServiceMapping:(NSMutableDictionary *)arg1 ;
@end

