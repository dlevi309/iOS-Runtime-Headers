/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSString, NSUUID;

@interface HMDHomePersonManagerSettingsModel : HMDBackingStoreModelObject

@property (retain) NSString * zoneUUIDString; 
@property (retain) NSUUID * zoneUUID; 
+(id)properties;
+(id)modelUUIDWithUUID:(id)arg1 ;
-(id)initWithHomeUUID:(id)arg1 ;
-(void)setZoneUUID:(NSUUID *)arg1 ;
-(NSUUID *)zoneUUID;
-(id)createSettings;
@end

