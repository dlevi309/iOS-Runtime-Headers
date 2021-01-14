/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitDaemon/HMDDatabaseZoneManagerConfiguration.h>

@class NSSet, HMDHomeKitVersion, HMBCloudZoneConfiguration;

@interface HMDMutableDatabaseZoneManagerConfiguration : HMDDatabaseZoneManagerConfiguration

@property (getter=isZoneOwner) BOOL zoneOwner; 
@property (assign) BOOL shouldCreateZone; 
@property (copy) NSSet * externalRecordTypesForSubscriptions; 
@property (copy) HMDHomeKitVersion * minimumHomeKitVersion; 
@property (copy) NSSet * requiredSupportedFeatures; 
@property (copy) HMBCloudZoneConfiguration * cloudZoneConfiguration; 
-(id)copyWithZone:(NSZone*)arg1 ;
@end

