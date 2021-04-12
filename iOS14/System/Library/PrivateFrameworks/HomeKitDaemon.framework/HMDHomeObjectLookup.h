/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDObjectLookup.h>

@class HMDHome;

@interface HMDHomeObjectLookup : HMDObjectLookup {

	HMDHome* _home;

}

@property (__weak) HMDHome * home;              //@synthesize home=_home - In the implementation block
+(id)logCategory;
-(id)logIdentifier;
-(id)initWithHome:(id)arg1 ;
-(void)setHome:(HMDHome *)arg1 ;
-(HMDHome *)home;
-(void)scanObjects;
-(void)_scanAccessoriesAndServices;
-(void)_scanRooms;
-(void)_scanZones;
-(void)_scanActionSets;
-(void)_scanServiceGroups;
-(void)_scanTriggers;
-(void)_scanResidentDevices;
-(void)_scanMediaSystems;
-(void)_scanUsers;
-(void)_scanSettings:(id)arg1 ;
@end

