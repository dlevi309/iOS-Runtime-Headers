/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMObjectMerge.h>

@class HMFUnfairLock, NSUUID, NSString, HMHome, _HMContext, HMMutableArray, NSArray;

@interface HMZone : NSObject <HMFMessageReceiver, NSSecureCoding, HMObjectMerge> {

	HMFUnfairLock* _lock;
	NSUUID* _uniqueIdentifier;
	NSString* _name;
	HMHome* _home;
	NSUUID* _uuid;
	_HMContext* _context;
	HMMutableArray* _currentRooms;

}

@property (nonatomic,retain) _HMContext * context;                                            //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) HMMutableArray * currentRooms;                                   //@synthesize currentRooms=_currentRooms - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                                 //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic,__weak) HMHome * home;                                            //@synthesize home=_home - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSArray * rooms; 
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;                                //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(NSUUID *)uuid;
-(id)init;
-(NSArray *)rooms;
-(id)initWithName:(id)arg1 uuid:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(_HMContext *)context;
-(HMMutableArray *)currentRooms;
-(NSString *)name;
-(id)roomWithUUID:(id)arg1 ;
-(void)setCurrentRooms:(HMMutableArray *)arg1 ;
-(void)_removeRoom:(id)arg1 ;
-(void)_removeRoom:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeRoom:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)_unconfigureContext;
-(void)_addRoom:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleRoomAddedNotification:(id)arg1 ;
-(void)_handleRoomRemovedNotification:(id)arg1 ;
-(void)_handleZoneRenamedNotification:(id)arg1 ;
-(void)_unconfigure;
-(void)addRoom:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)__configureWithContext:(id)arg1 home:(id)arg2 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)_updateName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setHome:(HMHome *)arg1 ;
-(void)_registerNotificationHandlers;
-(void)dealloc;
-(HMHome *)home;
-(void)setContext:(_HMContext *)arg1 ;
@end

