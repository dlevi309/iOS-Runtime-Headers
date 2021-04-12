/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/HMObjectMerge.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMFUnfairLock, NSUUID, _HMContext, HMAccessory, HMHome, NSArray, NSString;

@interface _HMAccessoryProfile : NSObject <HMObjectMerge, HMFMessageReceiver, NSSecureCoding> {

	HMFUnfairLock* _lock;
	NSUUID* _uniqueIdentifier;
	_HMContext* _context;
	HMAccessory* _accessory;
	HMHome* _home;
	NSUUID* _profileUniqueIdentifier;
	NSArray* _services;

}

@property (nonatomic,readonly) _HMContext * context;                                          //@synthesize context=_context - In the implementation block
@property (nonatomic,__weak,readonly) HMAccessory * accessory;                                //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,__weak,readonly) HMHome * home;                                          //@synthesize home=_home - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * profileUniqueIdentifier;                         //@synthesize profileUniqueIdentifier=_profileUniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * services;                                            //@synthesize services=_services - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * uniqueIdentifier;                                     //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(_HMContext *)context;
-(NSUUID *)uniqueIdentifier;
-(HMHome *)home;
-(NSArray *)services;
-(HMAccessory *)accessory;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(NSUUID *)profileUniqueIdentifier;
-(void)_registerNotificationHandlers;
-(void)handleRuntimeStateUpdate:(id)arg1 ;
-(id)initWithUUID:(id)arg1 services:(id)arg2 ;
-(void)__configureWithContext:(id)arg1 accessory:(id)arg2 ;
@end

