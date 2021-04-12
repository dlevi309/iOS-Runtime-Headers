/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSString;

@interface HMDHomeNetworkRouterSettingsModel : HMDBackingStoreModelObject

@property (nonatomic,retain) NSString * activeNetworkRouterAccessoryUUID; 
@property (nonatomic,retain) NSString * activeNetworkRouterInitialSetupNeededUUID; 
@property (nonatomic,retain) NSString * minimumNetworkRouterSupportHomeKitVersion; 
@property (nonatomic,retain) NSString * minHomeKitVersionForAccessoryNetworkProtectionChange; 
+(id)properties;
+(id)modelIDForHome:(id)arg1 ;
+(id)defaultModelForHome:(id)arg1 ;
+(id)modelNamespace;
-(id)dependentUUIDs;
@end

