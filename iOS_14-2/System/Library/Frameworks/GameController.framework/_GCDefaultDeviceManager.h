/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <libobjc.A.dylib/_GCPhysicalDeviceManager.h>
#import <libobjc.A.dylib/_GCLogicalDeviceManager.h>

@protocol _GCDeviceMatchingFilter, OS_dispatch_queue, NSObjectNSCopyingNSSecureCoding, GCPhysicalDeviceRegistryGCLogicalDeviceRegistry, _GCDefaultDeviceManagerDelegate;
@class NSNumber, NSObject, NSMutableSet, NSMutableDictionary, NSString;

@interface _GCDefaultDeviceManager : NSObject <_GCPhysicalDeviceManager, _GCLogicalDeviceManager> {

	NSNumber* _probeScore;
	id<_GCDeviceMatchingFilter> _matchingFilter;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _claimedServices;
	NSMutableDictionary* _physicalDevices;
	id<NSObject><NSCopying><NSSecureCoding> _identifier;
	id<GCPhysicalDeviceRegistry><GCLogicalDeviceRegistry> _deviceRegistry;
	id<_GCDefaultDeviceManagerDelegate> _delegate;

}

@property (__weak) id<GCPhysicalDeviceRegistry><GCLogicalDeviceRegistry> deviceRegistry;              //@synthesize deviceRegistry=_deviceRegistry - In the implementation block
@property (assign,nonatomic,__weak) id<_GCDefaultDeviceManagerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) id<NSObject><NSCopying><NSSecureCoding> identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)makeDeviceWithConfiguration:(id)arg1 dependencies:(id)arg2 ;
-(id<_GCDefaultDeviceManagerDelegate>)delegate;
-(void)_onqueue_registerDefaultConfigurationForDevice:(id)arg1 ;
-(id)matchHIDDevice:(id)arg1 ;
-(id<GCPhysicalDeviceRegistry><GCLogicalDeviceRegistry>)deviceRegistry;
-(BOOL)acceptDriverConnection:(id)arg1 forHIDDevice:(id)arg2 ;
-(void)setDelegate:(id<_GCDefaultDeviceManagerDelegate>)arg1 ;
-(void)relinquishHIDDevice:(id)arg1 ;
-(id<NSObject><NSCopying><NSSecureCoding>)identifier;
-(void)claimHIDDevice:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 matchingFilter:(id)arg2 probeScore:(id)arg3 ;
-(void)setDeviceRegistry:(id<GCPhysicalDeviceRegistry><GCLogicalDeviceRegistry>)arg1 ;
@end

