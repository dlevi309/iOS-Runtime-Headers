/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFObject.h>
#import <libobjc.A.dylib/HMObjectMerge.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol HMResidentDeviceDelegate;
@class HMFUnfairLock, NSUUID, HMHome, HMDevice, _HMContext, NSString, NSArray;

@interface HMResidentDevice : NSObject <HMFLogging, HMFObject, HMObjectMerge, NSSecureCoding> {

	HMFUnfairLock* _lock;
	BOOL _enabled;
	NSUUID* _uniqueIdentifier;
	unsigned long long _status;
	HMHome* _home;
	NSUUID* _accountIdentifier;
	unsigned long long _capabilities;
	id<HMResidentDeviceDelegate> _delegate;
	HMDevice* _device;
	_HMContext* _context;
	NSUUID* _uuid;

}

@property (nonatomic,retain) _HMContext * context;                                //@synthesize context=_context - In the implementation block
@property (getter=isEnabled) BOOL enabled;                                        //@synthesize enabled=_enabled - In the implementation block
@property (assign) unsigned long long status;                                     //@synthesize status=_status - In the implementation block
@property (assign) unsigned long long capabilities;                               //@synthesize capabilities=_capabilities - In the implementation block
@property (__weak) HMHome * home;                                                 //@synthesize home=_home - In the implementation block
@property (nonatomic,copy) NSUUID * accountIdentifier;                            //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uuid;                                //@synthesize uuid=_uuid - In the implementation block
@property (__weak) id<HMResidentDeviceDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (copy,readonly) NSUUID * uniqueIdentifier;                              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) HMDevice * device;                                           //@synthesize device=_device - In the implementation block
@property (copy,readonly) NSString * name; 
@property (getter=isCurrentDevice,readonly) BOOL currentDevice; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
+(id)logCategory;
-(id)init;
-(NSString *)description;
-(NSString *)name;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<HMResidentDeviceDelegate>)delegate;
-(void)setDelegate:(id<HMResidentDeviceDelegate>)arg1 ;
-(NSUUID *)uuid;
-(unsigned long long)status;
-(_HMContext *)context;
-(NSUUID *)uniqueIdentifier;
-(BOOL)isEnabled;
-(void)setContext:(_HMContext *)arg1 ;
-(HMDevice *)device;
-(NSUUID *)accountIdentifier;
-(HMHome *)home;
-(void)setStatus:(unsigned long long)arg1 ;
-(NSString *)shortDescription;
-(void)setAccountIdentifier:(NSUUID *)arg1 ;
-(unsigned long long)capabilities;
-(void)setCapabilities:(unsigned long long)arg1 ;
-(NSString *)privateDescription;
-(void)setHome:(HMHome *)arg1 ;
-(id)logIdentifier;
-(NSArray *)attributeDescriptions;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(BOOL)isCurrentDevice;
-(void)__configureWithContext:(id)arg1 home:(id)arg2 ;
-(void)updatedEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)handleRuntimeStateUpdate:(id)arg1 ;
@end

