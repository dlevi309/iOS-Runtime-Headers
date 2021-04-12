/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>
#import <libobjc.A.dylib/HMFDumpState.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>

@protocol OS_dispatch_queue;
@class NSString, NSUUID, NSMutableDictionary, NSMutableArray, NSObject, HMDHome, HMFMessageDispatcher, NSSet;

@interface HMDZone : HMFObject <HMDHomeMessageReceiver, HMFDumpState, NSSecureCoding, HMDBackingStoreObjectProtocol> {

	NSString* _name;
	NSUUID* _uuid;
	NSMutableDictionary* _currentRooms;
	NSMutableArray* _roomUUIDs;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMDHome* _home;
	HMFMessageDispatcher* _msgDispatcher;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                          //@synthesize workQueue=_workQueue - In the implementation block
@property (assign,nonatomic,__weak) HMDHome * home;                                           //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                            //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,retain) NSString * name;                                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                                 //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * currentRooms;                              //@synthesize currentRooms=_currentRooms - In the implementation block
@property (nonatomic,retain) NSMutableArray * roomUUIDs;                                      //@synthesize roomUUIDs=_roomUUIDs - In the implementation block
@property (copy,readonly) NSSet * messageReceiverChildren; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(BOOL)hasMessageReceiverChildren;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(id)urlString;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSUUID *)uuid;
-(id)rooms;
-(id)dumpState;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(HMFMessageDispatcher *)msgDispatcher;
-(void)_registerForMessages;
-(void)encodeWithCoder:(id)arg1 ;
-(NSMutableDictionary *)currentRooms;
-(NSString *)name;
-(id)roomWithUUID:(id)arg1 ;
-(void)setCurrentRooms:(NSMutableDictionary *)arg1 ;
-(id)roomWithName:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSMutableArray *)roomUUIDs;
-(void)setRoomUUIDs:(NSMutableArray *)arg1 ;
-(void)removeRoom:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setHome:(HMDHome *)arg1 ;
-(void)dealloc;
-(HMDHome *)home;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 ;
-(id)backingStoreObjects:(long long)arg1 ;
-(void)configure:(id)arg1 queue:(id)arg2 ;
-(void)_handleRename:(id)arg1 ;
-(void)_handleAddRoom:(id)arg1 ;
-(void)_handleRemoveRoom:(id)arg1 ;
-(id)initWithName:(id)arg1 uuid:(id)arg2 home:(id)arg3 queue:(id)arg4 ;
-(id)updateZoneWithModel:(id)arg1 message:(id)arg2 ;
-(id)assistantObject;
-(id)_handleSetRoomsZoneTransaction:(id)arg1 error:(id*)arg2 ;
-(id)_checkForAddValidity:(id)arg1 room:(id*)arg2 ;
-(id)_handleRenameZoneTransaction:(id)arg1 error:(id*)arg2 ;
@end

