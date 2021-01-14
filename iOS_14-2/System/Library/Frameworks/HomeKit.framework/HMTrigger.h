/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMObjectMerge.h>

@class HMFUnfairLock, NSString, NSUUID, NSDate, HMHome, HMDevice, HMUser, _HMContext, HMMutableArray, NSArray;

@interface HMTrigger : NSObject <HMFMessageReceiver, NSSecureCoding, HMObjectMerge> {

	HMFUnfairLock* _lock;
	BOOL _enabled;
	NSString* _name;
	NSUUID* _uniqueIdentifier;
	NSDate* _lastFireDate;
	NSUUID* _uuid;
	HMHome* _home;
	HMDevice* _ownerDevice;
	HMUser* _owner;
	_HMContext* _context;
	HMMutableArray* _currentActionSets;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                   //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,copy) NSString * name;                                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) _HMContext * context;                                          //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                   //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) HMMutableArray * currentActionSets;                              //@synthesize currentActionSets=_currentActionSets - In the implementation block
@property (assign,nonatomic,__weak) HMHome * home;                                            //@synthesize home=_home - In the implementation block
@property (nonatomic,copy) NSDate * lastFireDate;                                             //@synthesize lastFireDate=_lastFireDate - In the implementation block
@property (nonatomic,retain) HMDevice * ownerDevice;                                          //@synthesize ownerDevice=_ownerDevice - In the implementation block
@property (assign,nonatomic,__weak) HMUser * owner;                                           //@synthesize owner=_owner - In the implementation block
@property (nonatomic,readonly) HMDevice * creatorDevice; 
@property (nonatomic,__weak,readonly) HMUser * creator; 
@property (nonatomic,copy,readonly) NSArray * actionSets; 
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
-(HMUser *)owner;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(_HMContext *)context;
-(HMUser *)creator;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(NSArray *)actionSets;
-(void)setOwner:(HMUser *)arg1 ;
-(void)setLastFireDate:(NSDate *)arg1 ;
-(id)_serializeForAdd;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)_unconfigureContext;
-(void)_unconfigure;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(BOOL)isEnabled;
-(void)__configureWithContext:(id)arg1 home:(id)arg2 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(HMMutableArray *)currentActionSets;
-(HMDevice *)ownerDevice;
-(BOOL)_updateActionSetFromResponse:(id)arg1 responsePayload:(id)arg2 ;
-(void)_updateClientWithResults:(/*^block*/id)arg1 withError:(id)arg2 ;
-(void)_addActionSet:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_enable:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateActionSet:(id)arg1 add:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_removeActionSet:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_updateTriggerNameFromResponse:(/*^block*/id)arg1 responsePayload:(id)arg2 ;
-(void)addActionSetOfType:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleTriggerFired:(id)arg1 ;
-(NSDate *)lastFireDate;
-(void)_addActionSetOfType:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleTriggerFiredNotification:(id)arg1 ;
-(void)setOwnerDevice:(HMDevice *)arg1 ;
-(HMDevice *)creatorDevice;
-(void)addActionSet:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeActionSet:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)compatibleWithApp;
-(void)updateName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)enable:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addActionSetWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setCurrentActionSets:(HMMutableArray *)arg1 ;
-(void)setHome:(HMHome *)arg1 ;
-(void)_registerNotificationHandlers;
-(void)dealloc;
-(HMHome *)home;
@end

