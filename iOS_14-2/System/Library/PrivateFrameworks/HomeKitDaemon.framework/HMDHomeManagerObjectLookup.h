/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDObjectLookup.h>

@class HMDHomeManager;

@interface HMDHomeManagerObjectLookup : HMDObjectLookup {

	HMDHomeManager* _homeManager;

}

@property (__weak) HMDHomeManager * homeManager;              //@synthesize homeManager=_homeManager - In the implementation block
+(id)logCategory;
-(id)initWithHomeManager:(id)arg1 ;
-(HMDHomeManager *)homeManager;
-(void)setHomeManager:(HMDHomeManager *)arg1 ;
-(void)scanObjects;
-(void)_scanHomes;
-(void)_scanCloudZones;
-(void)_scanAccounts;
@end

