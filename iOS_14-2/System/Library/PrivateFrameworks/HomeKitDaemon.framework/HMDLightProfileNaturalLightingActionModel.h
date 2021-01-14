/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDActionModel.h>

@class NSNumber, NSUUID, NSSet;

@interface HMDLightProfileNaturalLightingActionModel : HMDActionModel

@property (retain) NSNumber * naturalLightingEnabledField; 
@property (retain) NSUUID * lightProfileUUID; 
@property (getter=isNaturalLightingEnabled) BOOL naturalLightingEnabled; 
@property (retain) NSUUID * accessoryUUID; 
@property (retain) NSSet * serviceUUIDs; 
+(id)properties;
-(BOOL)isNaturalLightingEnabled;
-(void)setNaturalLightingEnabled:(BOOL)arg1 ;
-(id)dependentUUIDs;
@end

