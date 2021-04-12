/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)logCategory;
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
-(NSUUID *)uuid;
-(unsigned long long)capabilities;
-(void)setCapabilities:(unsigned long long)arg1 ;
-(NSString *)privateDescription;
-(id)init;
-(id<HMResidentDeviceDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1 ;
-(NSUUID *)accountIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)shortDescription;
-(NSUUID *)uniqueIdentifier;
-(id)logIdentifier;
-(_HMContext *)context;
-(HMDevice *)device;
-(NSString *)name;
-(void)setDelegate:(id<HMResidentDeviceDelegate>)arg1 ;
-(NSString *)description;
-(void)setAccountIdentifier:(NSUUID *)arg1 ;
-(NSArray *)attributeDescriptions;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)_unconfigureContext;
-(void)_unconfigure;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isCurrentDevice;
-(void)setStatus:(unsigned long long)arg1 ;
-(BOOL)isEnabled;
-(void)__configureWithContext:(id)arg1 home:(id)arg2 ;
-(void)updatedEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)handleRuntimeStateUpdate:(id)arg1 ;
-(void)setHome:(HMHome *)arg1 ;
-(unsigned long long)status;
-(void)dealloc;
-(HMHome *)home;
-(void)setContext:(_HMContext *)arg1 ;
@end

