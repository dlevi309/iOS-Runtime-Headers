/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(NSString *)name;
-(void)_invalidate;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 ;
-(void)setOwner:(HMUser *)arg1 ;
-(NSUUID *)uuid;
-(_HMContext *)context;
-(NSUUID *)uniqueIdentifier;
-(BOOL)isEnabled;
-(HMUser *)owner;
-(void)setUuid:(NSUUID *)arg1 ;
-(HMHome *)home;
-(HMUser *)creator;
-(void)setHome:(HMHome *)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(NSArray *)actionSets;
-(void)setLastFireDate:(NSDate *)arg1 ;
-(id)_serializeForAdd;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)_registerNotificationHandlers;
-(void)__configureWithContext:(id)arg1 home:(id)arg2 ;
-(void)_unconfigure;
-(HMMutableArray *)currentActionSets;
-(HMDevice *)ownerDevice;
-(void)_addActionSet:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateActionSet:(id)arg1 add:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_removeActionSet:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_enable:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addActionSetOfType:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_addActionSetOfType:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleTriggerFired:(id)arg1 ;
-(void)_handleUpdatedActionSetNotification:(id)arg1 ;
-(void)_handleTriggerRenamedNotification:(id)arg1 ;
-(void)_handleTriggerActivatedNotification:(id)arg1 ;
-(void)_handleTriggerFiredNotification:(id)arg1 ;
-(NSDate *)lastFireDate;
-(HMDevice *)creatorDevice;
-(void)setOwnerDevice:(HMDevice *)arg1 ;
-(void)addActionSet:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeActionSet:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)enable:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addActionSetWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)compatibleWithApp;
-(void)setCurrentActionSets:(HMMutableArray *)arg1 ;
@end

