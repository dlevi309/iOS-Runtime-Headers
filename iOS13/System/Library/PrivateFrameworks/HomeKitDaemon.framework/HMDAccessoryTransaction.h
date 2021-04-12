/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@protocol OS_dispatch_group;
@class NSString, NSObject, NSNumber, NSData, NSArray;

@interface HMDAccessoryTransaction : HMDBackingStoreModelObject {

	NSString* _configuredNetworkProtectionGroupUUIDString;
	NSObject*<OS_dispatch_group> _configurationTracker;

}

@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSString * configuredName; 
@property (nonatomic,retain) NSString * providedName; 
@property (nonatomic,retain) NSNumber * accessoryCategory; 
@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSString * roomUUID; 
@property (nonatomic,retain) NSString * model; 
@property (nonatomic,retain) NSString * manufacturer; 
@property (nonatomic,retain) NSString * firmwareVersion; 
@property (nonatomic,retain) NSString * serialNumber; 
@property (nonatomic,retain) NSString * configurationAppIdentifier; 
@property (nonatomic,retain) NSNumber * networkClientIdentifier; 
@property (nonatomic,retain) NSString * networkRouterUUID; 
@property (nonatomic,retain) NSNumber * targetNetworkProtectionMode; 
@property (nonatomic,retain) NSNumber * currentNetworkProtectionMode; 
@property (nonatomic,retain) NSNumber * networkClientLAN; 
@property (nonatomic,retain) NSData * wiFiUniquePreSharedKey; 
@property (nonatomic,retain) NSNumber * wiFiCredentialType; 
@property (nonatomic,retain) NSArray * appliedFirewallWANRules; 
@property (nonatomic,retain) NSNumber * lastNetworkAccessViolationOccurrenceSince1970; 
@property (nonatomic,retain) NSNumber * lastNetworkAccessViolationResetSince1970; 
@property (nonatomic,retain) NSString * configuredNetworkProtectionGroupUUIDString;                 //@synthesize configuredNetworkProtectionGroupUUIDString=_configuredNetworkProtectionGroupUUIDString - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> configurationTracker;                     //@synthesize configurationTracker=_configurationTracker - In the implementation block
@property (nonatomic,retain) NSNumber * suspendCapable; 
@property (nonatomic,retain) NSString * primaryProfileVersion; 
@property (nonatomic,retain) NSString * productData; 
@property (nonatomic,retain) NSString * initialManufacturer; 
@property (nonatomic,retain) NSString * initialModel; 
@property (nonatomic,retain) NSNumber * initialCategoryIdentifier; 
+(id)properties;
-(id)dependentUUIDs;
-(void)setConfigurationTracker:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_group>)configurationTracker;
-(void)setConfiguredNetworkProtectionGroupUUIDString:(NSString *)arg1 ;
-(NSString *)configuredNetworkProtectionGroupUUIDString;
@end

