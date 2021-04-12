/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDDeviceControllerDelegate.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>
#import <libobjc.A.dylib/HMFDumpState.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMFUnfairLock, HMDDevice, HMDDeviceController, NSUUID, HMDHome, HMDResidentDeviceManager, NSString;

@interface HMDResidentDevice : HMFObject <HMDDeviceControllerDelegate, HMDBackingStoreObjectProtocol, HMFDumpState, HMFLogging, NSSecureCoding> {

	HMFUnfairLock* _lock;
	HMDDevice* _device;
	HMDDeviceController* _deviceController;
	BOOL _enabled;
	BOOL _confirmed;
	BOOL _reachable;
	BOOL _lowBattery;
	NSUUID* _identifier;
	long long _batteryState;
	HMDHome* _home;
	HMDResidentDeviceManager* _residentDeviceManager;

}

@property (nonatomic,readonly) unsigned long long status; 
@property (getter=isBlocked,readonly) BOOL blocked; 
@property (nonatomic,readonly) unsigned long long capabilities; 
@property (nonatomic,copy) NSUUID * identifier;                                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) HMDDevice * device;                                                   //@synthesize device=_device - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                        //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isReachable,nonatomic) BOOL reachable;                                    //@synthesize reachable=_reachable - In the implementation block
@property (assign,nonatomic) long long batteryState;                                               //@synthesize batteryState=_batteryState - In the implementation block
@property (assign,getter=isLowBattery,nonatomic) BOOL lowBattery;                                  //@synthesize lowBattery=_lowBattery - In the implementation block
@property (assign,nonatomic,__weak) HMDHome * home;                                                //@synthesize home=_home - In the implementation block
@property (assign,nonatomic,__weak) HMDResidentDeviceManager * residentDeviceManager;              //@synthesize residentDeviceManager=_residentDeviceManager - In the implementation block
@property (getter=isConfirmed,nonatomic,readonly) BOOL confirmed;                                  //@synthesize confirmed=_confirmed - In the implementation block
@property (nonatomic,readonly) BOOL supportsSharedEventTriggerActivation; 
@property (nonatomic,readonly) BOOL supportsMediaSystem; 
@property (nonatomic,readonly) BOOL supportsMediaActions; 
@property (nonatomic,readonly) BOOL supportsShortcutActions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
+(id)logCategory;
+(id)batteryStateAsString:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(unsigned long long)status;
-(BOOL)isEnabled;
-(BOOL)isBlocked;
-(HMDDevice *)device;
-(id)initWithModel:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(HMDHome *)home;
-(id)shortDescription;
-(long long)batteryState;
-(BOOL)isLowBattery;
-(unsigned long long)capabilities;
-(void)setHome:(HMDHome *)arg1 ;
-(void)setDevice:(HMDDevice *)arg1 ;
-(id)logIdentifier;
-(BOOL)isReachable;
-(void)setReachable:(BOOL)arg1 ;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(void)setBatteryState:(long long)arg1 ;
-(BOOL)isConfirmed;
-(id)dumpState;
-(HMDResidentDeviceManager *)residentDeviceManager;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2 ;
-(BOOL)supportsShortcutActions;
-(BOOL)supportsMediaActions;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(void)configureWithHome:(id)arg1 ;
-(id)runtimeState;
-(BOOL)supportsSharedEventTriggerActivation;
-(BOOL)supportsMediaSystem;
-(void)__deviceUpdated:(id)arg1 ;
-(void)_handleResidentDeviceUpdateEnabled:(BOOL)arg1 ;
-(void)setLowBattery:(BOOL)arg1 ;
-(void)deviceController:(id)arg1 didUpdateDevice:(id)arg2 ;
-(id)__initWithDeviceController:(id)arg1 ;
-(id)deviceController;
-(void)_residentDeviceModelUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)_handleResidentDeviceUpdateConfirmed:(BOOL)arg1 ;
-(void)setResidentDeviceManager:(HMDResidentDeviceManager *)arg1 ;
@end

