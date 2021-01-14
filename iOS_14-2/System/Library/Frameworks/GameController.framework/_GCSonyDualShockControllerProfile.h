/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <libobjc.A.dylib/_GCControllerProfile.h>

@class NSString;

@interface _GCSonyDualShockControllerProfile : NSObject <_GCControllerProfile>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)physicalDevice:(id)arg1 getLightWithReply:(/*^block*/id)arg2 ;
+(void)physicalDevice:(id)arg1 getSensorsEnabledWithReply:(/*^block*/id)arg2 ;
+(void)physicalDevice:(id)arg1 setLight:(id)arg2 ;
+(void)physicalDevice:(id)arg1 setSensorsActive:(BOOL)arg2 ;
+(void)physicalDevice:(id)arg1 getBatteryWithReply:(/*^block*/id)arg2 ;
+(id)logicalDeviceControllerProductCategory:(id)arg1 ;
+(void)deviceManager:(id)arg1 prepareLogicalDevice:(id)arg2 ;
+(id)physicalDeviceGetHapticCapabilities:(id)arg1 ;
+(id)logicalDevice:(id)arg1 makeControllerPhysicalInputProfileWithIdentifier:(id)arg2 ;
+(id)physicalDeviceGetHapticCapabilityGraph:(id)arg1 ;
+(BOOL)physicalDeviceSupportsMotion:(id)arg1 ;
+(id)deviceManager;
+(id)logicalDevice:(id)arg1 makeControllerMotionWithIdentifier:(id)arg2 ;
+(void)deviceManager:(id)arg1 willPublishPhysicalDevice:(id)arg2 ;
@end

