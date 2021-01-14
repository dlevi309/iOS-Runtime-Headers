/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@protocol OS_dispatch_group;
@class NSString, NSObject, NSNumber, NSData, NSArray, HMDUserManagementOperationTimestamp;

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
@property (nonatomic,retain) NSNumber * currentNetworkProtectionMode; 
@property (nonatomic,retain) NSNumber * networkClientLAN; 
@property (nonatomic,retain) NSString * networkClientProfileFingerprint; 
@property (nonatomic,retain) NSData * wiFiUniquePreSharedKey; 
@property (nonatomic,retain) NSNumber * wiFiCredentialType; 
@property (nonatomic,retain) NSArray * appliedFirewallWANRules; 
@property (nonatomic,retain) NSNumber * lastNetworkAccessViolationOccurrenceSince1970; 
@property (nonatomic,retain) NSNumber * lastNetworkAccessViolationResetSince1970; 
@property (nonatomic,retain) NSString * configuredNetworkProtectionGroupUUIDString;                        //@synthesize configuredNetworkProtectionGroupUUIDString=_configuredNetworkProtectionGroupUUIDString - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> configurationTracker;                            //@synthesize configurationTracker=_configurationTracker - In the implementation block
@property (nonatomic,retain) NSNumber * suspendCapable; 
@property (nonatomic,retain) NSString * primaryProfileVersion; 
@property (nonatomic,retain) NSString * productData; 
@property (nonatomic,retain) NSString * productDataV2; 
@property (nonatomic,retain) NSString * initialManufacturer; 
@property (nonatomic,retain) NSString * initialModel; 
@property (nonatomic,retain) NSNumber * initialCategoryIdentifier; 
@property (nonatomic,retain) HMDUserManagementOperationTimestamp * sharedAdminAddedTimestamp; 
@property (nonatomic,retain) HMDUserManagementOperationTimestamp * pairingsAuditedTimestamp; 
+(id)properties;
-(id)dependentUUIDs;
-(void)setConfigurationTracker:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_group>)configurationTracker;
-(void)setConfiguredNetworkProtectionGroupUUIDString:(NSString *)arg1 ;
-(NSString *)configuredNetworkProtectionGroupUUIDString;
@end

