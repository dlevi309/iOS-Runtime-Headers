/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <GameController/GameController-Structs.h>
#import <libobjc.A.dylib/_GCControllerProfile.h>

@class NSString;

@interface _GCExtendedMFiControllerProfile : NSObject <_GCControllerProfile>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logicalDeviceControllerProductCategory:(id)arg1 ;
+(void)deviceManager:(id)arg1 prepareLogicalDevice:(id)arg2 ;
+(id)logicalDevice:(id)arg1 makeControllerPhysicalInputProfileWithIdentifier:(id)arg2 ;
+(id)deviceManager;
+(void)deviceManager:(id)arg1 willPublishPhysicalDevice:(id)arg2 ;
+(BOOL)physicalDeviceUsesACHomeForMenu:(id)arg1 ;
+(long long)physicalDeviceGetIndicatedPlayerIndex:(id)arg1 ;
+(void)physicalDevice:(id)arg1 setIndicatedPlayerIndex:(long long)arg2 ;
+(void)determineCapabilitiesWithServiceInfo:(id)arg1 initInfo:(SCD_Struct_GC17*)arg2 ;
+(void)populateInitInfo:(SCD_Struct_GC17*)arg1 forLogicalDevice:(id)arg2 ;
@end

